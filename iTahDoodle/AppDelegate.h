//
//  AppDelegate.h
//  iTahDoodle
//
//  Created by Tony Rizzo on 5/1/18.
//  Copyright © 2018 Koteray. All rights reserved.
//

#import <UIKit/UIKit.h>

// Declare a helper function that you will use to get a path
// to the locaiton on disk where you can save the to-do list
NSString *BNRDocPath(void);

@interface AppDelegate : UIResponder <UIApplicationDelegate, UITableViewDataSource>

@property (strong, nonatomic) UIWindow *window;

@property (nonatomic) UITableView *taskTable;
@property (nonatomic) UITextField *taskField;
@property (nonatomic) UIButton *insertButton;

@property (nonatomic) NSMutableArray *tasks;

- (void)addTask: (id)sender;

@end

