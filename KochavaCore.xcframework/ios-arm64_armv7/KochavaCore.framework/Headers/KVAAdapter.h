//
//  KVAAdapter.h
//  KochavaCore
//
//  Created by John Bushnell on 6/28/16.
//  Copyright © 2016 - 2022 Kochava, Inc.  All rights reserved.
//



#ifndef KVAAdapter_h
#define KVAAdapter_h



#pragma mark - IMPORT



#import <Foundation/Foundation.h>



#pragma mark - CLASS



@class KVAAdapter;
@class KVAContext;
@class KVAValue;



#pragma mark - Typealiases



/*!
 @brief A closure which is called when the adapter did read from persistent storage.
 
 @discussion This can be used to update properties within the value and/or watchValue.
 */
typedef void (^ KVAAdapter_Closure_DidReadFromPersistentStorage)
(
    KVAAdapter * _Nonnull adapter
);



/*!
 @brief A closure which is called when the adapter is invalidated.
 
 @discussion This can be used to invalidate processes within an closure_collectAsynchronously, such as when the gathering of a value is in progress.
 */
typedef void (^ KVAAdapter_Closure_DidInvalidate)
(
    KVAAdapter * _Nonnull adapter
);



/*!
 @brief A closure which formats a valueObject to be sent to the server.
 */
typedef NSObject * _Nullable (^ KVAAdapter_Closure_ServerObject)
(
    KVAAdapter * _Nonnull adapter,
    NSObject * _Nullable valueObject
);



/*!
 @brief A closure which synchronously collects the valueRawObject.
 */
typedef NSObject * _Nullable (^ KVAAdapter_Closure_CollectSynchronously)
(
    KVAAdapter * _Nonnull adapter
);



/*!
 @brief A closure which a KVAAdapter_Closure_CollectAsynchronously should call to signal that it is done asynchronously collecting the valueRawObject.
 */
typedef void (^ KVAAdapter_Closure_CollectAsynchronouslyCompletionHandler)
(
    KVAAdapter * _Nonnull adapter,
    id _Nullable valueRawObject
);



/*!
 @brief A closure which asynchronously collected the valueRawObject.
 */
typedef void (^ KVAAdapter_Closure_CollectAsynchronously)
(
    KVAAdapter * _Nonnull adapter,
    KVAAdapter_Closure_CollectAsynchronouslyCompletionHandler _Nonnull completionHandler
);



/*!
 @brief A closure which is called when getting the value has completed.  Note that this type is often instantiated multiple times for the same adapter, once for each interested party.
 */
typedef void (^ KVAAdapter_Closure_GetValueCompletionHandler)
(
    KVAAdapter * _Nonnull adapter,
    KVAValue * _Nullable value
);



/*!
 @brief A closure which returns a dictionary containing an array of meta value(s) for a newly created KVAValue.
 */
typedef NSDictionary<NSString *, KVAValue *> * _Nullable (^ KVAValue_Closure_MetaValueArrayDictionary)
(
    KVAValue * _Nonnull value
);



/*!
 @brief A closure which returns whether or not a KVAValue is stale.
 */
typedef BOOL (^ KVAValue_Closure_StaleBool)
(
    KVAValue * _Nonnull value
);



/*!
 @brief A closure which is called when the adapter did mutate.
 
 @discussion This includes certain mutations to value and, in particular, anything which may require persistent storage to be updated.  This may include other mutations.  This differs from closure_didSetValue in that it includes when the value itself experiences a mutation, such as is the case when value.rawObject mutates.
 */
typedef void (^ KVAAdapter_Closure_DidMutate)
(
    KVAAdapter * _Nonnull adapter
);



/*!
 @brief A closure which is called when the value has been set.
 */
typedef void (^ KVAAdapter_Closure_DidSetValue)
(
    KVAAdapter * _Nonnull adapter,
    KVAValue * _Nullable value,
    KVAValue * _Nullable oldValue
);



/*!
 @brief A closure which is called when the value will be set.
 */
typedef BOOL (^ KVAAdapter_Closure_WillSetValue)
(
    KVAAdapter * _Nonnull adapter,
    KVAValue * _Nullable value,
    KVAValue * _Nullable newValue
);



/*!
 @brief A closure which is called to determine if the adapter is permitted to collect or export.

 @discussion This may be used to evaluate deny datapoints conditions.
 */
typedef BOOL (^ KVANetworking_Closure_Adapter_MayOperateBoolForContext)
(
    KVAAdapter * _Nonnull adapter,
    KVAContext * _Nullable context
);



/*!
 @brief A closure which is called when the adapter value did get set.
 */
typedef void (^ KVAAdapter_Closure_ValueDidSet)
(
    KVAAdapter * _Nonnull adapter
);



#endif



