#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraSettingOverrides__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraSettingOverrides__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraSettingOverrides__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraSettingOverrides__Fields_DEFINED
struct CameraSettingsAsset;
struct Gradient;
struct Condition_1;
struct CameraSettings;
struct __declspec(align(8)) CameraSettingOverrides__Fields {
    struct CameraSettingsAsset* CameraSettings;
    float FogRange;
    struct Gradient* FogGradient;
    struct Gradient* MultiplyFogGradient;
    struct Condition_1* Condition;
    float FadeInDuration;
    float FadeOutDuration;
    struct CameraSettings* m_cameraSettings;
};
#endif
#if !defined(IL2CPP_STRUCT_CameraSettingOverrides__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraSettingOverrides__Fields_FWDDECL
#include <Modloader/app/structs/CameraSettings.h>
#include <Modloader/app/structs/CameraSettingsAsset.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/Gradient.h>
#endif
#undef IL2CPP_STRUCT_CameraSettingOverrides__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraSettingOverrides__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraSettingOverrides__Fields_FWDDECL)
#include <Modloader/app/structs/CameraSettingOverrides__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraSettingOverrides__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
