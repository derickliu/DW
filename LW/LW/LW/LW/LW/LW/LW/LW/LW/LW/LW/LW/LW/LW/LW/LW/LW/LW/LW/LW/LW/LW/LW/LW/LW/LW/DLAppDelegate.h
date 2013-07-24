//
//  DLAppDelegate.h
//  LW
//
//  Created by c5175031 on 7/24/13.
//  Copyright (c) 2013 DerickLiu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DLAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
