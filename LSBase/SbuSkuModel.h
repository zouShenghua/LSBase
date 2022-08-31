//
//  SbuSkuModel.h
//  lssqq
//
//  Created by lskj on 2022/8/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SbuSkuModel : NSObject

@property(strong,nonatomic)NSString *identityId;
@property(strong,nonatomic)NSString *itemId;
@property(strong,nonatomic)NSString *itemName;
@property(strong,nonatomic)NSString *toUrl;

@end

NS_ASSUME_NONNULL_END
