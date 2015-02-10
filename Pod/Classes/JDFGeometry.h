//
//  JDFGeometry.m
//  UIView_FadingSubviews
//
//  Created by Joe Fryer on 10/02/2015.
//  Copyright (c) 2014 Joe Fryer. All rights reserved.
//

#import <CoreGraphics/CGGeometry.h>


/*
 Todo
 - Add the option to offset an alignment by a certain amount/percentage.
 - Creating copies with an offset - allowing specifying X and Y offset
 */


#pragma mark - Centring
/**
 *  Returns a copy of the source rectangle that has been centred in @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle that the source rectangle will be centred in.
 *
 *  @return A @c CGRect. A copy of the source rectangle that has been centred in @c rect2.
 */
CGRect JDFCGRectCentredInRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rectangle that has been vertically aligned with @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle that the source rectangle will be vertically aligned with.
 *
 *  @return A CGRect. A copy of the source rectangle that has been vertically aligned with @c rect2.
 */
CGRect JDFCGRectVerticallyAlignedWithRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rectangle that has been horizontally aligned with @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle that the source rectangle will be horizontally aligned with.
 *
 *  @return A CGRect. A copy of the source rectangle that has been horizontally aligned with @c rect2.
 */
CGRect JDFCGRectHorizontallyAlignedWithRect(CGRect rect1, CGRect rect2);


#pragma mark - Aligning to the inside of another rectangle along one axis
/**
 *  Returns a copy of the source rectangle that has had its top edge aligned to the inside of the top edge of @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle that the source rectangle will be aligned with.
 *
 *  @return A CGRect. A copy of the source rectangle that has had its top edge aligned to the inside of the top edge of @c rect2.
 */
CGRect JDFCGRectTopInsideAlignedWithRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rectangle that has had its left edge aligned to the inside of the left edge of @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle that the source rectangle will be aligned with.
 *
 *  @return A CGRect. A copy of the source rectangle that has had its left edge aligned to the inside of the left edge of @c rect2.
 */
CGRect JDFCGRectLeftInsideAlignedWithRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rectangle that has had its bottom edge aligned to the inside of the bottom edge of @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle that the source rectangle will be aligned with.
 *
 *  @return A CGRect. A copy of the source rectangle that has had its bottom edge aligned to the inside of the bottom edge of @c rect2.
 */
CGRect JDFCGRectBottomInsideAlignedWithRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rectangle that has had its right edge aligned to the inside of the right edge of @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle that the source rectangle will be aligned with.
 *
 *  @return A CGRect. A copy of the source rectangle that has had its right edge aligned to the inside of the right edge of @c rect2.
 */
CGRect JDFCGRectRightInsideAlignedWithRect(CGRect rect1, CGRect rect2);


#pragma mark - Aligning to the inside corner of another rectangle
/**
 *  Returns a copy of the source rectangle that has had its top left corner aligned with the top left corner of the other rectangle.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of the source rectangle that has had its top left corner aligned with the top left corner of the other rectangle.
 */
CGRect JDFCGRectTopLeftInsideAlignedWithRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rectangle that has had its top right corner aligned with the top right corner of the other rectangle.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of the source rectangle that has had its top right corner aligned with the top right corner of the other rectangle.
 */
CGRect JDFCGRectTopRightInsideAlignedWithRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rectangle that has had its bottom left corner aligned with the bottom left corner of the other rectangle.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of the source rectangle that has had its bottom left corner aligned with the bottom left corner of the other rectangle.
 */
CGRect JDFCGRectBottomLeftInsideAlignedWithRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rectangle that has had its bottom right corner aligned with the bottom right corner of the other rectangle.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of the source rectangle that has had its bottom right corner aligned with the bottom right corner of the other rectangle.
 */
CGRect JDFCGRectBottomRightInsideAlignedWithRect(CGRect rect1, CGRect rect2);


#pragma mark - Aligning to the inside of another rectangle, at the center of one of its edges
/**
 *  Returns a copy of the source rectangle that has had its top edge aligned with the top edge of @c rect2, and centred on it.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of the source rectangle that has had its top edge aligned with the top edge of @c rect2, and centred on it.
 */
CGRect JDFCGRectTopInsideCentreAlignedWithRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rectangle that has had its bottom edge aligned with the bottom edge of @c rect2, and centred on it.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of the source rectangle that has had its bottom edge aligned with the bottom edge of @c rect2, and centred on it.
 */
CGRect JDFCGRectBottomInsideCentreAlignedWithRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rectangle that has had its left edge aligned with the left edge of @c rect2, and centred on it.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of the source rectangle that has had its left edge aligned with the left edge of @c rect2, and centred on it.
 */
CGRect JDFCGRectLeftInsideCentreAlignedWithRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rectangle that has had its right edge aligned with the right edge of @c rect2, and centred on it.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of the source rectangle that has had its right edge aligned with the right edge of @c rect2, and centred on it.
 */
CGRect JDFCGRectRightInsideCenterAlignedWithRect(CGRect rect1, CGRect rect2);


#pragma mark - Aligning to the outside of another rectangle alonge one axis
/**
 *  Returns a copy of the source rectangle that has had its bottom edge aligned with the top edge of @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of the source rectangle that has had its bottom edge aligned with the top edge of @c rect2.
 */
CGRect JDFCGRectTopOutsideAlignedWithRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rectangle that has had its top edge aligned with the bottom edge of @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of the source rectangle that has had its top edge aligned with the bottom edge of @c rect2.
 */
CGRect JDFCGRectBottomOutsideAlignedWithRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rectangle that has had its right edge aligned with the left edge of @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of the source rectangle that has had its right edge aligned with the left edge of @c rect2.
 */
CGRect JDFCGRectLeftOutsideAlignedWithRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rectangle that has had its left edge aligned with the right edge of @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of the source rectangle that has had its left edge aligned with the right edge of @c rect2.
 */
CGRect JDFCGRectRightOutsideAlignedWithRect(CGRect rect1, CGRect rect2);


#pragma mark - Aligning to the outside corner of another rectangle
/**
 *  Returns a copy of the source rectangle with its bottom right corner aligned with the top left corner of @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of the source rectangle with its bottom right corner aligned with the top left corner of @c rect2.
 */
CGRect JDFCGRectTopLeftOutsideAlignedWithRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rectangle with its bottom left corner aligned with the top right corner of @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of the source rectangle with its bottom left corner aligned with the top right corner of @c rect2.
 */
CGRect JDFCGRectTopRightOutsideAlignedWithRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rectangle with its top right corner aligned with the bottom left corner of @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of the source rectangle with its top right corner aligned with the bottom left corner of @c rect2.
 */
CGRect JDFCGRectBottomLeftOutsideAlignedWithRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rectangle with its top left corner aligned with the bottom right corner of @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of the source rectangle with its top left corner aligned with the bottom right corner of @c rect2.
 */
CGRect JDFCGRectBottomRightOutsideAlignedWithRect(CGRect rect1, CGRect rect2);


#pragma mark - Aligning to the outside of another rectangle, at the center of one of its edges
/**
 *  Returns a copy of the source rectangle with its bottom edge vertically aligned with the top edge of @rect2, and horizontally centred with it.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return a CGRect. A copy of the source rectangle with its bottom edge vertically aligned with the top edge of @rect2, and horizontally centred with it.
 */
CGRect JDFCGRectTopOutsideCentreAlignedWithRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rectangle with its top edge vertically aligned with the bottom edge of @rect2, and horizontally centred with it.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return a CGRect. A copy of the source rectangle with its top edge vertically aligned with the bottom edge of @rect2, and horizontally centred with it.
 */
CGRect JDFCGRectBottomOutsideCentreAlignedWithRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rectangle with its right edge vertically aligned with the left edge of @rect2, and vertically centred with it.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return a CGRect. A copy of the source rectangle with its right edge vertically aligned with the left edge of @rect2, and vertically centred with it.
 */
CGRect JDFCGRectLeftOutsideCentreAlignedWithRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rectangle with its left edge vertically aligned with the right edge of @rect2, and vertically centred with it.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return a CGRect. A copy of the source rectangle with its left edge vertically aligned with the right edge of @rect2, and vertically centred with it.
 */
CGRect JDFCGRectRightOutsideCentreAlignedWithRect(CGRect rect1, CGRect rect2);


#pragma mark - Aligning the centre of the rectangle with the edge of another rectangle
/**
 *  Returns a copy of the source rectangle that has its horizontal centre aligned with the left edge of @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of the source rectangle that has its horizontal centre aligned with the left edge of @c rect2.
 */
CGRect JDFCGRectHorizontalCentreAlignedWithLeftEdgeOfRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rectangle that has its horizontal centre aligned with the right edge of @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of the source rectangle that has its horizontal centre aligned with the right edge of @c rect2.
 */
CGRect JDFCGRectHorizontalCentreAlignedWithRightEdgeOfRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rectangle that has its vertical centre aligned with the top edge of @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of the source rectangle that has its vertical centre aligned with the top edge of @c rect2.
 */
CGRect JDFCGRectVerticalCentreAlignedWithTopEdgeOfRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rectangle that has its vertical centre aligned with the bottom edge of @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of the source rectangle that has its vertical centre aligned with the bottom edge of @c rect2.
 */
CGRect JDFCGRectVerticalCentreAlignedWithBottomEdgeOfRect(CGRect rect1, CGRect rect2);


#pragma mark - Aligning a rectangle so that its center is aligned with one of another rectangle's edges
/**
 *  Returns a copy of the source rectangle with its center positioned at the top left corner of @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of the source rectangle with its center positioned at the top left corner of @c rect2.
 */
CGRect JDFCGRectCentredAtTopLeftCornerOfRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rectangle with its center positioned at the top right corner of @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of the source rectangle with its center positioned at the top right corner of @c rect2.
 */
CGRect JDFCGRectCentredAtTopRightCornerOfRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rectangle with its center positioned at the bottom left corner of @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of the source rectangle with its center positioned at the bottom left corner of @c rect2.
 */
CGRect JDFCGRectCentredAtBottomLeftCornerOfRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rectangle with its center positioned at the bottom right corner of @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of the source rectangle with its center positioned at the bottom right corner of @c rect2.
 */
CGRect JDFCGRectCentredAtBottomRightCornerOfRect(CGRect rect1, CGRect rect2);


#pragma mark - Aligning a rectangle so that it equally straddles the center of one of another rectangle's edges
/**
 *  Returns a copy of source rect with its centre point positioned at the center of the top edge of @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of source rect with its centre point positioned at the center of the top edge of @c rect2.
 */
CGRect JDFCGRectStraddlingCenterOfTopEdge(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of source rect with its centre point positioned at the center of the bottom edge of @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of source rect with its centre point positioned at the center of the bottom edge of @c rect2.
 */
CGRect JDFCGRectStraddlingCenterOfBottomEdge(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of source rect with its centre point positioned at the center of the left edge of @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of source rect with its centre point positioned at the center of the left edge of @c rect2.
 */
CGRect JDFCGRectStraddlingCenterOfLeftEdge(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of source rect with its centre point positioned at the center of the right edge of @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of source rect with its centre point positioned at the center of the right edge of @c rect2.
 */
CGRect JDFCGRectStraddlingCenterOfRightEdge(CGRect rect1, CGRect rect2);


#pragma mark - Aligning outside corners, along one edge
/**
 *  Returns a copy of the source rect with its bottom left corner positioned at the top left corner of @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of the source rect with its bottom left corner positioned at the top left corner of @c rect2.
 */
CGRect JDFCGRectBottomLeftCornerPositionedAtTopLeftCornerOfRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rect with its bottom right corner positioned at the top right corner of @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of the source rect with its bottom right corner positioned at the top right corner of @c rect2.
 */
CGRect JDFCGRectBottomRightCornerPositionedAtTopRightCornerOfRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rect with its top left corner positioned at the top right corner of @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of the source rect with its top left corner positioned at the top right corner of @c rect2.
 */
CGRect JDFCGRectTopLeftCornerPositionedAtTopRightCornerOfRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rect with its bottom left corner positioned at the bottom right corner of @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of the source rect with its bottom left corner positioned at the bottom right corner of @c rect2.
 */
CGRect JDFCGRectBottomLeftCornerPositionedAtBottomRightCornerOfRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rect with its top right corner positioned at the bottom right corner of @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of the source rect with its top right corner positioned at the bottom right corner of @c rect2.
 */
CGRect JDFCGRectTopRightCornerPositionedAtBottomRightCornerOfRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rect with its top left corner positioned at the bottom left corner of @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of the source rect with its top left corner positioned at the bottom left corner of @c rect2.
 */
CGRect JDFCGRectTopLeftCornerPositionedAtBottomLeftCornerOfRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rect with its bottom right corner positioned at the bottom left corner of @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of the source rect with its bottom right corner positioned at the bottom left corner of @c rect2.
 */
CGRect JDFCGRectBottomRightCornerPositionedAtBottomLeftCornerOfRect(CGRect rect1, CGRect rect2);

/**
 *  Returns a copy of the source rect with its top right corner positioned at the top left corner of @c rect2.
 *
 *  @param rect1 The source rectangle.
 *  @param rect2 The rectangle to be aligned with.
 *
 *  @return A CGRect. A copy of the source rect with its bottom right corner positioned at the bottom left corner of @c rect2.
 */
CGRect JDFCGRectTopRightCornerPositionedAtTopLeftCornerOfRect(CGRect rect1, CGRect rect2);


#pragma mark - Creating copies with an offset

/**
 *  Returns a copy of the source rect with its x-coordinate offset by the supplied amount.
 *
 *  @param rect    The source rectangle
 *  @param xOffset The amount to offset the rectangle's x-coordinate.
 *
 *  @return A CGRect. A copy of the source rect with its x-coordinate offset by the supplied amount.
 */
CGRect JDFCGRectCopyRectWithXOffset(CGRect rect, CGFloat xOffset);

/**
 *  Returns a copy of the source rect with its y-coordinate offset by the supplied amount.
 *
 *  @param rect    The source rectangle
 *  @param xOffset The amount to offset the rectangle's y-coordinate.
 *
 *  @return A CGRect. A copy of the source rect with its y-coordinate offset by the supplied amount.
 */
CGRect JDFCGRectCopyRectWithYOffset(CGRect rect, CGFloat yOffset);


#pragma mark - Getting Size Percentages

/**
 *  Returns a percentage of the width of the source rectangle.
 *
 *  @param rect              The source rectangle
 *  @param decimalPercentage The percentage of the source rectangle's width to return.
 *
 *  @return A CGFloat. A percentage of the width of the source rectangle.
 */
CGFloat JDFCGRectGetPercentageOfWidth(CGRect rect, CGFloat decimalPercentage);

/**
 *  Returns a percentage of the height of the source rectangle.
 *
 *  @param rect              The source rectangle
 *  @param decimalPercentage The percentage of the source rectangle's height to return.
 *
 *  @return A CGFloat. A percentage of the height of the source rectangle.
 */
CGFloat JDFCGRectGetPercentageOfHeight(CGRect rect, CGFloat decimalPercentage);
