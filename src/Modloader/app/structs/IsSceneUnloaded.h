#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IsSceneUnloaded_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IsSceneUnloaded_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsSceneUnloaded_DEFINED)
#include <Modloader/app/structs/IsSceneUnloaded__Fields.h>
#if defined(IL2CPP_STRUCT_IsSceneUnloaded__Fields_DEFINED)
#define IL2CPP_STRUCT_IsSceneUnloaded_DEFINED
struct IsSceneUnloaded__Class;
struct IsSceneUnloaded {
    struct IsSceneUnloaded__Class* klass;
    MonitorData* monitor;
    struct IsSceneUnloaded__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IsSceneUnloaded_FWDDECL)
#define IL2CPP_STRUCT_IsSceneUnloaded_FWDDECL
#include <Modloader/app/structs/IsSceneUnloaded__Class.h>
#endif
#undef IL2CPP_STRUCT_IsSceneUnloaded_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsSceneUnloaded_DEFINED) && !defined(IL2CPP_STRUCT_IsSceneUnloaded_FWDDECL)
#include <Modloader/app/structs/IsSceneUnloaded.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IsSceneUnloaded.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
