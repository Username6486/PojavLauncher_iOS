#import "Foundation/Foundation.h"

typedef void(^Callback)(id status, BOOL success);

@interface BaseAuthenticator : NSObject

@property(class) BaseAuthenticator *current;

@property NSMutableDictionary *authData;

+ (id)loadSavedName:(NSString *)name;

- (id)initWithInput:(NSString *)string;
- (void)loginWithCallback:(Callback)callback;
- (void)refreshTokenWithCallback:(Callback)callback;
- (BOOL)saveChanges;

@end

@interface MicrosoftAuthenticator : BaseAuthenticator
@end
