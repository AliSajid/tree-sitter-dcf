// SPDX-FileCopyrightText: 2024 Ali Sajid Imami
//
// SPDX-License-Identifier: MIT

const assert = require('node:assert')
const { test } = require('node:test')
const Parser = require('tree-sitter')
const DCF = require('./tree-sitter-dcf')

test('can load grammar', () => {
    const parser = new Parser()
    assert.doesNotThrow(() => parser.setLanguage(DCF))
})

test('parses a simple field', () => {
    const parser = new Parser()
    parser.setLanguage(DCF)

    const source = 'Package: mypackage\n'
    const tree = parser.parse(source)
    const rootNode = tree.rootNode

    assert.strictEqual(rootNode.type, 'source_file')
    assert.strictEqual(rootNode.childCount, 1)
    const stanza = rootNode.children[0]
    assert.strictEqual(stanza.type, 'stanza')
    assert.strictEqual(stanza.childCount, 1)
    const field = stanza.children[0]
    assert.strictEqual(field.type, 'field')
})

test('parses a folded field', () => {
    const parser = new Parser()
    parser.setLanguage(DCF)

    const source = 'Description: A test package\n A folded line\n'
    const tree = parser.parse(source)
    const rootNode = tree.rootNode

    assert.strictEqual(rootNode.type, 'source_file')
    assert.strictEqual(rootNode.childCount, 1)
    const stanza = rootNode.children[0]
    assert.strictEqual(stanza.type, 'stanza')
    assert.strictEqual(stanza.childCount, 1)
    const field = stanza.children[0]
    assert.strictEqual(field.type, 'field')
})

test('parses multiple stanzas', () => {
    const parser = new Parser()
    parser.setLanguage(DCF)

    const source = 'Package: one\n\nPackage: two\n'
    const tree = parser.parse(source)
    const rootNode = tree.rootNode

    assert.strictEqual(rootNode.type, 'source_file')
    assert.strictEqual(rootNode.childCount, 2)
    rootNode.children.forEach((stanza, index) => {
        assert.strictEqual(stanza.type, 'stanza')
        assert.strictEqual(stanza.childCount, 1)
        const field = stanza.children[0]
        assert.strictEqual(field.type, 'field')
    })
})
