//
//  KeychainItemWrapper.h
//  CustomUniqueId
//
//  Created by Wisemen on 31/03/2017.
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface KeychainItemWrapper : NSObject

{
    NSMutableDictionary *keychainItemData;
    NSMutableDictionary *genericPasswordQuery;	}

@property (nonatomic, retain) NSMutableDictionary *keychainItemData;
@property (nonatomic, retain) NSMutableDictionary *genericPasswordQuery;


- (id)initWithIdentifier: (NSString *)identifier accessGroup:(NSString *) accessGroup;
- (void)setObject:(id)inObject forKey:(id)key;
- (id)objectForKey:(id)key;


- (void)resetKeychainItem;

@end
