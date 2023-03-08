//
//  KVAInvalidatable.h
//  KochavaCore
//
//  Created by John Bushnell on 3/11/21.
//  Copyright © 2021 - 2022 Kochava, Inc.  All rights reserved.
//



#ifndef KVAInvalidatable_h
#define KVAInvalidatable_h



#pragma mark - IMPORT



#import <Foundation/Foundation.h>



#pragma mark - PROTOCOL



@protocol KVAInvalidatable <NSObject>



/*!
 @brief Invalidates the instance.
 
 @discussion An invalidated instance generally cannot be restored.
 */
- (void)invalidate;



@end



#endif



