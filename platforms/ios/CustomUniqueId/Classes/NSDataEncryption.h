//
//  NSDataEncryption.h
//  CustomUniqueId
//
//  Created by Wisemen on 31/03/2017.
//
//

#import <Foundation/Foundation.h>

@interface  NSData (AES256)
- (NSData *)AES256EncryptWithKey:(NSString *)key;
- (NSData *)AES256DecryptWithKey:(NSString *)key;

@end
