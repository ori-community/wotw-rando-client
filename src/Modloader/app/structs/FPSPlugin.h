#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FPSPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FPSPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSPlugin_DEFINED)
#include <Modloader/app/structs/FPSPlugin__Fields.h>
#if defined(IL2CPP_STRUCT_FPSPlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_FPSPlugin_DEFINED
struct FPSPlugin__Class;
struct FPSPlugin {
    struct FPSPlugin__Class* klass;
    MonitorData* monitor;
    struct FPSPlugin__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FPSPlugin_FWDDECL)
#define IL2CPP_STRUCT_FPSPlugin_FWDDECL
#include <Modloader/app/structs/FPSPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_FPSPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSPlugin_DEFINED) && !defined(IL2CPP_STRUCT_FPSPlugin_FWDDECL)
#include <Modloader/app/structs/FPSPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FPSPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
