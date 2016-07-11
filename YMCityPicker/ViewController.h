//
//  ViewController.h
//  YMCityPicker
//
//  Created by 于淼 on 14-11-26.
//  Copyright (c) 2014年 CMCM. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIPickerViewDelegate ,UIPickerViewDataSource>
@property (nonatomic ,strong) UIPickerView *cityPicker;
@property (nonatomic ,strong) UILabel *cityLabel;
@end

