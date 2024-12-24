// SPDX-FileCopyrightText: 2024 Ali Sajid Imami
//
// SPDX-License-Identifier: MIT

// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterDCF",
    products: [
        .library(name: "TreeSitterDCF", targets: ["TreeSitterDCF"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterDCF",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterDCFTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterDCF",
            ],
            path: "bindings/swift/TreeSitterDCFTests"
        )
    ],
    cLanguageStandard: .c11
)
