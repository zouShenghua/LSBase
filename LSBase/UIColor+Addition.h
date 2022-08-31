//
//  UIColor+Addition.h
//  LSYC
//
//  Created by 李焕明 on 2019/4/11.
//  Copyright © 2019 fengxiadesinian. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (Addition)

/// 绘制渐变色颜色的方法
/// @param view 需要渐变的试图
/// @param fromHexColorStr 开始颜色值 16进制色值
/// @param toHexColorStr 结束颜色值 16进制色值
+ (CAGradientLayer *)setGradualChangingColor:(UIView *)view fromColor:(NSString *)fromHexColorStr toColor:(NSString *)toHexColorStr;


/// 获取16进制颜色的方法
/// @param hexColor 16进制色值  支持@“#123456”、 @“0X123456”、 @“123456”三种格式
+ (UIColor *)colorWithHex:(NSString *)hexColor;


/// 十六进制字符串获取颜色
/// @param color 16进制色值  支持@“#123456”、 @“0X123456”、 @“123456”三种格式
+ (UIColor *)colorWithHexString:(NSString *)color;

/// 十六进制字符串获取颜色
/// @param color 16进制色值  支持@“#123456”、 @“0X123456”、 @“123456”三种格式
/// @param alpha 透明度
+ (UIColor *)colorWithHexString:(NSString *)color alpha:(CGFloat)alpha;

/// 适配暗黑模式颜色   传入的UIColor对象
/// @param lightColor 普通模式颜色
/// @param darkColor 暗黑模式颜色
+ (UIColor *)colorWithLightColor:(UIColor *)lightColor DarkColor:(UIColor *)darkColor;

/// 适配暗黑模式颜色   颜色传入的是16进制字符串
/// @param lightColor 普通模式颜色
/// @param darkColor 暗黑模式颜色
+ (UIColor *)colorWithLightColorStr:(NSString *)lightColor DarkColor:(NSString *)darkColor;

/// 适配暗黑模式颜色   颜色传入的是16进制字符串 还有颜色的透明度
/// @param lightColor 普通模式颜色
/// @param lightAlpha 普通模式颜色透明度
/// @param darkColor 暗黑模式颜色透明度
/// @param darkAlpha 暗黑模式颜色
+ (UIColor *)colorWithLightColorStr:(NSString *)lightColor WithLightColorAlpha:(CGFloat)lightAlpha DarkColor:(NSString *)darkColor WithDarkColorAlpha:(CGFloat)darkAlpha;



@end

NS_ASSUME_NONNULL_END
