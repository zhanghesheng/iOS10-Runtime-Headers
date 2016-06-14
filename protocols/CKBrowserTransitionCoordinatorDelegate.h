/* Generated by RuntimeBrowser.
 */

@protocol CKBrowserTransitionCoordinatorDelegate <NSObject>

@optional

- (void)browserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1 currentConsumerDidChange:(long long)arg2;
- (void)browserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1 expandedStateDidChange:(bool)arg2 withReason:(long long)arg3;
- (void)browserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1 willUnloadBrowser:(UIViewController<CKBrowserViewControllerProtocol> *)arg2;
- (void)browserTransitionCoordinatorDidCollapseOrDismiss:(CKBrowserTransitionCoordinator *)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorDidTransitionOrPresentToFullscreen:(CKBrowserTransitionCoordinator *)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorWillCollapseOrDismiss:(CKBrowserTransitionCoordinator *)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorWillTransitionOrPresentToFullscreen:(CKBrowserTransitionCoordinator *)arg1 withReason:(long long)arg2;
- (UIView *)entryViewSnapshotForBrowserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1;

@end