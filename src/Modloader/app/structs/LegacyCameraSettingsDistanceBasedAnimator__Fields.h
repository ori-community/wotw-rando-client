#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyCameraSettingsDistanceBasedAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyCameraSettingsDistanceBasedAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyCameraSettingsDistanceBasedAnimator__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_LegacyCameraSettingsDistanceBasedAnimator__Fields_DEFINED
struct CameraSettingsAsset;
struct FogGradientController;
struct LegacyCameraSettingsDistanceBasedAnimator__Fields {
    struct MonoBehaviour__Fields _;
    struct CameraSettingsAsset* CameraSettings;
    struct CameraSettingsAsset* m_currentSettings;
    struct CameraSettingsAsset* m_originalCameraSettings;
    struct FogGradientController* FogGradientController;
    float LeftMargin;
    float RightMargin;
    float TopMargin;
    float BottomMargin;
    struct Color m_outerColor;
    struct Color m_innerColor;
    float m_previousValue;
    bool m_shouldAnimate;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyCameraSettingsDistanceBasedAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyCameraSettingsDistanceBasedAnimator__Fields_FWDDECL
#include <Modloader/app/structs/CameraSettingsAsset.h>
#include <Modloader/app/structs/FogGradientController.h>
#endif
#undef IL2CPP_STRUCT_LegacyCameraSettingsDistanceBasedAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyCameraSettingsDistanceBasedAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyCameraSettingsDistanceBasedAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyCameraSettingsDistanceBasedAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyCameraSettingsDistanceBasedAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
