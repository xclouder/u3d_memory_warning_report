//
//  MemoryWarningReporter.h
//  MemoryWarningReporterIOS
//
//  Created by xclouder on 2017/8/1.
//  Copyright © 2017年 xclouder. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MemoryWarningReporter : NSObject

+ (instancetype)instance;

- (void)report;

@end
