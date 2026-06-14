#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraSettingsZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraSettingsZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraSettingsZone_DEFINED)
#include <Modloader/app/structs/CameraSettingsZone__Fields.h>
#if defined(IL2CPP_STRUCT_CameraSettingsZone__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraSettingsZone_DEFINED
struct CameraSettingsZone__Class;
struct CameraSettingsZone {
    struct CameraSettingsZone__Class* klass;
    MonitorData* monitor;
    struct CameraSettingsZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraSettingsZone_FWDDECL)
#define IL2CPP_STRUCT_CameraSettingsZone_FWDDECL
#include <Modloader/app/structs/CameraSettingsZone__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraSettingsZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraSettingsZone_DEFINED) && !defined(IL2CPP_STRUCT_CameraSettingsZone_FWDDECL)
#include <Modloader/app/structs/CameraSettingsZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraSettingsZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
