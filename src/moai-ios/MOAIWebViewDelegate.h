//----------------------------------------------------------------//
// Copyright (c) 2010-2011 Zipline Games, Inc. 
// All Rights Reserved. 
// http://getmoai.com
//----------------------------------------------------------------//

#import <UIKit/UIKit.h>
#import <moai-ios/MOAIWebViewIOS.h>

//================================================================//
// MOAIWebViewDelegate
//================================================================//
@interface MOAIWebViewDelegate : NSObject < UIWebViewDelegate > {
@private
	MOAIWebViewIOS*		mMOAIWebView;
}

	@property ( readwrite, assign ) MOAIWebViewIOS*	mMOAIWebView;

	-( void	)			doneButtonPressed		:( id )sender;

@end

