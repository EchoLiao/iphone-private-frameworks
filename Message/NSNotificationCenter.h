/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "Message-Structs.h"
#import <Foundation/NSNotification.h>


@interface NSNotificationCenter (ToReplaceCenterWithOurOwn)
+(id)allocWithZone:(NSZone*)zone;
@end

@interface NSNotificationCenter (MainThreadPosting)
-(void)postNotificationInMainThread:(id)mainThread;
@end

