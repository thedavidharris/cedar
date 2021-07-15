#import <Foundation/Foundation.h>
#import <Cedar/CDRDefaultReporter.h>

@interface CDRJUnitXMLReporter : CDRDefaultReporter {
    NSMutableArray *successExamples_;
    NSMutableArray *failureExamples_;
}
@end
