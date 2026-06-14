#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlBossRainOfFeathersBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlBossRainOfFeathersBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossRainOfFeathersBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_PetrifiedOwlBossBaseBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlBossRainOfFeathersBehaviour__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct StateMachine_2;
struct PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates;
struct PetrifiedOwlBossRainOfFeathersBehaviour__Fields {
    struct PetrifiedOwlBossBaseBehaviour__Fields _;
    struct MoonTimeline* StartTimeline;
    struct MoonTimeline* LoopTimeline;
    struct MoonTimeline* EndTimeline;
    float SpawnHeightOffset;
    float SeekerChance;
    int32_t MaxSeekersPerRound;
    int32_t TotalProjectiles;
    float TimeToShotProjectiles;
    struct EventTriggerAnimator* ShootTrigger;
    float ProjectileMaxSpeed;
    float DistanceToStopHoming;
    float ProjectileGravity;
    int32_t ProjectileDamage;
    float ProjectileSpeed;
    float ProjectileSpeedVariation;
    bool m_isShooting;
    float m_shootTimer;
    int32_t m_spawnedSeekers;
    int32_t m_spawnedNormals;
    struct StateMachine_2* m_stateMachine;
    struct PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates* m_states;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossRainOfFeathersBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlBossRainOfFeathersBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates.h>
#include <Modloader/app/structs/StateMachine_2.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlBossRainOfFeathersBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossRainOfFeathersBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlBossRainOfFeathersBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlBossRainOfFeathersBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlBossRainOfFeathersBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
