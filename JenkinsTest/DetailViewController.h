//
//  DetailViewController.h
//  JenkinsTest
//
//  Created by Nagaraju Varthala on 29/09/17.
//  Copyright © 2017 NeXT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

