//
//  QuestionViewController.h
//  ObjectiveTrainerApp
//
//  Created by Dave Doles on 10/3/14.
//  Copyright (c) 2014 ___davedoles___. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "QuestionModel.h"
#import "Question.h"

@interface QuestionViewController : UIViewController

@property (strong, nonatomic) QuestionModel *model;
@property (strong, nonatomic) NSArray *questions;

@property (nonatomic) QuizQuestionDifficulty questionDifficulty;

@property (strong, nonatomic) IBOutlet UIScrollView *questionScrollView;

// Properties for MC Questions
@property (strong, nonatomic) IBOutlet UILabel *questionText;
@property (strong, nonatomic) IBOutlet UIButton *questionMCAnswer1;
@property (strong, nonatomic) IBOutlet UIButton *questionMCAnswer2;
@property (strong, nonatomic) IBOutlet UIButton *questionMCAnswer3;

// Properties for Blank Questions
@property (strong, nonatomic) IBOutlet UIButton *submitAnswerForBlankButton;
@property (strong, nonatomic) IBOutlet UITextField *blankTextField;
@property (strong, nonatomic) IBOutlet UILabel *instructionLabelForBlank;

// Properties for Image Questions
@property (strong, nonatomic) IBOutlet UIImageView *imageQuestionImageView;

@property (strong, nonatomic) IBOutlet UIButton *skipButton;


@end
