//
//  JDFViewController.m
//  JDFGeometry
//
//  Created by Joe Fryer on 02/10/2015.
//  Copyright (c) 2014 Joe Fryer. All rights reserved.
//

#import "JDFViewController.h"

// JDFGeometry
#import "JDFGeometry.h"


@interface JDFViewController ()

@end


@implementation JDFViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    CGRect rect1 = CGRectMake(0.0f, 0.0f, 150.0f, 150.0f);
    rect1 = JDFCGRectCentredInRect(rect1, self.view.bounds);
    
    CGRect rect2 = CGRectMake(0.0f, 0.0f, 50.0f, 50.0f);
    rect2 = JDFCGRectTopRightCornerPositionedAtTopLeftCornerOfRect(rect2, rect1);
    
    UIView *view1 = [[UIView alloc] initWithFrame:rect1];
    view1.backgroundColor = [UIColor greenColor];
    [self.view addSubview:view1];
    
    UIView *view2 = [[UIView alloc] initWithFrame:rect2];
    view2.backgroundColor = [UIColor lightGrayColor];
    [self.view addSubview:view2];
}
@end
