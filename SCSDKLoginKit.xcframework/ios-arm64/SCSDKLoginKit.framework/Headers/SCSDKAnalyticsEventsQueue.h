//
//  SCSDKAnalyticsEventsQueue.h
//  SCSDKCoreKit
//
//  Created by Hongjai Cho on 5/24/18.
//  Copyright © 2018 Snap, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SCSDKNetworkServicesAPI;
@class EncodablePicoproto;

@interface SCSDKAnalyticsEventsQueue : NSObject

+ (instancetype)sharedInstance;
- (instancetype)initWithNetworkServicesAPI:(SCSDKNetworkServicesAPI *)networkServicesAPI;

- (void)addEvent:(EncodablePicoproto *)event;

@end
