#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokBossTendrilStrikeBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokBossTendrilStrikeBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossTendrilStrikeBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/KwolokBossBaseBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_KwolokBossBaseBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_KwolokBossTendrilStrikeBehaviour__Fields_DEFINED
struct MoonTimeline;
struct List_1_Moon_Timeline_EventTriggerAnimator_;
struct GameObject;
struct List_1_Moon_MoonReference_1__8;
struct List_1_LinearPath_;
struct StateMachine_2;
struct KwolokBossTendrilStrikeBehaviour_States;
struct KwolokBossTendrilStrikeBehaviour__Fields {
    struct KwolokBossBaseBehaviour__Fields _;
    struct MoonTimeline* StabInTimeline;
    struct MoonTimeline* StabLeftTimeline;
    struct MoonTimeline* StabLeftOutTimeline;
    struct MoonTimeline* StabRightTimeline;
    struct MoonTimeline* StabRightOutTimeline;
    struct List_1_Moon_Timeline_EventTriggerAnimator_* TendrilStrikeAttackTriggers;
    float NumberOfStrikes;
    float CancelBehaviourAtDamageThreshold;
    int32_t MinStrikesBeforeCancellation;
    float TendrilHeartChance;
    float TendrilEnergyChance;
    struct GameObject* TendrilPrefab;
    struct List_1_Moon_MoonReference_1__8* TendrilPositioningPaths;
    struct List_1_LinearPath_* m_tendrilPositioningPathsCached;
    int32_t m_tendrilIndex;
    int32_t m_strikeCount;
    float m_damageTaken;
    bool m_wasCancelled;
    struct StateMachine_2* m_stateMachine;
    struct KwolokBossTendrilStrikeBehaviour_States* m_states;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokBossTendrilStrikeBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokBossTendrilStrikeBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/KwolokBossTendrilStrikeBehaviour_States.h>
#include <Modloader/app/structs/List_1_LinearPath_.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__8.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_EventTriggerAnimator_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/StateMachine_2.h>
#endif
#undef IL2CPP_STRUCT_KwolokBossTendrilStrikeBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossTendrilStrikeBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokBossTendrilStrikeBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokBossTendrilStrikeBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokBossTendrilStrikeBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
