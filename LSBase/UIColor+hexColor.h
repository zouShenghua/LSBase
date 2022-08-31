//
//  UIColor+hexColor.h
//  ZJOL
//
//  Created by Peter Jin (https://github.com/JxbSir) on  15/1/6.
//  Copyright (c) 2015年 PeterJin.   Email:i@jxb.name      All rights reserved.
//

#import <UIKit/UIKit.h>

#define RGB(r,g,b) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:1.]

@interface UIColor (hexColor)

+ (UIColor *)hexFloatColor:(NSString *)hexStr;
+(UIColor *) randomColor;

@end
