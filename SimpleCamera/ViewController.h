//
//  ViewController.h
//  SimpleCamera
//
//  Created by Jeff Lutzenberger on 5/28/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MobileCoreServices/UTCoreTypes.h>

@interface ViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    BOOL newMedia;
}

@property (weak, nonatomic) IBOutlet UIImageView *imageView;
- (IBAction)cameraButtonClick:(id)sender;
- (IBAction)cameraRollButtonClick:(id)sender;

@end
