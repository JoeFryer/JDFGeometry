//
//  JDFGeometry.m
//  UIView_FadingSubviews
//
//  Created by Joe Fryer on 10/02/2015.
//  Copyright (c) 2014 Joe Fryer. All rights reserved.
//

#import "JDFGeometry.h"


#pragma mark - Centring

CGRect JDFCGRectCentredInRect(CGRect rect1, CGRect rect2) {
    rect1 = JDFCGRectVerticallyAlignedWithRect(rect1, rect2);
    rect1 = JDFCGRectHorizontallyAlignedWithRect(rect1, rect2);
    return rect1;
}

CGRect JDFCGRectVerticallyAlignedWithRect(CGRect rect1, CGRect rect2) {
    rect1 = CGRectStandardize(rect1);
    rect1.origin.y = CGRectGetMinY(rect2) + ((CGRectGetWidth(rect2) - CGRectGetWidth(rect1)) / 2);
    return rect1;
}

CGRect JDFCGRectHorizontallyAlignedWithRect(CGRect rect1, CGRect rect2) {
    rect1 = CGRectStandardize(rect1);
    rect1.origin.x = CGRectGetMinX(rect2) + ((CGRectGetWidth(rect2) - CGRectGetWidth(rect1)) / 2);
    return rect1;
}


#pragma mark - Aligning to the inside of another rectangle along one axis

CGRect JDFCGRectTopInsideAlignedWithRect(CGRect rect1, CGRect rect2) {
    rect1 = CGRectStandardize(rect1);
    rect1.origin.y = CGRectGetMinY(rect2);
    return rect1;
}

CGRect JDFCGRectLeftInsideAlignedWithRect(CGRect rect1, CGRect rect2) {
    rect1 = CGRectStandardize(rect1);
    rect1.origin.x = CGRectGetMinX(rect2);
    return rect1;
}

CGRect JDFCGRectBottomInsideAlignedWithRect(CGRect rect1, CGRect rect2) {
    rect1 = CGRectStandardize(rect1);
    rect1.origin.y = CGRectGetMaxY(rect2) - CGRectGetHeight(rect1);
    return rect1;
}

CGRect JDFCGRectRightInsideAlignedWithRect(CGRect rect1, CGRect rect2) {
    rect1 = CGRectStandardize(rect1);
    rect1.origin.x = CGRectGetMaxX(rect2) - CGRectGetWidth(rect1);
    return rect1;
}


#pragma mark - Aligning to the inside corner of another rectangle

CGRect JDFCGRectTopLeftInsideAlignedWithRect(CGRect rect1, CGRect rect2) {
    return JDFCGRectTopInsideAlignedWithRect(JDFCGRectLeftInsideAlignedWithRect(rect1, rect2), rect2);
}

CGRect JDFCGRectTopRightInsideAlignedWithRect(CGRect rect1, CGRect rect2) {
    return JDFCGRectTopInsideAlignedWithRect(JDFCGRectRightInsideAlignedWithRect(rect1, rect2), rect2);
}

CGRect JDFCGRectBottomLeftInsideAlignedWithRect(CGRect rect1, CGRect rect2) {
    return JDFCGRectBottomInsideAlignedWithRect(JDFCGRectLeftInsideAlignedWithRect(rect1, rect2), rect2);
}

CGRect JDFCGRectBottomRightInsideAlignedWithRect(CGRect rect1, CGRect rect2) {
    return JDFCGRectBottomInsideAlignedWithRect(JDFCGRectRightInsideAlignedWithRect(rect1, rect2), rect2);
}


#pragma mark - Aligning to the inside of another rectangle, at the center of one of its edges

CGRect JDFCGRectTopInsideCentreAlignedWithRect(CGRect rect1, CGRect rect2) {
    rect1 = JDFCGRectTopInsideAlignedWithRect(rect1, rect2);
    rect1 = JDFCGRectHorizontallyAlignedWithRect(rect1, rect2);
    return rect1;
}

CGRect JDFCGRectBottomInsideCentreAlignedWithRect(CGRect rect1, CGRect rect2) {
    rect1 = JDFCGRectBottomInsideAlignedWithRect(rect1, rect2);
    rect1 = JDFCGRectHorizontallyAlignedWithRect(rect1, rect2);
    return rect1;
}

CGRect JDFCGRectLeftInsideCentreAlignedWithRect(CGRect rect1, CGRect rect2) {
    rect1 = JDFCGRectLeftInsideAlignedWithRect(rect1, rect2);
    rect1 = JDFCGRectVerticallyAlignedWithRect(rect1, rect2);
    return rect1;
}

CGRect JDFCGRectRightInsideCenterAlignedWithRect(CGRect rect1, CGRect rect2) {
    rect1 = JDFCGRectRightInsideAlignedWithRect(rect1, rect2);
    rect1 = JDFCGRectVerticallyAlignedWithRect(rect1, rect2);
    return rect1;
}


#pragma mark - Aligning to the outside of another rectangle alonge one axis

CGRect JDFCGRectTopOutsideAlignedWithRect(CGRect rect1, CGRect rect2) {
    rect1 = CGRectStandardize(rect1);
    rect1.origin.y = CGRectGetMinY(rect2) - CGRectGetHeight(rect1);
    return rect1;
}

CGRect JDFCGRectBottomOutsideAlignedWithRect(CGRect rect1, CGRect rect2) {
    rect1 = CGRectStandardize(rect1);
    rect1.origin.y = CGRectGetMaxY(rect2);
    return rect1;
}

CGRect JDFCGRectLeftOutsideAlignedWithRect(CGRect rect1, CGRect rect2) {
    rect1 = CGRectStandardize(rect1);
    rect1.origin.x = CGRectGetMinX(rect2) - CGRectGetWidth(rect1);
    return rect1;
}

CGRect JDFCGRectRightOutsideAlignedWithRect(CGRect rect1, CGRect rect2) {
    rect1 = CGRectStandardize(rect1);
    rect1.origin.x = CGRectGetMaxX(rect2);
    return rect1;
}


#pragma mark - Aligning to the outside corner of another rectangle

CGRect JDFCGRectTopLeftOutsideAlignedWithRect(CGRect rect1, CGRect rect2) {
    rect1 = JDFCGRectTopOutsideAlignedWithRect(rect1, rect2);
    rect1 = JDFCGRectLeftOutsideAlignedWithRect(rect1, rect2);
    return rect1;
}

CGRect JDFCGRectTopRightOutsideAlignedWithRect(CGRect rect1, CGRect rect2) {
    rect1 = JDFCGRectTopOutsideAlignedWithRect(rect1, rect2);
    rect1 = JDFCGRectRightOutsideAlignedWithRect(rect1, rect2);
    return rect1;
}

CGRect JDFCGRectBottomLeftOutsideAlignedWithRect(CGRect rect1, CGRect rect2) {
    rect1 = JDFCGRectBottomOutsideAlignedWithRect(rect1, rect2);
    rect1 = JDFCGRectLeftOutsideAlignedWithRect(rect1, rect2);
    return rect1;
}

CGRect JDFCGRectBottomRightOutsideAlignedWithRect(CGRect rect1, CGRect rect2) {
    rect1 = JDFCGRectBottomOutsideAlignedWithRect(rect1, rect2);
    rect1 = JDFCGRectRightOutsideAlignedWithRect(rect1, rect2);
    return rect1;
}


#pragma mark - Aligning to the outside of another rectangle, at the center of one of its edges

CGRect JDFCGRectTopOutsideCentreAlignedWithRect(CGRect rect1, CGRect rect2) {
    rect1 = JDFCGRectTopOutsideAlignedWithRect(rect1, rect2);
    rect1 = JDFCGRectHorizontallyAlignedWithRect(rect1, rect2);
    return rect1;
}

CGRect JDFCGRectBottomOutsideCentreAlignedWithRect(CGRect rect1, CGRect rect2) {
    rect1 = JDFCGRectBottomOutsideAlignedWithRect(rect1, rect2);
    rect1 = JDFCGRectHorizontallyAlignedWithRect(rect1, rect2);
    return rect1;
}

CGRect JDFCGRectLeftOutsideCentreAlignedWithRect(CGRect rect1, CGRect rect2) {
    rect1 = JDFCGRectLeftOutsideAlignedWithRect(rect1, rect2);
    rect1 = JDFCGRectVerticallyAlignedWithRect(rect1, rect2);
    return rect1;
}

CGRect JDFCGRectRightOutsideCentreAlignedWithRect(CGRect rect1, CGRect rect2) {
    rect1 = JDFCGRectRightOutsideAlignedWithRect(rect1, rect2);
    rect1 = JDFCGRectVerticallyAlignedWithRect(rect1, rect2);
    return rect1;
}


#pragma mark - Aligning the centre of the rectangle with the edge of another rectangle

CGRect JDFCGRectHorizontalCentreAlignedWithLeftEdgeOfRect(CGRect rect1, CGRect rect2) {
    rect1 = CGRectStandardize(rect1);
    rect1.origin.x = CGRectGetMinX(rect2) - (CGRectGetWidth(rect1) / 2);
    return rect1;
}

CGRect JDFCGRectHorizontalCentreAlignedWithRightEdgeOfRect(CGRect rect1, CGRect rect2) {
    rect1 = CGRectStandardize(rect1);
    rect1.origin.x = CGRectGetMaxX(rect2) - (CGRectGetWidth(rect1) / 2);
    return rect1;
}

CGRect JDFCGRectVerticalCentreAlignedWithTopEdgeOfRect(CGRect rect1, CGRect rect2) {
    rect1 = CGRectStandardize(rect1);
    rect1.origin.y = CGRectGetMinY(rect2) - (CGRectGetHeight(rect1) / 2);
    return rect1;
}

CGRect JDFCGRectVerticalCentreAlignedWithBottomEdgeOfRect(CGRect rect1, CGRect rect2) {
    rect1 = CGRectStandardize(rect1);
    rect1.origin.y = CGRectGetMaxY(rect2) - (CGRectGetHeight(rect1) / 2);
    return rect1;
}


#pragma mark - Aligning a rectangle so that its center is aligned with one of another rectangle's edges

CGRect JDFCGRectCentredAtTopLeftCornerOfRect(CGRect rect1, CGRect rect2) {
    rect1 = JDFCGRectHorizontalCentreAlignedWithLeftEdgeOfRect(rect1, rect2);
    rect1 = JDFCGRectVerticalCentreAlignedWithTopEdgeOfRect(rect1, rect2);
    return rect1;
}

CGRect JDFCGRectCentredAtTopRightCornerOfRect(CGRect rect1, CGRect rect2) {
    rect1 = JDFCGRectHorizontalCentreAlignedWithRightEdgeOfRect(rect1, rect2);
    rect1 = JDFCGRectVerticalCentreAlignedWithTopEdgeOfRect(rect1, rect2);
    return rect1;
}

CGRect JDFCGRectCentredAtBottomLeftCornerOfRect(CGRect rect1, CGRect rect2) {
    rect1 = JDFCGRectHorizontalCentreAlignedWithLeftEdgeOfRect(rect1, rect2);
    rect1 = JDFCGRectVerticalCentreAlignedWithBottomEdgeOfRect(rect1, rect2);
    return rect1;
}

CGRect JDFCGRectCentredAtBottomRightCornerOfRect(CGRect rect1, CGRect rect2) {
    rect1 = JDFCGRectHorizontalCentreAlignedWithRightEdgeOfRect(rect1, rect2);
    rect1 = JDFCGRectVerticalCentreAlignedWithBottomEdgeOfRect(rect1, rect2);
    return rect1;
}


#pragma mark - Aligning a rectangle so that it equally straddles the center of one of another rectangle's edges

CGRect JDFCGRectStraddlingCenterOfTopEdge(CGRect rect1, CGRect rect2) {
    rect1 = JDFCGRectVerticalCentreAlignedWithTopEdgeOfRect(rect1, rect2);
    rect1 = JDFCGRectHorizontallyAlignedWithRect(rect1, rect2);
    return rect1;
}

CGRect JDFCGRectStraddlingCenterOfBottomEdge(CGRect rect1, CGRect rect2) {
    rect1 = JDFCGRectVerticalCentreAlignedWithBottomEdgeOfRect(rect1, rect2);
    rect1 = JDFCGRectHorizontallyAlignedWithRect(rect1, rect2);
    return rect1;
}

CGRect JDFCGRectStraddlingCenterOfLeftEdge(CGRect rect1, CGRect rect2) {
    rect1 = JDFCGRectHorizontalCentreAlignedWithLeftEdgeOfRect(rect1, rect2);
    rect1 = JDFCGRectVerticallyAlignedWithRect(rect1, rect2);
    return rect1;
}

CGRect JDFCGRectStraddlingCenterOfRightEdge(CGRect rect1, CGRect rect2) {
    rect1 = JDFCGRectHorizontalCentreAlignedWithRightEdgeOfRect(rect1, rect2);
    rect1 = JDFCGRectVerticallyAlignedWithRect(rect1, rect2);
    return rect1;
}


#pragma mark - Aligning outside corners, along one edge

CGRect JDFCGRectBottomLeftCornerPositionedAtTopLeftCornerOfRect(CGRect rect1, CGRect rect2) {
    rect1 = JDFCGRectTopOutsideAlignedWithRect(rect1, rect2);
    rect1 = JDFCGRectLeftInsideAlignedWithRect(rect1, rect2);
    return rect1;
}

CGRect JDFCGRectBottomRightCornerPositionedAtTopRightCornerOfRect(CGRect rect1, CGRect rect2) {
    rect1 = JDFCGRectTopOutsideAlignedWithRect(rect1, rect2);
    rect1 = JDFCGRectRightInsideAlignedWithRect(rect1, rect2);
    return rect1;
}

CGRect JDFCGRectTopLeftCornerPositionedAtTopRightCornerOfRect(CGRect rect1, CGRect rect2) {
    rect1 = JDFCGRectTopInsideAlignedWithRect(rect1, rect2);
    rect1 = JDFCGRectRightOutsideAlignedWithRect(rect1, rect2);
    return rect1;
}

CGRect JDFCGRectBottomLeftCornerPositionedAtBottomRightCornerOfRect(CGRect rect1, CGRect rect2) {
    rect1 = JDFCGRectBottomInsideAlignedWithRect(rect1, rect2);
    rect1 = JDFCGRectRightOutsideAlignedWithRect(rect1, rect2);
    return rect1;
}

CGRect JDFCGRectTopRightCornerPositionedAtBottomRightCornerOfRect(CGRect rect1, CGRect rect2) {
    rect1 = JDFCGRectRightInsideAlignedWithRect(rect1, rect2);
    rect1 = JDFCGRectBottomOutsideAlignedWithRect(rect1, rect2);
    return rect1;
}

CGRect JDFCGRectTopLeftCornerPositionedAtBottomLeftCornerOfRect(CGRect rect1, CGRect rect2) {
    rect1 = JDFCGRectLeftInsideAlignedWithRect(rect1, rect2);
    rect1 = JDFCGRectBottomOutsideAlignedWithRect(rect1, rect2);
    return rect1;
}

CGRect JDFCGRectBottomRightCornerPositionedAtBottomLeftCornerOfRect(CGRect rect1, CGRect rect2) {
    rect1 = JDFCGRectLeftOutsideAlignedWithRect(rect1, rect2);
    rect1 = JDFCGRectBottomInsideAlignedWithRect(rect1, rect2);
    return rect1;
}

CGRect JDFCGRectTopRightCornerPositionedAtTopLeftCornerOfRect(CGRect rect1, CGRect rect2) {
    rect1 = JDFCGRectLeftOutsideAlignedWithRect(rect1, rect2);
    rect1 = JDFCGRectTopInsideAlignedWithRect(rect1, rect2);
    return rect1;
}


#pragma mark - Creating copies with an offset

CGRect JDFCGRectCopyRectWithXOffset(CGRect rect, CGFloat xOffset) {
    rect = CGRectStandardize(rect);
    rect.origin.x = CGRectGetMinX(rect) + xOffset;
    return rect;
}
CGRect JDFCGRectCopyRectWithYOffset(CGRect rect, CGFloat yOffset) {
    rect = CGRectStandardize(rect);
    rect.origin.y = CGRectGetMinY(rect) + yOffset;
    return rect;
}

#pragma mark - Getting Size Percentages

CGFloat JDFCGRectGetPercentageOfWidth(CGRect rect, CGFloat decimalPercentage) {
    rect = CGRectStandardize(rect);
    return rect.size.width * decimalPercentage;
}

CGFloat JDFCGRectGetPercentageOfHeight(CGRect rect, CGFloat decimalPercentage) {
    rect = CGRectStandardize(rect);
    return rect.size.height * decimalPercentage;
}

