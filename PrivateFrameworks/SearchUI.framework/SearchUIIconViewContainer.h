/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIIconViewContainer : UIView {
    NSArray *_iconViews;
    NSArray *_spacerLayoutGuides;
    NSLayoutConstraint *_trailingConstraint;
}

@property (retain) NSArray *iconViews;
@property (retain) NSArray *spacerLayoutGuides;
@property (retain) NSLayoutConstraint *trailingConstraint;

+ (unsigned int)maximumNumberOfColumns;
+ (unsigned int)numberOfColumnsForCurrentOrientation;
+ (unsigned int)numberOfColumnsForLandscape;
+ (unsigned int)numberOfColumnsForPortrait;

- (void).cxx_destruct;
- (id)iconViews;
- (id)initWithStyle:(unsigned int)arg1 cell:(id)arg2;
- (void)setIconViews:(id)arg1;
- (void)setSpacerLayoutGuides:(id)arg1;
- (void)setTrailingConstraint:(id)arg1;
- (id)spacerLayoutGuides;
- (id)trailingConstraint;

@end