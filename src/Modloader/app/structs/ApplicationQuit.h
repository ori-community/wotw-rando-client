#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ApplicationQuit_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ApplicationQuit_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApplicationQuit_DEFINED)
#include <Modloader/app/structs/ApplicationQuit__Fields.h>
#if defined(IL2CPP_STRUCT_ApplicationQuit__Fields_DEFINED)
#define IL2CPP_STRUCT_ApplicationQuit_DEFINED
struct ApplicationQuit__Class;
struct ApplicationQuit {
    struct ApplicationQuit__Class* klass;
    MonitorData* monitor;
    struct ApplicationQuit__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ApplicationQuit_FWDDECL)
#define IL2CPP_STRUCT_ApplicationQuit_FWDDECL
#include <Modloader/app/structs/ApplicationQuit__Class.h>
#endif
#undef IL2CPP_STRUCT_ApplicationQuit_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApplicationQuit_DEFINED) && !defined(IL2CPP_STRUCT_ApplicationQuit_FWDDECL)
#include <Modloader/app/structs/ApplicationQuit.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ApplicationQuit.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
