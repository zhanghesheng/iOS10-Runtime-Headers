/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADAdSpace : NSObject <ADAdSpaceRemoteViewControllerDelegate, ADAdSpace_RPC, ADPrivacyViewControllerInternalDelegate, UIViewControllerTransitioningDelegate> {
    bool  _actionViewControllerReadyForPresentation;
    bool  _actionViewControllerWantsDismissal;
    NSDictionary * _adToLoad;
    NSString * _advertisingSection;
    NSString * _authenticationUserName;
    NSSet * _context;
    ADAdSpaceRemoteViewController * _creativeViewController;
    ADAdActionPublicAttributes * _currentActionPublicAttributes;
    ADAdImpressionPublicAttributes * _currentAdImpressionPublicAttributes;
    bool  _fastVisibilityContextIsFeed;
    NSString * _identifier;
    UIImageView * _imageView;
    bool  _isModalInterstitial;
    double  _lastSlowCheck;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _placeholderImageRect;
    _ADRemoteViewController * _portraitOnlyViewController;
    ADPrivacyViewController * _privacyViewController;
    <ADAdRecipient> * _recipient;
    _ADRemoteViewController * _remoteViewController;
    _UIAsyncInvocation * _remoteViewControllerRequestCancelationInvocation;
    bool  _requiresFastVisibiltyTestOnly;
    NSURL * _serverURL;
    bool  _serviceAdSpaceRequestInProgress;
    bool  _shouldPresentActionViewControllerWhenReady;
    long long  _visibility;
    bool  _visibilityCheckScheduled;
}

@property (nonatomic) bool actionViewControllerReadyForPresentation;
@property (nonatomic) bool actionViewControllerWantsDismissal;
@property (nonatomic, retain) NSDictionary *adToLoad;
@property (nonatomic, copy) NSString *advertisingSection;
@property (nonatomic, copy) NSString *authenticationUserName;
@property (nonatomic, readonly) ADAdSpaceConfiguration *configuration;
@property (nonatomic, readonly) NSString *connectionAssertionIdentifier;
@property (nonatomic, copy) NSSet *context;
@property (nonatomic, retain) ADAdSpaceRemoteViewController *creativeViewController;
@property (nonatomic, retain) ADAdActionPublicAttributes *currentActionPublicAttributes;
@property (nonatomic, retain) ADAdImpressionPublicAttributes *currentAdImpressionPublicAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fastVisibilityContextIsFeed;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) bool isModalInterstitial;
@property (nonatomic) double lastSlowCheck;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } placeholderImageRect;
@property (nonatomic, retain) _ADRemoteViewController *portraitOnlyViewController;
@property (nonatomic, retain) ADPrivacyViewController *privacyViewController;
@property (nonatomic, readonly) <ADAdRecipient> *recipient;
@property (nonatomic, retain) _ADRemoteViewController *remoteViewController;
@property (nonatomic, retain) _UIAsyncInvocation *remoteViewControllerRequestCancelationInvocation;
@property (nonatomic) bool requiresFastVisibiltyTestOnly;
@property (nonatomic, copy) NSURL *serverURL;
@property (nonatomic, readonly) <ADSAdSpace_RPC><NSObject> *serviceAdSpace;
@property (nonatomic) bool serviceAdSpaceRequestInProgress;
@property (nonatomic) bool shouldPresentActionViewControllerWhenReady;
@property (readonly) Class superclass;
@property (nonatomic) long long visibility;
@property (nonatomic) bool visibilityCheckScheduled;

+ (long long)_modalTansitionStyleForTransitionType:(int)arg1;

- (void)_clientApplicationDidBecomeActive;
- (void)_clientApplicationDidEnterBackground;
- (void)_closeConnectionIfNecessary;
- (void)_considerPresentingActionViewController;
- (bool)_contextForFeldsparClientIsFeed:(id)arg1;
- (void)_presentPrivacyViewController;
- (void)_remote_actionViewControllerReadyForPresentation;
- (void)_remote_adImpressionDidLoadWithPublicAttributes:(id)arg1;
- (void)_remote_changeBannerViewState:(int)arg1;
- (void)_remote_close;
- (void)_remote_creativeDidFailWithError:(id)arg1;
- (void)_remote_creativeWillLoad;
- (void)_remote_dismissPortraitOnlyViewController;
- (void)_remote_dismissViewController;
- (void)_remote_dismissViewControllerWithCompletionHandler:(id /* block */)arg1;
- (void)_remote_openURL:(id)arg1;
- (void)_remote_pauseBannerMedia;
- (void)_remote_requestPortraitOnlyViewController;
- (void)_remote_requestPresentationForMRAIDOpenEvent;
- (void)_remote_requestViewControllerWithClassName:(id)arg1 forAdSpaceControllerWithIdentifier:(id)arg2;
- (void)_remote_resumeBannerMedia;
- (void)_remote_setRequiresFastVisibilityTestOnly:(bool)arg1;
- (void)_remote_updateViewControllerSupportedOrientations:(unsigned long long)arg1;
- (void)_requestServiceAdSpace;
- (void)_updateAllProperties;
- (bool)actionViewControllerReadyForPresentation;
- (bool)actionViewControllerWantsDismissal;
- (void)adPrivacyViewControllerDidAppear:(id)arg1;
- (void)adPrivacyViewControllerDidDismiss:(id)arg1;
- (void)adPrivacyViewControllerDidLinkOut:(id)arg1;
- (void)adPrivacyViewControllerDidLoad:(id)arg1;
- (void)adPrivacyViewControllerDidRenderTransparency:(id)arg1;
- (void)adSpaceRemoteViewControllerDidTerminateWithError:(id)arg1;
- (id)adToLoad;
- (id)advertisingSection;
- (id)authenticationUserName;
- (void)cancelBannerViewAction;
- (void)close;
- (id)configuration;
- (id)connectionAssertionIdentifier;
- (id)context;
- (id)creativeViewController;
- (id)currentActionPublicAttributes;
- (id)currentAdImpressionPublicAttributes;
- (void)dealloc;
- (id)description;
- (void)determineActionForTapAtLocation:(struct CGPoint { double x1; double x2; })arg1 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 completeHandler:(id /* block */)arg3;
- (void)executeBannerViewActionFrom:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withTapLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)fastVisibilityContextIsFeed;
- (id)identifier;
- (id)imageView;
- (id)initForRecipient:(id)arg1;
- (void)installCreativeView;
- (void)interstitialWasRemovedFromSuperview;
- (bool)isModalInterstitial;
- (double)lastSlowCheck;
- (void)loadAd:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })placeholderImageRect;
- (id)portraitOnlyViewController;
- (id)privacyViewController;
- (id)recipient;
- (void)refuseBannerViewAction;
- (id)remoteViewController;
- (id)remoteViewControllerRequestCancelationInvocation;
- (bool)remoteViewControllerShouldAnimate:(id)arg1;
- (bool)requiresFastVisibiltyTestOnly;
- (id)serverURL;
- (id)serviceAdSpace;
- (bool)serviceAdSpaceRequestInProgress;
- (void)setActionViewControllerReadyForPresentation:(bool)arg1;
- (void)setActionViewControllerWantsDismissal:(bool)arg1;
- (void)setAdSpaceType:(int)arg1;
- (void)setAdToLoad:(id)arg1;
- (void)setAdvertisingSection:(id)arg1;
- (void)setAuthenticationUserName:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCreativeViewController:(id)arg1;
- (void)setCurrentActionPublicAttributes:(id)arg1;
- (void)setCurrentAdImpressionPublicAttributes:(id)arg1;
- (void)setFastVisibilityContextIsFeed:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setIsModalInterstitial:(bool)arg1;
- (void)setLastSlowCheck:(double)arg1;
- (void)setPlaceholderImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPortraitOnlyViewController:(id)arg1;
- (void)setPrivacyViewController:(id)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setRemoteViewControllerRequestCancelationInvocation:(id)arg1;
- (void)setRequiresFastVisibiltyTestOnly:(bool)arg1;
- (void)setServerURL:(id)arg1;
- (void)setServiceAdSpaceRequestInProgress:(bool)arg1;
- (void)setShouldPresentActionViewControllerWhenReady:(bool)arg1;
- (void)setVisibility:(long long)arg1;
- (void)setVisibilityCheckScheduled:(bool)arg1;
- (bool)shouldPresentActionViewControllerWhenReady;
- (void)showAdTransparency;
- (void)showPlaceholderImage:(bool)arg1;
- (void)updateCreativeSnapshotImageWithDebugHighlight:(bool)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)updateVisibility;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (long long)visibility;
- (bool)visibilityCheckScheduled;

@end
