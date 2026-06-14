#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartographerNPC__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartographerNPC__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartographerNPC__Fields_DEFINED)
#include <Modloader/app/structs/BaseNPC__Fields.h>
#include <Modloader/app/structs/CartographerNPC_State__Enum.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_BaseNPC__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_CartographerNPC_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_CartographerNPC__Fields_DEFINED
struct PlayerStayInsideZoneTrigger;
struct SeinAbilityRestrictZone;
struct GameWorldArea;
struct ActionSequence;
struct CartographerEntity;
struct MessageProvider;
struct InteractionSettings;
struct MessageProvider__Array;
struct SoundProvider;
struct CameraOffsetZone;
struct MoonTimeline;
struct EventTriggerAnimator__Array;
struct GameObject;
struct Transform;
struct Locomotion;
struct MoonAnimation;
struct GroundEntityLocomotion;
struct BuyMapUIConfirmationOverlay;
struct MessageBox;
struct RuntimeGameWorldArea;
struct DynamicDataResolver;
struct CartographerNPC__Fields {
    struct BaseNPC__Fields _;
    struct PlayerStayInsideZoneTrigger* InteractionZone;
    struct SeinAbilityRestrictZone* AbilityRestrictZone;
    float m_restrictAbilitiesTimer;
    struct LayerMask CollisionMaskCanInteract;
    struct GameWorldArea* WorldArea;
    struct ActionSequence* MapRitual;
    struct CartographerEntity* m_entity;
    struct MessageProvider* InteractionHintMessage;
    struct MessageProvider* InteractionMessageProvider;
    struct InteractionSettings* PurchaseInteraction;
    struct InteractionSettings* MapPurcahsedInteraction;
    struct MessageProvider* NoPurchaseMessageProvider;
    struct MessageProvider* AfterMapBuyMessageProvider;
    struct MessageProvider* NotEnoughMessageProvider;
    struct MessageProvider__Array* AlternateInteractionMessageProviders;
    struct SoundProvider* notEnoughSpiritLightSoundProvider;
    struct SoundProvider* purchaseSuccessSoundProvider;
    struct CameraOffsetZone* InteractionCameraOffsetZone;
    struct MoonTimeline* TalkingTimelineLeft;
    struct MoonTimeline* TalkingTimelineRight;
    struct MoonTimeline* m_currentTimeline;
    struct MoonTimeline* NoSpiritTimelineLeft;
    struct MoonTimeline* NoSpiritTimelineRight;
    struct MoonTimeline* GiveMapTimelineLeft;
    struct MoonTimeline* GiveMapTimelineRight;
    struct EventTriggerAnimator__Array* GiveMapTriggers;
    struct GameObject* MapEntityPrefab;
    struct Transform* MapBone;
    struct GameObject* ConfirmationOverlayPrefab;
    struct Locomotion* TurningHandler;
    struct Transform* OriPositionForInteractionLeft;
    struct Transform* OriPositionForInteractionRight;
    float OriPositionMoveRate;
    struct MoonAnimation* OriMoveToPositionAnimation;
    struct MoonAnimation* OriGiveMapAnimation;
    struct GroundEntityLocomotion* Locomotion;
    struct BuyMapUIConfirmationOverlay* m_confirmationOverlay;
    struct GameObject* m_mapEntity;
    CartographerNPC_State__Enum m_currentState;

    float m_currentStateTime;
    struct MessageBox* m_interactionHintMessageBox;
    struct RuntimeGameWorldArea* m_runtimeArea;
    bool m_moveOri;
    struct Vector2 m_oriInteractionPosition;
    bool MapIsAvailableToBuy;
    struct DynamicDataResolver* m_dataResolver;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartographerNPC__Fields_FWDDECL)
#define IL2CPP_STRUCT_CartographerNPC__Fields_FWDDECL
#include <Modloader/app/structs/ActionSequence.h>
#include <Modloader/app/structs/BuyMapUIConfirmationOverlay.h>
#include <Modloader/app/structs/CameraOffsetZone.h>
#include <Modloader/app/structs/CartographerEntity.h>
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/EventTriggerAnimator__Array.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GameWorldArea.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/InteractionSettings.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MessageProvider__Array.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PlayerStayInsideZoneTrigger.h>
#include <Modloader/app/structs/RuntimeGameWorldArea.h>
#include <Modloader/app/structs/SeinAbilityRestrictZone.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_CartographerNPC__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartographerNPC__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CartographerNPC__Fields_FWDDECL)
#include <Modloader/app/structs/CartographerNPC__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartographerNPC__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
