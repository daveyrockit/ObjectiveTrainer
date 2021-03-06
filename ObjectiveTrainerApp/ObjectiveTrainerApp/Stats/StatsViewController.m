//
//  StatsViewController.m
//  ObjectiveTrainerApp
//
//  Created by Dave Doles on 10/3/14.
//  Copyright (c) 2014 ___davedoles___. All rights reserved.
//

#import "StatsViewController.h"
#import "SWRevealViewController.h"

@interface StatsViewController ()

@end

@implementation StatsViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self){
        // Custom initialization
    }
    return self;
}
- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    // Add pan gesture recognizer for revealing menu once SWRevealVC.h is imported
    [self.view addGestureRecognizer:self.revealViewController.panGestureRecognizer];
    
    // Load and display stats
    NSUserDefaults *userDefaults = [NSUserDefaults standardUserDefaults];
    
    // Easy stats
    int easyQuestionsAnswered = [userDefaults integerForKey:@"EasyQuestionsAnswered"];
    int easyQuestionsCorrect = [userDefaults integerForKey:@"EasyQuestionsAnsweredCorrectly"];
    self.easyQuestionsStats.text = [NSString stringWithFormat:@"Easy Questions: %i / %i", easyQuestionsCorrect, easyQuestionsAnswered];

    // Medium stats
    int mediumQuestionsAnswered = [userDefaults integerForKey:@"MediumQuestionsAnswered"];
    int mediumQuestionsCorrect = [userDefaults integerForKey:@"MediumQuestionsAnsweredCorrectly"];
    self.mediumQuestionsStats.text = [NSString stringWithFormat:@"Medium Questions: %i / %i", mediumQuestionsCorrect, mediumQuestionsAnswered];
    
    // Hard stats
    int hardQuestionsAnswered = [userDefaults integerForKey:@"HardQuestionsAnswered"];
    int hardQuestionsCorrect = [userDefaults integerForKey:@"HardQuestionsAnsweredCorrectly"];
    self.hardQuestionsStats.text = [NSString stringWithFormat:@"Hard Questions: %i / %i", hardQuestionsCorrect, hardQuestionsAnswered];
    
    // Total
    self.totalQuestionsLabel.text = [NSString stringWithFormat:@"Total Questions Answered: %i", easyQuestionsAnswered + mediumQuestionsAnswered + hardQuestionsAnswered];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}



@end
