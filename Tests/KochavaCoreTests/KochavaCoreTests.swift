


import XCTest



import KochavaCore



final class KochavaCoreTests: XCTestCase
{

    

    func test_witnessAllKnownProductRegistrationLogMessages()
    {
        // asynchronousExpectation
        let asynchronousExpectation = self.expectation(description: "Asynchronous work must complete")
        
        // TEST
        // KVALog.shared.level
        // ⓘ Set to trace.  This will result in the KVACoreProduct being registered, and this will be prefaced by any other known modules which are included.  This will be printed to the log where they can be inspected.
        KVALog.shared.level = .trace
        
        // DispatchQueue
        // ⓘ Async after a short time interval.  A short window of time must be provided for the log messages to print, as some of what occurs afterward is asynchronous.  At the time of this writing a time interval of 0.1 must be accommodated for, as that is the length of time that the SDK will wait before outputting module registrations when no other modules are explicitly being utilized.
        DispatchQueue.main.asyncAfter(deadline: .now() + 0.2)
        {
            asynchronousExpectation.fulfill()
        }
        
        // waitForExpectations
        self.waitForExpectations(timeout: 3.0)
        {
            (error: Error?) in
            
            if error != nil
            {
                XCTFail("Expectation failed with error: \(String(describing: error))")
            }
        }
    }

    
    
    static var allTests =
    [
        ("test_witnessAllKnownProductRegistrationLogMessages", test_witnessAllKnownProductRegistrationLogMessages),
    ]
    
    
    
}



