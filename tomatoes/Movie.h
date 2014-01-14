//
//  Movie.h
//  tomatoes
//
//  Created by Linkai Xi on 1/11/14.
//  Copyright (c) 2014 Linkai Xi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Movie : NSObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *cast;

- (id) initWithDictionary:(NSDictionary *)dictionary;

@end
