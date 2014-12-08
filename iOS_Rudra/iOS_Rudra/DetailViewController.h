//
//  DetailViewController.h
//  iOS_Rudra
//
//  Created by Lalith Kothapalli Venkata Naga on 12/7/14.
//  Copyright (c) 2014 ___STARPATHIT___. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
