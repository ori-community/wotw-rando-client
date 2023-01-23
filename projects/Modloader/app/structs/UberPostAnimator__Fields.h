#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPostAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPostAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPostAnimator__Fields_DEFINED)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPostAnimator__Fields_DEFINED
struct AnimationCurve;
struct List_1_CameraSettingsAsset_;
struct List_1_FogSettings_;
struct CameraSettings;
struct CameraPostProcessing;
struct List_1_CameraSettings_;
struct SceneSettings;
struct UberPostAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct AnimationCurve* AnimationCurve;
    struct List_1_CameraSettingsAsset_* CameraPostSettings;
    struct List_1_FogSettings_* FogSettings;
    struct CameraSettings* m_transitionSceneSettings;
    struct CameraPostProcessing* m_cameraPostProcessing;
    struct List_1_CameraSettings_* m_cameraSettings;
    struct SceneSettings* m_sceneSettings;
    struct CameraSettings* m_originalCameraSettings;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPostAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberPostAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/CameraPostProcessing.h>
#include <Modloader/app/structs/CameraSettings.h>
#include <Modloader/app/structs/List_1_CameraSettingsAsset_.h>
#include <Modloader/app/structs/List_1_CameraSettings_.h>
#include <Modloader/app/structs/List_1_FogSettings_.h>
#include <Modloader/app/structs/SceneSettings.h>
#endif
#undef IL2CPP_STRUCT_UberPostAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPostAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberPostAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/UberPostAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPostAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
