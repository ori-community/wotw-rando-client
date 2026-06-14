#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FaderB__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FaderB__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FaderB__Fields_DEFINED)
#include <Modloader/app/structs/FaderAnimatorEntity_FaderType__Enum.h>
#include <Modloader/app/structs/FaderB_State__Enum.h>
#include <Modloader/app/structs/Suspendable__Fields.h>
#if defined(IL2CPP_STRUCT_Suspendable__Fields_DEFINED) && defined(IL2CPP_STRUCT_FaderB_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_FaderAnimatorEntity_FaderType__Enum_DEFINED)
#define IL2CPP_STRUCT_FaderB__Fields_DEFINED
struct AnimationCurve;
struct Action;
struct FaderB__Fields {
    struct Suspendable__Fields _;
    float FadeInTime;
    float FadeStayTime;
    float FadeOutTime;
    float PanicResetDelay;
    float CleanupThreshold;
    float GCOpacityThreshold;
    float FadeInOutPreviousOpacityThreshold;
    struct AnimationCurve* FaderBrightnessCurve;
    struct AnimationCurve* FaderBContrastCurve;
    struct AnimationCurve* FaderBWeightCurve;
    float TimelineFinishedFadeInDelay;
    float TimelineFinishedFadeInSpeed;
    float m_stateCurrentTime;
    float m_opacity;
    int32_t m_GCScheduledAtFrame;
    int32_t m_previouslyUnconditionallyScheduled;
    float m_panicResetTimer;
    bool m_faderBlocked;
    bool m_skipCameraMoveToTarget;
    bool m_doCleanUpIfPossible;
    float _EditorDebugValue_k__BackingField;
    FaderB_State__Enum CurrentState;

    FaderAnimatorEntity_FaderType__Enum m_currentTimelineFaderType;

    struct Action* OnFadeInEvent;
    struct Action* OnFadeOutEvent;
    bool m_shouldDoCleanUp;
    bool _IsSuspended_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FaderB__Fields_FWDDECL)
#define IL2CPP_STRUCT_FaderB__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/AnimationCurve.h>
#endif
#undef IL2CPP_STRUCT_FaderB__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FaderB__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FaderB__Fields_FWDDECL)
#include <Modloader/app/structs/FaderB__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FaderB__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
