#import <Foundation/Foundation.h>
#import <Cedar/CDRNullabilityCompat.h>
#import <Cedar/CDRFake.h>
#import <Cedar/CedarDouble.h>

NS_ASSUME_NONNULL_BEGIN

#ifdef __cplusplus

@interface CDRClassFake : CDRFake

@end

id CDR_fake_for(BOOL require_explicit_stubs, Class klass, ...);

#endif // __cplusplus

NS_ASSUME_NONNULL_END
