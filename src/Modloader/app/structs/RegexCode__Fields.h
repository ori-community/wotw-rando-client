#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegexCode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegexCode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexCode__Fields_DEFINED)
#define IL2CPP_STRUCT_RegexCode__Fields_DEFINED
struct Int32__Array;
struct String__Array;
struct Hashtable;
struct RegexPrefix;
struct RegexBoyerMoore;
struct __declspec(align(8)) RegexCode__Fields {
    struct Int32__Array* _codes;
    struct String__Array* _strings;
    int32_t _trackcount;
    struct Hashtable* _caps;
    int32_t _capsize;
    struct RegexPrefix* _fcPrefix;
    struct RegexBoyerMoore* _bmPrefix;
    int32_t _anchors;
    bool _rightToLeft;
};
#endif
#if !defined(IL2CPP_STRUCT_RegexCode__Fields_FWDDECL)
#define IL2CPP_STRUCT_RegexCode__Fields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/RegexBoyerMoore.h>
#include <Modloader/app/structs/RegexPrefix.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_RegexCode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexCode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RegexCode__Fields_FWDDECL)
#include <Modloader/app/structs/RegexCode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegexCode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
