//
//  GGLayer.h
//  HSCharts
//
//  Created by 黄舜 on 16/12/29.
//  Copyright © 2016年 I really is a farmer. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
#import "GGDrawerProtocol.h"

@interface GGLayer : CALayer

- (void)addBrush:(id <GGLayerProtocal>)brush;

@end
