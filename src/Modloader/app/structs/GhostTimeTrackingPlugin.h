#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostTimeTrackingPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostTimeTrackingPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostTimeTrackingPlugin_DEFINED)
#include <Modloader/app/structs/GhostTimeTrackingPlugin__Fields.h>
#if defined(IL2CPP_STRUCT_GhostTimeTrackingPlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostTimeTrackingPlugin_DEFINED
struct GhostTimeTrackingPlugin__Class;
struct GhostTimeTrackingPlugin {
    struct GhostTimeTrackingPlugin__Class* klass;
    MonitorData* monitor;
    struct GhostTimeTrackingPlugin__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostTimeTrackingPlugin_FWDDECL)
#define IL2CPP_STRUCT_GhostTimeTrackingPlugin_FWDDECL
#include <Modloader/app/structs/GhostTimeTrackingPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostTimeTrackingPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostTimeTrackingPlugin_DEFINED) && !defined(IL2CPP_STRUCT_GhostTimeTrackingPlugin_FWDDECL)
#include <Modloader/app/structs/GhostTimeTrackingPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostTimeTrackingPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
