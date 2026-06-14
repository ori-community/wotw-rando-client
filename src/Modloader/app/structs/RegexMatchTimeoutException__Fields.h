#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegexMatchTimeoutException__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegexMatchTimeoutException__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexMatchTimeoutException__Fields_DEFINED)
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/TimeoutException__Fields.h>
#if defined(IL2CPP_STRUCT_TimeoutException__Fields_DEFINED) && defined(IL2CPP_STRUCT_TimeSpan_DEFINED)
#define IL2CPP_STRUCT_RegexMatchTimeoutException__Fields_DEFINED
struct String;
struct RegexMatchTimeoutException__Fields {
    struct TimeoutException__Fields _;
    struct String* regexInput;
    struct String* regexPattern;
    struct TimeSpan matchTimeout;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegexMatchTimeoutException__Fields_FWDDECL)
#define IL2CPP_STRUCT_RegexMatchTimeoutException__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RegexMatchTimeoutException__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexMatchTimeoutException__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RegexMatchTimeoutException__Fields_FWDDECL)
#include <Modloader/app/structs/RegexMatchTimeoutException__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegexMatchTimeoutException__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
