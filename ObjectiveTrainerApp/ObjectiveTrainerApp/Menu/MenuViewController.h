//
//  MenuViewController.h
//  ObjectiveTrainerApp
//
//  Created by Dave Doles on 10/3/14.
//  Copyright (c) 2014 ___davedoles___. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MenuModel.h"
#import "MenuItem.h"

@interface MenuViewController : UIViewController<UITableViewDataSource, UITableViewDelegate>

@property (strong, nonatomic) MenuModel *model;
@property (strong, nonatomic) NSArray *menuItems;


@property (weak, nonatomic) IBOutlet UITableView *tableView;

@end
