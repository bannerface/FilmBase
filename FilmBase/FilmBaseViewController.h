//
//  FilmBaseViewController.h
//  FilmBase
//
//  Created by Jian Gao on 12-2-8.
//  Copyright 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FilmBaseViewControllerDelegate.h"

@interface FilmBaseViewController : UIViewController<FilmBaseViewControllerDelegate>
{
    PLSqliteDatabase        * dbPointer;
    
}

-(BOOL)SetupDataBase;
-(void)CloseDataBase;

-(id<PLResultSet>) GetData:(NSString *)strSQLCommand;

@end
