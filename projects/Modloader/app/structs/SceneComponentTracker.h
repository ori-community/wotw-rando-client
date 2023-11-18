#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneComponentTracker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneComponentTracker_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneComponentTracker_DEFINED)
#define IL2CPP_STRUCT_SceneComponentTracker_DEFINED
struct SceneComponentTracker__Class;
struct SceneComponentTracker {
    struct SceneComponentTracker__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SceneComponentTracker_FWDDECL)
#define IL2CPP_STRUCT_SceneComponentTracker_FWDDECL
#include <Modloader/app/structs/SceneComponentTracker__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneComponentTracker_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneComponentTracker_DEFINED) && !defined(IL2CPP_STRUCT_SceneComponentTracker_FWDDECL)
#include <Modloader/app/structs/SceneComponentTracker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneComponentTracker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
