#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Cart__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Cart__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Cart__Fields_DEFINED)
#include <Modloader/app/structs/LegacyEntity__Fields.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>
#if defined(IL2CPP_STRUCT_LegacyEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_DEFINED)
#define IL2CPP_STRUCT_Cart__Fields_DEFINED
struct CartController;
struct CartLogicCycle;
struct PlatformBehaviour;
struct CartJump;
struct CartBoost;
struct CartFlip;
struct CapsuleCollider;
struct Collider;
struct CartDamageCheckAction;
struct GameObject;
struct Transform;
struct CartSettings;
struct LegacyTimelineSequence;
struct MoonTimeline;
struct RTPC;
struct SoundProvider;
struct Action;
struct CartBody;
struct CartAnimation;
struct Collider__Array;
struct CartStopper;
struct RaycastHit__Array;
struct List_1_Rail_;
struct PushPullBlock;
struct CameraLookAheadController;
struct Rigidbody;
struct Rail;
struct ISoundHost;
struct IDamageReciever__Array;
struct Cart__Fields {
    struct LegacyEntity__Fields _;
    struct CartController* CartController;
    struct CartLogicCycle* LogicCycle;
    struct PlatformBehaviour* PlatformBehaviour;
    struct CartJump* CartJump;
    struct CartBoost* CartBoost;
    struct CartFlip* CartFlip;
    struct CapsuleCollider* Collider;
    struct Collider* SeinCollider;
    struct CartDamageCheckAction* CartDamage;
    struct GameObject* RidePosition;
    struct GameObject* AngleRaycastPosition;
    struct Transform* GoThroughAboveRailRaycastPosition;
    struct GameObject* CollisionRaycastAnchor;
    float MaxEnterDistance;
    float FlipDistance;
    struct CartSettings* Settings;
    struct GameObject* DestroyEffect;
    struct GameObject* LandEffect;
    struct LegacyTimelineSequence* ImpactSequence;
    struct MoonTimeline* ImpactSequenceNew;
    struct MoonTimeline* StopCarryingSequence;
    struct MoonTimeline* OnPlayerDeathSequence;
    struct MoonTimeline* LandSequence;
    struct MoonTimeline* BumperHitSequence;
    struct Rect CollectableDetector;
    struct RTPC* VelocityRTPC;
    struct SoundProvider* VelocitySoundProvider;
    bool DebugDraw;
    struct Action* OnStop;
    float railContactDistance;
    float railSnapDistance;
    float railLoseTime;
    float killOutsideOfScreenTimeout;
    float m_speed;
    struct Transform* m_transform;
    struct CartBody* m_body;
    struct CartAnimation* m_animation;
    struct GameObject* m_carryingObj;
    struct Collider__Array* m_carryingObjColliders;
    bool m_isMoving;
    struct LegacyTimelineSequence* m_currentSequence;
    bool m_wasOnCartStopper;
    struct CartStopper* m_cartStopper;
    struct RaycastHit__Array* m_rayHitBuffer;
    struct List_1_Rail_* m_validRails;
    struct PushPullBlock* m_pushPullBlock;
    struct CameraLookAheadController* m_cameraLookAhead;
    struct Rect m_worldRectBounds;
    struct Rigidbody* m_rigidbody;
    struct Vector3 m_oldRailPosition;
    struct Vector3 m_oldRailLocalPoint;
    struct Rail* m_oldRail;
    float m_railDistance;
    struct Vector3 m_railNormal;
    bool m_insideStopper;
    bool m_wasCarrying;
    float m_outsideScreenTime;
    struct Collider* m_ignoredCollider;
    struct ISoundHost* m_soundHost;
    struct WwiseEventSystem_SoundHandle m_soundHandle;
    struct Rail* _CurrentRail_k__BackingField;
    struct IDamageReciever__Array* m_damageReceivers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Cart__Fields_FWDDECL)
#define IL2CPP_STRUCT_Cart__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/CameraLookAheadController.h>
#include <Modloader/app/structs/CapsuleCollider.h>
#include <Modloader/app/structs/CartAnimation.h>
#include <Modloader/app/structs/CartBody.h>
#include <Modloader/app/structs/CartBoost.h>
#include <Modloader/app/structs/CartController.h>
#include <Modloader/app/structs/CartDamageCheckAction.h>
#include <Modloader/app/structs/CartFlip.h>
#include <Modloader/app/structs/CartJump.h>
#include <Modloader/app/structs/CartLogicCycle.h>
#include <Modloader/app/structs/CartSettings.h>
#include <Modloader/app/structs/CartStopper.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/ISoundHost.h>
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/List_1_Rail_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PlatformBehaviour.h>
#include <Modloader/app/structs/PushPullBlock.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/Rail.h>
#include <Modloader/app/structs/RaycastHit__Array.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_Cart__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Cart__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Cart__Fields_FWDDECL)
#include <Modloader/app/structs/Cart__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Cart__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
