//
//  SCSDKResourceNetworkUtilities.h
//  LoginKit
//
//  Created by Duncan Riefler on 4/12/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SCSDKResourceNetworkUtilities : NSObject

+ (NSError *)errorFromResponse:(NSDictionary *)response;

@end

NS_ASSUME_NONNULL_END
