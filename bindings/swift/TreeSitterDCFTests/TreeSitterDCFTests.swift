import XCTest
import SwiftTreeSitter
import TreeSitterDCF

final class TreeSitterDCFTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_dcf())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading DCF grammar")
    }
}
