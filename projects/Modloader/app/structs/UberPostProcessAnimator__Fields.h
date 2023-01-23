#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPostProcessAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPostProcessAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPostProcessAnimator__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPostProcessAnimator__Fields_DEFINED
struct AnimationCurve;
struct CameraSettingsAsset;
struct FogSettings;
struct CameraSettings;
struct UberPostProcessAnimator__Fields {
    struct TimelineEntity__Fields _;
    struct AnimationCurve* Curve;
    struct CameraSettingsAsset* Asset;
    struct FogSettings* Fog;
    float m_time;
    bool m_registered;
    float _Weight_k__BackingField;
    struct CameraSettings* _Settings_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPostProcessAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberPostProcessAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/CameraSettings.h>
#include <Modloader/app/structs/CameraSettingsAsset.h>
#include <Modloader/app/structs/FogSettings.h>
#endif
#undef IL2CPP_STRUCT_UberPostProcessAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPostProcessAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberPostProcessAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/UberPostProcessAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPostProcessAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
