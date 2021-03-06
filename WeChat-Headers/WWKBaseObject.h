//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableDictionary, NSString;

@interface WWKBaseObject : NSObject
{
    NSString *_bundleID;
    NSString *_bundleName;
    unsigned long long _sequence;
}

+ (id)deserializeWithData:(id)arg1;
@property(nonatomic) unsigned long long sequence; // @synthesize sequence=_sequence;
@property(copy, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (_Bool)deserializeWithDictionary:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *serializedDict;
@property(readonly, nonatomic) NSData *serializedData;
- (id)init;

@end

