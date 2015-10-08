// A0ServiceViewModel.h
//
// Copyright (c) 2015 Auth0 (http://auth0.com)
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

#import <Foundation/Foundation.h>

@class A0Connection, A0Strategy;

@interface A0ServiceViewModel : NSObject

@property (readonly, strong, nonatomic) NSString *name;
@property (readonly, strong, nonatomic) A0Connection *connection;

@property (readonly, strong, nonatomic) UIColor *selectedBackgroundColor;
@property (readonly, strong, nonatomic) UIColor *backgroundColor;
@property (readonly, strong, nonatomic) UIColor *foregroundColor;
@property (readonly, strong, nonatomic) NSString *iconCharacter;
@property (readonly, strong, nonatomic) NSString *title;

- (instancetype)initWithStrategy:(A0Strategy *)strategy connection:(A0Connection *)connection;

- (void)applyTheme:(NSDictionary *)theme;

@end

@interface A0ServiceViewModel (Builder)
+ (NSArray *)servicesFromStrategy:(A0Strategy *)strategy;
+ (NSArray *)servicesFromStrategies:(NSArray *)strategies;
@end

@interface A0ServiceViewModel (ThemeLoad)
+ (NSDictionary *)loadThemeInformation;
@end