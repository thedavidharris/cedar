#import <Cedar/AnyInstanceArgument.h>

#ifdef __cplusplus

namespace Cedar { namespace Doubles {

    class AnyInstanceOfClassArgument : public AnyInstanceArgument {
    private:
        AnyInstanceOfClassArgument & operator=(const AnyInstanceOfClassArgument &);

    public:
        explicit AnyInstanceOfClassArgument(const Class);
        virtual ~AnyInstanceOfClassArgument();
        // Allow default copy ctor.

        virtual NSString * value_string() const;
        virtual bool matches_bytes(void *) const;
        virtual bool matches(const Argument &) const;
    private:
        const Class class_;
    };

    namespace Arguments {
        Argument::shared_ptr_t any(Class);
    }
}}

#endif // __cplusplus
