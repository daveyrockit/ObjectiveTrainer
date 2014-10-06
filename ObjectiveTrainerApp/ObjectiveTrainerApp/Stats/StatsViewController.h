//
//  StatsViewController.h
//  ObjectiveTrainerApp
//
//  Created by Dave Doles on 10/3/14.
//  Copyright (c) 2014 ___davedoles___. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface StatsViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *totalQuestionsLabel;
@property (strong, nonatomic) IBOutlet UILabel *easyQuestionsStats;
@property (strong, nonatomic) IBOutlet UILabel *mediumQuestionsStats;
@property (strong, nonatomic) IBOutlet UILabel *hardQuestionsStats;

@end
