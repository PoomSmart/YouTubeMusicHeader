#import <YouTubeHeader/YTSettingsSectionController.h>
#import <YouTubeHeader/YTResponder.h>
#import "YTMSettingsSectionItem.h"

@interface YTMSettingsSectionController : YTSettingsSectionController <YTResponder>
@property (nonatomic, assign, readwrite) int categoryID;
- (instancetype)initWithTitle:(NSString *)title items:(NSArray <YTMSettingsSectionItem *> *)items parentResponder:(id <YTResponder>)parentResponder;
@end
