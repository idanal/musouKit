//
//  ViewController.h
//  MusouSample
//
//  Created by danal.luo on 17/5/13.
//  Copyright © 2017年 danal. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface ViewController : UIViewController
@property (nonatomic, weak) IBOutlet UILabel *label;
@property (nonatomic, weak) IBOutlet UIImageView *imageView;
@end


@interface User : NSObject
@property (nonatomic, strong) NSString *name;
@property (nonatomic, assign) NSInteger age;
@property (nonatomic, strong) NSMutableArray *friends;
@end
