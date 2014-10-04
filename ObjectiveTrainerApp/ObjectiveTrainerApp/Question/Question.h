//
//  Question.h
//  ObjectiveTrainerApp
//
//  Created by Dave Doles on 10/3/14.
//  Copyright (c) 2014 ___davedoles___. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QuestionModel.h"

@interface Question : NSObject

@property (nonatomic) QuizQuestionType questionType;
@property (nonatomic) QuizQuestionDifficulty questionDifficulty;

@property (strong, nonatomic) NSString *questionText;

// Properties for MC
@property (strong, nonatomic) NSString *questionAnswer1;
@property (strong, nonatomic) NSString *questionAnswer2;
@property (strong, nonatomic) NSString *questionAnswer3;
@property (nonatomic) int correctMCQuestionIndex;

// Properties for fill in the blank
@property (strong, nonatomic) NSString *correctAnswerForBlank;

// Properties for find within image
@property (nonatomic) int offset_x;
@property (nonatomic) int offset_y;
@property (nonatomic, strong) NSString *questionImageName;

@end
