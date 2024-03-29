//
//  XibTableViewCell.h
//  StoryBoardXibDemo
//
//  Created by HN on 2019/8/28.
//  Copyright © 2019 HN. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface XibTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *constraintW;
@property (weak, nonatomic) IBOutlet UILabel *labelGreen;
@property (weak, nonatomic) IBOutlet UILabel *labelYellow;
@property (strong, nonatomic) UILabel *contentLabel;
@end

NS_ASSUME_NONNULL_END
