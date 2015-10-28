/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKQuantity : _DKObject <_DKHasComparableValue, _DKHasObjectType, _DKHasPrimaryValue> {
    double _doubleValue;
    _DKQuantityType *_quantityType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property double doubleValue;
@property (readonly) unsigned int hash;
@property (retain) _DKQuantityType *quantityType;
@property (readonly) Class superclass;

+ (id)entityName;
+ (id)quantityWithDouble:(double)arg1 type:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (int)compareValue:(id)arg1;
- (BOOL)copyFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2;
- (BOOL)copyToManagedObject:(id)arg1;
- (id)description;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDouble:(double)arg1 type:(id)arg2;
- (id)objectType;
- (id)primaryValue;
- (id)quantityType;
- (void)setDoubleValue:(double)arg1;
- (void)setQuantityType:(id)arg1;
- (double)valueDouble;
- (long long)valueInteger;

@end