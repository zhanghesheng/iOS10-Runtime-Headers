/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessoryProfile : NSObject <HMFDumpState, HMFLogging, HMFMessageReceiver> {
    HMDAccessory * _accessory;
    NSArray * _encapsulatingServices;
    HMFMessageDispatcher * _msgDispatcher;
    NSUUID * _uniqueIdentifier;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *encapsulatingServices;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)accessory;
- (id)dumpState;
- (id)encapsulatingServices;
- (id)initWithWorkQueue:(id)arg1 uuid:(id)arg2 accessory:(id)arg3 services:(id)arg4 msgDispatcher:(id)arg5;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (void)registerForMessages;
- (void)setMsgDispatcher:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)uniqueIdentifier;
- (id)workQueue;

@end
