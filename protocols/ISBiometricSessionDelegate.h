/* Generated by RuntimeBrowser.
 */

@protocol ISBiometricSessionDelegate <NSObject>

@optional

- (void)sender:(id)arg1 didFallbackToPassword:(bool)arg2;
- (void)sender:(id)arg1 shouldContinueTouchIDSession:(bool)arg2;
- (void)sender:(id)arg1 willSendChallenge:(NSString *)arg2 andSignature:(NSString *)arg3 isExtendedAction:(bool)arg4 isPayment:(bool)arg5 additionalHeaders:(NSDictionary *)arg6;

@end
