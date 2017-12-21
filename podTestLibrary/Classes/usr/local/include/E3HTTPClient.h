//
//  E3HTTPClient.h
//  BlueClientDemo
//
//  Created by 张浩宇90后 on 15/11/17.
//  Copyright © 2015年 yifangtongda. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol E3HTTPClientDelegte <NSObject>

@optional

-(void)registerIfSuccess:(BOOL)ifSuccess withFinal:(int)final;

-(void)loginIfSuccess:(BOOL)ifSuccess withFinal:(int)final;

-(void)findPassIfSuccess:(BOOL)ifSuccess withFinal:(int)final;

@end


@interface E3HTTPClient : NSObject

@property(nonatomic,retain)id<E3HTTPClientDelegte> delegate;

-(void)LoginWithName:(NSString *)name password:(NSString *)password ifForUpgrade:(BOOL)forUpgrade;

-(void)getRegisterWithName:(NSString *)name password:(NSString *)password;

-(void)FindPassWordByAccount:(NSString *)account;

@end
