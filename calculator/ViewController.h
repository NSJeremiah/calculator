//
//  ViewController.h
//  BigHe-calculator
//
//  Created by 贺俊毓 on 15/4/19.
//  Copyright (c) 2015年 jeremiah. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *display;

-(void) processDight: (int) digit;
-(void) processOp: (char) theOp;
-(void) storeFracPart;

//数字键

-(IBAction)clickDight:(UIButton *) sender;

//算数操作键

-(IBAction)clickPlus;
-(IBAction)clickMinus;
-(IBAction)clickMultiply;
-(IBAction)clickDivide;

//Misc键

-(IBAction)clickOver;
-(IBAction)clickEquals;
-(IBAction)clickClear;

@end

