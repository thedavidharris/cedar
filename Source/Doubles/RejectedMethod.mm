#import <Cedar/RejectedMethod.h>
#import <Cedar/AnyArgument.h>

namespace Cedar { namespace Doubles {

    RejectedMethod::RejectedMethod(SEL selector) : InvocationMatcher(selector) {}
    RejectedMethod::RejectedMethod(const char * method_name) : InvocationMatcher(sel_registerName(method_name)) {}

    const SEL RejectedMethod::selector() const {
        return InvocationMatcher::selector();
    }
}}
