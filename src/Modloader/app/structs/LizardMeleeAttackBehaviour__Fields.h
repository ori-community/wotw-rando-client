#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LizardMeleeAttackBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LizardMeleeAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardMeleeAttackBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/AnimatorPlayState__Enum.h>
#include <Modloader/app/structs/LizardMeleeAttackBehaviour_AttackType__Enum.h>
#include <Modloader/app/structs/MeleeAttackBehaviourNew__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MeleeAttackBehaviourNew__Fields_DEFINED) && defined(IL2CPP_STRUCT_LizardMeleeAttackBehaviour_AttackType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_AnimatorPlayState__Enum_DEFINED)
#define IL2CPP_STRUCT_LizardMeleeAttackBehaviour__Fields_DEFINED
struct PlayerInsideZoneChecker;
struct List_1_Moon_Timeline_EventTriggerAnimator_;
struct MoonTimeline;
struct EventTriggerAnimator;
struct GroundEntityMovementProcessor;
struct LizardEntity;
struct LizardMeleeAttackBehaviour__Fields {
    struct MeleeAttackBehaviourNew__Fields _;
    bool AttackOnlyIfTargetInZone;
    struct PlayerInsideZoneChecker* AttackZone;
    struct List_1_Moon_Timeline_EventTriggerAnimator_* TimelineInterruptionPoints;
    LizardMeleeAttackBehaviour_AttackType__Enum Type;

    bool UseAttackResolve;
    struct MoonTimeline* NonTurnAttackReesolveTimeline;
    struct MoonTimeline* TurningAttackResolveTimeline;
    struct EventTriggerAnimator* TurningMirrorEvent;
    struct EventTriggerAnimator* JumpTrigger;
    struct Vector2 JumpSpeed;
    bool StopAttackTimelineOnExit;
    bool ExitWhenNoAttackTimelineIsPlaying;
    struct GroundEntityMovementProcessor* m_groundMovementProcessor;
    struct LizardEntity* m_lizardEntity;
    struct MoonTimeline* m_currentAttackVFX;
    bool m_attackPlayedCompletelly;
    AnimatorPlayState__Enum m_prevPlayStateWallRecoilNew;

    AnimatorPlayState__Enum m_prevPlayStateAttackTimelineNew;

    AnimatorPlayState__Enum m_prevPlayStateNonTurnAttackReesolveTimeline;

    AnimatorPlayState__Enum m_prevPlayStateTurningAttackResolveTimeline;

    int32_t requestId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LizardMeleeAttackBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_LizardMeleeAttackBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GroundEntityMovementProcessor.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_EventTriggerAnimator_.h>
#include <Modloader/app/structs/LizardEntity.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker.h>
#endif
#undef IL2CPP_STRUCT_LizardMeleeAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardMeleeAttackBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LizardMeleeAttackBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/LizardMeleeAttackBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LizardMeleeAttackBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
