#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocomotionTurningTimelineBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocomotionTurningTimelineBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionTurningTimelineBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/BaseLocomotionTurningBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_BaseLocomotionTurningBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LocomotionTurningTimelineBehaviour__Fields_DEFINED
struct SplitTurnAnimationMoonTimeline__Array;
struct SplitTurnAnimationMoonTimeline;
struct GroundEntityLocomotion;
struct Action;
struct Action_1_Single_;
struct LocomotionTurningTimelineBehaviour__Fields {
    struct BaseLocomotionTurningBehaviour__Fields _;
    struct SplitTurnAnimationMoonTimeline__Array* MirrorAnimations;
    struct SplitTurnAnimationMoonTimeline* m_currentTurnAnimation;
    bool PauseLocomotion;
    bool HaltVelovityOnLedge;
    bool m_isGroundLocomotion;
    struct GroundEntityLocomotion* m_groundEntityLocomotion;
    struct Action* OnTurnStart;
    struct Action_1_Single_* OnTurnExecuting;
    struct Action* OnTurnEnd;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocomotionTurningTimelineBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_LocomotionTurningTimelineBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Single_.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/SplitTurnAnimationMoonTimeline.h>
#include <Modloader/app/structs/SplitTurnAnimationMoonTimeline__Array.h>
#endif
#undef IL2CPP_STRUCT_LocomotionTurningTimelineBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionTurningTimelineBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LocomotionTurningTimelineBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/LocomotionTurningTimelineBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocomotionTurningTimelineBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
