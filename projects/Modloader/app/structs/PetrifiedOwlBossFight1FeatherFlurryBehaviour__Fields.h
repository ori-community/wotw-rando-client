#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlBossFight1FeatherFlurryBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlBossFight1FeatherFlurryBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossFight1FeatherFlurryBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_PetrifiedOwlBossBaseBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlBossFight1FeatherFlurryBehaviour__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct StateMachine_2;
struct PetrifiedOwlBossFight1FeatherFlurryBehaviour_Fight1FeatherFlurryStates;
struct PetrifiedOwlBossFight1FeatherFlurryBehaviour__Fields {
    struct PetrifiedOwlBossBaseBehaviour__Fields _;
    struct MoonTimeline* StartTimeline;
    struct MoonTimeline* LoopTimeline;
    struct MoonTimeline* EndTimeline;
    struct EventTriggerAnimator* ShootTrigger;
    int32_t TotalAttacks;
    float CancelBehaviourAtDamageThreshold;
    int32_t TotalUniformlyDistributedProjectiles;
    int32_t TotalProjectiles;
    float ProjectileGravity;
    int32_t ProjectileDamage;
    struct Vector2 ProjectileSpeedRange;
    int32_t m_executedAttacks;
    float m_damageTaken;
    struct StateMachine_2* m_stateMachine;
    struct PetrifiedOwlBossFight1FeatherFlurryBehaviour_Fight1FeatherFlurryStates* m_states;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossFight1FeatherFlurryBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlBossFight1FeatherFlurryBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PetrifiedOwlBossFight1FeatherFlurryBehaviour_Fight1FeatherFlurryStates.h>
#include <Modloader/app/structs/StateMachine_2.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlBossFight1FeatherFlurryBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossFight1FeatherFlurryBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlBossFight1FeatherFlurryBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlBossFight1FeatherFlurryBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlBossFight1FeatherFlurryBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
