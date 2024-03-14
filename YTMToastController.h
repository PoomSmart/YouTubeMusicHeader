#import "GOOHUDMessageAction.h"

@interface YTMToastController : NSObject
- (void)showMessage:(NSString *)message;
- (void)showMessage:(NSString *)message HUDMessageAction:(GOOHUDMessageAction *)action infoType:(NSInteger)infoType duration:(CGFloat)duration;
@end
