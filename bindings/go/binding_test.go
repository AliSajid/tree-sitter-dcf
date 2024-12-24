// SPDX-FileCopyrightText: 2024 Ali Sajid Imami
//
// SPDX-License-Identifier: MIT

package tree_sitter_dcf_test

import (
    "testing"

    tree_sitter "github.com/tree-sitter/go-tree-sitter"
    tree_sitter_dcf "github.com/tree-sitter/tree-sitter-dcf/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
    language := tree_sitter.NewLanguage(tree_sitter_dcf.Language())
    if language == nil {
        t.Errorf("Error loading DCF grammar")
    }
}

func TestDCFGrammar(t *testing.T) {
    parser := e_sitter.NewParser()
    parser.SetLanguage(e_sitter_dcf.GetLanguage())

    tests := []struct {
        name   string
        source string
    }{
        {"Simple Field", "Package: mypackage\n"},
        {"Folded Field", "Description: A test package\n A folded line\n"},
        {"Multiple Stanzas", "Package: one\n\nPackage: two\n"},
    }

    for _, test := range tests {
        t.Run(test.name, func(t *testing.T) {
            tree := parser.Parse([]byte(test.source))
            if tree == nil {
                t.Errorf("Failed to parse: %s", test.source)
            }
        })
    }
}
