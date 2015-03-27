/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray;

@interface SAGetClientState : SABaseClientBoundCommand {
}

@property(copy) NSArray * statesToGet;

+ (id)getClientState;
+ (id)getClientStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setStatesToGet:(id)arg1;
- (id)statesToGet;

@end