//
//  KVACollection.h
//  KochavaCore
//
//  Created by John Bushnell on 4/28/21.
//  Copyright © 2021 - 2022 Kochava, Inc.  All rights reserved.
//



#ifndef KVACollection_h
#define KVACollection_h



#pragma mark - IMPORT



#import <Foundation/Foundation.h>



#pragma mark - CLASS



@class KVACollection;



#pragma mark - Typealiases



/*!
 @typedef KVACollection_Closure_WillRegisterObject
 
 @brief A closure which is called when an object is registered.
 */
typedef void (^ KVACollection_Closure_WillRegisterObject)
(
    KVACollection * _Nonnull collection,
    id _Nonnull object
);



/*!
 @typedef KVACollection_Closure_GetValueArrayDictionaryCompletionHandler
 
 @brief A closure which is called when getting the valueArrayDictionary has completed.
 */
typedef void (^ KVACollection_Closure_GetValueArrayDictionaryCompletionHandler)
(
    NSArray<KVACollection *>* _Nullable valueArrayDictionaryFromValueSourceCollectionArray,
    NSDictionary * _Nullable valueArrayDictionary
);



#endif



