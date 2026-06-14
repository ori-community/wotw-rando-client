#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SneezeSlugBurrowBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SneezeSlugBurrowBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SneezeSlugBurrowBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_SneezeSlugEntity___Fields.h>
#include <Modloader/app/structs/SneezeSlugBurrowBehaviour_State__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_SneezeSlugEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SneezeSlugBurrowBehaviour_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SneezeSlugBurrowBehaviour__Fields_DEFINED
struct MoonFloat;
struct MoonTimeline;
struct AnimationPlayer;
struct RootMotionProcessorData;
struct SkinnedMeshRenderer;
struct EventTriggerAnimator;
struct PrefabSpawner;
struct CloudAttackSettings;
struct MoonBool;
struct Transform;
struct GroundEntityLocomotion;
struct PlatformMovement;
struct BlockDamageInterruptionHandler;
struct SneezeSlugBurrowBehaviour__Fields {
    struct EntityBehaviourNode_1_SneezeSlugEntity___Fields _;
    struct MoonFloat* AnimationInSpeed;
    struct MoonFloat* AnimationOutSpeed;
    struct MoonTimeline* BurrowInTimelineSequence;
    struct MoonTimeline* BurrowOutTimelineSequence;
    struct AnimationPlayer* TimelineInAnimPlayer;
    struct AnimationPlayer* TimelineOutAnimPlayer;
    struct RootMotionProcessorData* RootMotion;
    float TurnOnVisibilityDelay;
    struct SkinnedMeshRenderer* Visuals;
    struct MoonFloat* MinDistanceForTeleport;
    struct EventTriggerAnimator* DeactivateDamageInputTrigger;
    struct EventTriggerAnimator* BlastTrigger;
    struct PrefabSpawner* BlastProjectileSpawner;
    struct CloudAttackSettings* CloudAttackSettings;
    struct PrefabSpawner* SneezeProjectileSpawner;
    struct EventTriggerAnimator* SneezeTrigger;
    struct Vector3 m_shootTargetPos;
    struct MoonBool* CommitToInitialTargetPosition;
    struct MoonFloat* MinHorizontalAimDistance;
    struct Transform* ShootPointFront;
    struct Transform* ShootPointBack;
    float ProjectileArcHeight;
    float ProjectileGravity;
    int32_t ProjectileDamage;
    float MinimumDistanceToArcProjectile;
    struct MoonFloat* MaxAimDistance;
    struct MoonFloat* RecoilForce;
    struct MoonFloat* PrefferedDistanceFromBurrow;
    struct MoonFloat* DistanceFromBurrowFalloff;
    struct MoonFloat* PrefferedDistanceFromOri;
    struct MoonFloat* OriDistanceRatingMultiplier;
    struct MoonFloat* BurrowedTime;
    SneezeSlugBurrowBehaviour_State__Enum m_state;

    float m_timeInState;
    bool m_hasFinished;
    struct MoonTimeline* m_prevTimeline;
    struct GroundEntityLocomotion* m_locomotion;
    struct PlatformMovement* m_platformMovement;
    struct BlockDamageInterruptionHandler* m_blockingHandlerBurrowingIn;
    struct BlockDamageInterruptionHandler* m_blockingHandlerBurrowingOut;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SneezeSlugBurrowBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SneezeSlugBurrowBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/AnimationPlayer.h>
#include <Modloader/app/structs/BlockDamageInterruptionHandler.h>
#include <Modloader/app/structs/CloudAttackSettings.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MoonBool.h>
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#include <Modloader/app/structs/SkinnedMeshRenderer.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SneezeSlugBurrowBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SneezeSlugBurrowBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SneezeSlugBurrowBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SneezeSlugBurrowBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SneezeSlugBurrowBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
