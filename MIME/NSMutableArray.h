/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <Foundation/NSArray.h>


@interface NSMutableArray (SortedArrayExtensions)
-(unsigned)mf_indexWhereObjectWouldBeInserted:(id)inserted usingSortFunction:(/*function-pointer*/ void*)function context:(void*)context;
-(unsigned)mf_insertObject:(id)object usingSortFunction:(/*function-pointer*/ void*)function context:(void*)context;
-(unsigned)mf_indexOfObject:(id)object usingSortFunction:(/*function-pointer*/ void*)function context:(void*)context;
@end

@interface NSMutableArray (Convenience)
-(BOOL)mf_addObjectIfAbsent:(id)absent;
-(BOOL)mf_addObjectIfAbsentAccordingToEquals:(id)equals;
@end

