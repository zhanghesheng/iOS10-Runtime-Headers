/* Generated by RuntimeBrowser.
 */

@protocol CRKClassSessionDelegate <NSObject>

@required

- (void)classSession:(CRKClassSession *)arg1 didChangeState:(long long)arg2 previousState:(long long)arg3;
- (void)classSession:(CRKClassSession *)arg1 didConnectWithTransport:(CATTransport *)arg2;
- (void)classSessionDidDisconnect:(CRKClassSession *)arg1;
- (void)classSessionDidInvalidate:(CRKClassSession *)arg1;

@end
