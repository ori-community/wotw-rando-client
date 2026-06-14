#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinerHitReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinerHitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerHitReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityHitReactionBehaviour_1_MinerEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityHitReactionBehaviour_1_MinerEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_MinerHitReactionBehaviour__Fields_DEFINED
struct MoonTimeline;
struct RootMotionProcessorData;
struct GroundEntityLocomotion;
struct EntityDamageEvent;
struct Event_1;
struct EnemyShield;
struct MoonFloat;
struct MinerHitReactionBehaviour__Fields {
    struct EntityHitReactionBehaviour_1_MinerEntity___Fields _;
    struct MoonTimeline* HitAdditiveFromFront;
    struct MoonTimeline* HitAdditiveFromBack;
    struct MoonTimeline* HitAdditiveHeavy;
    struct MoonTimeline* HitShieldDestroyed;
    struct RootMotionProcessorData* ShieldDestroyedRootMotionData;
    struct GroundEntityLocomotion* m_locomotion;
    struct EntityDamageEvent* _DamageEvent_k__BackingField;
    float BashKickbackMultiplier;
    float HeavyAttackHorizontalMultiplier;
    float HeavyAttackMinHorizontalForce;
    float HeavyAttackMaxHorizontalForce;
    struct Event_1* OnAnyHitEvent;
    struct EnemyShield* Shield;
    struct MoonFloat* m_hitAdditiveFrontWeight;
    struct MoonFloat* m_hitAdditiveBackWeight;
    struct MoonTimeline* m_currentTimeline;
    struct MoonTimeline* m_currentSecondaryTimeline;
    bool m_shieldBrokenTrigger;
    bool m_exitEarly;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MinerHitReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_MinerHitReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EnemyShield.h>
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#endif
#undef IL2CPP_STRUCT_MinerHitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerHitReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MinerHitReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/MinerHitReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinerHitReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
