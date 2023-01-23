#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegexInterpreter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegexInterpreter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexInterpreter__Fields_DEFINED)
#include <Modloader/app/structs/RegexRunner__Fields.h>
#if defined(IL2CPP_STRUCT_RegexRunner__Fields_DEFINED)
#define IL2CPP_STRUCT_RegexInterpreter__Fields_DEFINED
struct Int32__Array;
struct String__Array;
struct RegexCode;
struct RegexPrefix;
struct RegexBoyerMoore;
struct CultureInfo;
struct RegexInterpreter__Fields {
    struct RegexRunner__Fields _;
    int32_t runoperator;
    struct Int32__Array* runcodes;
    int32_t runcodepos;
    struct String__Array* runstrings;
    struct RegexCode* runcode;
    struct RegexPrefix* runfcPrefix;
    struct RegexBoyerMoore* runbmPrefix;
    int32_t runanchors;
    bool runrtl;
    bool runci;
    struct CultureInfo* runculture;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegexInterpreter__Fields_FWDDECL)
#define IL2CPP_STRUCT_RegexInterpreter__Fields_FWDDECL
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/RegexBoyerMoore.h>
#include <Modloader/app/structs/RegexCode.h>
#include <Modloader/app/structs/RegexPrefix.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_RegexInterpreter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexInterpreter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RegexInterpreter__Fields_FWDDECL)
#include <Modloader/app/structs/RegexInterpreter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegexInterpreter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
