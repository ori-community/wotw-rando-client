#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PiranhaAttackBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PiranhaAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PiranhaAttackBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_PiranhaEntity___Fields.h>
#include <Modloader/app/structs/PiranhaAttackBehaviour_State__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_PiranhaEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_PiranhaAttackBehaviour_State__Enum_DEFINED)
#define IL2CPP_STRUCT_PiranhaAttackBehaviour__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct DamageDealer;
struct SwimmingLocomotion;
struct PiranhaAttackBehaviour__Fields {
    struct EntityBehaviourNode_1_PiranhaEntity___Fields _;
    struct MoonTimeline* AttackTimeline;
    struct MoonTimeline* SlowDownTimeline;
    struct EventTriggerAnimator* SwitchDamageDealers;
    struct DamageDealer* DamageTrigger;
    float AttackTraversalTier;
    float SlowDownTraversalTier;
    float AttackMovementInitialSpeed;
    float SlowDownRate;
    float KeepInWaterRate;
    float MinSubmersion;
    struct Vector2 m_moveDirection;
    struct SwimmingLocomotion* m_locomotion;
    PiranhaAttackBehaviour_State__Enum m_state;

    struct MoonTimeline* m_currentTimeline;
    struct Vector2 m_targetSlowDownSpeed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PiranhaAttackBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PiranhaAttackBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SwimmingLocomotion.h>
#endif
#undef IL2CPP_STRUCT_PiranhaAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PiranhaAttackBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PiranhaAttackBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PiranhaAttackBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PiranhaAttackBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
