//
//  Downloader.m
//  Downloader
//
//  Created by Davide Bertola on 12/22/11.
//  Copyright (c) 2011 Polito. All rights reserved.
//

#import "Downloader.h"
#import "DownloadTask.h"

@implementation Downloader

-(void) downloadFile:(NSMutableArray*)paramArray withDict:(NSMutableDictionary*)options {
    NSLog(@"Creating a download task");
    DownloadTask *task = [[DownloadTask alloc] init];
    [task setDownloaderDelegate: self];
    [task downloadFileWithOptions:options];
    [task release];
}

@end
