#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraOffsetController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraOffsetController_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraOffsetController_DEFINED)
#include <Modloader/app/structs/CameraOffsetController__Fields.h>
#if defined(IL2CPP_STRUCT_CameraOffsetController__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraOffsetController_DEFINED
struct CameraOffsetController__Class;
struct CameraOffsetController {
    struct CameraOffsetController__Class* klass;
    MonitorData* monitor;
    struct CameraOffsetController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraOffsetController_FWDDECL)
#define IL2CPP_STRUCT_CameraOffsetController_FWDDECL
#include <Modloader/app/structs/CameraOffsetController__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraOffsetController_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraOffsetController_DEFINED) && !defined(IL2CPP_STRUCT_CameraOffsetController_FWDDECL)
#include <Modloader/app/structs/CameraOffsetController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraOffsetController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
