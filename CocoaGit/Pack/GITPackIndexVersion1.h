//
//  GITPackIndexVersion1.h
//  CocoaGit
//
//  Created by Geoffrey Garside on 04/11/2008.
//  Copyright 2008 ManicPanda.com. All rights reserved.
//

#import "GITPackIndex.h"

@class GITPackReverseIndex;
@interface GITPackIndexVersion1 : GITPackIndex
{
    NSString * path;
    NSData   * data;
    NSArray  * offsets;
    GITPackReverseIndex *revIndex;
}

@property(readwrite,copy) NSString * path;
@property(readwrite,retain) NSData * data;

@end
