//
//  KVAConsent.h
//  KochavaCore
//
//  Created by John Bushnell on 3/30/18.
//  Copyright © 2018 - 2022 Kochava, Inc.  All rights reserved.
//



#ifndef KVAConsent_h
#define KVAConsent_h



#pragma mark - IMPORT



#import <Foundation/Foundation.h>



#pragma mark - CLASS



@class KVAConsent;



#pragma mark - Typealiases



/*!
 @typedef KVAConsentDidUpdateClosure
 
 @brief A closure which is called when there is an update to consent.
 
 @discussion This can be used to prompt the user for consent and to enable and/or disable functionality.  Updates include, but are not limited to, when the user travels into or out of an area requiring consent, when new partners are added, and when conditions indicate a need to retry prompting the user.
 */
typedef void (^ KVAConsentDidUpdateClosure)
(
    KVAConsent * _Nonnull consent
);



#endif



