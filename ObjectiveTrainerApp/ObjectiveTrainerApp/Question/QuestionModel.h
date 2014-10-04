//
//  QuestionModel.h
//  ObjectiveTrainerApp
//
//  Created by Dave Doles on 10/3/14.
//  Copyright (c) 2014 ___davedoles___. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QuestionImportHeader.h"

@interface QuestionModel : NSObject

@property (strong, nonatomic) NSMutableArray *easyQuestions;
@property (strong, nonatomic) NSMutableArray *mediumQuestions;
@property (strong, nonatomic) NSMutableArray *hardQuestions;

- (NSMutableArray *)getQuestions:(QuizQuestionDifficulty)difficulty;

@end
