#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraControllerFPS_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraControllerFPS_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraControllerFPS_DEFINED)
#include <Modloader/app/structs/CameraControllerFPS__Fields.h>
#if defined(IL2CPP_STRUCT_CameraControllerFPS__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraControllerFPS_DEFINED
struct CameraControllerFPS__Class;
struct CameraControllerFPS {
    struct CameraControllerFPS__Class* klass;
    MonitorData* monitor;
    struct CameraControllerFPS__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraControllerFPS_FWDDECL)
#define IL2CPP_STRUCT_CameraControllerFPS_FWDDECL
#include <Modloader/app/structs/CameraControllerFPS__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraControllerFPS_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraControllerFPS_DEFINED) && !defined(IL2CPP_STRUCT_CameraControllerFPS_FWDDECL)
#include <Modloader/app/structs/CameraControllerFPS.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraControllerFPS.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
