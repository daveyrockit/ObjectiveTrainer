//
//  RemovewAdsViewController.m
//  ObjectiveTrainerApp
//
//  Created by Dave Doles on 10/3/14.
//  Copyright (c) 2014 ___davedoles___. All rights reserved.
//

#import "RemovewAdsViewController.h"
#import "SWRevealViewController.h"

@interface RemovewAdsViewController ()

@end

@implementation RemovewAdsViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    // Add pan gesture once SWRevealVC.h is imported
    [self.view addGestureRecognizer:self.revealViewController.panGestureRecognizer];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
