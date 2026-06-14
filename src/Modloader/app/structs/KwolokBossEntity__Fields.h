#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokBossEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokBossEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossEntity__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/EnemyEntity__Fields.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_EnemyEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_KwolokBossEntity__Fields_DEFINED
struct EntityPlaceholderScalingLink;
struct SoundHost;
struct Event_1;
struct Transform;
struct GameObject;
struct Collider__Array;
struct DamageDealer__Array;
struct SkinnedMeshRenderer;
struct FloatAnimationParameter;
struct MoonTimeline;
struct MoonAnimation;
struct IKPostprocess;
struct KwolokBossEntity_ModifyDesiredLegsIKDelegate;
struct AnimationCurve;
struct KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate;
struct KwolokBossEntity_ModifyDesiredLookAngleDelegate;
struct KwolokBossBaseBehaviour;
struct SerializedByteUberState;
struct MoonReference_1_Moon_Timeline_MoonTimeline_;
struct MoonAnimator;
struct MoonReference_1_KwolokBossBehaviourZones_;
struct HitFlash3D;
struct KwolokBossEntity_OnDamageReceivedDelegate;
struct MoonReference_1_UnityEngine_Transform_;
struct KwolokBossEntity_ModifyCameraTargetsDelegate;
struct List_1_KwolokBossBaseBehaviour_;
struct IUberState__Array;
struct KwolokBossEntity__Fields {
    struct EnemyEntity__Fields _;
    struct EntityPlaceholderScalingLink* ScalingLink;
    struct SoundHost* MainSoundHost;
    struct Event_1* BodyEnterWaterEvent;
    struct Event_1* BodyExitWaterEvent;
    struct Transform* BodyReferencePosition;
    bool m_bodyConsideredInWater;
    struct Rect m_bodyPositionRect;
    struct Transform* StinkSpiritCenterBone;
    struct Transform* MouthProjectileShootBone;
    struct GameObject* ColliderParentObject;
    int32_t m_fightLayer;
    int32_t m_chaseLayer;
    struct Collider__Array* m_colliders;
    struct DamageDealer__Array* m_allDamageDealers;
    struct SkinnedMeshRenderer* HeadSkinnedMesh;
    struct FloatAnimationParameter* KwolokTongueLength;
    float MinTongueLength;
    float MaxTongueLength;
    struct MoonTimeline* TentacleShakeTimeline;
    struct MoonAnimation* StinkSpiritLookAtBlendAnimation;
    struct Transform* StinkSpiritLookAtReferenceBone;
    struct MoonAnimation* KwolokLookAtBlendAnimation;
    struct Transform* KwolokLookAtReferenceBone;
    struct Vector2 AnglesForFullLookAt;
    struct Transform* LookAtMaxValueProvider;
    struct FloatAnimationParameter* m_stinkSpiritLookHorizontalRatio;
    struct FloatAnimationParameter* m_stinkSpiritLookVerticalRatio;
    struct FloatAnimationParameter* m_kwolokLookHorizontalRatio;
    struct FloatAnimationParameter* m_kwolokLookVerticalRatio;
    struct ActiveAnimationHandle m_activeStinkSpiritLookAtBlendAnimation;
    struct ActiveAnimationHandle m_activeKwolokLookAtBlendAnimation;
    struct IKPostprocess* KwolokTongueIK;
    struct Transform* KwolokTongueIKTarget;
    struct IKPostprocess* FrontLeftLegIK;
    struct IKPostprocess* FrontRightLegIK;
    struct IKPostprocess* BackLeftLegIK;
    struct IKPostprocess* BackRightLegIK;
    struct KwolokBossEntity_ModifyDesiredLegsIKDelegate* ModifyLegsIK;
    struct AnimationCurve* LookAngleChangeSpeedForAngleDelta;
    struct KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate* ModifyLookAngleChangeSpeed;
    struct KwolokBossEntity_ModifyDesiredLookAngleDelegate* ModifyDesiredLookAngle;
    struct KwolokBossBaseBehaviour* IntroBehaviour;
    struct KwolokBossBaseBehaviour* EscapeBehaviour;
    struct KwolokBossBaseBehaviour* DryPhaseStartBehaviour;
    struct KwolokBossBaseBehaviour* CleanWaterPhaseStartBehaviour;
    struct SerializedByteUberState* PhasesState;
    float TransitionRatioCleanWater;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_* TransitionToCleanWater;
    float TransitionRatioCorruptedWater;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_* TransitionToCorruptedWater;
    struct MoonAnimator* StinkSpiritAnimator;
    struct MoonAnimator* KwolokAnimator;
    struct FloatAnimationParameter* m_lookAngle;
    struct AnimationCurve* MinLookAngleForPosition;
    struct AnimationCurve* MaxLookAngleForPosition;
    struct FloatAnimationParameter* m_bodyHeightRatio;
    struct FloatAnimationParameter* m_feetHeightRatio;
    struct FloatAnimationParameter* m_tongueAttackHeightRatio;
    struct MoonReference_1_KwolokBossBehaviourZones_* ArenaBehaviourZones;
    struct Vector2 AttackCooldownTimeRandomRange;
    struct GameObject* HitEffectPrefab;
    struct HitFlash3D* StinkSpiritFlash;
    struct AnimationCurve* DamageRequiredForStaggerCurve;
    float m_timeSinceLastHitReact;
    float m_accumulatedHitDamage;
    bool m_isInHitAccumulationWindow;
    bool m_isInHitReactionAllowedWindow;
    struct KwolokBossEntity_OnDamageReceivedDelegate* OnDamageReceivedCallback;
    struct MoonReference_1_UnityEngine_Transform_* DryPhaseStartCheckpointPosition;
    struct MoonReference_1_UnityEngine_Transform_* EscapePhaseStartCheckpointPosition;
    struct MoonReference_1_UnityEngine_Transform_* DefeatedPhaseStartCheckpointPosition;
    struct KwolokBossEntity_ModifyCameraTargetsDelegate* ModifyCameraTargets;
    struct List_1_KwolokBossBaseBehaviour_* m_executingBehaviours;
    bool m_isOnCooldown;
    int32_t m_resetFrameID;
    bool m_isEnabling;
    float TimeToTurnHead;
    struct Transform* HitFlashTracker;
    struct IUberState__Array* m_affectingUberStates;
    struct KwolokBossBaseBehaviour* SpewBehaviour;
    struct KwolokBossBaseBehaviour* CeilingSlamBehaviour;
    struct KwolokBossBaseBehaviour* SpitBehaviour;
    struct KwolokBossBaseBehaviour* TentacleStabBehaviour;
    struct KwolokBossBaseBehaviour* TongueBehaviour;
    struct KwolokBossBaseBehaviour* UnderwaterPullBehaviour;
    struct KwolokBossBaseBehaviour* SpitWormBehaviour;
    struct KwolokBossBaseBehaviour* CannonBehaviour;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokBossEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokBossEntity__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/DamageDealer__Array.h>
#include <Modloader/app/structs/EntityPlaceholderScalingLink.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HitFlash3D.h>
#include <Modloader/app/structs/IKPostprocess.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/KwolokBossBaseBehaviour.h>
#include <Modloader/app/structs/KwolokBossEntity_ModifyCameraTargetsDelegate.h>
#include <Modloader/app/structs/KwolokBossEntity_ModifyDesiredLegsIKDelegate.h>
#include <Modloader/app/structs/KwolokBossEntity_ModifyDesiredLookAngleDelegate.h>
#include <Modloader/app/structs/KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate.h>
#include <Modloader/app/structs/KwolokBossEntity_OnDamageReceivedDelegate.h>
#include <Modloader/app/structs/List_1_KwolokBossBaseBehaviour_.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonReference_1_KwolokBossBehaviourZones_.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SerializedByteUberState.h>
#include <Modloader/app/structs/SkinnedMeshRenderer.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_KwolokBossEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokBossEntity__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokBossEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokBossEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
