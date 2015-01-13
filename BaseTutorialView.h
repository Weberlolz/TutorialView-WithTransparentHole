//
//  BaseTutorialView.h
//  pricerecorder
//
//  Created by Weber on 2015/1/13.
//  Copyright (c) 2015年 Weber. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BaseTutorialView : UIView{
    NSArray *rectsArray;
    UIColor *backgroundColor;
}

- (id)initWithFrame:(CGRect)frame backgroundColor:(UIColor*)color andTransparentRects:(NSArray*)rects;

@end
