#import <UIKit/UIKit.h>
#include "roothide.h"

FOUNDATION_EXPORT NSString * const RHInjectSettingsChangedNotification;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (class, nonatomic, readonly) NSString *rootHideInjectionMode;

+ (id)getDefaultsForKey:(NSString*)value;
+ (BOOL)setDefaults:(NSObject*)value forKey:(NSString*)key;

+ (NSString *)rootHidePathForRelativePath:(NSString *)relativePath;
+ (NSMutableDictionary *)rootHideDictionaryForRelativePath:(NSString *)relativePath
                                             createIfNeeded:(BOOL)createIfNeeded
                                                   defaults:(NSDictionary *)defaults;
+ (BOOL)writeRootHideDictionary:(NSDictionary *)dictionary toRelativePath:(NSString *)relativePath;
+ (BOOL)setRootHideInjectionMode:(NSString *)mode;
+ (NSString *)activeInjectionRulesRelativePath;
+ (NSDictionary *)defaultSystemInjection;
+ (NSDictionary *)defaultWantsBlacklist;
+ (NSDictionary *)defaultJetsamAddend;
+ (BOOL)ensureSupportFilesForMode:(NSString *)mode;
+ (void)rebootUserspace;

+ (void)showAlert:(UIAlertController*)alert;
+ (void)showMessage:(NSString*)msg title:(NSString*)title;

@end

#define Localized(x) NSLocalizedString(x,nil)
