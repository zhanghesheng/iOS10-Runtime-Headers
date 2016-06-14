/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKMatchmakerExtensionHostContext : GKExtensionHostContext <GKMatchmakerHostProtocol, GKMatchmakerServiceProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) GKGame *game;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)applicationWillEnterForeground;
- (void)cancelMatching;
- (void)cancelPendingInviteToPlayer:(id)arg1;
- (id)extensionObjectProxy;
- (void)finishWithError:(id)arg1;
- (void)inviterCancelled;
- (void)remoteViewControllerIsCanceling;
- (void)sendData:(id)arg1;
- (void)setAcceptedInviteInternal:(id)arg1;
- (void)setAutomatchFailedWithError:(id)arg1;
- (void)setAutomatchPlayerCount:(long long)arg1;
- (void)setBrowsingForNearbyPlayers:(bool)arg1;
- (void)setDefaultInvitationMessage:(id)arg1;
- (void)setExistingPlayers:(id)arg1;
- (void)setFailedWithError:(id)arg1;
- (void)setHosted:(bool)arg1;
- (void)setInvitesFailedWithError:(id)arg1;
- (void)setMatchRequestInternal:(id)arg1;
- (void)setNearbyPlayer:(id)arg1 reachable:(bool)arg2;
- (void)setPlayer:(id)arg1 connected:(bool)arg2;
- (void)setPlayer:(id)arg1 responded:(long long)arg2;
- (void)setPlayer:(id)arg1 sentData:(id)arg2;
- (void)setShareInvitees:(id)arg1;
- (void)shareMatchWithRequest:(id)arg1 handler:(id /* block */)arg2;
- (void)startMatchingWithRequest:(id)arg1;

@end