//
//  KochavaCore.h
//  KochavaCore
//
//  Created by John Bushnell on 6/12/20.
//  Copyright © 2013 - 2021 Kochava, Inc.  All rights reserved.
//



#ifndef KochavaCore_h
#define KochavaCore_h



#pragma mark - DEFINE



#define KOCHAVA_FRAMEWORK



#pragma mark - IMPORT



#pragma mark System
#import <Foundation/Foundation.h>

#pragma mark KochavaCore
#import <KochavaCore/NSObject+KochavaCore.h>
#import <KochavaCore/NSString+KochavaCore.h>

#import <KochavaCore/KVAAppGroups.h>
#import <KochavaCore/KVAAsForContextObjectProtocol.h>
#import <KochavaCore/KVAConfigureWithObjectProtocol.h>
#import <KochavaCore/KVAConsent.h>
#import <KochavaCore/KVAContext.h>
#import <KochavaCore/KVACoreProduct.h>
#import <KochavaCore/KVAEvent.h>
#import <KochavaCore/KVAEventType.h>
#import <KochavaCore/KVAFromObjectProtocol.h>
#import <KochavaCore/KVALog.h>
#import <KochavaCore/KVAPartner.h>
#import <KochavaCore/KVAProduct.h>
#import <KochavaCore/KVAEventSender.h>
#import <KochavaCore/KVASharedPropertyProvider.h>
#import <KochavaCore/KVAStartable.h>
#import <KochavaCore/KVASystem.h>



#pragma mark - EXPORT



//! Project version number for KochavaCore.
FOUNDATION_EXPORT double KochavaCoreVersionNumber;

//! Project version string for KochavaCore.
FOUNDATION_EXPORT const unsigned char KochavaCoreVersionString[];



#endif



