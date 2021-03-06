/* Generated by RuntimeBrowser.
 */

@protocol NTKComplicationPickerViewDataSource <NSObject>

@required

- (void)complicationPickerView:(NTKComplicationPickerView *)arg1 getDisplay:(id*)arg2 controller:(id*)arg3 forComplication:(NTKComplication *)arg4;
- (NTKComplicationLayoutRule *)complicationPickerView:(NTKComplicationPickerView *)arg1 layoutRuleForComplicationDisplay:(NTKComplicationDisplayWrapperView *)arg2;

@optional

- (UIView<NTKEditOptionContainerView> *)customEditOptionContainerViewForComplicationPickerView:(NTKComplicationPickerView *)arg1;

@end
