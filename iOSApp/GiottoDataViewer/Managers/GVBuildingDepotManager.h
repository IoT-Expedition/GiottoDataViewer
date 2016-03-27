//
//  BuildingDepotManager.h
//  GiottoDataViewer
//
//  Created by Eiji Hayashi on 3/20/16.
//  Copyright © 2016 Eiji Hayashi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GVBuildingDepotManager : NSObject

+ (GVBuildingDepotManager *)sharedInstance;

- (NSArray*) fetchSensorsAt:(NSString*)location;
- (NSArray*) fetchSensorReading:(NSString*)sensorUuid :(float)startTime :(float)endTime :(int)resolution;

@end
