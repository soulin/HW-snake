//
//  SettingLayer.h
//  Snake
//
//  Created by ddling on 13-3-26.
//  Copyright 2013年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface SettingLayer : CCLayer {
    CCMenuItemToggle *musicBtn;
}

+ (CCScene *)scene;

@end
