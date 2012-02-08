//
//  FilmBaseAppDelegate.h
//  FilmBase
//
//  Created by Jian Gao on 12-2-8.
//  Copyright 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FilmBaseViewController;

@interface FilmBaseAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet FilmBaseViewController *viewController;

@end
