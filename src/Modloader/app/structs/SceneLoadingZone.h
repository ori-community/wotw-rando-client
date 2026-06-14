#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneLoadingZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneLoadingZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingZone_DEFINED)
#include <Modloader/app/structs/SceneLoadingZone__Fields.h>
#if defined(IL2CPP_STRUCT_SceneLoadingZone__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneLoadingZone_DEFINED
struct SceneLoadingZone__Class;
struct SceneLoadingZone {
    struct SceneLoadingZone__Class* klass;
    MonitorData* monitor;
    struct SceneLoadingZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneLoadingZone_FWDDECL)
#define IL2CPP_STRUCT_SceneLoadingZone_FWDDECL
#include <Modloader/app/structs/SceneLoadingZone__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneLoadingZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingZone_DEFINED) && !defined(IL2CPP_STRUCT_SceneLoadingZone_FWDDECL)
#include <Modloader/app/structs/SceneLoadingZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneLoadingZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
