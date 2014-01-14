//
//  MovieCell.h
//  tomatoes
//
//  Created by Linkai Xi on 1/11/14.
//  Copyright (c) 2014 Linkai Xi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MovieListViewController.h"

@interface MovieCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *movieTitleLabel;
@property (nonatomic, weak) IBOutlet UILabel *movieSynopsisLabel;

@end
