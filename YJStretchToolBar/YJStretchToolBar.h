//
//  YJStretchToolBar.h
//  YJStretchToolBarDemo
//
//  Created by splashz on 16/9/12.
//  Copyright © 2016年 splashz. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YJStretchToolBar : UIView

@property (nonatomic, assign) NSTimeInterval duration;
@property (nonatomic, strong) UIColor *barColor;
@property (nonatomic, strong) UIColor *stickColor;
@property (nonatomic, strong) UIColor *toggleColor;
@property (nonatomic) CGFloat spacing;
@property (nonatomic) CGFloat demension;

+ (instancetype)toolBarWithButtons:(NSArray<UIButton *> *)buttons
                       barItemSize:(CGSize)barItemSize
                     portraitPoint:(CGPoint)portraitPoint
                    landscapePoint:(CGPoint)landscapePoint;

@end
