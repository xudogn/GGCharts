//
//  IOBarChart.h
//  HSCharts
//
//  Created by 黄舜 on 17/6/6.
//  Copyright © 2017年 I really is a farmer. All rights reserved.
//

#import "BaseChart.h"

@class LineChartData;
@class BarChartData;

@interface IOBarChart : BaseChart

@property (nonatomic, copy) NSString * topTitle;
@property (nonatomic, strong) UIFont * topFont;
@property (nonatomic, strong) UIColor * topColor;

@property (nonatomic, copy) NSString * bottomTitle;
@property (nonatomic, strong) UIFont * bottomFont;
@property (nonatomic, strong) UIColor * bottomColor;

@property (nonatomic, copy) NSString * positiveTitle;
@property (nonatomic, strong) UIColor * positiveColor;

@property (nonatomic, copy) NSString * negativeTitle;
@property (nonatomic, strong) UIColor * negativeColor;

@property (nonatomic, copy) NSArray * axisTitles;
@property (nonatomic, strong) UIFont * axisFont;
@property (nonatomic, strong) UIColor * axisColor;

@property (nonatomic, strong) BarChartData * barData;
@property (nonatomic, assign) CGFloat barWidth;

@property (nonatomic, strong) LineChartData * lineData;
@property (nonatomic, assign) CGFloat lineWidth;

@property (nonatomic, assign) CGRect contentFrame;
@property (nonatomic, strong) NSString * format;

- (void)updateChart;

- (void)strockChart;

- (void)addAnimation:(NSTimeInterval)duration;

@end
