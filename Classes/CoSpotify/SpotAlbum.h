//
//  SpotAlbum.h
//  Spot
//
//  Created by Joachim Bengtsson on 2009-05-24.
//  Copyright 2009 Third Cog Software. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "despotify.h"
#import "SpotArtist.h"

@interface SpotAlbum : NSObject {
	struct album album;
  struct album_browse albumBrowse;
  BOOL browsing;
  NSArray *tracks;
}
-(id)initWithAlbum:(struct album*)album;
-(id)initWithAlbumBrowse:(struct album_browse*)album;

//shared
@property (readonly) SpotId *id;
@property (readonly) NSString *name;
@property (readonly) SpotId *coverId;
@property (readonly) float popularity;

//album only
@property (readonly) NSString *artistName;
@property (readonly) SpotId *artistId;

//browse only
@property (readonly) int year;
@property (readonly) NSArray *tracks;
           
@end
