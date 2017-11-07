//
//  PasswordSafeUIDocument.h
//  Strongbox
//
//  Created by Mark on 20/09/2017.
//  Copyright © 2017 Mark McGuill. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PasswordSafeUIDocument : UIDocument

- (instancetype _Nonnull)initWithFileURL:(NSURL * _Nonnull)url NS_DESIGNATED_INITIALIZER;
- (instancetype _Nonnull)initWithData:(NSData* _Nonnull)data fileUrl:(NSURL*_Nonnull)fileUrl NS_DESIGNATED_INITIALIZER;

@property (nonatomic) NSData * _Nonnull data;

@end
