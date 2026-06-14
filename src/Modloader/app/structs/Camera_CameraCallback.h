#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Camera_CameraCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Camera_CameraCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_Camera_CameraCallback_DEFINED)
#include <Modloader/app/structs/Camera_CameraCallback__Fields.h>
#if defined(IL2CPP_STRUCT_Camera_CameraCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_Camera_CameraCallback_DEFINED
struct Camera_CameraCallback__Class;
struct Camera_CameraCallback {
    struct Camera_CameraCallback__Class* klass;
    MonitorData* monitor;
    struct Camera_CameraCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Camera_CameraCallback_FWDDECL)
#define IL2CPP_STRUCT_Camera_CameraCallback_FWDDECL
#include <Modloader/app/structs/Camera_CameraCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_Camera_CameraCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_Camera_CameraCallback_DEFINED) && !defined(IL2CPP_STRUCT_Camera_CameraCallback_FWDDECL)
#include <Modloader/app/structs/Camera_CameraCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Camera_CameraCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
