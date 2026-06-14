#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FeedingGroundsGameplayController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FeedingGroundsGameplayController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FeedingGroundsGameplayController__Fields_DEFINED)
#include <Modloader/app/structs/CheckpointFunctionality.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_CheckpointFunctionality_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_FeedingGroundsGameplayController__Fields_DEFINED
struct FeedingGroundsPetrifiedOwlController;
struct FeedingGroundsDangerEffect;
struct PlayerInsideZoneChecker;
struct FeedingGroundsHideZone__Array;
struct FeedingGroundsDangerZone__Array;
struct FeedingGroundsZoneChecker__Array;
struct FeedingGroundsBreakableOwl;
struct FeedingGroundsBreakablePlatform;
struct FeedingGroundsHideZone;
struct HasAbilityCondition;
struct EventTriggerAnimator;
struct EventTriggerAnimator__Array;
struct MoonTimeline;
struct SerializedIntUberState;
struct SerializedBooleanUberState;
struct SoundHost;
struct Event_1;
struct RTPC;
struct GameObject;
struct Image;
struct IUberState__Array;
struct FeedingGroundsGameplayController__Fields {
    struct MonoBehaviour__Fields _;
    struct FeedingGroundsPetrifiedOwlController* PetrifiedOwlController;
    struct FeedingGroundsDangerEffect* DangerEffect;
    struct PlayerInsideZoneChecker* PlayableArea;
    struct FeedingGroundsHideZone__Array* HideZones;
    struct FeedingGroundsDangerZone__Array* DangerZones;
    struct FeedingGroundsDangerZone__Array* SecondDangerZones;
    struct FeedingGroundsZoneChecker__Array* InstakillZones;
    struct PlayerInsideZoneChecker* WeepingRidgeConnectionInstakillZone;
    struct CheckpointFunctionality AlertCheckpoint;
    struct FeedingGroundsBreakableOwl* BreakableOwl;
    struct FeedingGroundsBreakablePlatform* LeashPlatform;
    struct FeedingGroundsBreakablePlatform* HangingPlatform;
    struct FeedingGroundsHideZone* HideZonePartA;
    struct PlayerInsideZoneChecker* ZoneCrushPartA;
    struct FeedingGroundsHideZone* HideZoneCrushPartB;
    struct FeedingGroundsHideZone* HideZoneCrushPartD;
    struct HasAbilityCondition* HasGoldenSeinCondition;
    float PartATimer;
    float PartBTimer;
    float PartCTimer;
    float PartDTimer;
    float GeneralTimer;
    struct EventTriggerAnimator* AlertTrigger;
    struct PlayerInsideZoneChecker* EndTrigger;
    struct PlayerInsideZoneChecker* EscapedTrigger;
    struct EventTriggerAnimator* CrushPartATrigger;
    struct EventTriggerAnimator* CrushPartBTrigger;
    struct EventTriggerAnimator* CrushPartDTrigger;
    struct EventTriggerAnimator__Array* KillTriggers;
    struct EventTriggerAnimator* RockFallTrigger;
    struct EventTriggerAnimator__Array* FloatZoneEnableTriggers;
    struct EventTriggerAnimator__Array* FloatZoneDisableTriggers;
    struct MoonTimeline* StartleTimeline;
    struct MoonTimeline* PeekTimeline;
    struct MoonTimeline* AlertTimeline;
    struct MoonTimeline* HideUITimeline;
    struct MoonTimeline* PetrifiedOwlAlertTimeline;
    struct MoonTimeline* LeashPlatformDestroyTimeline;
    struct MoonTimeline* EscapeRocksTimeline;
    struct MoonTimeline* GoldenSeinAttackTimeline;
    struct MoonTimeline* FloatZoneDisableTimeline;
    struct MoonTimeline* FloatZoneEnableTimeline;
    struct SerializedIntUberState* PetrifiedOwlState;
    struct SerializedBooleanUberState* EscapeRocksState;
    struct SerializedBooleanUberState* FloatZoneState;
    struct SerializedIntUberState* FindKuQuestState;
    struct SoundHost* SoundHost;
    struct Event_1* ExposedEvent;
    struct Event_1* CoveredEvent;
    struct Event_1* SafeToRunEvent;
    struct RTPC* ExposedRTPC;
    bool Debug;
    struct GameObject* AlertBar;
    struct Image* AlertFill;
    float m_visibleTime;
    bool m_suspended;
    SuspendableMask__Enum m_suspensionMask;

    struct IUberState__Array* m_affectingUberStates;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FeedingGroundsGameplayController__Fields_FWDDECL)
#define IL2CPP_STRUCT_FeedingGroundsGameplayController__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/EventTriggerAnimator__Array.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/FeedingGroundsBreakableOwl.h>
#include <Modloader/app/structs/FeedingGroundsBreakablePlatform.h>
#include <Modloader/app/structs/FeedingGroundsDangerEffect.h>
#include <Modloader/app/structs/FeedingGroundsDangerZone__Array.h>
#include <Modloader/app/structs/FeedingGroundsHideZone.h>
#include <Modloader/app/structs/FeedingGroundsHideZone__Array.h>
#include <Modloader/app/structs/FeedingGroundsPetrifiedOwlController.h>
#include <Modloader/app/structs/FeedingGroundsZoneChecker__Array.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HasAbilityCondition.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/Image.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/SerializedIntUberState.h>
#include <Modloader/app/structs/SoundHost.h>
#endif
#undef IL2CPP_STRUCT_FeedingGroundsGameplayController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FeedingGroundsGameplayController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FeedingGroundsGameplayController__Fields_FWDDECL)
#include <Modloader/app/structs/FeedingGroundsGameplayController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FeedingGroundsGameplayController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
