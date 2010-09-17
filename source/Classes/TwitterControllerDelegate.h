//
//  TwitterControllerDelegate.h
//  Greenhouse
//
//  Created by Roy Clarkson on 9/16/10.
//  Copyright 2010 VMware, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>


@protocol TwitterControllerDelegate

@optional

- (void)fetchTweetsDidFinishWithResults:(NSArray *)tweets;
- (void)postUpdateDidFinish;
- (void)postUpdateDidFailWithError:(NSError *)error;
- (void)postRetweetDidFinish;

@end
