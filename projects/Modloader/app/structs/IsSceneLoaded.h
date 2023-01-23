#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IsSceneLoaded_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IsSceneLoaded_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsSceneLoaded_DEFINED)
#include <Modloader/app/structs/IsSceneLoaded__Fields.h>
#if defined(IL2CPP_STRUCT_IsSceneLoaded__Fields_DEFINED)
#define IL2CPP_STRUCT_IsSceneLoaded_DEFINED
struct IsSceneLoaded__Class;
struct IsSceneLoaded {
    struct IsSceneLoaded__Class* klass;
    MonitorData* monitor;
    struct IsSceneLoaded__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IsSceneLoaded_FWDDECL)
#define IL2CPP_STRUCT_IsSceneLoaded_FWDDECL
#include <Modloader/app/structs/IsSceneLoaded__Class.h>
#endif
#undef IL2CPP_STRUCT_IsSceneLoaded_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsSceneLoaded_DEFINED) && !defined(IL2CPP_STRUCT_IsSceneLoaded_FWDDECL)
#include <Modloader/app/structs/IsSceneLoaded.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IsSceneLoaded.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
