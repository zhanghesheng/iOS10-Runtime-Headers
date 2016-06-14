/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUTableCellContentView : UIView <SUCellConfigurationView> {
    int  _clipCorners;
    UIBezierPath * _clipPath;
    SUCellConfiguration * _configuration;
    unsigned int  _drawAsDisabled;
    unsigned int  _highlighted;
    unsigned int  _highlightsOnlyContentView;
    UIView * _overlayView;
    NSMutableArray * _subviews;
    unsigned int  _useSubviewLayout;
}

@property (nonatomic) int clipCorners;
@property (nonatomic, retain) SUCellConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDeleteConfirmationVisible, nonatomic) bool deleteConfirmationVisisble;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool drawAsDisabled;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) bool highlightsOnlyContentView;
@property (readonly) Class superclass;
@property (nonatomic) bool usesSubviews;

- (id)_clipPath;
- (id)_clippedImageForImage:(id)arg1;
- (void)_reloadSubviewAlphasAnimated:(bool)arg1;
- (void)_reloadSubviewsForConfiguration;
- (void)_removeSubviewsForConfiguration;
- (void)_startUsingSubviewLayout;
- (void)_stopUsingSubviewLayout;
- (void)_updateDisabledStyleForSubviews;
- (int)clipCorners;
- (id)configuration;
- (void)dealloc;
- (bool)drawAsDisabled;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)highlightsOnlyContentView;
- (bool)isDeleteConfirmationVisible;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (void)reloadView;
- (void)setClipCorners:(int)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDeleteConfirmationVisisble:(bool)arg1;
- (void)setDrawAsDisabled:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightsOnlyContentView:(bool)arg1;
- (void)setUsesSubviews:(bool)arg1;
- (void)setUsesSubviews:(bool)arg1 animated:(bool)arg2;
- (bool)usesSubviews;

@end