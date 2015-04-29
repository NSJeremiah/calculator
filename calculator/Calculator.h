//
//  Calculator.h
//  BigHe-calculator
//
//  Created by 贺俊毓 on 15/4/19.
//  Copyright (c) 2015年 jeremiah. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Fraction.h"

@interface Calculator : NSObject

@property (strong,nonatomic) Fraction *operand1;
@property (strong,nonatomic) Fraction *operand2;
@property (strong,nonatomic) Fraction *accumulator;

-(Fraction *) performOperation: (char) op;
-(void) clear;

@end
