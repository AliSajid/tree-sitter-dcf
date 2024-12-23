/**
 * @file Tree-sitter parser for Debian Control Format files
 * @author Ali Sajid Imami <Ali.Sajid.Imami@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "dcf",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
