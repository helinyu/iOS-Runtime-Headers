/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, UIBezierPath, UIKBHandwritingBoxcarFilterPointFIFO, UIKBHandwritingQuadCurvePointFIFO, UIKBHandwritingStrokePointFIFO, UIKBHandwritingStrokeView;

@interface UIKBHandwritingView : UIKBKeyView <UIGestureRecognizerDelegate> {
    UIBezierPath *_currentPath;
    struct CGColor { } *_inkColor;
    struct CGImage { } *_inkMask;
    float _inkWidth;
    NSMutableArray *_interpolatedPaths;
    UIKBHandwritingQuadCurvePointFIFO *_interpolatingFIFO;
    UIKBHandwritingBoxcarFilterPointFIFO *_smoothingFIFO;
    UIKBHandwritingStrokePointFIFO *_strokeFIFO;
    UIKBHandwritingStrokeView *_strokeView;
}

@property(retain) UIBezierPath * currentPath;
@property struct CGColor { }* inkColor;
@property struct CGImage { }* inkMask;
@property float inkWidth;
@property(retain) NSMutableArray * interpolatedPaths;
@property(retain) UIKBHandwritingQuadCurvePointFIFO * interpolatingFIFO;
@property(retain) UIKBHandwritingBoxcarFilterPointFIFO * smoothingFIFO;
@property(retain) UIKBHandwritingStrokePointFIFO * strokeFIFO;
@property(retain) UIKBHandwritingStrokeView * strokeView;

- (void)addInkPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)cancelTouchTracking;
- (void)clearAndNotify:(BOOL)arg1;
- (id)currentPath;
- (void)dealloc;
- (void)deleteStrokesAtIndexes:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (struct CGColor { }*)inkColor;
- (struct CGImage { }*)inkMask;
- (float)inkWidth;
- (id)interpolatedPaths;
- (id)interpolatingFIFO;
- (void)log;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)send;
- (void)setCurrentPath:(id)arg1;
- (void)setInkColor:(struct CGColor { }*)arg1;
- (void)setInkMask:(struct CGImage { }*)arg1;
- (void)setInkWidth:(float)arg1;
- (void)setInterpolatedPaths:(id)arg1;
- (void)setInterpolatingFIFO:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)setSmoothingFIFO:(id)arg1;
- (void)setStrokeFIFO:(id)arg1;
- (void)setStrokeView:(id)arg1;
- (BOOL)shouldCache;
- (id)smoothingFIFO;
- (id)strokeFIFO;
- (id)strokeView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (void)updateInkColor;

@end