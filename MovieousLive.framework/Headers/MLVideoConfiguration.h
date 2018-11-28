//
//  MLVideoConfiguration.h
//  MovieousLive
//
//  Created by Chris Wang on 2018/8/29.
//  Copyright © 2018 Movieous Team. All rights reserved.
//

#import <AVFoundation/AVFoundation.h>
#import "MLTypeDefines.h"

@interface MLVideoConfiguration : NSObject
<
NSCopying
>

/*!
 * Whether to enable video broadcast
 * Default to YES
 */
@property (nonatomic, assign) BOOL enable;

/*!
 * The input source for video
 */
@property (nonatomic, assign) MLVideoSource source;

/*!
 * Number of maximum frames per seconds captured by the camera
 * Default to 30
 */
@property (nonatomic, assign) NSUInteger frameRate;

/*!
 * Turn mirrorFrontPreview means preview for front camera will be mirrored
 * Default to YES
 */
@property (nonatomic, assign) BOOL mirrorFrontPreview;

/*!
 * Turn mirrorBackPreview means preview for back camera will be mirrored
 * Default to NO
 */
@property (nonatomic, assign) BOOL mirrorBackPreview;

/*!
 * Turn mirrorFrontStream means stream broadcasted for front camera will be mirrored
 * Default to NO
 */
@property (nonatomic, assign) BOOL mirrorFrontStream;

/*!
 * Turn mirrorBackStream means stream broadcasted for back camera will be mirrored
 * Default to NO
 */
@property (nonatomic, assign) BOOL mirrorBackStream;

/*!
 * You may use an AVCaptureSessionPreset to set the resolution for camera output data
 * Default to AVCaptureSessionPresetHigh
 */
@property (nonatomic, copy) AVCaptureSessionPreset cameraResolution;

/*!
 * Indicates the physical position of camera on the system.
 * Default to AVCaptureDevicePositionFront
 */
@property (nonatomic, assign) AVCaptureDevicePosition cameraPosition;

@property (nonatomic, assign) AVCaptureVideoOrientation cameraOrientation;

/*!
 * The profile/level constants are specific to H.264 encoding, you can refer to https://en.wikipedia.org/wiki/H.264/MPEG-4_AVC to find more detailed information about this property
 * Default to AVVideoProfileLevelH264HighAutoLevel
 */
@property (nonatomic, copy) NSString *profileLevel;

/*!
 * @abstract Size of broadcasted video
 *
 * @discussion What need to pay attention to is that this size is encoded video stream size, not necessarily be the size of camera output video. When the aspect ratios of camera output and encoded video are not equal, encoder will use AVVideoScalingModeResizeAspectFill as the scaling mode.
 * Default to (640, 480)
 */
@property (nonatomic, assign) CGSize  size;

/*!
 * The max GOP for video encoding, refer to https://en.wikipedia.org/wiki/Group_of_pictures
 * Default to 3 times frameRate
 */
@property (nonatomic, assign) NSUInteger gop;

/*!
 * Average bitrate for the encoded video
 * Default to 1 mbps
 */
@property (nonatomic, assign) NSUInteger averageBitRate;

/*!
 * The default configuration
 * @return The initialized default configuration
 */
+ (instancetype)defaultConfiguration;

@end
