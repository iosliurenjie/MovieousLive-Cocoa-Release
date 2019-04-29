//
//  MovieousFaceBeautyCaptureEffect.h
//  MovieousBase
//
//  Created by Chris Wang on 2019/4/9.
//  Copyright © 2019 Movieous Team. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MovieousBase/MovieousCaptureEffect.h>

/**
 * 美颜采集特效。
 */
@interface MovieousFaceBeautyCaptureEffect : NSObject
<
MovieousCaptureEffect
>

/**
 * 美颜强度，范围 0~1。
 */
@property (nonatomic, assign) CGFloat beautyLevel;

/**
 * 美白强度，范围 0~1。
 */
@property (nonatomic, assign) CGFloat brightLevel;

/**
 * 红润强度，范围 0~1。
 */
@property (nonatomic, assign) CGFloat toneLevel;

/**
 * 用另一个 MovieousFaceBeautyCaptureEffect 对象初始化此 MovieousFaceBeautyCaptureEffect。
 *
 * @param faceBeautyCaptureEffect 用于初始化的另一个 MovieousFaceBeautyCaptureEffect 对象。
 *
 * @return 初始化完成的 MovieousFaceBeautyCaptureEffect 对象。
 */
- (instancetype)initWithFaceBeautyCaptureEffect:(MovieousFaceBeautyCaptureEffect *)faceBeautyCaptureEffect;

@end
