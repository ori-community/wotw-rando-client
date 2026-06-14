#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostCameraPlugin_CameraData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostCameraPlugin_CameraData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostCameraPlugin_CameraData_DEFINED)
#include <Modloader/app/structs/GhostCameraPlugin_CameraData__Fields.h>
#if defined(IL2CPP_STRUCT_GhostCameraPlugin_CameraData__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostCameraPlugin_CameraData_DEFINED
struct GhostCameraPlugin_CameraData__Class;
struct GhostCameraPlugin_CameraData {
    struct GhostCameraPlugin_CameraData__Class* klass;
    MonitorData* monitor;
    struct GhostCameraPlugin_CameraData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostCameraPlugin_CameraData_FWDDECL)
#define IL2CPP_STRUCT_GhostCameraPlugin_CameraData_FWDDECL
#include <Modloader/app/structs/GhostCameraPlugin_CameraData__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostCameraPlugin_CameraData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostCameraPlugin_CameraData_DEFINED) && !defined(IL2CPP_STRUCT_GhostCameraPlugin_CameraData_FWDDECL)
#include <Modloader/app/structs/GhostCameraPlugin_CameraData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostCameraPlugin_CameraData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
