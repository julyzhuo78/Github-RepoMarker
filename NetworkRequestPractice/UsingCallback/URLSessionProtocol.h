//
//  URLSessionProtocol.h
//  NetworkRequestPractice
//
//  Created by Ran Zhuo on 2018-11-29.
//  Copyright © 2018 Ran Zhuo. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol URLSessionProtocol <NSObject>

- (NSURLSessionTask *)dataTaskWithRequest:(NSURLRequest *)urlRequest completionHandler:(void (^)(NSData * _Nullable, NSURLResponse * _Nullable, NSError * _Nullable))completionHandler;

@end 

NS_ASSUME_NONNULL_END
