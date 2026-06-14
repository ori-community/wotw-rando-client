#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneSettings__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SceneSettings__Fields_DEFINED
struct CameraSettings;
struct DepthOfFieldController;
struct LayeredRenderSettings;
struct TurbulenceOverride;
struct MotionBlurController;
struct __declspec(align(8)) SceneSettings__Fields {
    struct CameraSettings* CameraSettings;
    struct DepthOfFieldController* DepthOfFieldController;
    struct LayeredRenderSettings* LayeredRenderSettings;
    float FieldOfView;
    struct Vector3 DefaultCameraZoom;
    struct TurbulenceOverride* TurbulenceSettings;
    float BlurredBackgroundDepth;
    struct MotionBlurController* MotionBlurController;
    float SceneBrightness;
    float DynamicBrightnessWeight;
    bool OverrideBlitColorHiResOpaque3DBlurThreshold;
    float BlitColorHiResOpaque3DBlurThreshold;
    bool OverrideAlphaDepthThreshold;
    float AlphaDepthThreshold;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneSettings__Fields_FWDDECL
#include <Modloader/app/structs/CameraSettings.h>
#include <Modloader/app/structs/DepthOfFieldController.h>
#include <Modloader/app/structs/LayeredRenderSettings.h>
#include <Modloader/app/structs/MotionBlurController.h>
#include <Modloader/app/structs/TurbulenceOverride.h>
#endif
#undef IL2CPP_STRUCT_SceneSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneSettings__Fields_FWDDECL)
#include <Modloader/app/structs/SceneSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
