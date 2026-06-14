#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneSettingsComponent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneSettingsComponent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneSettingsComponent__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SceneSettingsComponent__Fields_DEFINED
struct List_1_CameraSettingOverrides_;
struct CameraSettingsAsset;
struct DepthOfFieldController;
struct MotionBlurController;
struct TurbulenceOverride;
struct DynamicLightsSettings;
struct LayeredRenderSettings;
struct FogGradientController;
struct CameraSettings;
struct TurbulenceSettings;
struct SceneSettings;
struct MixerSnapshot;
struct LegacyTimelineSequence;
struct SceneSettingsComponent__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_CameraSettingOverrides_* CameraSettingOverrides;
    struct CameraSettingsAsset* CameraSettings;
    struct DepthOfFieldController* DepthOfFieldController;
    struct MotionBlurController* MotionBlurController;
    float SceneBrightness;
    float DynamicBrightnessWeight;
    float FieldOfView;
    struct Vector3 DefaultCameraZoom;
    struct TurbulenceOverride* TurbulenceSettings;
    struct DynamicLightsSettings* DynamicLightsSettings;
    struct LayeredRenderSettings* LayeredRenderSettings;
    float BlurredBackgroundDepth;
    struct FogGradientController* m_sceneFogSettings;
    struct CameraSettings* m_cameraSetting;
    struct CameraSettings* m_transitionCameraSettings;
    struct TurbulenceSettings* m_turbulenceSettngs;
    struct SceneSettings* m_sceneSettings;
    struct MixerSnapshot* DefaultMixerSnapshot;
    struct LegacyTimelineSequence* SceneTimeline;
    bool OverrideBlitColorHiResOpaque3DBlurThreshold;
    float BlitColorHiResOpaque3DBlurThreshold;
    bool OverrideAlphaDepthThreshold;
    float AlphaDepthThreshold;
    bool m_useCameraSettingsOverride;
    struct CameraSettings* m_cameraSettingsOverride;
    float m_cameraSettingsOverrideFadeInSpeed;
    float m_cameraSettingsOverrideFadeOutSpeed;
    float m_cameraSettingsOverrideWeight;
    bool FOVConverted;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneSettingsComponent__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneSettingsComponent__Fields_FWDDECL
#include <Modloader/app/structs/CameraSettings.h>
#include <Modloader/app/structs/CameraSettingsAsset.h>
#include <Modloader/app/structs/DepthOfFieldController.h>
#include <Modloader/app/structs/DynamicLightsSettings.h>
#include <Modloader/app/structs/FogGradientController.h>
#include <Modloader/app/structs/LayeredRenderSettings.h>
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/List_1_CameraSettingOverrides_.h>
#include <Modloader/app/structs/MixerSnapshot.h>
#include <Modloader/app/structs/MotionBlurController.h>
#include <Modloader/app/structs/SceneSettings.h>
#include <Modloader/app/structs/TurbulenceOverride.h>
#include <Modloader/app/structs/TurbulenceSettings.h>
#endif
#undef IL2CPP_STRUCT_SceneSettingsComponent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneSettingsComponent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneSettingsComponent__Fields_FWDDECL)
#include <Modloader/app/structs/SceneSettingsComponent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneSettingsComponent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
