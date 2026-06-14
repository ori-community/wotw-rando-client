#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostCameraPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostCameraPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostCameraPlugin_DEFINED)
#include <Modloader/app/structs/GhostCameraPlugin__Fields.h>
#if defined(IL2CPP_STRUCT_GhostCameraPlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostCameraPlugin_DEFINED
struct GhostCameraPlugin__Class;
struct GhostCameraPlugin {
    struct GhostCameraPlugin__Class* klass;
    MonitorData* monitor;
    struct GhostCameraPlugin__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostCameraPlugin_FWDDECL)
#define IL2CPP_STRUCT_GhostCameraPlugin_FWDDECL
#include <Modloader/app/structs/GhostCameraPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostCameraPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostCameraPlugin_DEFINED) && !defined(IL2CPP_STRUCT_GhostCameraPlugin_FWDDECL)
#include <Modloader/app/structs/GhostCameraPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostCameraPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
