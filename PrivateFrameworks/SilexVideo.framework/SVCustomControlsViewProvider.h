/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVCustomControlsViewProvider : NSObject <SVCustomControlsViewProviding> {
    UIView * _controlsView;
    <SVCustomControlsLayoutGuideProviding> * _layoutGuideProvider;
    <SVVideoViewControllerProviding> * _viewControllerProvider;
}

@property (nonatomic, readonly) UIView *controlsView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVCustomControlsLayoutGuideProviding> *layoutGuideProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoViewControllerProviding> *viewControllerProvider;

- (void).cxx_destruct;
- (id)controlsView;
- (id)initWithViewControllerProvider:(id)arg1 layoutGuideProvider:(id)arg2;
- (id)layoutGuideProvider;
- (id)viewControllerProvider;

@end