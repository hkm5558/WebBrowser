//
//  CardMainView.h
//  WebBrowser
//
//  Created by 钟武 on 2016/12/20.
//  Copyright © 2016年 钟武. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CardCollectionViewCell;

@interface CardMainView : UIView

- (void)setCardsWithArray:(NSArray<NSString *> *)array;

@end
