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
