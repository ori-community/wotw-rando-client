#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraSettings_DEFINED)
#include <Modloader/app/structs/CameraSettings__Fields.h>
#if defined(IL2CPP_STRUCT_CameraSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraSettings_DEFINED
struct CameraSettings__Class;
struct CameraSettings {
    struct CameraSettings__Class* klass;
    MonitorData* monitor;
    struct CameraSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraSettings_FWDDECL)
#define IL2CPP_STRUCT_CameraSettings_FWDDECL
#include <Modloader/app/structs/CameraSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraSettings_DEFINED) && !defined(IL2CPP_STRUCT_CameraSettings_FWDDECL)
#include <Modloader/app/structs/CameraSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
