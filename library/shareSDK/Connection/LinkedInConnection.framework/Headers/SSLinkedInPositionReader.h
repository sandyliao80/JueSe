//
//  SSLinkedInPositionReader.h
//  LinkedInConnection
//
//  Created by vimfung on 13-10-26.
//  Copyright (c) 2013年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSLinkedInCompanyReader.h"

/**
 *	@brief	职位信息读取器
 */
@interface SSLinkedInPositionReader : NSObject
{
@private
    NSDictionary *_sourceData;
}

/**
 *	@brief	源数据
 */
@property (nonatomic,readonly) NSDictionary *sourceData;

/**
 *	@brief	公司信息
 */
@property (nonatomic,readonly) SSLinkedInCompanyReader *company;

/**
 *	@brief	标识
 */
@property (nonatomic,readonly) long long Id;

/**
 *	@brief	是否在职
 */
@property (nonatomic,readonly) BOOL isCurrent;

/**
 *	@brief	头衔
 */
@property (nonatomic,readonly) NSString *title;

/**
 *	@brief	初始化读取器
 *
 *	@param 	sourceData 	原数据
 *
 *	@return	读取器实例对象
 */
- (id)initWithSourceData:(NSDictionary *)sourceData;


/**
 *	@brief	创建职位信息读取器
 *
 *	@param 	sourceData 	原数据
 *
 *	@return	读取器实例对象
 */
+ (SSLinkedInPositionReader *)readerWithSourceData:(NSDictionary *)sourceData;

@end
