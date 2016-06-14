/* Generated by RuntimeBrowser.
 */

@protocol BRCUserNotifier <NSObject>

@required

- (void)close;
- (void)moveToFront;
- (void)showCompletionFallbackWithUserReplyBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)showErrorApplicationNotInstalledForShareMetadata:(void *)arg1 userReplyBlock:(void *)arg2; // needs 2 arg types, found 8: CKShareMetadata *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, void*
- (void)showErrorApplicationProfileDisabledForShareURL:(void *)arg1 userReplyBlock:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)showErrorDeviceOfflineForShareURL:(void *)arg1 userReplyBlock:(void *)arg2; // needs 2 arg types, found 6: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)showErrorItemIsNoLongerSharedForShareURL:(void *)arg1 userReplyBlock:(void *)arg2; // needs 2 arg types, found 6: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)showErrorParticipantLimitReachedForShareURL:(void *)arg1 userReplyBlock:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)showErrorSetupiCloudForShareURL:(void *)arg1 userReplyBlock:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, void*
- (void)showErrorTurnOniCloudDriveForShareURL:(void *)arg1 userReplyBlock:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, void*
- (void)showErroriCloudNotReachableForShareURL:(void *)arg1 userReplyBlock:(void *)arg2; // needs 2 arg types, found 6: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)showGenericErrorForURL:(void *)arg1 userReplyBlock:(void *)arg2; // needs 2 arg types, found 6: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)showShareConnectingUndeterminedProgressWithUserCancelReplyBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)showShareDownloadingUndeterminedProgressWithUserCancelReplyBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)showShareOpenDialogForShareMetadata:(void *)arg1 session:(void *)arg2 userReplyBlock:(void *)arg3; // needs 3 arg types, found 9: CKShareMetadata *, BRCAccountSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)updateUndeterminedProgressCancelBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end