//
//  CBLQueryLimit.m
//  CouchbaseLite
//
//  Created by Pasin Suriyentrakorn on 7/10/17.
//  Copyright © 2017 Couchbase. All rights reserved.
//

#import "CBLQueryLimit.h"
#import "CBLQuery+Internal.h"

@implementation CBLQueryLimit

@synthesize limit=_limit, offset=_offset;


+ (CBLQueryLimit*) limit: (id)limit {
    return [self limit: limit offset: nil];
}


+ (CBLQueryLimit*) limit: (id)limit offset: (nullable id)offset {
    return [[self alloc] initWithLimit: limit offset: offset];
}


#pragma mark - Internal


- (instancetype) initWithLimit: (id)limit offset: (nullable id)offset {
    self = [super init];
    if (self) {
        _limit = limit;
        _offset = offset;
    }
    return self;
}


@end