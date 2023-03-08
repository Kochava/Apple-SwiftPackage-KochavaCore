


//
//  KVAFromProtocol.h
//  KochavaCore
//
//  Created by John Bushnell on 2/1/18.
//  Copyright © 2018 - 2022 Kochava, Inc.  All rights reserved.
//



#ifndef KVAFromProtocol_h
#define KVAFromProtocol_h



#pragma mark - IMPORT



#import <Foundation/Foundation.h>



#pragma mark - PROTOCOL



@protocol KVAFromProtocol <NSObject>



/*!
 @brief Create an instance from another object.
 
 @param object An object from which to create the instance.  This is expected to be an NSDictionary in most contexts, but for specific implementations may be other classes.  Examples include, but are not limited to, NSString, NSNumber, NSData.  Native class objects are also generally assumed to be supported, returning themselves directly.
 */
+ (nullable instancetype)kva_from:(nullable id)object
    NS_SWIFT_NAME(kva_from(_:));



@end



@protocol KVAFromWithInitializedObjectProtocol <NSObject>



/*!
 @brief Create an instance from another object.
 
 @param object An object from which to create the instance.  This is expected to be an NSDictionary in most contexts, but for specific implementations may be other classes.  Examples include, but are not limited to, NSString, NSNumber, NSData.  Native class objects are also generally assumed to be supported, returning themselves directly.
 
 @param initializedObject An initialized object into which the "new" instance should be filled.
 */
+ (nullable instancetype)kva_from:(nullable id)object initializedObject:(nullable id)initializedObject
    NS_SWIFT_NAME(kva_from(_:initializedObject:));



@end



#endif



