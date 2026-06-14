#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScalableAnimationPlayer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScalableAnimationPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScalableAnimationPlayer__Fields_DEFINED)
#include <Modloader/app/structs/AnimationPlayer__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationPlayer__Fields_DEFINED)
#define IL2CPP_STRUCT_ScalableAnimationPlayer__Fields_DEFINED
struct List_1_Moon_ScalableAnimationPlayer_Event_;
struct List_1_Moon_ScalableAnimationPlayer_ScalingInterval_;
struct List_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_;
struct ScalableAnimationPlayer__Fields {
    struct AnimationPlayer__Fields _;
    struct List_1_Moon_ScalableAnimationPlayer_Event_* MarkerEvents;
    struct List_1_Moon_ScalableAnimationPlayer_ScalingInterval_* ScalingAllowedIntervals;
    struct List_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_* m_scenarioPlaybackData;
    int32_t m_currentPlaybackDataVersion;
    float m_previewDuration;
    bool _ShouldUpdatePreviewDuration_k__BackingField;
    bool m_useSimulationDataForPreview;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScalableAnimationPlayer__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScalableAnimationPlayer__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_ScalableAnimationPlayer_Event_.h>
#include <Modloader/app/structs/List_1_Moon_ScalableAnimationPlayer_ScalingInterval_.h>
#include <Modloader/app/structs/List_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_.h>
#endif
#undef IL2CPP_STRUCT_ScalableAnimationPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScalableAnimationPlayer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScalableAnimationPlayer__Fields_FWDDECL)
#include <Modloader/app/structs/ScalableAnimationPlayer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScalableAnimationPlayer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
