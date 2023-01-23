#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraSettings__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#if defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_CameraSettings__Fields_DEFINED
struct VignettingSettings;
struct NoiseSettings;
struct ContrastSettings;
struct DesaturationSettings;
struct ColorCorrectionSettings;
struct BloomSettings;
struct TwirlSettings;
struct EmissiveSettings;
struct LightInfluenceSettings;
struct ColorVariationSettings;
struct PlayerSettingsPerScene;
struct RenderingSettingsPerScene;
struct CameraSettings_AnimateJobData;
struct Color__Array;
struct __declspec(align(8)) CameraSettings__Fields {
    struct VignettingSettings* Vignetting;
    struct NoiseSettings* Noise;
    struct ContrastSettings* Contrast;
    struct DesaturationSettings* Desaturation;
    struct ColorCorrectionSettings* ColorCorrection;
    struct BloomSettings* BloomSettings;
    struct TwirlSettings* TwirlSettings;
    struct EmissiveSettings* EmissiveSettings;
    struct LightInfluenceSettings* LightInfluenceSettings;
    struct ColorVariationSettings* ColorVariationSettings;
    struct PlayerSettingsPerScene* PlayerSettingsPerScene;
    struct RenderingSettingsPerScene* RenderingSettingsPerScene;
    struct CameraSettings_AnimateJobData* JobData;
    struct Color Fog;
    struct Color__Array* FogGradient;
    struct Color__Array* MultiplyFogGradient;
    float FogRange;
    bool ForceApply;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraSettings__Fields_FWDDECL
#include <Modloader/app/structs/BloomSettings.h>
#include <Modloader/app/structs/CameraSettings_AnimateJobData.h>
#include <Modloader/app/structs/ColorCorrectionSettings.h>
#include <Modloader/app/structs/ColorVariationSettings.h>
#include <Modloader/app/structs/Color__Array.h>
#include <Modloader/app/structs/ContrastSettings.h>
#include <Modloader/app/structs/DesaturationSettings.h>
#include <Modloader/app/structs/EmissiveSettings.h>
#include <Modloader/app/structs/LightInfluenceSettings.h>
#include <Modloader/app/structs/NoiseSettings.h>
#include <Modloader/app/structs/PlayerSettingsPerScene.h>
#include <Modloader/app/structs/RenderingSettingsPerScene.h>
#include <Modloader/app/structs/TwirlSettings.h>
#include <Modloader/app/structs/VignettingSettings.h>
#endif
#undef IL2CPP_STRUCT_CameraSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraSettings__Fields_FWDDECL)
#include <Modloader/app/structs/CameraSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
