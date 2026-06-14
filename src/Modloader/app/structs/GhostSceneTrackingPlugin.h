#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostSceneTrackingPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostSceneTrackingPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostSceneTrackingPlugin_DEFINED)
#include <Modloader/app/structs/GhostSceneTrackingPlugin__Fields.h>
#if defined(IL2CPP_STRUCT_GhostSceneTrackingPlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostSceneTrackingPlugin_DEFINED
struct GhostSceneTrackingPlugin__Class;
struct GhostSceneTrackingPlugin {
    struct GhostSceneTrackingPlugin__Class* klass;
    MonitorData* monitor;
    struct GhostSceneTrackingPlugin__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostSceneTrackingPlugin_FWDDECL)
#define IL2CPP_STRUCT_GhostSceneTrackingPlugin_FWDDECL
#include <Modloader/app/structs/GhostSceneTrackingPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostSceneTrackingPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostSceneTrackingPlugin_DEFINED) && !defined(IL2CPP_STRUCT_GhostSceneTrackingPlugin_FWDDECL)
#include <Modloader/app/structs/GhostSceneTrackingPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostSceneTrackingPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
