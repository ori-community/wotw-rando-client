#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISceneComponentTracker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISceneComponentTracker_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISceneComponentTracker_DEFINED)
#define IL2CPP_STRUCT_ISceneComponentTracker_DEFINED
struct ISceneComponentTracker__Class;
struct ISceneComponentTracker {
    struct ISceneComponentTracker__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISceneComponentTracker_FWDDECL)
#define IL2CPP_STRUCT_ISceneComponentTracker_FWDDECL
#include <Modloader/app/structs/ISceneComponentTracker__Class.h>
#endif
#undef IL2CPP_STRUCT_ISceneComponentTracker_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISceneComponentTracker_DEFINED) && !defined(IL2CPP_STRUCT_ISceneComponentTracker_FWDDECL)
#include <Modloader/app/structs/ISceneComponentTracker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISceneComponentTracker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
