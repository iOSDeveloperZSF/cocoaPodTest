//
//  E3CloudClient.h
//  BlueClientDemo
//
//  Created by 张浩宇90后 on 15/11/17.
//  Copyright © 2015年 yifangtongda. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^E3CloudGetUpgradeListBlock)(NSString *upgradeList,NSError *error);

typedef void(^E3CloudGetUpgradeFileBlock)(BOOL ifCompletion,NSError *error);

@protocol E3CloudDelegate <NSObject>

@optional
-(void)E3CloudRegisterIfSuccess:(BOOL)ifSuccess;

-(void)E3CloudLoginIfSuccess:(BOOL)ifSuccess;

-(void)E3CloudFindPassIfSuccess:(BOOL)ifSuccess;

-(void)E3CloudUploadIfSuccess:(BOOL)ifSuccess error:(NSError *)err;

-(void)E3CloudDownloadIfSuccess:(BOOL)ifSuccess DownloadData:(NSData *)downloadData error:(NSError *)err;


@end

@interface E3CloudClient : NSObject


@property(nonatomic,retain)id<E3CloudDelegate>  delegate;

+(E3CloudClient *)getInstance;

-(void)E3CloudLoginWithName:(NSString *)name password:(NSString *)password;

-(void)E3CloudRegisterWithName:(NSString *)name password:(NSString *)password;

-(void)E3CloudUploadData:(NSData *)uploadData;

- (void)E3Clouddownload;

- (void)E3CloudFindPassWordByAccount:(NSString *)account;

-(void)E3CloudGetUpgradeListCompletion:(E3CloudGetUpgradeListBlock)completionBlock;

-(void)loginForGetUpgradeList;

-(void)E3CloudGetUpgradeFile:(NSString *)fileName Completion:(E3CloudGetUpgradeFileBlock)completionBlock;


@end
