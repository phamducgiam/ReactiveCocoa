//
//  RACAsyncCommand.h
//  ReactiveCocoa
//
//  Created by Josh Abernathy on 3/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "RACCommand.h"


@interface RACAsyncCommand : RACCommand

@property (nonatomic, strong) NSOperationQueue *queue;
@property (nonatomic, assign) NSUInteger maxConcurrent;

- (RACObservableSequence *)addAsyncFunction:(RACObservableSequence * (^)(id value))block;

@end