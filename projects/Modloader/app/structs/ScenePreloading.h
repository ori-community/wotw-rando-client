#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenePreloading_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenePreloading_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenePreloading_DEFINED)
#define IL2CPP_STRUCT_ScenePreloading_DEFINED
struct ScenePreloading__Class;
struct ScenePreloading {
    struct ScenePreloading__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ScenePreloading_FWDDECL)
#define IL2CPP_STRUCT_ScenePreloading_FWDDECL
#include <Modloader/app/structs/ScenePreloading__Class.h>
#endif
#undef IL2CPP_STRUCT_ScenePreloading_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenePreloading_DEFINED) && !defined(IL2CPP_STRUCT_ScenePreloading_FWDDECL)
#include <Modloader/app/structs/ScenePreloading.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenePreloading.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
