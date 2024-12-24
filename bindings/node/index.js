// SPDX-FileCopyrightText: 2024 Ali Sajid Imami
//
// SPDX-License-Identifier: MIT

const root = require('path').join(__dirname, '..', '..')

module.exports =
    typeof process.versions.bun === 'string'
        ? // Support `bun build --compile` by being statically analyzable enough to find the .node file at build-time
          require(
              `../../prebuilds/${process.platform}-${process.arch}/tree-sitter-dcf.node`
          )
        : require('node-gyp-build')(root)

try {
    module.exports.nodeTypeInfo = require('../../src/node-types.json')
} catch (_) {}
