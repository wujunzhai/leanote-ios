#import <UIKit/UIKit.h>

@interface WPEditorToolbarButton : UIButton

#pragma mark - Memory warnings support

@property (nonatomic, copy, readwrite) UIColor *normalTintColor;
@property (nonatomic, copy, readwrite) UIColor *selectedTintColor;

@property (nonatomic) BOOL isMarkdown;


#pragma mark - Memory related

/**
 *	@brief		Calling this method makes sure all memory that can be released will be released.
 */
- (void)didReceiveMemoryWarning;

@end
