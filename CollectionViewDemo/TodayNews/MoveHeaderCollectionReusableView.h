//
//  MoveHeaderCollectionReusableView.h
//  CollectionViewDemo
//
//  Created by 张延深 on 2019/11/6.
//  Copyright © 2019 张延深. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface MoveHeaderCollectionReusableView : UICollectionReusableView

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *subTitleLabel;

@end

NS_ASSUME_NONNULL_END
