#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraController_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraController_DEFINED)
#include <Modloader/app/structs/CameraController__Fields.h>
#if defined(IL2CPP_STRUCT_CameraController__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraController_DEFINED
struct CameraController__Class;
struct CameraController {
    struct CameraController__Class* klass;
    MonitorData* monitor;
    struct CameraController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraController_FWDDECL)
#define IL2CPP_STRUCT_CameraController_FWDDECL
#include <Modloader/app/structs/CameraController__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraController_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraController_DEFINED) && !defined(IL2CPP_STRUCT_CameraController_FWDDECL)
#include <Modloader/app/structs/CameraController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
