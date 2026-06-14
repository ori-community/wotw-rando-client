#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SplitTurnAnimationMoonTimeline__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SplitTurnAnimationMoonTimeline__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SplitTurnAnimationMoonTimeline__Fields_DEFINED)
#include <Modloader/app/structs/RangeAnimationEntry__Fields.h>
#if defined(IL2CPP_STRUCT_RangeAnimationEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_SplitTurnAnimationMoonTimeline__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct Action;
struct CancelableAnimator;
struct ILocomotionTurningHandler;
struct SplitTurnAnimationMoonTimeline__Fields {
    struct RangeAnimationEntry__Fields _;
    struct MoonTimeline* TurningAnimation;
    struct EventTriggerAnimator* FlipTrigger;
    bool FlipOnAnimationEnd;
    struct Action* OnStopEvent;
    struct CancelableAnimator* m_cancelable;
    bool m_canCancel;
    float m_lookDirection;
    struct ILocomotionTurningHandler* m_locomotion;
    bool m_isDone;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SplitTurnAnimationMoonTimeline__Fields_FWDDECL)
#define IL2CPP_STRUCT_SplitTurnAnimationMoonTimeline__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/CancelableAnimator.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/ILocomotionTurningHandler.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_SplitTurnAnimationMoonTimeline__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SplitTurnAnimationMoonTimeline__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SplitTurnAnimationMoonTimeline__Fields_FWDDECL)
#include <Modloader/app/structs/SplitTurnAnimationMoonTimeline__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SplitTurnAnimationMoonTimeline__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
