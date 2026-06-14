#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegexBoyerMoore__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegexBoyerMoore__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexBoyerMoore__Fields_DEFINED)
#define IL2CPP_STRUCT_RegexBoyerMoore__Fields_DEFINED
struct Int32__Array;
struct Int32__Array__Array;
struct String;
struct CultureInfo;
struct __declspec(align(8)) RegexBoyerMoore__Fields {
    struct Int32__Array* _positive;
    struct Int32__Array* _negativeASCII;
    struct Int32__Array__Array* _negativeUnicode;
    struct String* _pattern;
    int32_t _lowASCII;
    int32_t _highASCII;
    bool _rightToLeft;
    bool _caseInsensitive;
    struct CultureInfo* _culture;
};
#endif
#if !defined(IL2CPP_STRUCT_RegexBoyerMoore__Fields_FWDDECL)
#define IL2CPP_STRUCT_RegexBoyerMoore__Fields_FWDDECL
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Int32__Array__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RegexBoyerMoore__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexBoyerMoore__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RegexBoyerMoore__Fields_FWDDECL)
#include <Modloader/app/structs/RegexBoyerMoore__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegexBoyerMoore__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
