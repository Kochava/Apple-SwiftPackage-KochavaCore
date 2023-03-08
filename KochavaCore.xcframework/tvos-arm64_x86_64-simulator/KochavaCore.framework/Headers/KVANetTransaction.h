//
//  KVANetTransaction.h
//  KochavaCore
//
//  Created by John Bushnell on 7/25/16.
//  Copyright © 2016 - 2022 Kochava, Inc.  All rights reserved.
//



#ifndef KVANetTransaction_h
#define KVANetTransaction_h



#pragma mark - IMPORT



#import <Foundation/Foundation.h>



#pragma mark - CLASS



@class KVANetTransaction;



#pragma mark - Typealiases



/*!
 @brief Defines a closure to execute when a KVANetTransaction completes.
 */
typedef void (^ KVANetTransaction_Closure_DidComplete)
(
    KVANetTransaction * _Nonnull netTransaction,
    BOOL didSucceedBool,
    id _Nullable responseClassObject,
    id _Nullable responseObject
);



/*!
 @brief Defines a closure to execute which returns a boolean indicating if the KVANetTransaction is enabled.
 */
typedef BOOL (^ KVANetTransaction_Closure_EnabledBool)
(
    KVANetTransaction * _Nonnull netTransaction
);



/*!
 @brief Defines a closure to execute which returns a boolean indicating if the KVANetTransaction should be serviced locally.
 */
typedef BOOL (^ KVANetTransaction_Closure_ServiceLocallyBool)
(
    KVANetTransaction * _Nonnull netTransaction
);



/*!
 @brief Defines a closure to execute which returns a boolean indicating if the KVANetTransaction is successful.
 */
typedef BOOL (^ KVANetTransaction_Closure_SucceededBool)
(
    KVANetTransaction * _Nonnull netTransaction,
    id _Nullable responseObject
);



/*!
 @brief Defines a closure to execute which returns an object which is a transformed payload.
 */
typedef id _Nullable (^ KVANetTransaction_Closure_PayloadTransformedObject)
(
    KVANetTransaction * _Nonnull netTransaction,
    id _Nullable object,
    BOOL additionalHeadersDictionaryBool
);



/*!
 @brief Defines a closure to execute which returns a string which is a transformed URL.
 */
typedef NSString * _Nullable (^ KVANetTransaction_Closure_TransformedURLString)
(
    KVANetTransaction * _Nonnull netTransaction,
    NSString * _Nullable startingURLString
);



/*!
 @brief Defines a closure which will be called when the net transaction will start a request.
 */
typedef void (^ KVANetTransaction_Closure_WillStartRequest)
(
    KVANetTransaction * _Nonnull netTransaction
);



#endif



