/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroMovieDisplayContainerViewController : UIViewController <MiroPlayerControlling, PHAirPlayControllerContentProvider, PHAirPlayControllerRouteObserver> {
    MiroAutoEditor * _autoEditor;
    AVPlayer * _avPlayer;
    UIView * _containerView;
    <MiroMovieDisplayContainerViewControllerDelegate> * _delegate;
    bool  _isAirPlayActive;
    MiroMoodAndPosterQueue * _moodPosterQueue;
    MovieController * _movieController;
    MiroMovieView * _movieDisplayView;
    UIImageView * _posterImageView;
    id  _proVideoPeriodicCaller;
    RoundProgressView * _progressView;
    NSString * _savedAudioCategory;
    UIImageView * _secondaryPosterImageView;
}

@property (nonatomic, retain) MiroAutoEditor *autoEditor;
@property (nonatomic, retain) AVPlayer *avPlayer;
@property (nonatomic, retain) UIView *containerView;
@property (nonatomic, readonly) int currentFrameTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MiroMovieDisplayContainerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAirPlayActive;
@property (nonatomic, retain) MiroMoodAndPosterQueue *moodPosterQueue;
@property (nonatomic, retain) MovieController *movieController;
@property (nonatomic, retain) MiroMovieView *movieDisplayView;
@property (getter=isPlaying, nonatomic) bool playing;
@property (nonatomic, retain) UIImageView *posterImageView;
@property (nonatomic, retain) id proVideoPeriodicCaller;
@property (nonatomic, retain) RoundProgressView *progressView;
@property (nonatomic, retain) NSString *savedAudioCategory;
@property (nonatomic, retain) UIImageView *secondaryPosterImageView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_addPlaceholderViewToParentView:(id)arg1;
- (void)_makeAudioCategoryPlayback;
- (void)_removePlaceholderViewFromParentView:(id)arg1;
- (void)_restoreAudioCategory;
- (void)_saveAudioCategory;
- (void)addProVideoTimeObserver;
- (void)airPlayControllerRouteAvailabilityChanged:(id)arg1;
- (void)airPlayControllerScreenAvailabilityChanged:(id)arg1;
- (id)airPlayScreenController;
- (id)autoEditor;
- (id)avPlayer;
- (void)constrainView:(id)arg1 to16x9BoundedByContainerView:(id)arg2;
- (id)containerView;
- (id)contentViewControllerForAirPlayController:(id)arg1;
- (void)createAVPlayer;
- (int)currentFrameTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentPlayerTime;
- (void)dealloc;
- (id)delegate;
- (void)destroyAVPlayer;
- (void)didReceiveMemoryWarning;
- (void)hidePosterAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)hideProgressAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithAutoEditor:(id)arg1;
- (bool)isAirPlayActive;
- (bool)isPlayerAtEndOfProject;
- (bool)isPlaying;
- (id)moodPosterQueue;
- (id)movieController;
- (id)movieDisplayView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)player;
- (bool)playerItemExists;
- (float)playerRate;
- (id)posterImageView;
- (id)proVideoPeriodicCaller;
- (id)progressView;
- (void)registerAsAirPlayProvider;
- (void)registerWithAutoEditor:(id)arg1;
- (void)removeProVideoTimeObserver;
- (id)savedAudioCategory;
- (id)secondaryPosterImageView;
- (void)setAutoEditor:(id)arg1;
- (void)setAvPlayer:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setCurrentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setCurrentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 completionHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setIsAirPlayActive:(bool)arg1;
- (void)setMoodPosterQueue:(id)arg1;
- (void)setMovieController:(id)arg1;
- (void)setMovieDisplayView:(id)arg1;
- (void)setPlayerRate:(float)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setPosterImageView:(id)arg1;
- (void)setProVideoPeriodicCaller:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgressView:(id)arg1;
- (void)setSavedAudioCategory:(id)arg1;
- (void)setSecondaryPosterImageView:(id)arg1;
- (void)showPosterAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)showPosterAsBackgroundAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)showProgressAnimated:(bool)arg1;
- (void)signalCustomCompositorScheduler;
- (void)signalCustomCompositorScheduler:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 playerRate:(float)arg2;
- (void)teardownMovieController;
- (void)unRegisterAutoEditor;
- (void)unregisterAsAirPlayProvider;
- (void)updateContent;
- (void)updateMovieController:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)updateMovieControllerForProject:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)updatePosterImagesForMemory:(id)arg1;
- (void)updatePosterImagesForMoodPercent:(float)arg1 withMemory:(id)arg2;
- (void)viewDidLoad;
- (bool)wantsContentVisibleAfterUnregisteringWithAirPlayController:(id)arg1;

@end