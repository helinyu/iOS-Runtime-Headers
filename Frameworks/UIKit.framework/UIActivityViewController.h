/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <UIActivityViewControllerDelegate>, NSArray, NSOperationQueue, NSString, SFAirDropActivityViewController, UIActivity, UIActivityGroupListViewController, UIViewController;

@interface UIActivityViewController : UIViewController <UIViewControllerRestoration, SFAirDropActivityViewControllerDelegate> {
    UIActivity *_activity;
    UIActivityGroupListViewController *_activityGroupListViewController;
    NSOperationQueue *_activityItemProviderOperationQueue;
    NSArray *_activityItems;
    NSArray *_activityTypeOrder;
    UIViewController *_activityViewController;
    <UIActivityViewControllerDelegate> *_airDropDelegate;
    SFAirDropActivityViewController *_airDropViewController;
    BOOL _airdropped;
    BOOL _allowsEmbedding;
    NSArray *_applicationActivities;
    unsigned int _backgroundTaskIdentifier;
    int _completedProviderCount;
    id _completionHandler;
    int _excludedActivityCategories;
    NSArray *_excludedActivityTypes;
    NSArray *_includedActivityTypes;
    NSString *_mailAutosaveIdentifier;
    int _originalPopoverBackgroundStyle;
    Class _originalPopoverBackgroundViewClass;
    id _preCompletionHandler;
    BOOL _showKeyboardAutomatically;
    NSString *_subject;
    int _totalProviderCount;
    BOOL _useBlackPopoverStyle;
}

@property(retain) UIActivity * activity;
@property(retain) UIActivityGroupListViewController * activityGroupListViewController;
@property(retain) NSOperationQueue * activityItemProviderOperationQueue;
@property(copy) NSArray * activityItems;
@property(copy) NSArray * activityTypeOrder;
@property(retain) UIViewController * activityViewController;
@property <UIActivityViewControllerDelegate> * airDropDelegate;
@property(retain) SFAirDropActivityViewController * airDropViewController;
@property BOOL airdropped;
@property BOOL allowsEmbedding;
@property(copy) NSArray * applicationActivities;
@property unsigned int backgroundTaskIdentifier;
@property int completedProviderCount;
@property(copy) id completionHandler;
@property int excludedActivityCategories;
@property(copy) NSArray * excludedActivityTypes;
@property(copy) NSArray * includedActivityTypes;
@property(retain) NSString * mailAutosaveIdentifier;
@property int originalPopoverBackgroundStyle;
@property Class originalPopoverBackgroundViewClass;
@property(copy) id preCompletionHandler;
@property BOOL showKeyboardAutomatically;
@property(readonly) BOOL sourceIsManaged;
@property(copy) NSString * subject;
@property int totalProviderCount;
@property BOOL useBlackPopoverStyle;

+ (void)_addActivityItem:(id)arg1 activityViewController:(id)arg2 originalActivityItem:(id)arg3;
+ (id)_attachmentNameForActivityItem:(id)arg1 activity:(id)arg2;
+ (id)_builtinActivities;
+ (void)_clearActivityItems:(id)arg1;
+ (id)_dataTypeIdentifierForActivityItem:(id)arg1 activity:(id)arg2;
+ (BOOL)_hasSystemActivityForActivityItems:(id)arg1;
+ (void)_reloadImageForActivity:(id)arg1;
+ (id)_subjectForActivityItem:(id)arg1 activity:(id)arg2;
+ (id)_thumbnailImageForActivityItem:(id)arg1 activity:(id)arg2;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (id)_activityItemValues;
- (id)_availableActivities;
- (id)_availableActivitiesForItems:(id)arg1;
- (void)_cancel;
- (void)_cleanupActivityWithSuccess:(BOOL)arg1;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (float)_displayHeight;
- (void)_executeActivity;
- (void)_gkCallOnSuperSkippingSelf_viewDidAppear:(BOOL)arg1;
- (void)_mailAutosaveWithHandler:(id)arg1;
- (void)_notifyReloadImageForActivity:(id)arg1;
- (void)_performActivity:(id)arg1;
- (void)_performActivityOfType:(id)arg1;
- (void)_prepareActivity:(id)arg1;
- (void)_reloadImageForActivity:(id)arg1;
- (void)_resetAfterActivity:(BOOL)arg1;
- (void)_setDarkStyleOnLegacyApp;
- (void)_setPopoverController:(id)arg1;
- (BOOL)_shouldShowSystemActivity:(id)arg1;
- (id)_titleForActivity:(id)arg1;
- (void)_updateActivityItems:(id)arg1;
- (id)activity;
- (id)activityGroupListViewController;
- (id)activityItemProviderOperationQueue;
- (id)activityItems;
- (id)activityTypeOrder;
- (id)activityViewController;
- (void)airDropActivityDidSuccessfullyCompleteTransfer;
- (void)airDropActivityDidSuccessfullyStartTransfer;
- (void)airDropActivityRequestingSharedItemsWithCompletionHandler:(id)arg1;
- (id)airDropDelegate;
- (id)airDropViewController;
- (BOOL)airdropped;
- (BOOL)allowsEmbedding;
- (id)applicationActivities;
- (unsigned int)backgroundTaskIdentifier;
- (int)completedProviderCount;
- (id)completionHandler;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (int)excludedActivityCategories;
- (id)excludedActivityTypes;
- (id)includedActivityTypes;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2;
- (id)mailAutosaveIdentifier;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (int)originalPopoverBackgroundStyle;
- (Class)originalPopoverBackgroundViewClass;
- (id)preCompletionHandler;
- (int)preferredStatusBarStyle;
- (void)setActivity:(id)arg1;
- (void)setActivityGroupListViewController:(id)arg1;
- (void)setActivityItemProviderOperationQueue:(id)arg1;
- (void)setActivityItems:(id)arg1;
- (void)setActivityTypeOrder:(id)arg1;
- (void)setActivityViewController:(id)arg1;
- (void)setAirDropDelegate:(id)arg1;
- (void)setAirDropViewController:(id)arg1;
- (void)setAirdropped:(BOOL)arg1;
- (void)setAllowsEmbedding:(BOOL)arg1;
- (void)setApplicationActivities:(id)arg1;
- (void)setBackgroundTaskIdentifier:(unsigned int)arg1;
- (void)setCompletedProviderCount:(int)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void)setExcludedActivityCategories:(int)arg1;
- (void)setExcludedActivityTypes:(id)arg1;
- (void)setIncludedActivityTypes:(id)arg1;
- (void)setMailAutosaveIdentifier:(id)arg1;
- (void)setOriginalPopoverBackgroundStyle:(int)arg1;
- (void)setOriginalPopoverBackgroundViewClass:(Class)arg1;
- (void)setPreCompletionHandler:(id)arg1;
- (void)setShowKeyboardAutomatically:(BOOL)arg1;
- (void)setSubject:(id)arg1;
- (void)setTotalProviderCount:(int)arg1;
- (void)setUseBlackPopoverStyle:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)showKeyboardAutomatically;
- (BOOL)sourceIsManaged;
- (id)subject;
- (unsigned int)supportedInterfaceOrientations;
- (int)totalProviderCount;
- (BOOL)useBlackPopoverStyle;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end