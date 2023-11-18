#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FeedingGroundsPetrifiedOwlController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FeedingGroundsPetrifiedOwlController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FeedingGroundsPetrifiedOwlController__Fields_DEFINED)
#include <Modloader/app/structs/FeedingGroundsPetrifiedOwlController_KillStates__Enum.h>
#include <Modloader/app/structs/FeedingGroundsPetrifiedOwlController_KillType__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundsState__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_PetrifiedOwlFeedingGroundsState__Enum_DEFINED) && defined(IL2CPP_STRUCT_FeedingGroundsPetrifiedOwlController_KillStates__Enum_DEFINED) && defined(IL2CPP_STRUCT_FeedingGroundsPetrifiedOwlController_KillType__Enum_DEFINED)
#define IL2CPP_STRUCT_FeedingGroundsPetrifiedOwlController__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct PlayerInsideZoneChecker;
struct FeedingGroundsGameplayController;
struct SerializedIntUberState;
struct SerializedBooleanUberState;
struct MoonAnimator;
struct Transform;
struct IKTargetBehaviour;
struct GameObject;
struct Action;
struct List_1_DelayedAction_;
struct FeedingGroundsPetrifiedOwlController__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonTimeline* IdleTimeline;
    struct MoonTimeline* EatTimeline;
    struct MoonTimeline* PartAIdleTimeline;
    struct MoonTimeline* PartADestroyTimeline;
    struct MoonTimeline* PartADestroyIdleTimeline;
    struct MoonTimeline* PartBEnterTimeline;
    struct MoonTimeline* PartBIdleTimeline;
    struct MoonTimeline* PartBDestroyTimeline;
    struct MoonTimeline* PartBDestroyIdleTimeline;
    struct MoonTimeline* PartCEnterTimeline;
    struct MoonTimeline* PartCIdleTimeline;
    struct MoonTimeline* PartDEnterTimeline;
    struct MoonTimeline* PartDIdleTimeline;
    struct MoonTimeline* PartDDestroyTimeline;
    struct MoonTimeline* EndEnterTimeline;
    struct MoonTimeline* EndIdleTimeline;
    struct MoonTimeline* KillLeftToRightTimeline;
    struct MoonTimeline* KillRightToLeftTimeline;
    struct MoonTimeline* KillVerticalTimeline;
    struct MoonTimeline* PartATakeOffTimeline;
    struct MoonTimeline* PartADestroyTakeOffTimeline;
    struct MoonTimeline* PartBTakeOffTimeline;
    struct MoonTimeline* PartBDestroyTakeOffTimeline;
    struct MoonTimeline* PartCTakeOffTimeline;
    struct MoonTimeline* PartDTakeOffTimeline;
    struct MoonTimeline* BackTakeOffTimeline;
    struct EventTriggerAnimator* EatTrigger;
    struct EventTriggerAnimator* PartAEnterEndTrigger;
    struct PlayerInsideZoneChecker* MoveToPartDTrigger;
    struct PlayerInsideZoneChecker* PartADestroyTrigger;
    struct PlayerInsideZoneChecker* PartBDestroyTrigger;
    struct PlayerInsideZoneChecker* PartDDestroyTrigger;
    struct EventTriggerAnimator* PartBSafeToRunTrigger;
    struct EventTriggerAnimator* PartCSafeToRunTrigger;
    struct EventTriggerAnimator* PartDSafeToRunTrigger;
    bool DestroyHidingSpots;
    float PartADestroyTimer;
    float PartBDestroyTimer;
    float PartDDestroyTimer;
    struct FeedingGroundsGameplayController* FeedingGroundsGameplayController;
    struct SerializedIntUberState* ChaseState;
    struct SerializedBooleanUberState* ClothBrokenState;
    struct MoonAnimator* Animator;
    struct Transform* OwlEntity;
    struct IKTargetBehaviour* HeadIK;
    struct Vector3 KillLeftToRightOffset;
    struct Vector3 KillRightToLeftOffset;
    struct Vector3 KillVerticalOffset;
    float TimeBeforeTakeOff;
    float KillSideAnimationThreshold;
    struct GameObject* DamageColliders;
    struct Transform* PartAPositionTransform;
    struct MoonTimeline* FaceOriSoundTimeline;
    float m_lookAtOriTimer;
    float m_readyToDestroyTime;
    struct MoonTimeline* m_currentTimeline;
    struct MoonTimeline* m_currentTakeOffTimeline;
    PetrifiedOwlFeedingGroundsState__Enum m_state;

    FeedingGroundsPetrifiedOwlController_KillStates__Enum m_killState;

    FeedingGroundsPetrifiedOwlController_KillType__Enum m_killType;

    struct Vector3 m_originalPosition;
    struct Action* m_cancelKillCallback;
    bool m_alert;
    bool m_hide;
    struct List_1_DelayedAction_* m_delayedActions;
    bool m_flying;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FeedingGroundsPetrifiedOwlController__Fields_FWDDECL)
#define IL2CPP_STRUCT_FeedingGroundsPetrifiedOwlController__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/FeedingGroundsGameplayController.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IKTargetBehaviour.h>
#include <Modloader/app/structs/List_1_DelayedAction_.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/SerializedIntUberState.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_FeedingGroundsPetrifiedOwlController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FeedingGroundsPetrifiedOwlController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FeedingGroundsPetrifiedOwlController__Fields_FWDDECL)
#include <Modloader/app/structs/FeedingGroundsPetrifiedOwlController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FeedingGroundsPetrifiedOwlController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
