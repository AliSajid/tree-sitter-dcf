// SPDX-FileCopyrightText: 2024 Ali Sajid Imami
//
// SPDX-License-Identifier: MIT

/* eslint-disable @typescript-eslint/explicit-function-return-type */
/* eslint-disable @typescript-eslint/no-unused-vars */
/* eslint-disable no-undef */
/**
 * @file Tree-sitter parser for Debian Control Format files
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
    name: 'dcf',

    extras: _$ => [
        /[ \t]/, // Allow spaces and tabs as extras
        _$.comment // Comments are treated as extras
    ],

    rules: {
        source_file: _$ =>
            seq(
                optional(/\r?\n/), // Allow optional leading newline
                sepBy(_$.stanza_separator, _$.stanza), // Stanzas separated by stanza_separator
                optional(_$.stanza_separator) // Allow optional trailing stanza separator
            ),

        stanza: _$ => repeat1(_$.field), // A stanza consists of one or more fields

        field: _$ =>
            seq(
                _$.field_name,
                ':',
                optional(_$.field_value), // Field values are optional
                /\r?\n/ // Field ends at the newline
            ),

        field_name: _$ =>
            token(
                seq(
                    /[A-Za-z0-9!-/;-~]/, // Characters allowed in field names
                    repeat(/[A-Za-z0-9!-/;-~]/) // One or more characters
                )
            ),

        field_value: __$ =>
            choice(
                __$.simple_value, // A single-line value
                __$.folded_value // A folded, multiline value
            ),

        simple_value: _$ => token(/[^\r\n]+/), // Stop parsing immediately

        folded_value: _$ =>
            seq(
                /[^\r\n]+/, // First line of the folded value
                repeat1(seq(/\r?\n[ \t]+/, /[^\r\n]+/)) // Continuation lines start with space/tab
            ),

        comment: _$ => token(seq('#', /[^\r\n]*/)), // Comment lines start with #

        stanza_separator: _$ => /\r?\n(\r?\n|[ \t]*\r?\n)/ // Empty or whitespace-only lines
    }
})

// Utility function to separate rules by a delimiter
function sepBy(delimiter, rule) {
    return seq(rule, repeat(seq(delimiter, rule)))
}
