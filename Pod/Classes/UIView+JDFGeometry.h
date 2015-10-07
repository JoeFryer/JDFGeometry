//
//  UIView+JDFGeometry.h
//  JDFGeometry
//
//  Created by Joe Fryer on 25/11/2013.
//  Copyright (c) 2013 JDF. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (JDFGeometry)

#pragma mark - Convenience Accessors
- (CGFloat)frameX;
- (CGFloat)frameY;
- (CGFloat)frameWidth;
- (CGFloat)frameHeight;

- (void)setFrameX:(CGFloat)frameX;
- (void)setFrameY:(CGFloat)frameY;
- (void)setFrameWidth:(CGFloat)frameWidth;
- (void)setFrameHeight:(CGFloat)frameHeight;

#pragma mark - Convenience frame manipulation
- (void)centerInSuperview;
- (void)centerHorizontallyInSuperview;
- (void)centerVerticallyInSuperview;

- (void)setHorizontalCentrePoint:(CGFloat)xCentre;
- (void)setVerticalCentrePoint:(CGFloat)yCentre;

- (void)moveViewXBy:(CGFloat)xDelta;
- (void)moveViewYBy:(CGFloat)yDelta;
- (void)changeViewWidthBy:(CGFloat)widthDelta;
- (void)changeViewHeightBy:(CGFloat)heightDelta;

@end
