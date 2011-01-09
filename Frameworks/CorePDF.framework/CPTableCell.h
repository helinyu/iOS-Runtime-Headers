/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/CorePDF.framework/CorePDF
 */

@class CPGraphicObject;



@interface CPTableCell : CPChunk <CPDisposable>
{
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } cellBounds;
    struct { 
        NSInteger location; 
        NSInteger length; 
    } rowSpan;
    struct { 
        NSInteger location; 
        NSInteger length; 
    } columnSpan;
    struct { struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } x1; struct CGColor {} *x2; NSUInteger x3; CPGraphicObject **x4; } *borders;
    struct CGColor { } *backgroundColor;
    NSUInteger backgroundGraphicCount;
    CPGraphicObject **backgroundGraphics;
}

@property(readonly) NSUInteger backgroundGraphicCount;
@property ? columnSpan;
@property ? rowSpan;
@property(readonly) CGRect cellBounds;


- (void)finalize;
- (struct CGColor { }*)backgroundColor;
- (void)dealloc;
- (void)setRowSpan:(struct { NSInteger x1; NSInteger x2; })arg1;
- (struct { NSInteger x1; NSInteger x2; })rowSpan;
- (struct { NSInteger x1; NSInteger x2; })columnSpan;
- (id)initWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBorder:(NSInteger)arg1 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 graphics:(id)arg3;
- (NSUInteger)graphicCountOfBorder:(NSInteger)arg1;
- (id)graphicObjectOfBorder:(NSInteger)arg1 atIndex:(NSUInteger)arg2;
- (NSInteger)compareCellOrdinal:(id)arg1;
- (void)setColumnSpan:(struct { NSInteger x1; NSInteger x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cellBounds;
- (void)setBackgroundGraphics:(id)arg1;
- (id)backgroundGraphicAtIndex:(NSUInteger)arg1;
- (NSUInteger)backgroundGraphicCount;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsOfBorder:(NSInteger)arg1;
- (struct CGColor { }*)colorOfBorder:(NSInteger)arg1;
- (void)dispose;

@end