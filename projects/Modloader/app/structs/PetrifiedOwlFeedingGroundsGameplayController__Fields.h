#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlFeedingGroundsGameplayController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlFeedingGroundsGameplayController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlFeedingGroundsGameplayController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlFeedingGroundsGameplayState__Enum.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlUberState__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlFeedingGroundsGameplayState__Enum_DEFINED) && defined(IL2CPP_STRUCT_PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlUberState__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlFeedingGroundsGameplayController__Fields_DEFINED
struct PetrifiedOwlFeedingGroundsPOwlController;
struct PetrifiedOwlFeedingGroundHideZoneGroup;
struct PetrifiedOwlFeedingGroundsPlayArea;
struct PetrifiedOwlFeedingGroundHideZone;
struct MoonTimeline;
struct EventTriggerAnimator;
struct IntUberState;
struct HasAbilityCondition;
struct GameObject;
struct String;
struct Transform;
struct IUberState__Array;
struct PetrifiedOwlFeedingGroundsGameplayController__Fields {
    struct MonoBehaviour__Fields _;
    struct PetrifiedOwlFeedingGroundsPOwlController* PetrifiedOwlController;
    float TimeToHide;
    float TimeToGetAttention;
    float TimeToGetBusy;
    struct PetrifiedOwlFeedingGroundHideZoneGroup* HideZoneGroup;
    struct PetrifiedOwlFeedingGroundsPlayArea* PlayArea;
    struct PetrifiedOwlFeedingGroundHideZone* LastHideZone;
    struct MoonTimeline* revealTimeline;
    struct MoonTimeline* eatTimeline;
    struct MoonTimeline* escapeTimeline;
    struct MoonTimeline* afterGoldenSeinTimeline;
    struct MoonTimeline* rockFall;
    struct EventTriggerAnimator* RevealEventTrigger;
    struct EventTriggerAnimator* EatEventTrigger;
    struct EventTriggerAnimator* OwlInTheAirEvent;
    struct EventTriggerAnimator* OwlLandedEventTrigger;
    struct EventTriggerAnimator* KillEventTrigger;
    struct EventTriggerAnimator* RockTriggeredEventTrigger;
    struct IntUberState* PetrifiedOwlState;
    struct HasAbilityCondition* HasGoldenSeinAbilityCondition;
    struct EventTriggerAnimator* SetUberStateAfterRockFallTrigger;
    struct EventTriggerAnimator* SetUberStateOwlDefeatedTrigger;
    struct GameObject* toActivateAfterEscape;
    struct GameObject* toActivateAfterGoldenSein;
    struct String* debugControllerState;
    struct String* degugAnimationState;
    float debugHddenTime;
    float debugVisibleTime;
    struct Transform* DebugBox;
    struct Transform* DebugBoxParent;
    PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlFeedingGroundsGameplayState__Enum m_state;

    PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlUberState__Enum m_unappliedUberState;

    float m_stateTime;
    bool m_playerHidden;
    float m_hiddenTime;
    float m_visibleTime;
    float m_restartTime;
    bool m_suspended;
    SuspendableMask__Enum m_suspensionMask;

    struct IUberState__Array* m_affectingUberStates;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlFeedingGroundsGameplayController__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlFeedingGroundsGameplayController__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HasAbilityCondition.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/IntUberState.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundHideZone.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundHideZoneGroup.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundsPOwlController.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundsPlayArea.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlFeedingGroundsGameplayController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlFeedingGroundsGameplayController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlFeedingGroundsGameplayController__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundsGameplayController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundsGameplayController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
