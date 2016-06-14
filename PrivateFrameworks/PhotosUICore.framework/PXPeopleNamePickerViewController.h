/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleNamePickerViewController : UIViewController <UIAdaptivePresentationControllerDelegate, UIPopoverPresentationControllerDelegate, UITableViewDelegate, UITextFieldDelegate> {
    <PXPeopleNamePickerViewControllerDelegate> * _delegate;
    PXPeopleNamePickerResultsTableViewController * _resultsController;
    NSArray * _savedRightBarItems;
    PXPeopleNamePickerTitleView * _titleView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXPeopleNamePickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXPeopleNamePickerResultsTableViewController *resultsController;
@property (nonatomic, retain) NSArray *savedRightBarItems;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXPeopleNamePickerTitleView *titleView;

- (void).cxx_destruct;
- (void)_hideResultsView;
- (void)_setupNavigationBarForEditing:(bool)arg1 animated:(bool)arg2;
- (bool)_shouldPresentResultsInPopover;
- (void)_showResultsView;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (id)delegate;
- (void)didMoveToParentViewController:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPeople:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (id)resultsController;
- (id)savedRightBarItems;
- (void)setDelegate:(id)arg1;
- (void)setResultsController:(id)arg1;
- (void)setSavedRightBarItems:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (bool)textFieldShouldEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)titleView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end