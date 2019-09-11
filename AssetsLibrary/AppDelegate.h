//
//  AppDelegate.h
//  AssetsLibrary
//
//  Created by headline on 4/9/2019.
//  Copyright © 2019 headline. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

