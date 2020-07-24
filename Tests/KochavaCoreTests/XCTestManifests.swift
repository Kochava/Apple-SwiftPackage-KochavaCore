import XCTest

#if !canImport(ObjectiveC)
public func allTests() -> [XCTestCaseEntry] {
    return [
        testCase(KochavaCoreTests.allTests),
    ]
}
#endif
