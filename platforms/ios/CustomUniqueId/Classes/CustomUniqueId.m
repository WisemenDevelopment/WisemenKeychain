//
//  CustomUniqueId.m
//  CustomUniqueId
//
//  Created by Wisemen on 31/03/2017.
//
//#include "NSDataEncryption.h"


#import<AdSupport/ASIdentifierManager.h>
#include <sys/socket.h>
#include <sys/sysctl.h>
#include <net/if.h>
#include <net/if_dl.h>
#include <CoreFoundation/CoreFoundation.h>
#import <Security/Security.h>
#include <Accounts/Accounts.h>
#include <Foundation/Foundation.h>
#import <objc/runtime.h>
#include <MobileCoreServices/MobileCoreServices.h>
#include <Security/SecBase.h>
#include <Security/SecAccessControl.h>
#include <CoreFoundation/CFArray.h>
#include "KeychainItemWrapper.h"
#import <CommonCrypto/CommonDigest.h>
#import <CommonCrypto/CommonCryptor.h>
#include "NSDataEncryption.h"
#import "CustomUniqueId.h"

@implementation CustomUniqueId


@synthesize callbackId;


- (void)_INIT_KEYCHAIN:(CDVInvokedUrlCommand*)command
{
    NSString *Appstr = [command.arguments objectAtIndex:0];
    KeychainItemWrapper *keychainItem = [[KeychainItemWrapper alloc] initWithIdentifier:Appstr accessGroup:nil];
    
}

@end
