#import <YouTubeHeader/YTResponder.h>
#import "YTMBaseInnerTubeViewController.h"
#import "YTMInnerTubeCollectionViewController.h"

@interface YTMSettingsResponseViewController : YTMBaseInnerTubeViewController
- (instancetype)initWithService:(id)service parentResponder:(id <YTResponder>)parentResponder;
- (YTMInnerTubeCollectionViewController *)collectionViewController;
@end
