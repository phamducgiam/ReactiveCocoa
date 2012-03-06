//
//  GHDLoginViewController.h
//  GHAPIDemo
//
//  Created by Josh Abernathy on 3/5/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <ReactiveCocoa/ReactiveCocoa.h>

@class GHDLoginView;


@interface GHDLoginViewController : NSViewController

@property (nonatomic, copy) NSString *username;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, assign, readonly) BOOL successHidden;
@property (nonatomic, assign, readonly) BOOL loginFailedHidden;
@property (nonatomic, strong, readonly) RACAsyncCommand *loginCommand;

@end