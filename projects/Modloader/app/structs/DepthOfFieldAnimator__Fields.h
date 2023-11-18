#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DepthOfFieldAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DepthOfFieldAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DepthOfFieldAnimator__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_DepthOfFieldAnimator__Fields_DEFINED
struct AnimationCurve;
struct SliceRenderSettings;
struct LayeredRenderSettings;
struct DepthOfFieldAnimator__Fields {
    struct TimelineEntity__Fields _;
    struct AnimationCurve* WeightCurve;
    struct AnimationCurve* DofCurve;
    struct SliceRenderSettings* SliceRenderSettings;
    struct LayeredRenderSettings* LayerSettingsOverride;
    int32_t DofApplyPriorityOffset;
    float _LayeredRenderSettingsWeight_k__BackingField;
    float _SliceRenderSettingsWeight_k__BackingField;
    float m_time;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DepthOfFieldAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_DepthOfFieldAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/LayeredRenderSettings.h>
#include <Modloader/app/structs/SliceRenderSettings.h>
#endif
#undef IL2CPP_STRUCT_DepthOfFieldAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DepthOfFieldAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DepthOfFieldAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/DepthOfFieldAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DepthOfFieldAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
