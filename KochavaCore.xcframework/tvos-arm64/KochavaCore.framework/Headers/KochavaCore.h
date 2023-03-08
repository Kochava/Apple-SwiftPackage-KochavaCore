//
//  KochavaCore.h
//  KochavaCore
//
//  Created by John Bushnell on 6/12/20.
//  Copyright © 2013 - 2022 Kochava, Inc.  All rights reserved.
//



#ifndef KochavaCore_h
#define KochavaCore_h



#pragma mark - DEFINE



#define KOCHAVA_FRAMEWORK



#pragma mark - IMPORT



#pragma mark System
#import <Foundation/Foundation.h>

#pragma mark KochavaCore
#import <KochavaCore/KVAAdapter.h>
#import <KochavaCore/KVAAsForContextProtocol.h>
#import <KochavaCore/KVACollection.h>
#import <KochavaCore/KVAConfigureWithProtocol.h>
#import <KochavaCore/KVAConsent.h>
#import <KochavaCore/KVAFromProtocol.h>
#import <KochavaCore/KVAInvalidatable.h>
#import <KochavaCore/KVANetTransaction.h>
#import <KochavaCore/KVAStartable.h>
#import <KochavaCore/KVATask.h>



#pragma mark - EXPORT



//! Project version number for KochavaCore.
FOUNDATION_EXPORT double KochavaCoreVersionNumber;

//! Project version string for KochavaCore.
FOUNDATION_EXPORT const unsigned char KochavaCoreVersionString[];



#endif



