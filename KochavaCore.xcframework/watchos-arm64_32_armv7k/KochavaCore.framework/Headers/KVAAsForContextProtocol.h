//
//  KVAAsForContextProtocol.h
//  KochavaCore
//
//  Created by John Bushnell on 2/1/18.
//  Copyright © 2018 - 2022 Kochava, Inc.  All rights reserved.
//



#ifndef KVAAsForContextProtocol_h
#define KVAAsForContextProtocol_h



#pragma mark - IMPORT



#import <Foundation/Foundation.h>



#pragma mark - CLASS



@class KVAContext;



#pragma mark - PROTOCOL



@protocol KVAAsForContextProtocol <NSObject>



/*!
 @brief Encode for a specified context.
 
 @discussion The returned value will typically be a dictionary formatted as JSON.
 */
- (nullable NSObject *)kva_asForContext:(nullable KVAContext *)context
    NS_SWIFT_NAME(kva_as(forContext:));



@end



#endif



