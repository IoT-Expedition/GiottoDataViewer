//
//  UAUserPreferences.h
//  UniAuthClient
//
//  Created by Eiji Hayashi on 2/14/14.
//  Copyright (c) 2014 Eiji Hayashi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GVUserPreferences : NSObject
+ (GVUserPreferences*)sharedInstance;
- (void) save;

@property (readwrite) NSString* giottoPort;
@property (readwrite) NSString* giottoServer;
@property (readwrite) NSString* locationEmulation;
@property (readwrite) NSString* apiPrefix;

@end
