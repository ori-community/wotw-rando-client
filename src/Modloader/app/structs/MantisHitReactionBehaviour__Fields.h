#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MantisHitReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MantisHitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MantisHitReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityHitReactionBehaviour_1_MantisGrayboxEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityHitReactionBehaviour_1_MantisGrayboxEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_MantisHitReactionBehaviour__Fields_DEFINED
struct MoonTimeline;
struct List_1_Moon_Timeline_MoonTimeline_;
struct Event_1;
struct MoonFloat;
struct MantisFallReactionBehaviour;
struct MantisDeathReactionBehaviour;
struct GroundEntityLocomotion;
struct EntityDamageEvent;
struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask_;
struct MantisHitReactionBehaviour__Fields {
    struct EntityHitReactionBehaviour_1_MantisGrayboxEntity___Fields _;
    struct MoonTimeline* HitAdditiveFront;
    struct MoonTimeline* HitAdditiveBack;
    struct MoonTimeline* HitAdditiveWhileJumping;
    struct MoonTimeline* Knockup;
    struct List_1_Moon_Timeline_MoonTimeline_* JumpAnticeTimelines;
    struct Event_1* OnAnyHitEvent;
    struct MoonFloat* m_hitAdditiveFrontWeight;
    struct MoonFloat* m_hitAdditiveBackWeight;
    struct MoonFloat* m_hitAdditiveWhileJumpingWeight;
    struct MantisFallReactionBehaviour* m_fallBehaviour;
    struct MantisDeathReactionBehaviour* m_deathBehaviour;
    struct GroundEntityLocomotion* m_locomotion;
    struct EntityDamageEvent* _DamageEvent_k__BackingField;
    struct MoonTimeline* m_currentTimeline;
    struct MoonTimeline* m_currentSecondaryTimeline;
    bool m_exitEarly;
    struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask_* InterruptionBlockingTasks;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MantisHitReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_MantisHitReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/MantisDeathReactionBehaviour.h>
#include <Modloader/app/structs/MantisFallReactionBehaviour.h>
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_MantisHitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MantisHitReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MantisHitReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/MantisHitReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MantisHitReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
