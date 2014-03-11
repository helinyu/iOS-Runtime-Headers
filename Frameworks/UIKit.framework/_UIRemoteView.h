/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIColor, _UIHostedWindowHostingHandle;

@interface _UIRemoteView : UIView <UIStatusBarTinting> {
    BOOL _actsAsTintView;
    _UIHostedWindowHostingHandle *_hostedWindowHostingHandle;
    UIColor *_statusBarTintColor;
    id _tintColorDidChangeHandler;
}

@property(setter=_setActsAsTintView:) BOOL _actsAsTintView;
@property(setter=_setStatusBarTintColor:,retain) UIColor * _statusBarTintColor;
@property(retain) _UIHostedWindowHostingHandle * hostedWindowHostingHandle;
@property(copy) id tintColorDidChangeHandler;

+ (Class)layerClass;
+ (id)viewWithHostedWindowHostingHandle:(id)arg1;
+ (id)viewWithRemoteContextID:(unsigned int)arg1;

- (BOOL)_actsAsTintView;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_setActsAsTintView:(BOOL)arg1;
- (void)_setStatusBarTintColor:(id)arg1 duration:(double)arg2;
- (void)_setStatusBarTintColor:(id)arg1;
- (id)_statusBarTintColor;
- (void)applyTransformUndoingRemoteRootLayerTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)dealloc;
- (id)hostedWindowHostingHandle;
- (void)setContextID:(unsigned int)arg1;
- (void)setHostedWindowHostingHandle:(id)arg1;
- (void)setTintColorDidChangeHandler:(id)arg1;
- (void)tintColorDidChange;
- (id)tintColorDidChangeHandler;

@end