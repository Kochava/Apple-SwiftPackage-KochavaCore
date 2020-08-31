
import XCTest

@testable import KochavaCore

final class KochavaCoreTests: XCTestCase
{

    

    func test_included_classes()
    {
        //        let someThing = SomeThing()
        //        someThing.doIt()
    }
    
    
    
    func test_register()
    {
        KVALog.shared.level = .trace
        
        KVACoreProduct.shared.register()
        
        print("KVACoreProduct.shared = \(KVACoreProduct.shared.kva_asForContextObject(withContext: .log)!)")
    }

    
    
    static var allTests =
    [
        ("test_register", test_register),
    ]
    
    
    
}



