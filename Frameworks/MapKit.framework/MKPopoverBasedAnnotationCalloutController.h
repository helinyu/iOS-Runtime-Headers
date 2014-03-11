/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class MKSmallCalloutViewController, UIPopoverController, UIView, _MKPopoverEmbeddingView;

@interface MKPopoverBasedAnnotationCalloutController : MKAnnotationCalloutController <_MKPopoverEmbeddingViewWindowDelegate, _UIPopoverControllerMapsTransitionDelegate, UIPopoverControllerDelegate, UIPopoverControllerDelegatePrivate> {
    id _afterMoveToWindowBlock;
    BOOL _allowsPopoverWhenNotInWindow;
    BOOL _animatingIn;
    MKSmallCalloutViewController *_calloutViewController;
    _MKPopoverEmbeddingView *_embeddingView;
    BOOL _isCalloutExpanded;
    BOOL _isHidingForImplementationReasons;
    BOOL _isShowingPopover;
    UIView *_layoutConstraintsView;
    UIPopoverController *_popoverController;
}

@property BOOL allowsPopoverWhenNotInWindow;
@property(readonly) UIPopoverController * popoverController;

- (void).cxx_destruct;
- (BOOL)_isShowingCallout;
- (void)_popoverControllerDidFinishMapsTransitionExpanding:(id)arg1;
- (void)_popoverControllerWillBeginMapsTransitionMovingSideways:(id)arg1;
- (void)_setDetailAccessoryView:(id)arg1 animated:(BOOL)arg2;
- (void)_setLeftAccessoryView:(id)arg1 animated:(BOOL)arg2;
- (void)_setRightAccessoryView:(id)arg1 animated:(BOOL)arg2;
- (void)_setSubtitle:(id)arg1 animated:(BOOL)arg2;
- (void)_setTitle:(id)arg1;
- (void)_showCalloutAnimated:(BOOL)arg1 scrollToFit:(BOOL)arg2 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)_snapLayoutConstraintsViewToContainerBounds;
- (id)_subtitle;
- (void)_updateCalloutAnimated:(BOOL)arg1;
- (void)_updatePopoverContentSize:(BOOL)arg1;
- (BOOL)allowsPopoverWhenNotInWindow;
- (BOOL)calloutContainsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)dealloc;
- (void)embeddingView:(id)arg1 didMoveToWindow:(id)arg2;
- (void)embeddingView:(id)arg1 willMoveToWindow:(id)arg2;
- (void)hideCalloutAnimated:(BOOL)arg1;
- (BOOL)isCalloutExpanded;
- (void)popoverController:(id)arg1 animationCompleted:(int)arg2;
- (id)popoverController;
- (void)setAllowsPopoverWhenNotInWindow:(BOOL)arg1;
- (void)setMapDisplayStyle:(int)arg1;
- (void)showCalloutForAnnotationView:(id)arg1 animated:(BOOL)arg2 scrollToFit:(BOOL)arg3 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;

@end