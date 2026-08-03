#import "ViewController.h"
@interface ViewController () { UIButton *btn; }
@end
@implementation ViewController
- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = UIColor.blackColor;
    btn = [UIButton buttonWithType:UIButtonTypeSystem];
    btn.frame = CGRectMake(50, 100, 200, 50);
    [btn setTitle:@"KÉO TÂM (OFF)" forState:UIControlStateNormal];
    [btn setTitleColor:UIColor.greenColor forState:UIControlStateNormal];
    [btn addTarget:self action:@selector(toggle) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:btn];
}
- (void)toggle {
    [btn setTitle:([btn.titleLabel.text isEqualToString:@"KÉO TÂM (OFF)"]) ? @"KÉO TÂM (ON)" : @"KÉO TÂM (OFF)" forState:UIControlStateNormal];
}
@end
