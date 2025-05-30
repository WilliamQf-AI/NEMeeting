// Copyright (c) 2022 NetEase, Inc. All rights reserved.
// Use of this source code is governed by a MIT license that can be
// found in the LICENSE file.

#import <AVFoundation/AVFoundation.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^AuthorizedFinishBlock)(void);

@interface SystemAuthHelper : NSObject

+ (void)requestAuthority;

@end

NS_ASSUME_NONNULL_END
