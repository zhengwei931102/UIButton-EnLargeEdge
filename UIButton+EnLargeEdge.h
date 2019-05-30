//
//  UIButton+EnLargeEdge.h
//  FMRecordVideo
//
//  Created by zw on 2018/8/15.
//  Copyright © 2018年 zw. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <objc/runtime.h>
@interface UIButton (EnLargeEdge)
/** 设置可点击范围到按钮边缘的距离 */
- (void)setEnlargeEdge:(CGFloat)size;

/** 设置可点击范围到按钮上、右、下、左的距离 */
- (void)setEnlargeEdgeWithTop:(CGFloat)top right:(CGFloat)right bottom:(CGFloat)bottom left:(CGFloat)left;
@end
