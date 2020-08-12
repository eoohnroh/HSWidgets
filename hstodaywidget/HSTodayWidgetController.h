@protocol WGWidgetHostingViewControllerDelegate, WGWidgetHostingViewControllerHost;
@class WGWidgetDiscoveryController, WGWidgetHostingViewController;

@interface HSTodayWidgetController : NSObject
@property (nonatomic, retain) WGWidgetDiscoveryController *widgetDiscoveryController;
@property (nonatomic, retain) NSMutableDictionary *cancelTouchesAssertionsByWidgetID;
+(instancetype)sharedInstance;
-(NSUInteger)availableWidgetsCount;
-(NSDictionary *)availableWidgetIdentifiersToWidgetInfos;
-(void)removeWidgetWithIdentifier:(NSString *)widgetIdentifier;
-(WGWidgetHostingViewController *)widgetWithIdentifier:(NSString *)identifier delegate:(id<WGWidgetHostingViewControllerDelegate>)delegate host:(id<WGWidgetHostingViewControllerHost>)host;
-(void)enumerateWidgetsWithBlock:(void(^)(HSTodayWidgetController *, WGWidgetHostingViewController *))block;
@end
