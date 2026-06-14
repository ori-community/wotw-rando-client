#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraSettingOverrides_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraSettingOverrides_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraSettingOverrides_DEFINED)
#include <Modloader/app/structs/CameraSettingOverrides__Fields.h>
#if defined(IL2CPP_STRUCT_CameraSettingOverrides__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraSettingOverrides_DEFINED
struct CameraSettingOverrides__Class;
struct CameraSettingOverrides {
    struct CameraSettingOverrides__Class* klass;
    MonitorData* monitor;
    struct CameraSettingOverrides__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraSettingOverrides_FWDDECL)
#define IL2CPP_STRUCT_CameraSettingOverrides_FWDDECL
#include <Modloader/app/structs/CameraSettingOverrides__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraSettingOverrides_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraSettingOverrides_DEFINED) && !defined(IL2CPP_STRUCT_CameraSettingOverrides_FWDDECL)
#include <Modloader/app/structs/CameraSettingOverrides.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraSettingOverrides.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
