#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NPCEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NPCEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NPCEntity__Fields_DEFINED)
#include <Modloader/app/structs/Entity__Fields.h>
#include <Modloader/app/structs/NPCAnchorConfiguration__Enum.h>
#include <Modloader/app/structs/NPCCameraSetupConfiguration__Enum.h>
#include <Modloader/app/structs/NPCEntity_RewardState__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Entity__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_NPCAnchorConfiguration__Enum_DEFINED) && defined(IL2CPP_STRUCT_NPCCameraSetupConfiguration__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_NPCEntity_RewardState__Enum_DEFINED)
#define IL2CPP_STRUCT_NPCEntity__Fields_DEFINED
struct MessageProvider;
struct List_1_Moon_InteractionGraph_InteractionGraph_;
struct InteractionGraph;
struct CameraOffsetZone;
struct NPCCameraTransition;
struct MoonTimeline;
struct EventTriggerAnimator;
struct MessageBox;
struct Transform;
struct MoonAnimation;
struct TalkVariant;
struct Projectile;
struct StaticEntityLocomotion;
struct NPCEntity__Fields {
    struct Entity__Fields _;
    float InteractionRadius;
    struct Vector2 InteractionOffset;
    bool RequireLineOfSight;
    struct MessageProvider* InteractionHintMessage;
    NPCAnchorConfiguration__Enum AnchorSetup;

    struct Vector2 PlayerAnchorLeft;
    struct Vector2 PlayerAnchorRight;
    float AnchorSafeZone;
    bool CanInteract;
    struct List_1_Moon_InteractionGraph_InteractionGraph_* InteractionGraphs;
    struct InteractionGraph* _CurrentInteractionGraph_k__BackingField;
    NPCCameraSetupConfiguration__Enum CameraConfiguration;

    struct CameraOffsetZone* InteractionCameraOffsetZone;
    struct NPCCameraTransition* CameraTransition;
    bool PlayTalkAnimationOnEachNpcMessage;
    struct MoonTimeline* AutoTalkTimeline;
    bool m_canResetTalk;
    struct EventTriggerAnimator* CanResetTalk;
    bool _IsInteracting_k__BackingField;
    struct MessageBox* m_interactionHintMessageBox;
    bool m_shouldFinishInteraction;
    int32_t m_finishInteractionTime;
    bool m_waitForInteractionToEffectivelyStart;
    struct Vector2 NPCZoomRangeModification;
    bool AttachToTransform;
    struct Transform* AttachTransform;
    struct Vector3 AttachAnchor;
    bool PauseIdleOnInteraction;
    struct MoonAnimation* OriListenAnimationOverride;
    struct MoonTimeline* IntroTimeline;
    struct MoonTimeline* TalkTimeline;
    struct MoonTimeline* RewardTimeline;
    struct Transform* ItemBoneRight;
    struct Transform* ItemBoneLeft;
    struct TalkVariant* IdleVariantA;
    struct TalkVariant* IdleVariantB;
    struct TalkVariant* TalkVariantA;
    struct TalkVariant* TalkVariantB;
    struct TalkVariant* Throw;
    float ThrowItemGravity;
    float ThrowItemArc;
    struct TalkVariant* m_lastTalkVariant;
    struct TalkVariant* m_lastIdleVariant;
    struct Projectile* m_rewardInstance;
    NPCEntity_RewardState__Enum m_rewardState;

    bool m_isBypassingCamera;
    struct StaticEntityLocomotion* m_staticLocomotion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NPCEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_NPCEntity__Fields_FWDDECL
#include <Modloader/app/structs/CameraOffsetZone.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/InteractionGraph.h>
#include <Modloader/app/structs/List_1_Moon_InteractionGraph_InteractionGraph_.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/NPCCameraTransition.h>
#include <Modloader/app/structs/Projectile.h>
#include <Modloader/app/structs/StaticEntityLocomotion.h>
#include <Modloader/app/structs/TalkVariant.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_NPCEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NPCEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NPCEntity__Fields_FWDDECL)
#include <Modloader/app/structs/NPCEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NPCEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
