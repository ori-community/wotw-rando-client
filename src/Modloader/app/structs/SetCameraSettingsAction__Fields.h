#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetCameraSettingsAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetCameraSettingsAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetCameraSettingsAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED)
#define IL2CPP_STRUCT_SetCameraSettingsAction__Fields_DEFINED
struct CameraSettingsAsset;
struct Gradient;
struct SetCameraSettingsAction__Fields {
    struct ActionMethod__Fields _;
    struct CameraSettingsAsset* Settings;
    struct Gradient* FogGradient;
    struct Gradient* MultiplyFogGradient;
    int32_t Range;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetCameraSettingsAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_SetCameraSettingsAction__Fields_FWDDECL
#include <Modloader/app/structs/CameraSettingsAsset.h>
#include <Modloader/app/structs/Gradient.h>
#endif
#undef IL2CPP_STRUCT_SetCameraSettingsAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetCameraSettingsAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SetCameraSettingsAction__Fields_FWDDECL)
#include <Modloader/app/structs/SetCameraSettingsAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetCameraSettingsAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
