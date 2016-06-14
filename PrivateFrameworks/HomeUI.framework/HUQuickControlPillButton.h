/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlPillButton : UIButton {
    UIView * _backgroundView;
    UILabel * _buttonLabel;
}

@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, retain) UILabel *buttonLabel;
@property (nonatomic, copy) NSString *buttonText;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (id)backgroundView;
- (id)buttonLabel;
- (id)buttonText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setBackgroundView:(id)arg1;
- (void)setButtonLabel:(id)arg1;
- (void)setButtonText:(id)arg1;
- (void)setHighlighted:(bool)arg1;

@end