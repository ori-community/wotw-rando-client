namespace app {
struct PiranhaPatrolBehaviour__StaticFields {
};

struct PiranhaPatrolBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PiranhaPatrolBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PiranhaPatrolBehaviour__VTable vtable;
};

struct PiranhaEntity__Fields {
    struct EnemyEntity__Fields _;
    struct Vector3 WaterCheckOffset;
    float BashKickbackForce;
    float HitKickbackForce;
    float StopFollowingDelay;
    float StunTime;
    struct GameObject *TrailFXPrefab;
    struct Transform *TrailFXHolder;
    float m_followDelay;
    float m_stunTime;
    struct SwimmingLocomotion *m_swimmingLocomotion;
};

struct PiranhaEntity {
    struct PiranhaEntity__Class *klass;
    MonitorData *monitor;
    struct PiranhaEntity__Fields fields;
};

struct PiranhaEntity__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData Moon_IHitStopReceiver_get_gameObject;
    VirtualInvokeData GetHitStopAutoSuspendables;
    VirtualInvokeData OnHitStopStart;
    VirtualInvokeData OnHitStopEnd;
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
    VirtualInvokeData OnSceneRootPostEnable;
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData get_BehaviourTree;
    VirtualInvokeData ResolveDamage;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData ShouldKillBubble;
    VirtualInvokeData CreateTimelineParentEntity;
    VirtualInvokeData get_AddChildren;
    VirtualInvokeData get_InvalidateParentTimelineCache;
    VirtualInvokeData set_InvalidateParentTimelineCache;
    VirtualInvokeData get_ExternalID;
    VirtualInvokeData get_TrackTranformChangesForRecording;
    VirtualInvokeData get_TrackingExclusions;
    VirtualInvokeData get_ParsingGroup;
    VirtualInvokeData get_CameraTargetActive;
    VirtualInvokeData get_CameraTargetPosition;
    VirtualInvokeData get_CameraTargetPadding;
    VirtualInvokeData get_CameraInfluencePosition;
    VirtualInvokeData AdjustCameraTargetWeight;
    VirtualInvokeData get_CameraInfluenceMinDist;
    VirtualInvokeData get_CameraInfluenceMaxDist;
    VirtualInvokeData get_CameraZoomFactor;
    VirtualInvokeData get_TargetType;
    VirtualInvokeData GetTargetData;
    VirtualInvokeData IPortalVisitor_get_Position;
    VirtualInvokeData IPortalVisitor_set_Position;
    VirtualInvokeData IPortalVisitor_get_Speed;
    VirtualInvokeData IPortalVisitor_set_Speed;
    VirtualInvokeData OnGoThroughPortal;
    VirtualInvokeData OnPortalOverlapEnter;
    VirtualInvokeData OnPortalOverlapExit;
    VirtualInvokeData Prewarm;
    VirtualInvokeData get_IsSuspended_1;
    VirtualInvokeData set_IsSuspended_1;
    VirtualInvokeData get_CanOptimizeBehaviourTreeEvaluation;
    VirtualInvokeData get_IsFacingTarget;
    VirtualInvokeData get_IgnoreAllowedZonesIfFreed;
    VirtualInvokeData get_ScreenPadding;
    VirtualInvokeData IsBehaviourTreePaused;
    VirtualInvokeData OnValidate;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData OnAwake;
    VirtualInvokeData GetBehaviourTree;
    VirtualInvokeData OnCacheSerializedComponents;
    VirtualInvokeData UnserializedInitialization;
    VirtualInvokeData Start;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData OnUpdate_1;
    VirtualInvokeData OnFixedUpdate;
    VirtualInvokeData OnBeforeBehaviourTreeFixedUpdate;
    VirtualInvokeData OnSuspendedStay;
    VirtualInvokeData OnUpdate_2;
    VirtualInvokeData EnterSpawningState;
    VirtualInvokeData UpdateSpawningState;
    VirtualInvokeData ExitSpawningState;
    VirtualInvokeData EnterDecisionMakingState;
    VirtualInvokeData UpdateDecisionMakingState;
    VirtualInvokeData ExitDecisionMakingState;
    VirtualInvokeData EnterReactionState;
    VirtualInvokeData UpdateReactionState;
    VirtualInvokeData ExitReactionState;
    VirtualInvokeData EnterCinematicState;
    VirtualInvokeData UpdateCinematicState;
    VirtualInvokeData ExitCinematicState;
    VirtualInvokeData GetActiveLocomotion;
    VirtualInvokeData OnContactDamageDealt;
    VirtualInvokeData OnHandleFireDamage;
    VirtualInvokeData OnHandleIceDamage;
    VirtualInvokeData OnDamageReceived;
    VirtualInvokeData OnDamageBlocked;
    VirtualInvokeData DeactivateDamageReceivers;
    VirtualInvokeData InstantKill;
    VirtualInvokeData OnDied;
    VirtualInvokeData SpawnOrbs;
    VirtualInvokeData OnDiedOutOfBounds;
    VirtualInvokeData OnEndDeathBehaviour;
    VirtualInvokeData OnPostRestoreCheckpoint;
    VirtualInvokeData ResetEntity;
    VirtualInvokeData GetHitStopAutoSuspendables_1;
    VirtualInvokeData OnHitStopStart_1;
    VirtualInvokeData OnHitStopEnd_1;
    VirtualInvokeData OnPoolSpawned_1;
    VirtualInvokeData IsFacingPoint;
    VirtualInvokeData ResolveDamage_1;
    VirtualInvokeData get_CameraTargetActive_1;
    VirtualInvokeData get_CameraTargetPosition_1;
    VirtualInvokeData get_CameraTargetPadding_1;
    VirtualInvokeData get_CameraInfluenceMinDist_1;
    VirtualInvokeData get_CameraInfluenceMaxDist_1;
    VirtualInvokeData get_CameraZoomFactor_1;
    VirtualInvokeData get_TargetType_1;
    VirtualInvokeData AdjustCameraTargetWeight_1;
    VirtualInvokeData get_IsAggroed;
    VirtualInvokeData get_CanAttackTokenBeStolen;
    VirtualInvokeData OnAttackTokenStolen;
    VirtualInvokeData get_UsesHealthbar;
    VirtualInvokeData get_ShouldApplySpawnPopFix;
    VirtualInvokeData get_IsFlyingEnemy;
    VirtualInvokeData get_UseDeathLoopTimeLimit;
    VirtualInvokeData get_CanAttackTokenBeStolen_1;
    VirtualInvokeData get_AutoResetSpotOriBool;
    VirtualInvokeData TryGetPlatformMovement;
    VirtualInvokeData ModifyKickbackForce;
};

struct PiranhaEntity__StaticFields {
};

struct PiranhaEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PiranhaEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PiranhaEntity__VTable vtable;
};

struct PiranhaPlaceholder__Fields {
    struct EntityPlaceholder__Fields _;
};

struct PiranhaPlaceholder {
    struct PiranhaPlaceholder__Class *klass;
    MonitorData *monitor;
    struct PiranhaPlaceholder__Fields fields;
};

struct PiranhaPlaceholder__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData IDisableOnRecordablePreview_get_gameObject;
    VirtualInvokeData OnSceneRootPreDisable;
    VirtualInvokeData get_Prefab;
    VirtualInvokeData get_RequiresGroundToSpawn;
    VirtualInvokeData get_CheckForOverlap;
    VirtualInvokeData ClearPrefabLinks;
    VirtualInvokeData get_CanSpawn;
    VirtualInvokeData InstantiateInstance;
    VirtualInvokeData PoolCurrentInstance;
    VirtualInvokeData Spawn;
    VirtualInvokeData OnStart;
    VirtualInvokeData OnPlaceholderEnable;
    VirtualInvokeData OnPlaceholderDisable;
    VirtualInvokeData OnRestoreCheckpoint;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData OnHealthZero;
    VirtualInvokeData OnDeath;
    VirtualInvokeData UpdateAutoSpawnState;
    VirtualInvokeData UpdateSpawnOnEventState;
    VirtualInvokeData get_IsOnScreenPaddedExtended;
    VirtualInvokeData get_IsOnScreenPadded;
    VirtualInvokeData get_IsOnScreen;
    VirtualInvokeData InstantiateFromPooledObj;
    VirtualInvokeData IsUsingVariations;
    VirtualInvokeData CanUseAutosetupPositionInOnSand;
};

struct PiranhaPlaceholder__StaticFields {
};

struct PiranhaPlaceholder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PiranhaPlaceholder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PiranhaPlaceholder__VTable vtable;
};

struct GroundEntityReactions__Fields {
    struct EntityReactions__Fields _;
    struct EntityReactionBehaviour *FallBehaviour;
};

struct GroundEntityReactions {
    struct GroundEntityReactions__Class *klass;
    MonitorData *monitor;
    struct GroundEntityReactions__Fields fields;
};

struct GroundEntityReactions__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData OnCacheSerializedComponents;
    VirtualInvokeData OnAwake;
    VirtualInvokeData ProcessEntityEvent;
};

struct GroundEntityReactions__StaticFields {
};

struct GroundEntityReactions__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GroundEntityReactions__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GroundEntityReactions__VTable vtable;
};

struct SandWormPlaceholder__Fields {
    struct EntityPlaceholder__Fields _;
};

struct SandWormPlaceholder {
    struct SandWormPlaceholder__Class *klass;
    MonitorData *monitor;
    struct SandWormPlaceholder__Fields fields;
};

struct SandWormPlaceholder__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData IDisableOnRecordablePreview_get_gameObject;
    VirtualInvokeData OnSceneRootPreDisable;
    VirtualInvokeData get_Prefab;
    VirtualInvokeData get_RequiresGroundToSpawn;
    VirtualInvokeData get_CheckForOverlap;
    VirtualInvokeData ClearPrefabLinks;
    VirtualInvokeData get_CanSpawn;
    VirtualInvokeData InstantiateInstance;
    VirtualInvokeData PoolCurrentInstance;
    VirtualInvokeData Spawn;
    VirtualInvokeData OnStart;
    VirtualInvokeData OnPlaceholderEnable;
    VirtualInvokeData OnPlaceholderDisable;
    VirtualInvokeData OnRestoreCheckpoint;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData OnHealthZero;
    VirtualInvokeData OnDeath;
    VirtualInvokeData UpdateAutoSpawnState;
    VirtualInvokeData UpdateSpawnOnEventState;
    VirtualInvokeData get_IsOnScreenPaddedExtended;
    VirtualInvokeData get_IsOnScreenPadded;
    VirtualInvokeData get_IsOnScreen;
    VirtualInvokeData InstantiateFromPooledObj;
    VirtualInvokeData IsUsingVariations;
    VirtualInvokeData CanUseAutosetupPositionInOnSand;
};

struct SandWormPlaceholder__StaticFields {
};

struct SandWormPlaceholder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SandWormPlaceholder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SandWormPlaceholder__VTable vtable;
};

struct EntityBehaviourNode_1_SandWormEntity___Fields {
    struct EntityBehaviourNode__Fields _;
};

struct EntityBehaviourNode_1_SandWormEntity_ {
    struct EntityBehaviourNode_1_SandWormEntity___Class *klass;
    MonitorData *monitor;
    struct EntityBehaviourNode_1_SandWormEntity___Fields fields;
};

enum class SandWormChaseBehaviour_State__Enum : int32_t {
    Unset = 0x00000000,
    SandChase = 0x00000001,
    PreJumpDash = 0x00000002,
    Jumping = 0x00000003,
};

struct SandWormChaseBehaviour_State__Enum__Boxed {
    struct SandWormChaseBehaviour_State__Enum__Class *klass;
    MonitorData *monitor;
    SandWormChaseBehaviour_State__Enum value;
    
};

struct SandWormChaseBehaviour__Fields {
    struct EntityBehaviourNode_1_SandWormEntity___Fields _;
    NavigationType__Enum ChaseZone;
    
    struct MoonReference_1_UnityEngine_GameObject_ *TargetToFollow;
    struct MoonFloat *ArriveDistance;
    struct MoonFloat *ProximityDistance;
    struct MoonFloat *ClearanceRadius;
    struct SandWormLocomotion *m_wormLocomotion;
    struct Transform *m_targetToFollow;
    float m_arriveDistance;
    float m_proximityDistance;
    struct Vector2 m_directionToNextIntermidiateTarget;
    struct Vector3 m_currentIntermidiateTarget;
    struct TargetBreadcrumbsTracker *m_tracker;
    float m_timeToTrim;
    float m_clearanceRadius;
    SandWormChaseBehaviour_State__Enum m_state;
    
    struct Vector3 m_jumpTargetPosition;
    struct Vector2 m_directionToTarget;
    float m_distanceToTarget;
};

struct SandWormChaseBehaviour {
    struct SandWormChaseBehaviour__Class *klass;
    MonitorData *monitor;
    struct SandWormChaseBehaviour__Fields fields;
};

enum class SandWormLocomotion_SpeedSetting__Enum : int32_t {
    Idle = 0x00000000,
    Aggresive = 0x00000001,
    InAir = 0x00000002,
    Overriden = 0x00000003,
};

struct SandWormLocomotion_SpeedSetting__Enum__Boxed {
    struct SandWormLocomotion_SpeedSetting__Enum__Class *klass;
    MonitorData *monitor;
    SandWormLocomotion_SpeedSetting__Enum value;
    
};

enum class SandWormLocomotion_State__Enum : int32_t {
    Unset = 0x00000000,
    SandDig = 0x00000001,
};

struct SandWormLocomotion_State__Enum__Boxed {
    struct SandWormLocomotion_State__Enum__Class *klass;
    MonitorData *monitor;
    SandWormLocomotion_State__Enum value;
    
};

struct SandWormLocomotion__Fields {
    struct Locomotion__Fields _;
    struct RaycastHit__Array *SharedHitInfoCache;
    struct Collider__Array *SharedHitColliderCache;
    float DistanceToTarget;
    struct Transform *HeadTransform;
    struct SandWormSandDigLocomotionBehaviour *DigSandBehaviour;
    struct TargetBreadcrumbsTracker *TargetTracker;
    struct Event_1 *EnterSandSound;
    struct Event_1 *ExitSandSound;
    struct RTPC *IsInSandStateRtpc;
    SandWormLocomotion_SpeedSetting__Enum _CurrentSpeedSettings_k__BackingField;
    
    bool _HasArrivedAtTarget_k__BackingField;
    float _Gravity_k__BackingField;
    EntityWeightData_EntityWeight__Enum _Weight_k__BackingField;
    
    SuspendableMask__Enum _Mask_k__BackingField;
    
    bool _IsSuspended_k__BackingField;
    bool _IsAvoidingObstacles_k__BackingField;
    SandWormLocomotion_State__Enum m_state;
    
    struct Transform *m_followedTarget;
    bool m_isHeadInHabitat;
    struct SandWormEntity *m_wormEntity;
    struct EntityLocomotionTask *_DefaultFSMState_k__BackingField;
};

struct SandWormLocomotion {
    struct SandWormLocomotion__Class *klass;
    MonitorData *monitor;
    struct SandWormLocomotion__Fields fields;
};

struct SandWormSandDigLocomotionBehaviour_SpeedEntry {
    float Acceleration;
    float MaxSpeed;
    float RotationSpeed;
    struct AnimationCurve *RotationRate;
};

struct SandWormSandDigLocomotionBehaviour_SpeedEntry__Boxed {
    struct SandWormSandDigLocomotionBehaviour_SpeedEntry__Class *klass;
    MonitorData *monitor;
    struct SandWormSandDigLocomotionBehaviour_SpeedEntry fields;
};

struct SandWormSandDigLocomotionBehaviour__Fields {
    struct EntityLocomotionTask__Fields _;
    struct CapsuleCollider *HeadCollider;
    float AvoidanceRadiusMultiplier;
    float AvoidanceCheckDistance;
    float AvoidanceMinDistanceToObstacle;
    struct AnimationCurve *AvoidanceSpeedDampRate;
    struct SandWormSandDigLocomotionBehaviour_SpeedEntry IdleSpeed;
    struct SandWormSandDigLocomotionBehaviour_SpeedEntry AggresiveSpeed;
    struct SandWormSandDigLocomotionBehaviour_SpeedEntry InAirSpeed;
    bool DebugShowTargetPosition;
    float ChangeDirectionSoundTriggerAngle;
    float ChangeDirectionSoundCooldown;
    struct Event_1 *ChangeDirectionSoundEvent;
    struct RTPC *SpeedRTPC;
    struct RTPC *TurnAngleRTPC;
    struct SandWormLocomotion *m_wormLocomotion;
    struct SandWormEntity *m_wormEntity;
    struct LocomotionUtils_CollisionAvoidanceSettings m_avoidanceSettings;
    float m_lastAvoidancePower;
    struct Vector2 m_previousDirection;
    float m_changeDirectionSoundCooldown;
    bool m_prevHeadInSand;
    struct Func_1_SandWormSandDigLocomotionBehaviour_SpeedEntry_ *SpeedOverrideProvider;
    int32_t m_sphereCastRequestId;
    int32_t kSoundThreshold;
    int32_t m_speedSoundCooldown;
    int32_t m_turnSoundCooldown;
    struct Vector3 _TargetPosition_k__BackingField;
    float _TraversalSpeed_k__BackingField;
};

struct SandWormSandDigLocomotionBehaviour {
    struct SandWormSandDigLocomotionBehaviour__Class *klass;
    MonitorData *monitor;
    struct SandWormSandDigLocomotionBehaviour__Fields fields;
};

enum class SandWormEntity_Habitat__Enum : int32_t {
    Sand = 0x00000000,
    Water = 0x00000001,
};

struct SandWormEntity_Habitat__Enum__Boxed {
    struct SandWormEntity_Habitat__Enum__Class *klass;
    MonitorData *monitor;
    SandWormEntity_Habitat__Enum value;
    
};

enum class SandWormEntity_BodyPhysicsMode__Enum : int32_t {
    SnakeSolver = 0x00000000,
    Spring = 0x00000001,
    Verlet = 0x00000002,
    Ragdoll = 0x00000003,
};

struct SandWormEntity_BodyPhysicsMode__Enum__Boxed {
    struct SandWormEntity_BodyPhysicsMode__Enum__Class *klass;
    MonitorData *monitor;
    SandWormEntity_BodyPhysicsMode__Enum value;
    
};

struct SandWormEntity_CachedDigZone {
    bool IsInZone;
    int32_t FrameCached;
    struct DigZone *Zone;
};

struct SandWormEntity_CachedDigZone__Boxed {
    struct SandWormEntity_CachedDigZone__Class *klass;
    MonitorData *monitor;
    struct SandWormEntity_CachedDigZone fields;
};

struct SandWormEntity_CachedWaterZone {
    bool IsInZone;
    int32_t FrameCached;
    struct WaterZone *Zone;
};

struct SandWormEntity_CachedWaterZone__Boxed {
    struct SandWormEntity_CachedWaterZone__Class *klass;
    MonitorData *monitor;
    struct SandWormEntity_CachedWaterZone fields;
};

struct SandWormEntity__Fields {
    struct EnemyEntity__Fields _;
    SandWormEntity_Habitat__Enum WormHabitat;
    
    bool IsPoisonous;
    float m_radiusMultiplier;
    struct GameObject *EffectOnEnter;
    struct GameObject *TrailEffect;
    struct Transform *TrailEffectOriginTransform;
    float TrailOffset;
    struct MoonTimeline *EnterSandTimeline;
    struct MoonTimeline *ExitSandTimeline;
    struct MoonTimeline *DamageTimeline;
    float CamMinDisMultWhenTargetNotSameHabitat;
    float CamMaxDisMultWhenTargetNotSameHabitat;
    struct List_1_SandWormEntity_Segment_ *Segments;
    struct Vector3 SegmentGravity;
    float DistanceBetweenSegments;
    float StationaryDistanceBetweenSegments;
    float VerletMass;
    float VerletDamping;
    float VerletStiffness;
    float SegmentStretchRatio;
    float SpringMass;
    float SpringDamping;
    float SpringStiffness;
    struct List_1_UnityEngine_Renderer_ *Renderers;
    struct MoonAnimation *MouthAnimation;
    struct FloatAnimationParameter *MouthOpenParameter;
    float HeadRotationSpeedScale;
    float SegmentWidthNoiseAmplitude;
    float SegmentNoiseWidthFrequency;
    struct AnimationCurve *SegmentWidthCurve;
    struct AnimationCurve *SegmentWidthVsStretchCurve;
    float HeadPositionOffset;
    float MaxHeadRotationSpeed;
    float LineRendererZOffset;
    struct SnakeSolver *SnakeSolver;
    SandWormEntity_BodyPhysicsMode__Enum DefaultPhysicsMode;
    
    struct SandWormTailPost *TailPost;
    struct NativeSandWormTailPost *NativeTailPost;
    struct List_1_SandWormTailPost_ *SideTentacles;
    struct Transform *HeadTop;
    struct Transform *TailBase;
    float InvincibilityTimeAfterDamage;
    float RagdollForceScale;
    float RagdollRandomForceScale;
    struct SandWormLocomotion *m_sandWormLocomotion;
    struct VerletBody *m_verletBody;
    struct SandTrail *m_trailRoot;
    struct List_1_UnityEngine_Collider_ *m_myColliders;
    bool m_isIgnoringCollisionsWithSandAreas;
    bool m_hasEffectOnEnter;
    struct ActiveAnimationHandle m_mouthAnimationState;
    struct SandWormEntity_SandWormBodyAnimation *m_wormBodyAnimation;
    bool m_playingWormBodyAnimation;
    struct WaterPoisonTrail *m_waterPoisonTrail;
    struct UberTransformFollow *m_waterPoisonTrailUberFollow;
    float m_clearAndRestartWaterPoisonDelay;
    float m_rollValue;
    struct List_1_SandWormEntity_SandWormBodyWave_ *m_bodyWaves;
    struct List_1_SandWormEntity_SandWormSquetch_ *m_squetches;
    struct Vector4__Array *m_bodyWavesShaderData;
    struct Vector4__Array *m_squetchesShaderData;
    struct Vector3 m_lastSafePosition;
    NavigationType__Enum m_currentTailAreaType;
    
    int32_t m_frameCurrentTailAreaType;
    struct Vector3 m_previousLateUpdatePosition;
    SandWormEntity_BodyPhysicsMode__Enum _BodyPhysics_k__BackingField;
    
    struct SandWormEntity_CachedDigZone m_headInDigZone;
    struct SandWormEntity_CachedDigZone m_headTopInDigZone;
    struct SandWormEntity_CachedDigZone m_tailInDigZone;
    struct SandWormEntity_CachedDigZone m_oriInDigZone;
    struct SandWormEntity_CachedWaterZone m_isInWaterZone;
    struct SandWormEntity_CachedWaterZone m_oriInWaterZone;
    float m_invincibilityTimer;
    struct List_1_Moon_VerletPhysicsAnimationPostprocess_ *m_animationPostProcesses;
    float PoisonTrailMaxMovement;
    struct ActivationParent *ActivationParent;
    struct Vector3 m_lastTrailPosition;
};

struct SandWormEntity {
    struct SandWormEntity__Class *klass;
    MonitorData *monitor;
    struct SandWormEntity__Fields fields;
};

struct __declspec(align(8)) List_1_SandWormEntity_Segment___Fields {
    struct SandWormEntity_Segment__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_SandWormEntity_Segment_ {
    struct List_1_SandWormEntity_Segment___Class *klass;
    MonitorData *monitor;
    struct List_1_SandWormEntity_Segment___Fields fields;
};

struct __declspec(align(8)) SandWormEntity_Segment__Fields {
    float _DistanceOffset_k__BackingField;
    struct VerletBody_Point *_VerletPoint_k__BackingField;
    struct VerletBody_Link *_VerletLink_k__BackingField;
    struct Vector3 _Velocity_k__BackingField;
    struct Rigidbody *_Rigidbody_k__BackingField;
    struct CharacterJoint *_CharacterJoint_k__BackingField;
    struct Collider *_Collider_k__BackingField;
    bool _Pinned_k__BackingField;
    float _RotationYVelocity_k__BackingField;
    struct Transform *Transform;
    struct Transform *RotationTransform;
    struct Transform *ScaledTransfrom;
    struct Transform__Array *ScaledTransformChildren;
    struct DamageReceiver *DamageReceiver;
    struct EntityTargetting *_Targetting_k__BackingField;
    struct Vector3__Array *ChildrenLocalPositions;
};

struct SandWormEntity_Segment {
    struct SandWormEntity_Segment__Class *klass;
    MonitorData *monitor;
    struct SandWormEntity_Segment__Fields fields;
};

struct SandWormEntity_Segment__Array {
    struct SandWormEntity_Segment__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SandWormEntity_Segment *vector[32];
};

struct IEnumerator_1_SandWormEntity_Segment_ {
    struct IEnumerator_1_SandWormEntity_Segment___Class *klass;
    MonitorData *monitor;
};

enum class SnakeSolver_BaseFixType__Enum : int32_t {
    None = 0x00000000,
    Reach = 0x00000001,
    Stretch = 0x00000002,
};

struct SnakeSolver_BaseFixType__Enum__Boxed {
    struct SnakeSolver_BaseFixType__Enum__Class *klass;
    MonitorData *monitor;
    SnakeSolver_BaseFixType__Enum value;
    
};

enum class SnakeSolver_JointAngleRestrictType__Enum : int32_t {
    None = 0x00000000,
    Dumb = 0x00000001,
    Adaptive = 0x00000002,
    Instant = 0x00000003,
};

struct SnakeSolver_JointAngleRestrictType__Enum__Boxed {
    struct SnakeSolver_JointAngleRestrictType__Enum__Class *klass;
    MonitorData *monitor;
    SnakeSolver_JointAngleRestrictType__Enum value;
    
};

struct SnakeSolver__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform *Target;
    struct List_1_SnakeSolver_JointEntry_ *Joints;
    int32_t Iterations;
    bool UseTipAngle;
    bool UseBaseAngle;
    SnakeSolver_BaseFixType__Enum FixType;
    
    float BodyStretch;
    SnakeSolver_JointAngleRestrictType__Enum Restrict;
    
    float MaxJointAngle;
    float AngleRestrictSpeed;
    struct Color DrawColor;
    struct Vector2__Array *m_path;
    float m_pTime;
};

struct SnakeSolver {
    struct SnakeSolver__Class *klass;
    MonitorData *monitor;
    struct SnakeSolver__Fields fields;
};

struct __declspec(align(8)) List_1_SnakeSolver_JointEntry___Fields {
    struct SnakeSolver_JointEntry__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_SnakeSolver_JointEntry_ {
    struct List_1_SnakeSolver_JointEntry___Class *klass;
    MonitorData *monitor;
    struct List_1_SnakeSolver_JointEntry___Fields fields;
};

struct __declspec(align(8)) SnakeSolver_JointEntry__Fields {
    float MaxLength;
    float MinLength;
};

struct SnakeSolver_JointEntry {
    struct SnakeSolver_JointEntry__Class *klass;
    MonitorData *monitor;
    struct SnakeSolver_JointEntry__Fields fields;
};

struct SnakeSolver_JointEntry__Array {
    struct SnakeSolver_JointEntry__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SnakeSolver_JointEntry *vector[32];
};

struct IEnumerator_1_SnakeSolver_JointEntry_ {
    struct IEnumerator_1_SnakeSolver_JointEntry___Class *klass;
    MonitorData *monitor;
};

struct SandWormTailPost__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_UnityEngine_Transform_ *RevesedTailSegments;
    struct SnakeSolver *SnakeSolver;
    struct SandWormEntity *SandWorm;
    float TailFlapMaxAnge;
    float TailFlapFrequency;
    float m_time;
    struct Vector3 PositionOffset;
    bool UseLocalParent;
};

struct SandWormTailPost {
    struct SandWormTailPost__Class *klass;
    MonitorData *monitor;
    struct SandWormTailPost__Fields fields;
};

struct NativeSandWormTailPost__Fields {
    struct MonoBehaviour__Fields _;
    struct SandWormTailPost__Array *LegacyPosts;
    struct SnakeAnimator *SnakeAnimator;
    struct SandWormEntity *SandWorm;
};

struct NativeSandWormTailPost {
    struct NativeSandWormTailPost__Class *klass;
    MonitorData *monitor;
    struct NativeSandWormTailPost__Fields fields;
};

struct SandWormTailPost__Array {
    struct SandWormTailPost__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SandWormTailPost *vector[32];
};

struct __declspec(align(8)) List_1_SandWormTailPost___Fields {
    struct SandWormTailPost__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_SandWormTailPost_ {
    struct List_1_SandWormTailPost___Class *klass;
    MonitorData *monitor;
    struct List_1_SandWormTailPost___Fields fields;
};

struct IEnumerator_1_SandWormTailPost_ {
    struct IEnumerator_1_SandWormTailPost___Class *klass;
    MonitorData *monitor;
};

struct SandTrail__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonTrail *MainTrail;
};

struct SandTrail {
    struct SandTrail__Class *klass;
    MonitorData *monitor;
    struct SandTrail__Fields fields;
};

struct __declspec(align(8)) SandWormEntity_SandWormBodyAnimation__Fields {
    struct String *name;
    struct AnimationCurve *HeadRotationSpeed;
    float HeadRotationScale;
    struct AnimationCurve *SegmentWidthNoiseAmplitude;
    float WidthNoiseAmplitudeScale;
    struct AnimationCurve *SegmentNoiseWidthFrequency;
    float NoiseWidthFrequencyScale;
    struct AnimationCurve *Mouth;
    bool Loop;
    float _Time_k__BackingField;
};

struct SandWormEntity_SandWormBodyAnimation {
    struct SandWormEntity_SandWormBodyAnimation__Class *klass;
    MonitorData *monitor;
    struct SandWormEntity_SandWormBodyAnimation__Fields fields;
};

struct WaterPoisonTrail_DamagePoint {
    struct Vector3 Position;
    float Size;
    float CurrentTime;
};

struct WaterPoisonTrail_DamagePoint__Boxed {
    struct WaterPoisonTrail_DamagePoint__Class *klass;
    MonitorData *monitor;
    struct WaterPoisonTrail_DamagePoint fields;
};

struct WaterPoisonTrail__Fields {
    struct MonoBehaviour__Fields _;
    struct ParticleSystem *HeadParticle;
    struct ParticleSystem *MainParticle;
    struct MoonTrail *Trail;
    float SpawnEveryDistance;
    float MinSize;
    float MaxSize;
    struct AnimationCurve *SizeOverLifetime;
    float PointLifeTime;
    bool StartOnAwake;
    float DamageAmound;
    float DamageKickbackForce;
    DamageType__Enum DamageType;
    
    struct DamageOwner *Owner;
    AbilityType__Enum AbilityType;
    
    DamageWeight__Enum DamageWeight;
    
    bool DebugDrawDamageZones;
    struct Color DebugDamageZoneColor;
    struct Color DebugDamageZoneOutlineColor;
    struct Vector3 m_lastPosition;
    bool m_spawnActive;
    struct WaterPoisonTrail_DamagePoint m_head;
    bool m_destroyOnCleared;
    float m_timeToSpawnInPlace;
    struct List_1_WaterPoisonTrail_DamagePoint_ *m_points;
};

struct WaterPoisonTrail {
    struct WaterPoisonTrail__Class *klass;
    MonitorData *monitor;
    struct WaterPoisonTrail__Fields fields;
};

struct __declspec(align(8)) List_1_WaterPoisonTrail_DamagePoint___Fields {
    struct WaterPoisonTrail_DamagePoint__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_WaterPoisonTrail_DamagePoint_ {
    struct List_1_WaterPoisonTrail_DamagePoint___Class *klass;
    MonitorData *monitor;
    struct List_1_WaterPoisonTrail_DamagePoint___Fields fields;
};

struct WaterPoisonTrail_DamagePoint__Array {
    struct WaterPoisonTrail_DamagePoint__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct WaterPoisonTrail_DamagePoint vector[32];
};

struct IEnumerator_1_WaterPoisonTrail_DamagePoint_ {
    struct IEnumerator_1_WaterPoisonTrail_DamagePoint___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_SandWormEntity_SandWormBodyWave___Fields {
    struct SandWormEntity_SandWormBodyWave__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_SandWormEntity_SandWormBodyWave_ {
    struct List_1_SandWormEntity_SandWormBodyWave___Class *klass;
    MonitorData *monitor;
    struct List_1_SandWormEntity_SandWormBodyWave___Fields fields;
};

struct __declspec(align(8)) SandWormEntity_SandWormBodyWave__Fields {
    float StartPosition;
    float EndPosition;
    struct AnimationCurve *Amplitude;
    float Duration;
    float Spread;
    float Time;
};

struct SandWormEntity_SandWormBodyWave {
    struct SandWormEntity_SandWormBodyWave__Class *klass;
    MonitorData *monitor;
    struct SandWormEntity_SandWormBodyWave__Fields fields;
};

struct SandWormEntity_SandWormBodyWave__Array {
    struct SandWormEntity_SandWormBodyWave__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SandWormEntity_SandWormBodyWave *vector[32];
};

struct IEnumerator_1_SandWormEntity_SandWormBodyWave_ {
    struct IEnumerator_1_SandWormEntity_SandWormBodyWave___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_SandWormEntity_SandWormSquetch___Fields {
    struct SandWormEntity_SandWormSquetch__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_SandWormEntity_SandWormSquetch_ {
    struct List_1_SandWormEntity_SandWormSquetch___Class *klass;
    MonitorData *monitor;
    struct List_1_SandWormEntity_SandWormSquetch___Fields fields;
};

struct __declspec(align(8)) SandWormEntity_SandWormSquetch__Fields {
    float PivotPosition;
    struct AnimationCurve *Curve;
    float UpFactor;
    float DownFactor;
    float Time;
};

struct SandWormEntity_SandWormSquetch {
    struct SandWormEntity_SandWormSquetch__Class *klass;
    MonitorData *monitor;
    struct SandWormEntity_SandWormSquetch__Fields fields;
};

struct SandWormEntity_SandWormSquetch__Array {
    struct SandWormEntity_SandWormSquetch__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SandWormEntity_SandWormSquetch *vector[32];
};

}
