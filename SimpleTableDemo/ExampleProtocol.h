//
//  ExampleProtocol.h
//  SimpleTableDemo
//
//  Created by Luis Rollon Gordo on 13/10/16.
//  Copyright © 2016 EfectoApple. All rights reserved.
//

@protocol ExampleProtocol <NSObject>

@property (weak) numberOfSegments;

@required

- (CGFloat)sizeOfSegmentAtIndex:(NSUInteger)segmentIndex;
- (NSString *)titleForSegmentAtIndex:(NSUInteger)segmentIndex;

@optional

- (UIColor *)colorForSegmentAtIndex:(NSUInteger)segmentIndex;

@end
