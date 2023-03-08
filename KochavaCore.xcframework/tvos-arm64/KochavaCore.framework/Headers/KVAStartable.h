//
//  KVAStartable.h
//  KochavaCore
//
//  Created by John Bushnell on 3/11/21.
//  Copyright © 2021 - 2022 Kochava, Inc.  All rights reserved.
//



#ifndef KVAStartable_h
#define KVAStartable_h



#pragma mark - IMPORT



#import <Foundation/Foundation.h>



#pragma mark - PROTOCOL



@protocol KVAStartable <NSObject>



/*!
 @brief Starts the instance.
 */
- (void)start;



@end



#endif



