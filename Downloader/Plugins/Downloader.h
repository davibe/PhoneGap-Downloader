//
//  Downloader.h
//  Downloader
//
//  Created by Davide Bertola on 12/22/11.
//  Copyright (c) 2011 Polito. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifdef PHONEGAP_FRAMEWORK
    #import <PhoneGap/PGPlugin.h>
    #import <PhoneGap/PhoneGapDelegate.h>
#else
    #import "PGPlugin.h"
    #import "PhoneGapDelegate.h"
#endif

@interface Downloader : PGPlugin {
    
}

-(void) downloadFile:(NSMutableArray*)paramArray withDict:(NSMutableDictionary*)options;

@end

