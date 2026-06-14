#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlBossFinalComboBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlBossFinalComboBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossFinalComboBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/CheckpointFunctionality.h>
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_PetrifiedOwlBossBaseBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_CheckpointFunctionality_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlBossFinalComboBehaviour__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct StateMachine_2;
struct PetrifiedOwlBossFinalComboBehaviour_FinalComboStates;
struct Enum__Array;
struct PetrifiedOwlBossFinalComboBehaviour__Fields {
    struct PetrifiedOwlBossBaseBehaviour__Fields _;
    bool TEST_SKIP_INTRO;
    bool TEST_SKIP_UNTIL_END;
    struct MoonTimeline* IntroTimeline;
    struct MoonTimeline* RainOfFeathersStart;
    struct MoonTimeline* RainOfFeathersLoop;
    struct MoonTimeline* RainOfFeathersEnd;
    struct EventTriggerAnimator* ShootTrigger;
    float SpawnHeightOffset;
    struct Vector2 SpawnHorizontalArenaWidthRange;
    float TimeBetweenProjectiles;
    float ProjectileGravity;
    int32_t ProjectileDamage;
    float ProjectileSpeed;
    float ProjectileSpeedVariation;
    bool m_canSpawnSeekers;
    float TimeBetweenSeekers;
    float TimeBetweenSeekersVariation;
    float SeekerProjectileMaxSpeed;
    float SeekerDistanceToStopHoming;
    bool m_isShooting;
    float m_shootTimer;
    float m_seekerCooldown;
    struct MoonTimeline* FlyToCamTimeline;
    struct MoonTimeline* StompTimeline;
    struct EventTriggerAnimator* StompDestructionEvent;
    struct MoonTimeline* StayInAirHorizontalTimeline;
    struct MoonTimeline* DiveHorizontalTimeline;
    float DiveHorizontalDelay;
    bool m_lastDiveHorizontalMirrored;
    struct MoonTimeline* StayInAirVerticalTimeline;
    struct MoonTimeline* DiveVerticalTimeline;
    float DiveVerticalDelay;
    bool m_lastDiveVerticalMirrored;
    struct MoonTimeline* FlurryTimeline;
    float FlurryApertureConeAngle;
    int32_t FlurryTotalUniformlyDistributedProjectiles;
    int32_t FlurryTotalProjectiles;
    struct EventTriggerAnimator* FlurryShootTrigger;
    float FlurryProjectileGravity;
    int32_t FlurryProjectileDamage;
    struct Vector2 FlurryProjectileSpeedRange;
    struct MoonTimeline* DiveLaserTimeline;
    int32_t TotalLasersInSequence;
    float DiveLaserDelay;
    bool m_lastDivelaserMirrored;
    int32_t m_totalLasers;
    int32_t TotalDivesInSequence;
    int32_t m_totalDives;
    struct CheckpointFunctionality m_checkpoint;
    bool m_isMirrored;
    struct StateMachine_2* m_stateMachine;
    struct PetrifiedOwlBossFinalComboBehaviour_FinalComboStates* m_states;
    struct Enum__Array* Entries;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossFinalComboBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlBossFinalComboBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/Enum__Array.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour_FinalComboStates.h>
#include <Modloader/app/structs/StateMachine_2.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlBossFinalComboBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossFinalComboBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlBossFinalComboBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
