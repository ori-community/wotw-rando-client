#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimescaleAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimescaleAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimescaleAnimator__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_TimescaleAnimator__Fields_DEFINED
struct AnimationCurve;
struct MoonFloat;
struct AnimationPlayer;
struct IActiveAnimation;
struct MoonTimeline;
struct TimescaleAnimator__Fields {
    struct TimelineEntity__Fields _;
    float TimeScale;
    struct AnimationCurve* Weight;
    struct MoonFloat* TimeScaleMultiplier;
    struct AnimationPlayer* m_animationPlayer;
    struct IActiveAnimation* m_activeAnimation;
    struct MoonTimeline* m_parentTimeline;
    float m_originalTimescale;
    float m_time;
    float m_lastAppliedTimeScale;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimescaleAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimescaleAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/AnimationPlayer.h>
#include <Modloader/app/structs/IActiveAnimation.h>
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_TimescaleAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimescaleAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimescaleAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/TimescaleAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimescaleAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
