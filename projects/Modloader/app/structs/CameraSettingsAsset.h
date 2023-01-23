#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraSettingsAsset_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraSettingsAsset_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraSettingsAsset_DEFINED)
#include <Modloader/app/structs/CameraSettingsAsset__Fields.h>
#if defined(IL2CPP_STRUCT_CameraSettingsAsset__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraSettingsAsset_DEFINED
struct CameraSettingsAsset__Class;
struct CameraSettingsAsset {
    struct CameraSettingsAsset__Class* klass;
    MonitorData* monitor;
    struct CameraSettingsAsset__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraSettingsAsset_FWDDECL)
#define IL2CPP_STRUCT_CameraSettingsAsset_FWDDECL
#include <Modloader/app/structs/CameraSettingsAsset__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraSettingsAsset_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraSettingsAsset_DEFINED) && !defined(IL2CPP_STRUCT_CameraSettingsAsset_FWDDECL)
#include <Modloader/app/structs/CameraSettingsAsset.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraSettingsAsset.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
