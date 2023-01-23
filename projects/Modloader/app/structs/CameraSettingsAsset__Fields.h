#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraSettingsAsset__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraSettingsAsset__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraSettingsAsset__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_CameraSettingsAsset__Fields_DEFINED
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
struct CameraSettingsAsset__Fields {
    struct ScriptableObject__Fields _;
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
    struct Color Fog;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraSettingsAsset__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraSettingsAsset__Fields_FWDDECL
#include <Modloader/app/structs/BloomSettings.h>
#include <Modloader/app/structs/ColorCorrectionSettings.h>
#include <Modloader/app/structs/ColorVariationSettings.h>
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
#undef IL2CPP_STRUCT_CameraSettingsAsset__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraSettingsAsset__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraSettingsAsset__Fields_FWDDECL)
#include <Modloader/app/structs/CameraSettingsAsset__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraSettingsAsset__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
