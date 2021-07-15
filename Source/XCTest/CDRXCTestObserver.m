#import <Cedar/CDRXCTestObserver.h>
#import <Cedar/CDRFunctions.h>
#import <Cedar/CDRPrivateFunctions.h>

@interface CDRXCTestObserver ()
@property (assign) BOOL observedTestSuiteStart;
@end

@implementation CDRXCTestObserver

- (void)testSuiteWillStart:(XCTestSuite *)testSuite {
    if (self.observedTestSuiteStart) {
        return;
    }
    self.observedTestSuiteStart = YES;

    id cedarTestSuite = CDRCreateXCTestSuite();
    [testSuite addTest:cedarTestSuite];
}

@end
