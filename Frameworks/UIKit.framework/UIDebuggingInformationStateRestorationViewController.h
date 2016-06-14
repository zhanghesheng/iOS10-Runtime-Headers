/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDebuggingInformationStateRestorationViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    NSDictionary * _data;
    id  _inspected;
    NSArray * _labels;
    UITableView * _tableView;
}

@property (nonatomic, retain) NSDictionary *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) id inspected;
@property (nonatomic, retain) NSArray *labels;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (id)data;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)inspect:(id)arg1;
- (id)inspected;
- (id)labels;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setData:(id)arg1;
- (void)setInspected:(id)arg1;
- (void)setLabels:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end