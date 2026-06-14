#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CachedCodeEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CachedCodeEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CachedCodeEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_CachedCodeEntry__Fields_DEFINED
struct String;
struct RegexCode;
struct Hashtable;
struct String__Array;
struct RegexRunnerFactory;
struct ExclusiveReference;
struct SharedReference;
struct __declspec(align(8)) CachedCodeEntry__Fields {
    struct String* _key;
    struct RegexCode* _code;
    struct Hashtable* _caps;
    struct Hashtable* _capnames;
    struct String__Array* _capslist;
    int32_t _capsize;
    struct RegexRunnerFactory* _factory;
    struct ExclusiveReference* _runnerref;
    struct SharedReference* _replref;
};
#endif
#if !defined(IL2CPP_STRUCT_CachedCodeEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_CachedCodeEntry__Fields_FWDDECL
#include <Modloader/app/structs/ExclusiveReference.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/RegexCode.h>
#include <Modloader/app/structs/RegexRunnerFactory.h>
#include <Modloader/app/structs/SharedReference.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_CachedCodeEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CachedCodeEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CachedCodeEntry__Fields_FWDDECL)
#include <Modloader/app/structs/CachedCodeEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CachedCodeEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
