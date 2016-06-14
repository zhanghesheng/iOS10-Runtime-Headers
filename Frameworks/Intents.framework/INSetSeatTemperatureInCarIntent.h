/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSetSeatTemperatureInCarIntent : INIntent <INSetSeatTemperatureInCarIntent>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSNumber *enable;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *level;
@property (nonatomic, readonly) long long relativeLevelSetting;
@property (nonatomic, readonly) long long seat;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long temperatureMode;

- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1;
- (id)_typedBackingStore;
- (id)enable;
- (id)initWithEnable:(id)arg1 seat:(long long)arg2 temperatureMode:(long long)arg3 level:(id)arg4 relativeLevelSetting:(long long)arg5;
- (id)level;
- (long long)relativeLevelSetting;
- (long long)seat;
- (void)setEnable:(id)arg1;
- (void)setLevel:(id)arg1;
- (void)setRelativeLevelSetting:(long long)arg1;
- (void)setSeat:(long long)arg1;
- (void)setTemperatureMode:(long long)arg1;
- (long long)temperatureMode;

@end