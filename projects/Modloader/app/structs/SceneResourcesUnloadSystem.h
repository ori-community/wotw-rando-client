#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneResourcesUnloadSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneResourcesUnloadSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneResourcesUnloadSystem_DEFINED)
#define IL2CPP_STRUCT_SceneResourcesUnloadSystem_DEFINED
struct SceneResourcesUnloadSystem__Class;
struct SceneResourcesUnloadSystem {
    struct SceneResourcesUnloadSystem__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SceneResourcesUnloadSystem_FWDDECL)
#define IL2CPP_STRUCT_SceneResourcesUnloadSystem_FWDDECL
#include <Modloader/app/structs/SceneResourcesUnloadSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneResourcesUnloadSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneResourcesUnloadSystem_DEFINED) && !defined(IL2CPP_STRUCT_SceneResourcesUnloadSystem_FWDDECL)
#include <Modloader/app/structs/SceneResourcesUnloadSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneResourcesUnloadSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
