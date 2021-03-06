//
//  Director.h
//  BPDemo
//
//  Created by Sun Shijie on 2018/10/5.
//  Copyright © 2018年 Sunshijie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Builder.h"

@interface Director : NSObject

- (void)constructPhoneWithBuilder:(Builder *)builder;

- (Phone *)obtainPhone;

@end
