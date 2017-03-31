//
//  CustomUniqueId.h
//  CustomUniqueId
//
//  Created by Wisemen on 31/03/2017.
//
//

#import <Cordova/CDV.h>
#import <Foundation/Foundation.h>

@interface CustomUniqueId : CDVPlugin

{
    NSString* callbackId;
    
}



@property (nonatomic,copy) NSString* callbackId;

- (void)_INIT_KEYCHAIN:(CDVInvokedUrlCommand*)command;

@end
