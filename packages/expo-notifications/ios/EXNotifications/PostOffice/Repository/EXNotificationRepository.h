//  Copyright © 2019-present 650 Industries. All rights reserved.

#ifndef EXNotificationRepository_h
#define EXNotificationRepository_h

@protocol EXNotificationRepository <NSObject>

- (void)addUserInteractionForAppId:(NSString*)appId userInteraction:(NSDictionary*)userInteraction;

- (NSArray<NSDictionary*>*)getPendingUserInterationsForAppId:(NSString*)appId;

@end

#endif /* EXNotificationRepository_h */
