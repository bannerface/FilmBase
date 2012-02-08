//
//  FilmBaseViewController.m
//  FilmBase
//
//  Created by Jian Gao on 12-2-8.
//  Copyright 2012年 __MyCompanyName__. All rights reserved.
//

#import "FilmBaseViewController.h"

@implementation FilmBaseViewController

- (void)didReceiveMemoryWarning
{
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
    
    // Release any cached data, images, etc that aren't in use.
}

#pragma mark - View lifecycle

// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad
{
    [super viewDidLoad];
}

- (void)viewDidUnload
{
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    // Return YES for supported orientations
    return YES;
}

-(BOOL)SetupDataBase
{
    [self CloseDataBase];
    
    NSLog(@"%@",NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES));
	NSString *documentPath = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0];
	NSString *realPath = [documentPath stringByAppendingPathComponent:@"FlimBase.sqlite"];
        
    dbPointer = [[PLSqliteDatabase alloc] initWithPath:realPath];
	[dbPointer open];
    return YES;
}

-(void)CloseDataBase
{
    if (dbPointer) {
		[dbPointer close];
		dbPointer = NULL;
	}
}

-(id<PLResultSet>) GetData:(NSString *)strSQLCommand
{
    id<PLResultSet> rs = nil;
    if (dbPointer)
    {
        rs = [dbPointer executeQuery:strSQLCommand];
    }
    return rs;
}


@end
