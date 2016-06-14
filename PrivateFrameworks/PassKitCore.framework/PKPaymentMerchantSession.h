/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentMerchantSession : NSObject <NSCopying, NSSecureCoding> {
    NSString * _domain;
    unsigned long long  _epochTimestamp;
    NSString * _merchantIdentifier;
    NSString * _nonce;
    NSString * _sessionIdentifier;
}

@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) unsigned long long epochTimestamp;
@property (nonatomic, readonly) NSString *merchantIdentifier;
@property (nonatomic, readonly) NSString *nonce;
@property (nonatomic, readonly) NSString *sessionIdentifier;

+ (id)paymentMerchantSessionWithProtobuf:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)epochTimestamp;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithMerchantIdentifier:(id)arg1 sessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(unsigned long long)arg4 domain:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPaymentMerchantSession:(id)arg1;
- (id)merchantIdentifier;
- (id)nonce;
- (id)protobuf;
- (id)sessionIdentifier;
- (bool)supportsURL:(id)arg1;

@end