//
//  MenuModel.h
//  ObjectiveTrainerApp
//
//  Created by Dave Doles on 10/3/14.
//  Copyright (c) 2014 ___davedoles___. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum ScreenType {
    ScreenTypeQuestion,
    ScreenTypeStats,
    ScreenTypeAbout,
    ScreenTypeRemoveAds
} MenuItemScreenType;

@interface MenuModel : NSObject

- (NSArray *)getMenuItems;

@end
