#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BuildRunningHook_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BuildRunningHook_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuildRunningHook_DEFINED)
#include <Modloader/app/structs/BuildRunningHook__Fields.h>
#if defined(IL2CPP_STRUCT_BuildRunningHook__Fields_DEFINED)
#define IL2CPP_STRUCT_BuildRunningHook_DEFINED
struct BuildRunningHook__Class;
struct BuildRunningHook {
    struct BuildRunningHook__Class* klass;
    MonitorData* monitor;
    struct BuildRunningHook__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BuildRunningHook_FWDDECL)
#define IL2CPP_STRUCT_BuildRunningHook_FWDDECL
#include <Modloader/app/structs/BuildRunningHook__Class.h>
#endif
#undef IL2CPP_STRUCT_BuildRunningHook_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuildRunningHook_DEFINED) && !defined(IL2CPP_STRUCT_BuildRunningHook_FWDDECL)
#include <Modloader/app/structs/BuildRunningHook.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BuildRunningHook.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
