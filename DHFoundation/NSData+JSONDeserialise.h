//
//  NSData+JSONDeserialise.h
//  DHFoundation
//
//  Created by David Hardiman on 27/09/2012.
//  Copyright (c) 2012 David Hardiman. All rights reserved.
//

@interface NSData (JSONDeserialise)

/**
 Attempt to deserialise an object from this
 NSData object
 */
- (id)objectFromJSONData;

/**
 Attempt to deserialise a mutable object from this
 NSData object
 */
- (id)mutableObjectFromJSONData;

@end

@interface NSString (JSONDeserialise)

/**
 Attempt to deserialise an object from this
 NSString
 */
- (id)objectFromJSONString;

@end
