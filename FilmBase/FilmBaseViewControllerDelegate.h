//
//  FilmBaseViewControllerDelegate.h
//  FilmBase
//
//  Created by 董 林 on 12-2-8.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FBGroup : NSObject 
{   
    NSString *strID;
    NSString *strName; 
    NSString *strCategoryID;
    int      nNum;
    NSString *strUrl;
    int      nIsEnd;
    NSString *strQueryDate;
    NSString *strDID;
    int      nRelease;
    int      nUpdate;
    NSString *strDownUrl;
}

@property (nonatomic, retain) NSString *strID;
@property (nonatomic, retain) NSString *strName;
@property (nonatomic, retain) NSString *strCategoryID;
@property int nNum;
@property (nonatomic, retain) NSString *strUrl;
@property int nIsEnd;
@property (nonatomic, retain) NSString *strQueryDate;
@property (nonatomic, retain) NSString *strDID;
@property int nRelease;
@property int nUpdate;
@property (nonatomic, retain) NSString *strDownUrl;

@end

@protocol ShowProductViewControllerDelegate

@end
