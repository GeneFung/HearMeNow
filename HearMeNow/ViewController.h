//
//  ViewController.h
//  HearMeNow
//
//  Created by FiYUkI on 7/10/14.
//  Copyright (c) 2014 ___FULLUSERNAME___. All rights reserved.
//

#import <UIKit/UIKit.h>
@import AVFoundation;

@interface ViewController : UIViewController<AVAudioPlayerDelegate,AVAudioRecorderDelegate>
@property (weak, nonatomic) IBOutlet UIButton *recordButton;
@property (weak, nonatomic) IBOutlet UIButton *playButton;
- (IBAction)recordPressed:(id)sender;
- (IBAction)playPressed:(id)sender;

@end
