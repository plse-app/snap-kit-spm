//
//  SCOAuth2ResourceNetworkManager.h
//  SCSDKLoginKit
//
//  Copyright © 2017 Snap, Inc. All rights reserved.
//

#import <SCSDKLoginKit/SCSDKLoginClient.h>

#import <Foundation/Foundation.h>

@class SCSDKUserData;
@class SCSDKNetworkRequest;

typedef void (^SCOAuth2GetResourcesSuccessCompletionBlock)(NSDictionary *_Nullable resources);

typedef void (^SCOAuth2GetResourcesFailureCompletionBlock)(NSError *_Nullable error, BOOL isUserLoggedOut);

typedef void (^SCSDKCanvasAPIRequestCompletion)(NSDictionary *_Nullable data, NSURLResponse *_Nullable response,
                                                NSError *_Nullable error);

@interface SCOAuth2ResourceNetworkManager : NSObject

+ (nonnull instancetype)shared;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

- (void)sendAuthenticatedRequest:(nonnull SCSDKNetworkRequest *)request
                         success:(nonnull SCOAuth2GetResourcesSuccessCompletionBlock)success
                         failure:(nonnull SCOAuth2GetResourcesFailureCompletionBlock)failure;

#pragma GCC diagnostic pop

- (void)sendCanvasAPIAuthenticatedRequest:(nonnull SCSDKNetworkRequest *)request
                               completion:(nonnull SCSDKCanvasAPIRequestCompletion)completion;
- (void)sendUserDataRequest:(nonnull SCSDKNetworkRequest *)request
                    success:(nonnull SCSDKUserDataSuccessCompletion)success
                    failure:(nonnull SCSDKUserDataFailureCompletion)failure;

@end
