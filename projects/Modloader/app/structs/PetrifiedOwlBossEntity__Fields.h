#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlBossEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlBossEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossEntity__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/EnemyEntity__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EnemyEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlBossEntity__Fields_DEFINED
struct EntityPlaceholderScalingLink;
struct SoundHost;
struct Transform;
struct GameObject;
struct DamageDealer__Array;
struct MoonAnimation;
struct FloatAnimationParameter;
struct PlayerInsideZoneChecker;
struct MoonReference_1_PetrifiedOwlBossLavaController_;
struct PetrifiedOwlBossLavaController;
struct List_1_Moon_MoonReference_1_;
struct List_1_UnityEngine_Collider_;
struct PetrifiedOwlBossFight1StartBehaviour;
struct PetrifiedOwlBossEscape1Behaviour;
struct PetrifiedOwlBossFight2StartBehaviour;
struct PetrifiedOwlBossFinalComboBehaviour;
struct MoonReference_1_Moon_Timeline_MoonTimeline_;
struct DamageReceiver_OverrideInfo;
struct SerializedBooleanUberState;
struct List_1_Moon_SerializedBooleanUberState_;
struct SerializedByteUberState;
struct InstantiationRecycleHelper;
struct HitFlash3D;
struct AnimationCurve;
struct PetrifiedOwlBossEntity_OnDamageReceivedDelegate;
struct FirewhirlBeamSpawner;
struct ProjectileSpawner;
struct BlockableLaser;
struct List_1_Moon_MoonReference_1__9;
struct List_1_PetrifiedOwlBossGroundPiece_;
struct List_1_PetrifiedOwlBossBaseBehaviour_;
struct List_1_UnityEngine_GameObject_;
struct IUberState__Array;
struct PetrifiedOwlBossEntity__Fields {
    struct EnemyEntity__Fields _;
    struct EntityPlaceholderScalingLink* ScalingLink;
    struct SoundHost* MainSoundHost;
    struct Transform* StiltTipLeft;
    struct Transform* StiltTipRight;
    struct Transform* SpitShootBone;
    struct Transform* FeatherFlurryShootBone;
    float IdlePositionGapBetweenStilts;
    float MinDistanceForBlockingStomp;
    struct Transform* Arena1LeftBound;
    struct Transform* Arena1RightBound;
    struct Transform* Arena1InitialPosition;
    struct Transform* Arena1CenterPosition;
    struct Transform* Arena1MaxHeightPosition;
    struct Transform* Escape1ScenePosition;
    struct Transform* Arena2InitialPosition;
    struct Transform* Arena2CenterPosition;
    struct Transform* Arena2MaxHeightPosition;
    struct Transform* Arena2LeftBound;
    struct Transform* Arena2RightBound;
    struct Transform* Arena2FeatherFlurryLeftPosition;
    struct Transform* Arena2FeatherFlurryRightPosition;
    struct Transform* Arena2RakeLeftPosition;
    struct Transform* Arena2RakeRightPosition;
    float MaxTimeTargetEnclosed;
    float MaxTimeTargetFree;
    float SpitMaxRange;
    float m_targetFreeTime;
    float m_targetEnclosedTime;
    int32_t m_sideMovesSinceLastEnclosed;
    struct GameObject* HeadCollidersParent;
    struct DamageDealer__Array* m_headDamageDealers;
    struct MoonAnimation* LookAtBlendAnimation;
    struct Transform* LookAtReferenceBone;
    struct Transform* LookAtMaxValueProvider;
    float OriTargetOffsetZ;
    struct Vector2 AnglesForFullLookAt;
    float TimeToTurnHead;
    struct FloatAnimationParameter* m_lookAtHorizontalRatio;
    struct FloatAnimationParameter* m_lookAtVerticalRatio;
    struct ActiveAnimationHandle m_activeLookAtBlendAnimation;
    struct PlayerInsideZoneChecker* StiltsNarrowZone;
    struct PlayerInsideZoneChecker* StiltsWideZone;
    struct PlayerInsideZoneChecker* ClawsNarrowZone;
    struct PlayerInsideZoneChecker* ClawsWideZone;
    struct PlayerInsideZoneChecker* HeadZone;
    struct PlayerInsideZoneChecker* Arena1LeftWallZone;
    struct PlayerInsideZoneChecker* Arena1RightWallZone;
    struct PlayerInsideZoneChecker* Arena2EndEscapeZone;
    struct PlayerInsideZoneChecker* Arena2MainZone;
    struct PlayerInsideZoneChecker* Arena2GrassLeftZone;
    struct PlayerInsideZoneChecker* Arena2GrassRightZone;
    struct MoonReference_1_PetrifiedOwlBossLavaController_* m_lavaController;
    struct PetrifiedOwlBossLavaController* m_lavaControllerCached;
    float GrassTimeToTriggerLava;
    float LavaUpTime;
    float LavaCooldownTime;
    struct List_1_Moon_MoonReference_1_* InvisibleWalls;
    struct List_1_UnityEngine_Collider_* m_invisibleWallsCached;
    struct Transform* CameraFocusPoint;
    struct Vector3 StartingPosition;
    bool m_hasInitialized;
    struct PetrifiedOwlBossFight1StartBehaviour* Fight1StartBehaviour;
    struct PetrifiedOwlBossEscape1Behaviour* Escape1StartBehaviour;
    struct PetrifiedOwlBossFight2StartBehaviour* Fight2StartBehaviour;
    struct PetrifiedOwlBossFinalComboBehaviour* FinalComboBehaviour;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_* EpilogueTimeline;
    bool m_shouldIncrementState;
    struct DamageReceiver_OverrideInfo* m_receiversOverrideInfo;
    struct SerializedBooleanUberState* GameFinishedState;
    struct List_1_Moon_SerializedBooleanUberState_* AllBreakableStates;
    struct SerializedByteUberState* PhasesState;
    float TransitionRatioEscape1;
    float TransitionRatioFight3;
    struct FloatAnimationParameter* m_flyToCamBlendParameter;
    struct GameObject* HitEffectPrefab;
    int32_t HitEffectPrewarmAmount;
    struct InstantiationRecycleHelper* m_hitEffectPrefabRecycler;
    struct HitFlash3D* HitFlash;
    struct AnimationCurve* DamageRequiredForStaggerCurve;
    float m_timeSinceLastHitReact;
    float m_accumulatedHitDamage;
    bool m_isInHitAccumulationWindow;
    bool m_isInHitReactionAllowedWindow;
    struct PetrifiedOwlBossEntity_OnDamageReceivedDelegate* OnDamageReceivedCallback;
    struct FirewhirlBeamSpawner* BeamSpawnerLegStompR;
    struct FirewhirlBeamSpawner* BeamSpawnerLegStompL;
    struct ProjectileSpawner* SpitSpawnerDefault;
    struct ProjectileSpawner* SpitSpawnerSeeking;
    struct ProjectileSpawner* FeatherFlurrySpawnerDefault;
    struct ProjectileSpawner* FeatherFlurrySpawnerSeeking;
    struct GameObject* StompAnticipationFeedbackPrefab;
    struct GameObject* DiveAnticipationFeedbackPrefab;
    struct BlockableLaser* Laser;
    struct Transform* Fight1StartCheckpointPosition;
    struct Transform* Escape1StartCheckpointPosition;
    struct Transform* Fight2StartCheckpointPosition;
    struct Transform* Fight3StartCheckpointPosition;
    struct Transform* DefeatedCheckpointPosition;
    struct List_1_Moon_MoonReference_1__9* Arena2GroundPiecesRefs;
    float Breakable1HealthRatio;
    float Breakable2HealthRatio;
    struct List_1_PetrifiedOwlBossGroundPiece_* m_groundPieces;
    struct List_1_PetrifiedOwlBossBaseBehaviour_* m_executingBehaviours;
    float m_attackCooldownTimer;
    float m_insideGrassZoneTimer;
    float m_outsideGrassZoneTimer;
    float m_lavaCooldownTimer;
    struct List_1_UnityEngine_GameObject_* m_shriekEffects;
    bool m_isRestoringState;
    struct IUberState__Array* m_affectingUberStates;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlBossEntity__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/BlockableLaser.h>
#include <Modloader/app/structs/DamageDealer__Array.h>
#include <Modloader/app/structs/DamageReceiver_OverrideInfo.h>
#include <Modloader/app/structs/EntityPlaceholderScalingLink.h>
#include <Modloader/app/structs/FirewhirlBeamSpawner.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HitFlash3D.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/InstantiationRecycleHelper.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1_.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__9.h>
#include <Modloader/app/structs/List_1_Moon_SerializedBooleanUberState_.h>
#include <Modloader/app/structs/List_1_PetrifiedOwlBossBaseBehaviour_.h>
#include <Modloader/app/structs/List_1_PetrifiedOwlBossGroundPiece_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Collider_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/MoonReference_1_PetrifiedOwlBossLavaController_.h>
#include <Modloader/app/structs/PetrifiedOwlBossEntity_OnDamageReceivedDelegate.h>
#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossFight1StartBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossFight2StartBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossLavaController.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker.h>
#include <Modloader/app/structs/ProjectileSpawner.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/SerializedByteUberState.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlBossEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlBossEntity__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlBossEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlBossEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
