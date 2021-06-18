#import <Foundation/Foundation.h>

#ifdef __cplusplus
extern "C" {
#endif

    void CDRMarkXcodeFocusedExamplesInSpecs(NSArray *specs, NSArray *arguments);
    void CDRMarkFocusedExamplesInSpecs(NSArray *specs);
    NSArray *CDRSpecsFromSpecClasses(NSArray *specClasses);
void CDRDefineSharedExampleGroups(void);
void CDRDefineGlobalBeforeAndAfterEachBlocks(void);
unsigned int CDRGetRandomSeed(void);
NSArray *CDRSpecClassesToRun(void);
    NSArray *CDRRootGroupsFromSpecs(NSArray *specs);
    NSArray *CDRPermuteSpecClassesWithSeed(NSArray *unsortedSpecClasses, unsigned int seed);
id CDRCreateXCTestSuite(void);
NSBundle *CDRBundleContainingSpecs(void);
#ifdef __cplusplus
}
#endif
