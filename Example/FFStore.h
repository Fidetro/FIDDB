//
//  FFStore.h
//  FFDB
//
//  Created by Fidetro on 2017/10/14.
//  Copyright © 2017年 Fidetro. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FFStore : NSObject
/** 店铺名字 **/
@property(nonatomic,copy) NSString *name;
/** 店员总数 **/
@property(nonatomic,assign) NSInteger memberCount;
/** 商店说明 **/
@property(nonatomic,copy) NSString *desc;
@end
