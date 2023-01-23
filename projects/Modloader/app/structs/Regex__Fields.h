#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Regex__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Regex__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Regex__Fields_DEFINED)
#include <Modloader/app/structs/RegexOptions__Enum.h>
#include <Modloader/app/structs/TimeSpan.h>
#if defined(IL2CPP_STRUCT_RegexOptions__Enum_DEFINED) && defined(IL2CPP_STRUCT_TimeSpan_DEFINED)
#define IL2CPP_STRUCT_Regex__Fields_DEFINED
struct String;
struct RegexRunnerFactory;
struct Hashtable;
struct String__Array;
struct ExclusiveReference;
struct SharedReference;
struct RegexCode;
struct __declspec(align(8)) Regex__Fields {
    struct String* pattern;
    struct RegexRunnerFactory* factory;
    RegexOptions__Enum roptions;

    struct TimeSpan internalMatchTimeout;
    struct Hashtable* caps;
    struct Hashtable* capnames;
    struct String__Array* capslist;
    int32_t capsize;
    struct ExclusiveReference* runnerref;
    struct SharedReference* replref;
    struct RegexCode* code;
    bool refsInitialized;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Regex__Fields_FWDDECL)
#define IL2CPP_STRUCT_Regex__Fields_FWDDECL
#include <Modloader/app/structs/ExclusiveReference.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/RegexCode.h>
#include <Modloader/app/structs/RegexRunnerFactory.h>
#include <Modloader/app/structs/SharedReference.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_Regex__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Regex__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Regex__Fields_FWDDECL)
#include <Modloader/app/structs/Regex__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Regex__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
