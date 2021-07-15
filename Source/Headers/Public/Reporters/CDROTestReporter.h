#import <Cedar/CDRExampleReporter.h>

@interface CDROTestReporter : NSObject <CDRExampleReporter>
- (instancetype)initWithCedarVersion:(NSString *)cedarVersionString;
@end
