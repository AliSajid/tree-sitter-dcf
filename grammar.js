/**
 * @file Tree-sitter parser for Debian Control Format files
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'dcf',

  extras: $ => [
    /[ \t]/, // Allow spaces and tabs as extras
    $.comment // Comments are treated as extras
  ],

  rules: {
    source_file: $ => seq(
      optional(/\r?\n/), // Allow optional leading newline
      sepBy($.stanza_separator, $.stanza), // Stanzas separated by stanza_separator
      optional($.stanza_separator) // Allow optional trailing stanza separator
    ),

    stanza: $ => repeat1($.field), // A stanza consists of one or more fields

    field: $ => seq(
      $.field_name,
      ':',
      optional($.field_value), // Field values are optional
      /\r?\n/ // Field ends at the newline
    ),

    field_name: $ =>
      token(seq(
        /[A-Za-z0-9!-/;-~]/, // Characters allowed in field names
        repeat(/[A-Za-z0-9!-/;-~]/) // One or more characters
      )),

    field_value: $ => choice(
      $.simple_value, // A single-line value
      $.folded_value  // A folded, multiline value
    ),

    simple_value: $ => token(/[^\r\n]+/), // Stop parsing immediately

    folded_value: $ => seq(
      /[^\r\n]+/, // First line of the folded value
      repeat1(seq(/\r?\n[ \t]+/, /[^\r\n]+/)) // Continuation lines start with space/tab
    ),

    comment: $ => token(seq('#', /[^\r\n]*/)), // Comment lines start with #

    stanza_separator: $ => /\r?\n(\r?\n|[ \t]*\r?\n)/ // Empty or whitespace-only lines
  },

  //conflicts: $ => [
  //  [$.simple_value, $.folded_value]
  //]
});

// Utility function to separate rules by a delimiter
function sepBy(delimiter, rule) {
  return seq(rule, repeat(seq(delimiter, rule)));
}

