//
//  ParsePlateDiscipline.h
//  Fangraphs Parser
//
//  Created by Varun Sharma on 1/19/14.
//  Copyright (c) 2014 Varun Sharma. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TFHpple.h"
#import "Player.h"
@interface ParsePlateDiscipline : NSOperation{
    TFHpple *FGPlayerParser;
}

@property (nonatomic, copy) NSData *webpage;
@property (nonatomic, copy) NSArray *plateDiscipline;


- (id)initWithWebpage:(NSData*)webpageData;
- (void)main;


@end
