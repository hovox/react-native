/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <SystemConfiguration/SystemConfiguration.h>

#import <React/RCTEventEmitter.h>

@interface RCTNetInfo : RCTEventEmitter

- (instancetype)initWithHost:(NSString *)host;

@end
