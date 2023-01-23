#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraLookAheadController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraLookAheadController_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraLookAheadController_DEFINED)
#include <Modloader/app/structs/CameraLookAheadController__Fields.h>
#if defined(IL2CPP_STRUCT_CameraLookAheadController__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraLookAheadController_DEFINED
struct CameraLookAheadController__Class;
struct CameraLookAheadController {
    struct CameraLookAheadController__Class* klass;
    MonitorData* monitor;
    struct CameraLookAheadController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraLookAheadController_FWDDECL)
#define IL2CPP_STRUCT_CameraLookAheadController_FWDDECL
#include <Modloader/app/structs/CameraLookAheadController__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraLookAheadController_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraLookAheadController_DEFINED) && !defined(IL2CPP_STRUCT_CameraLookAheadController_FWDDECL)
#include <Modloader/app/structs/CameraLookAheadController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraLookAheadController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
