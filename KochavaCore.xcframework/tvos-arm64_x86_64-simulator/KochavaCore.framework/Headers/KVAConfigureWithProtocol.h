


//
//  KVAConfigureWithProtocol.h
//  KochavaCore
//
//  Created by John Bushnell on 2/1/18.
//  Copyright © 2018 - 2022 Kochava, Inc.  All rights reserved.
//



#ifndef KVAConfigureWithProtocol_h
#define KVAConfigureWithProtocol_h



#pragma mark - IMPORT



#import <Foundation/Foundation.h>



#pragma mark - CLASS



@class KVAContext;



#pragma mark - PROTOCOL



@protocol KVAConfigureWithProtocol <NSObject>



/*
 @brief Configure parameters and/or properties within the instance.
 
 @param object An object from which to update the instance.  This is expected to be a JSON dictionary, or alternatively, another native instance.
 
 @param context The context.
 */
- (void)kva_configureWith:
    (nullable id)object
    context: (nullable KVAContext *)context
    NS_SWIFT_NAME(kva_configure(with:context:));



@end



#endif



