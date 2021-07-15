#import <Cedar/CompareEqual.h>
#import <Cedar/CompareGreaterThan.h>
#import <Cedar/CompareCloseTo.h>

#if TARGET_OS_MAC
    #if TARGET_OS_IPHONE
        #import <Cedar/UIGeometryCompareEqual.h>
    #else
        #import <Cedar/OSXGeometryCompareEqual.h>
    #endif
#endif
