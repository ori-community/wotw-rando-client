#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NightCrawlerFightController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NightCrawlerFightController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NightCrawlerFightController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_NightCrawlerFightController__Fields_DEFINED
struct Vitals;
struct HitFlash3DNew;
struct DamageReceiver;
struct GameObject;
struct EventTriggerAnimator;
struct SerializedBooleanUberState;
struct EntityPlaceholderScalingLink;
struct MoonTimeline__Array;
struct MoonTimeline;
struct PlayerInsideZoneChecker;
struct NightCrawlerFightController_States;
struct StateMachine_2;
struct NightCrawlerFightController__Fields {
    struct MonoBehaviour__Fields _;
    struct Vitals* Vitals;
    struct HitFlash3DNew* HitFlash;
    struct DamageReceiver* DamageReceiver;
    struct GameObject* TorchDestroyEffect;
    struct EventTriggerAnimator* FirstHitTrigger;
    struct EventTriggerAnimator* StartFightTrigger;
    struct EventTriggerAnimator* FarAttackRightTrigger;
    struct EventTriggerAnimator* EscapeReleaseLockTrigger;
    struct SerializedBooleanUberState* DefeatedState;
    struct SerializedBooleanUberState* EscapedState;
    struct EntityPlaceholderScalingLink* ScalingLink;
    struct MoonTimeline__Array* IdleTimelines;
    struct MoonTimeline__Array* AttackCloseTimelines;
    struct MoonTimeline* AttackFarTimeline;
    struct MoonTimeline* AttackFarLoopTimeline;
    struct MoonTimeline* AttackFarRetreatTimeline;
    struct MoonTimeline* DefeatRetreatTimeline;
    struct MoonTimeline* EscapeTimeline;
    struct MoonTimeline* HitReactionTimeline;
    float MinTimeBeforeCloseAttack;
    float MaxTimeBeforeCloseAttack;
    float TimeBeforeFarAttack;
    float TimeBeforeFarAttackIfOriWasDamaged;
    int32_t AttacksToForceCloseAttack;
    int32_t AttacksToRetreat;
    struct PlayerInsideZoneChecker* AttackFarZoneChecker;
    bool _Defeated_k__BackingField;
    struct NightCrawlerFightController_States* m_states;
    struct StateMachine_2* m_stateMachine;
    bool m_fightActive;
    bool m_escaped;
    float m_normalizedFarZoneTimer;
    int32_t m_consecutiveAttacks;
    bool m_oriDamagedDuringCloseAttack;
    bool m_shouldDefeat;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NightCrawlerFightController__Fields_FWDDECL)
#define IL2CPP_STRUCT_NightCrawlerFightController__Fields_FWDDECL
#include <Modloader/app/structs/DamageReceiver.h>
#include <Modloader/app/structs/EntityPlaceholderScalingLink.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HitFlash3DNew.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/MoonTimeline__Array.h>
#include <Modloader/app/structs/NightCrawlerFightController_States.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/StateMachine_2.h>
#include <Modloader/app/structs/Vitals.h>
#endif
#undef IL2CPP_STRUCT_NightCrawlerFightController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NightCrawlerFightController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NightCrawlerFightController__Fields_FWDDECL)
#include <Modloader/app/structs/NightCrawlerFightController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NightCrawlerFightController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
