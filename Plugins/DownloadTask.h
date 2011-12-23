//
//  DownloadTask.h
//  Downloader
//
//  Created by Davide Bertola on 12/22/11.
//  Copyright (c) 2011 Polito. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface DownloadTask : NSObject {
    NSString *path;
    NSURLConnection *conn;
    NSString *taskId;
    long long int size;
    long long int progress;
    float timeout;
    int temp;
    
    id downloader;
}

@property (nonatomic, retain) NSString *path;
@property (nonatomic, retain) NSURLConnection *conn;
@property (nonatomic, retain) NSString *taskId;
@property (nonatomic, retain) id downloader;

-(void) downloadFileWithOptions: (NSMutableDictionary *) options;
-(void) setDownloaderDelegate: (id) downloader;

+(void) deleteFileWithPath: (NSString *) path;
+(void) writeToFile: (NSData *)data withPath: (NSString *) path;

@end
