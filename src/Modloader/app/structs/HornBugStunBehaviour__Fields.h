#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HornBugStunBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HornBugStunBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugStunBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#include <Modloader/app/structs/HornBugStunBehaviour_IncapacitationPhase__Enum.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_HornBugStunBehaviour_IncapacitationPhase__Enum_DEFINED)
#define IL2CPP_STRUCT_HornBugStunBehaviour__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct GroundEntityLocomotion;
struct BlockDamageInterruptionHandler;
struct HornBugStunBehaviour__Fields {
    struct EntityBehaviourNode__Fields _;
    struct MoonTimeline* LoopTimeline;
    struct MoonTimeline* RecoveryTimeline;
    struct MoonTimeline* TurnRecoveryTimeline;
    struct EventTriggerAnimator* TurnRecoveryEvent;
    float StunDuration;
    float m_timer;
    HornBugStunBehaviour_IncapacitationPhase__Enum m_phase;

    struct GroundEntityLocomotion* m_groundLocomotion;
    struct BlockDamageInterruptionHandler* m_blockingHandlerLoop;
    struct BlockDamageInterruptionHandler* m_blockingHandlerRecovery;
    struct BlockDamageInterruptionHandler* m_blockingHandlerTurnRecovery;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HornBugStunBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_HornBugStunBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/BlockDamageInterruptionHandler.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_HornBugStunBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugStunBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HornBugStunBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/HornBugStunBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HornBugStunBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
