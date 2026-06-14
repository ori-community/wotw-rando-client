#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegexRunner_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegexRunner_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexRunner_DEFINED)
#include <Modloader/app/structs/RegexRunner__Fields.h>
#if defined(IL2CPP_STRUCT_RegexRunner__Fields_DEFINED)
#define IL2CPP_STRUCT_RegexRunner_DEFINED
struct RegexRunner__Class;
struct RegexRunner {
    struct RegexRunner__Class* klass;
    MonitorData* monitor;
    struct RegexRunner__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegexRunner_FWDDECL)
#define IL2CPP_STRUCT_RegexRunner_FWDDECL
#include <Modloader/app/structs/RegexRunner__Class.h>
#endif
#undef IL2CPP_STRUCT_RegexRunner_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexRunner_DEFINED) && !defined(IL2CPP_STRUCT_RegexRunner_FWDDECL)
#include <Modloader/app/structs/RegexRunner.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegexRunner.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
