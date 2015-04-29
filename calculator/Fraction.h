//
//  Fraction.h
//  BigHe-calculator
//
//  Created by 贺俊毓 on 15/4/19.
//  Copyright (c) 2015年 jeremiah. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Fraction : NSObject

@property int numerator, denominator;

-(void) print;
-(void) setTo: (int) n over: (int) d;
-(Fraction *) add:(Fraction *)f;
-(Fraction *) subtract:(Fraction *)f;
-(Fraction *) multiply:(Fraction *)f;
-(Fraction *) divide:(Fraction *)f;
-(void) reduce;
-(double) convertToNum;
-(NSString *) convertToString;

@end
