#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegexReplacement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegexReplacement_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexReplacement_DEFINED)
#include <Modloader/app/structs/RegexReplacement__Fields.h>
#if defined(IL2CPP_STRUCT_RegexReplacement__Fields_DEFINED)
#define IL2CPP_STRUCT_RegexReplacement_DEFINED
struct RegexReplacement__Class;
struct RegexReplacement {
    struct RegexReplacement__Class* klass;
    MonitorData* monitor;
    struct RegexReplacement__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegexReplacement_FWDDECL)
#define IL2CPP_STRUCT_RegexReplacement_FWDDECL
#include <Modloader/app/structs/RegexReplacement__Class.h>
#endif
#undef IL2CPP_STRUCT_RegexReplacement_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexReplacement_DEFINED) && !defined(IL2CPP_STRUCT_RegexReplacement_FWDDECL)
#include <Modloader/app/structs/RegexReplacement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegexReplacement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
