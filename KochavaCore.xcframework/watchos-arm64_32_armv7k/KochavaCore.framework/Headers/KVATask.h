//
//  KVATask.h
//  KochavaCore
//
//  Created by John Bushnell on 8/12/16.
//  Copyright © 2016 - 2022 Kochava, Inc.  All rights reserved.
//



#ifndef KVATask_h
#define KVATask_h



#pragma mark - IMPORT



#import <Foundation/Foundation.h>



#pragma mark - CLASS



@class KVATask;



#pragma mark - Typealiases



/*!
 @typedef KVATask_Closure_ShouldAttemptBool
 
 @brief A closure which returns whether a task should be attempted.
 */
typedef BOOL (^ KVATask_Closure_ShouldAttemptBool)
(
    KVATask * _Nonnull task
);



/*!
 @typedef KVATask_Closure_StartAttempt
 
 @brief A closure which starts an attempt for the task.
 
 @discussion This is the core code for the task itself.
 */
typedef void (^ KVATask_Closure_StartAttempt)
(
    KVATask * _Nonnull task
);



/*!
 @typedef KVATask_Closure_DidComplete
 
 @brief A closure which is executed when the task becomes complete.
 
 @discussion This closure can be used to clear properties which were maintaining a strong reference during the attempt of the task and are no longer needed.
 */
typedef void (^ KVATask_Closure_DidComplete)
(
    KVATask * _Nonnull task
);



/*!
 @typedef KVATask_Closure_DidExperienceDelay
 
 @brief A closure which is executed when the task experiences a delay.
 
 @discussion This closure may be called only a single time.  Following the use of reset it may be called again.
 */
typedef void (^ KVATask_Closure_DidExperienceDelay)
(
    KVATask * _Nonnull task
);



/*!
 @typedef KVATask_Closure_DidInvalidate
 
 @brief A closure which is executed when the task is invalidated.
 
 @discussion This closure can be used to invalidate secondary tasks which are part of what happens within KVATask_Closure_StartAttempt.  Note:  This closure will be called on the caller's thread to the invalidate method.  When you're expecting that call to not be on a predictable dispatch queue, it is your responsibility to provide for your own concurrency within the closure.  This may include an explicit dispatch to the globalSerial queue.
 */
typedef void (^ KVATask_Closure_DidInvalidate)
(
    KVATask * _Nonnull task
);



/*!
 @typedef KVATask_Closure_DidReset
 
 @brief A closure which is executed when the task becomes reset.
 */
typedef void (^ KVATask_Closure_DidReset)
(
    KVATask * _Nonnull task
);



#endif



