//
//  SGG_SpineBone.h
//  SpineTesting
//
//  Created by Michael Redig on 2/10/14.
//  Copyright (c) 2014 Secret Game Group LLC. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface SGG_SpineBone : SKNode

@property (nonatomic, assign) CGFloat length;
@property (nonatomic, assign) CGPoint defaultPosition;
@property (nonatomic, assign) CGFloat defaultScaleX;
@property (nonatomic, assign) CGFloat defaultScaleY;
@property (nonatomic, assign) CGFloat defaultRotation;




-(void)debugWithLength;

-(void)setDefaults;
-(void)setToDefaults;

@end
