#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PauseAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PauseAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PauseAnimator__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/EventTriggerAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_EventTriggerAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_PauseAnimator__Fields_DEFINED
struct MoonTimeline__Array;
struct AnimationPlayer;
struct PauseAnimator__Fields {
    struct EventTriggerAnimator__Fields _;
    float PauseTime;
    float m_time;
    bool m_started;
    struct MoonTimeline__Array* m_timelines;
    struct AnimationPlayer* m_animationPlayer;
    struct ActiveAnimationHandle m_activeAnimation;
    float m_activeAnimPrevSpeed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PauseAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_PauseAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationPlayer.h>
#include <Modloader/app/structs/MoonTimeline__Array.h>
#endif
#undef IL2CPP_STRUCT_PauseAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PauseAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PauseAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/PauseAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PauseAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
