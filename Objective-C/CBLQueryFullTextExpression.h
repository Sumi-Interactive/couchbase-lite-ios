//
//  CBLQueryFullTextExpression.h
//  CouchbaseLite
//
//  Created by Pasin Suriyentrakorn on 11/20/17.
//  Copyright © 2017 Couchbase. All rights reserved.
//

#import <Foundation/Foundation.h>
@class CBLQueryExpression;

NS_ASSUME_NONNULL_BEGIN

/**
 Full-text expression.
 */
@interface CBLQueryFullTextExpression : NSObject


/**
 Creates a full-text expression with the given full-text index name.

 @param indexName The full-text index name.
 @return The full-text expression.
 */
+ (CBLQueryFullTextExpression*) index: (NSString*)indexName;


/**
 Creates a full-text match expression with the given search text.

 @param text The search text.
 @return The full-text match expression.
 */
- (CBLQueryExpression*) match: (NSString*)text;

@end

NS_ASSUME_NONNULL_END