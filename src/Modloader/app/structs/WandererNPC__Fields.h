#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WandererNPC__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WandererNPC__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererNPC__Fields_DEFINED)
#include <Modloader/app/structs/BaseNPC__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/WandererNPC_State__Enum.h>
#if defined(IL2CPP_STRUCT_BaseNPC__Fields_DEFINED) && defined(IL2CPP_STRUCT_WandererNPC_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_WandererNPC__Fields_DEFINED
struct DynamicDataResolver;
struct Transform;
struct MessageProvider;
struct AnimationPostprocess;
struct VectorAnimationParameter;
struct List_1_Moon_Timeline_MoonTimeline_;
struct List_1_WandererNPC_InteractionLine_;
struct MoonTimeline;
struct InteractionSettings;
struct CameraOffsetZone;
struct GameObject;
struct GroundEntityLocomotion;
struct WandererTurningBehaviour;
struct WandererEntity;
struct AimIK;
struct BlendAnimation;
struct FloatAnimationParameter;
struct MoonAnimation;
struct MessageBox;
struct Quest;
struct EventTriggerAnimator;
struct Projectile;
struct WandererNPC__Fields {
    struct BaseNPC__Fields _;
    struct DynamicDataResolver* m_dataResolver;
    float InteractionRadius;
    float IKRadius;
    float GreetRadius;
    struct Transform* OriLeft;
    struct Transform* OriRight;
    struct Transform* OriItemLeft;
    struct Transform* OriItemRight;
    struct MessageProvider* InteractionHintMessage;
    struct AnimationPostprocess* HeadIKPostprocess;
    struct VectorAnimationParameter* HeadTarget;
    struct List_1_Moon_Timeline_MoonTimeline_* SadGreetingRight;
    struct List_1_Moon_Timeline_MoonTimeline_* SadGreetingLeft;
    struct List_1_Moon_Timeline_MoonTimeline_* GreetingRight;
    struct List_1_Moon_Timeline_MoonTimeline_* GreetingLeft;
    struct List_1_WandererNPC_InteractionLine_* DesertQuestIntroductionLines;
    struct List_1_WandererNPC_InteractionLine_* DesertQuestPostIntroductionLines;
    struct List_1_WandererNPC_InteractionLine_* DesertQuestCompleteLines;
    struct List_1_WandererNPC_InteractionLine_* DesertQuestPostCompleteLines;
    struct MoonTimeline* m_currentTalking;
    struct InteractionSettings* QuestCompleteInteraction;
    struct CameraOffsetZone* InteractionCameraOffsetZone;
    struct GameObject* ConfirmationOverlayPrefab;
    struct GroundEntityLocomotion* m_locomotion;
    struct WandererTurningBehaviour* m_turning;
    struct WandererEntity* m_entity;
    struct AimIK* m_ik;
    float m_timeInInteractionZone;
    float OriPositionMoveRate;
    struct BlendAnimation* OriMoveToPositionAnimation;
    struct FloatAnimationParameter* Speed;
    struct MoonAnimation* OriHandItemAnimationStart;
    struct MoonAnimation* OriHandItemAnimationLoop;
    struct MoonAnimation* OriHandItemAnimationEnd;
    struct MoonAnimation* OriReceiveItemAnimationStart;
    struct MoonAnimation* OriReceiveItemAnimationLoop;
    struct MoonAnimation* OriReceiveItemAnimationEnd;
    WandererNPC_State__Enum m_currentState;

    WandererNPC_State__Enum m_lastIdleState;

    float m_currentStateTime;
    bool m_moveOri;
    struct Vector2 m_oriInteractionPosition;
    struct MessageBox* m_interactionHintMessageBox;
    struct Quest* Quest;
    float m_moveTime;
    struct Vector3 m_initPos;
    float MinTimeBetweenGreetings;
    float m_timeSinceLastGreeting;
    bool m_hasLostSightOfOri;
    int32_t m_greetingIndex;
    struct Vector3 SmoothedIKPosition;
    float TurnIKTime;
    float SmoothIKTime;
    float m_maxIKWeight;
    float MaxBackIKDist;
    bool m_thrownReward;
    bool m_pickupWindowPopped;
    int32_t m_lineId;
    struct EventTriggerAnimator* m_deactivateQuestItem;
    struct MessageProvider* GiveRewardAfterMessageProvider;
    struct MoonTimeline* TakeItemTimeline;
    struct MoonTimeline* TakeItemTimelineLeft;
    int32_t m_handOutLine;
    struct MoonTimeline* HandItem;
    struct MoonTimeline* HandItemLeft;
    struct MoonTimeline* m_currentTimeline;
    float MaxPickupTime;
    float m_pickupTimer;
    struct GameObject* IronNeedlePrefab;
    struct GameObject* m_ironNeedle;
    struct GameObject* RewardPrefab;
    struct Transform* RewardParent;
    struct Transform* RewardParentLeft;
    struct Projectile* m_reward;
    struct EventTriggerAnimator* m_activateReward;
    struct EventTriggerAnimator* m_throwReward;
    bool m_rewardTaken;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WandererNPC__Fields_FWDDECL)
#define IL2CPP_STRUCT_WandererNPC__Fields_FWDDECL
#include <Modloader/app/structs/AimIK.h>
#include <Modloader/app/structs/AnimationPostprocess.h>
#include <Modloader/app/structs/BlendAnimation.h>
#include <Modloader/app/structs/CameraOffsetZone.h>
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/InteractionSettings.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/List_1_WandererNPC_InteractionLine_.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Projectile.h>
#include <Modloader/app/structs/Quest.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/VectorAnimationParameter.h>
#include <Modloader/app/structs/WandererEntity.h>
#include <Modloader/app/structs/WandererTurningBehaviour.h>
#endif
#undef IL2CPP_STRUCT_WandererNPC__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererNPC__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WandererNPC__Fields_FWDDECL)
#include <Modloader/app/structs/WandererNPC__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WandererNPC__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
