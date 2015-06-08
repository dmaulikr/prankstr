//
//  main.m
//  prankstr
//
//  Created by Simon Fransson on 04/06/15.
//  Copyright (c) 2015 Simon Fransson. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CocoaAsyncSocket/GCDAsyncSocket.h>
#import "ClientController.h"
#import "PrankstrProtocol.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {

        ClientController *clientController = [[ClientController alloc] init];
//        [clientController findHosts];
        
        [clientController connectToHost:@"127.0.0.1" onPort:56279];
        [clientController sendCommand:PrankstrCommandInvertColors andArguments:nil];
        
        BOOL done = NO;
        do
        {
            // Start the run loop but return after each source is handled.
            SInt32    result = CFRunLoopRunInMode(kCFRunLoopDefaultMode, 10, YES);
            
            if ((result == kCFRunLoopRunStopped) || (result == kCFRunLoopRunFinished))
                done = YES;
        }
        while (!done);
        
//        if (argc == 3)
//        {
//            NSString *hostname = [NSString stringWithCString:argv[1] encoding:NSUTF8StringEncoding];
//            NSUInteger port = atoi(argv[2]);
//            
//            GCDAsyncSocket *socket = [[GCDAsyncSocket alloc] initWithDelegate:nil delegateQueue:dispatch_get_main_queue()];
//            
//            
//        } else
//        {
//            printf("Usage: %s <hostname> <port>", argv[0]);
//            return 1;
//        }
        
    }
    return 0;
}