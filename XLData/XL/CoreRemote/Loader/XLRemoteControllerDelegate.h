//
//  XLRemoteControllerDelegate.h
//  XLData ( https://github.com/xmartlabs/XLData )
//
//  Copyright (c) 2015 Xmartlabs ( http://xmartlabs.com )
//
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

@import Foundation;
#import <AFNetworking/AFNetworking.h>
#import "XLDataLoader.h"

typedef NS_OPTIONS(NSUInteger, XLRemoteControllerOptions) {
    XLRemoteDataStoreControllerOptionSupportRefreshControl = 1 << 1,
    XLRemoteDataStoreControllerOptionPagingEnabled = 1 << 2,
    XLRemoteDataStoreControllerOptionShowNetworkReachability = 1 << 3,
    XLRemoteDataStoreControllerOptionShowNetworkConnectivityErrors = 1 << 4,
    XLRemoteDataStoreControllerOptionsFetchOnlyOnce = 1 << 5,
    XLRemoteDataStoreControllerOptionDefault = XLRemoteDataStoreControllerOptionSupportRefreshControl | XLRemoteDataStoreControllerOptionPagingEnabled | XLRemoteDataStoreControllerOptionShowNetworkReachability
};

#import "XLDataLoader.h"

@protocol XLRemoteControllerDelegate

@required
-(void)dataController:(UIViewController *)controller updateDataWithDataLoader:(XLDataLoader *)dataLoader;

-(void)dataController:(UIViewController *)controller showNoInternetConnection:(BOOL)animated;
-(void)dataController:(UIViewController *)controller hideNoInternetConnection:(BOOL)animated;

@end

