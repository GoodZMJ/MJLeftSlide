//
//  AppDelegate.h
//  MJLeftSlide
//
//  Created by 张小凡 on 2017/6/8.
//  Copyright © 2017年 张小凡. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MJLeftSlideViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) MJLeftSlideViewController *LeftSlideVC;

@property (strong, nonatomic) UINavigationController *mainNavigationController;

@end

