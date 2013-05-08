//
//  MasterViewController.h
//  GitHubTest
//
//  Created by DolBy on 13-5-8.
//  Copyright (c) 2013年 Duxinfeng. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
