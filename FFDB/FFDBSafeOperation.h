//
//  FFDBSafeOperation.h
//  FFDB
//
//  Created by Fidetro on 2017/5/15.
//  Copyright © 2017年 Fidetro. All rights reserved.
//
//  https://github.com/Fidetro/FFDB

#import <Foundation/Foundation.h>
@class FFDataBaseModel;
@interface FFDBSafeOperation : NSObject


/**
 select all object

 @param dbClass  by class
 @return class objects
 */
+ (NSArray <FFDataBaseModel *>*)selectObjectWithFFDBClass:(Class)dbClass;

/**
 select object by format

 @param dbClass by class
 @param format Like sqlstatement rule, example: where name = 'fidetro' and age = '21'
 @return class objects
 */
+ (NSArray <FFDataBaseModel *>*)selectObjectWithFFDBClass:(Class)dbClass format:(NSString *)format;

/**
 insert object
 
 @param objectList Need to insert the array of objects
 */
+ (void)insertObjectList:(NSArray <FFDataBaseModel *>*)objectList;

/**
 update object
 
 @param objectList Need to update the array of objects
 */
+ (void)updateObjectList:(NSArray<FFDataBaseModel *> *)objectList;


/**
 update object by format

 @param dbClass Need to update the class
 @param format Like sqlstatement rule, example: set age = '24' where name = 'fidetro'
 @return update successfully
 */
+ (BOOL)updateObjectWithFFDBClass:(Class)dbClass format:(NSString *)format;

/**
 delete object
 
 @param objectList Need to delete the array of objects
 */
+ (void)deleteObjectList:(NSArray<FFDataBaseModel *> *)objectList;


/**
 delete object by format

 @param dbClass Need to update the class
 @param format format Like sqlstatement rule, example: where name = 'fidetro' and age = '21'
 @return delete successfully
 */
+ (BOOL)deleteObjectWithFFDBClass:(Class)dbClass format:(NSString *)format;

@end
