// SPDX-FileCopyrightText: 2024 Ali Sajid Imami
//
// SPDX-License-Identifier: MIT

type BaseNode = {
    type: string
    named: boolean
}

type ChildNode = {
    multiple: boolean
    required: boolean
    types: BaseNode[]
}

type NodeInfo =
    | (BaseNode & {
          subtypes: BaseNode[]
      })
    | (BaseNode & {
          fields: { [name: string]: ChildNode }
          children: ChildNode[]
      })

type Language = {
    name: string
    language: unknown
    nodeTypeInfo: NodeInfo[]
}

declare const language: Language
export = language
