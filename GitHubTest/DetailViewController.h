//
//  DetailViewController.h
//  GitHubTest
//
//  Created by DolBy on 13-5-8.
//  Copyright (c) 2013年 Duxinfeng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
