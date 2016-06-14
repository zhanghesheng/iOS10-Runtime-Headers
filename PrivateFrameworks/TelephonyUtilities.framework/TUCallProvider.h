/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallProvider : NSObject <NSCopying, NSSecureCoding> {
    NSString * _URLScheme;
    unsigned int  _audioSessionID;
    NSString * _bundleIdentifier;
    NSURL * _bundleURL;
    bool  _enabled;
    NSArray * _handoffIdentifiers;
    bool  _hasRestrictionsInRetailEnvironment;
    NSString * _identifier;
    NSString * _localizedName;
    unsigned long long  _maximumCallGroups;
    unsigned long long  _maximumCallsPerCallGroup;
    NSURL * _ringtoneSoundURL;
    bool  _supportsAudioAndVideo;
    bool  _supportsAudioOnly;
    bool  _supportsEmergency;
    bool  _supportsVoicemail;
}

@property (nonatomic, copy) NSString *URLScheme;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSURL *bundleURL;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (getter=isFaceTimeProvider, nonatomic, readonly) bool faceTimeProvider;
@property (nonatomic, copy) NSArray *handoffIdentifiers;
@property (nonatomic) bool hasRestrictionsInRetailEnvironment;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *localizedName;
@property (nonatomic) unsigned long long maximumCallGroups;
@property (nonatomic) unsigned long long maximumCallsPerCallGroup;
@property (nonatomic, copy) NSURL *ringtoneSoundURL;
@property (nonatomic) bool supportsAudioAndVideo;
@property (nonatomic) bool supportsAudioOnly;
@property (nonatomic) bool supportsEmergency;
@property (nonatomic) bool supportsVoicemail;
@property (getter=isTelephonyProvider, nonatomic, readonly) bool telephonyProvider;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URLScheme;
- (unsigned int)audioSessionID;
- (id)bundle;
- (id)bundleIdentifier;
- (id)bundleURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handoffIdentifiers;
- (bool)hasRestrictionsInRetailEnvironment;
- (unsigned long long)hash;
- (id)identifier;
- (id)inCallUIBundleIdentifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCallProvider:(id)arg1;
- (bool)isFaceTimeProvider;
- (bool)isSystemProvider;
- (bool)isTelephonyProvider;
- (id)localizedName;
- (unsigned long long)maximumCallGroups;
- (unsigned long long)maximumCallsPerCallGroup;
- (bool)prefersShowingInCallUI;
- (id)ringtoneSoundURL;
- (void)setAudioSessionID:(unsigned int)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleURL:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHandoffIdentifiers:(id)arg1;
- (void)setHasRestrictionsInRetailEnvironment:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setMaximumCallGroups:(unsigned long long)arg1;
- (void)setMaximumCallsPerCallGroup:(unsigned long long)arg1;
- (void)setRingtoneSoundURL:(id)arg1;
- (void)setSupportsAudioAndVideo:(bool)arg1;
- (void)setSupportsAudioOnly:(bool)arg1;
- (void)setSupportsEmergency:(bool)arg1;
- (void)setSupportsVoicemail:(bool)arg1;
- (void)setURLScheme:(id)arg1;
- (bool)supportsAudioAndVideo;
- (bool)supportsAudioOnly;
- (bool)supportsEmergency;
- (bool)supportsShowingInCallUI;
- (bool)supportsVoicemail;

@end