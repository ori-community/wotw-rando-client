namespace app {
struct GlowChargeEffect__Fields {
  struct MonoBehaviour__Fields _;
  struct MoonTimeline * ChargeTimeline;
  struct MoonTimeline * CancelTimeline;
  struct EventTriggerAnimator * ChargeCompletedTrigger;
  struct Action * OnChargeCompleted;
  enum GlowChargeEffect_State__Enum m_currentState;
};
struct GlowChargeEffect {
  struct GlowChargeEffect__Class *klass;
  struct MonitorData *monitor;
  struct GlowChargeEffect__Fields fields;
};
struct GoldenSein__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * Root;
  struct GameObject * AnimationRoot;
  struct MoonAnimator * Animator;
  struct AnimationCurve * DistanceToSpeedCurve;
  struct Vector3 TargetOffset;
  float AttackDistance;
  float ShotCooldownRate;
  float DrainedCooldownTimer;
  int32_t AttacksBeforeCooldown;
  float AttackDamage;
  float MaxDistanceBeforeWarpToTarget;
  struct AbilityType__Enum__Array * DontAttackWhenUsingAbilities;
  struct Vector3 NoTargetShotOffset;
  struct Transform__Array * GraphicTransforms;
  struct GameObject * Projectile;
  struct GameObject * DespawnEffect;
  struct AnimationCurve * UndrainedCurve;
  struct LayerMask LineOfSightLayerMask;
  struct MoonTimeline * PressButtonTimeline;
  struct ConditionUberState * DisableGoldenSeinCondition;
  struct Transform * m_transform;
  float m_shotsTillCooldown;
  struct SoundPlayer * m_twinkleSoundPlayer;
  struct SeinCharacter * m_sein;
  bool m_isDrained;
  float m_hoverTime;
  struct Nullable_1_UnityEngine_Vector3_ m_scenePosition;
  float m_animationTime;
  struct Vector3 m_animationStartPosition;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct GoldenSein {
  struct GoldenSein__Class *klass;
  struct MonitorData *monitor;
  struct GoldenSein__Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinFall___Fields {
  bool HasState;
  struct SeinFall * State;
};
struct CharacterStateWrapper_1_SeinFall_ {
  struct CharacterStateWrapper_1_SeinFall___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinFall___Fields fields;
};
struct SeinFall__Fields {
  struct CharacterState__Fields _;
  float FallingSpeedForSound;
  float GroundLandImpulsePerUnitsOfSpeed;
  float GroundLandMaxImpulse;
  float HeavyLandSpeedThreshold;
  float HeavyLandLockInputDuration;
  float LongFallLandThreashold;
  float LongFallLandLockInputDuration;
  struct MoonAnimation * LongFallLandAnimation;
  struct LandPrediction * LongFallPrediction;
  float TurnAnimUninterruptibleDuration;
  struct MoonAnimation * IdleAnimation;
  struct SurfaceToSoundProviderMap * LandingSound;
  struct SoundProvider * LongLandSound;
  struct SoundProvider * LongRollLandSound;
  struct MoonAnimation * MovingAnimation;
  struct FloatAnimationParameter * FallSpeed;
  struct CameraShake * LongFallShake;
  struct MaterialBasedSeinEffectsMap * EffectsMap;
  bool m_hasPlayedFallSound;
  bool m_hasStoppedFallSound;
  float m_ignoreLandTime;
  float m_ignoreFallTime;
  bool m_startedLongFall;
  bool m_cachedIsOnGround;
  struct RaycastHit m_predictionHit;
  struct ActiveAnimationHandle m_heavyLandActiveAnimation;
  bool m_lastFrameFaceLeft;
  bool m_playingTurnAnim;
  bool m_interruptingTurnAnim;
  float m_turnAnimNormalizedTime;
  struct Func_1_Boolean_ * s_shouldFallKeepPlaying;
  struct Func_1_Boolean_ * s_shouldFallIdleKeepPlaying;
  struct Func_1_Boolean_ * s_shouldLongFallKeepPlaying;
  struct CharacterTimelineTurning * m_currentTurning;
  bool _WantsToFaceLeft_k__BackingField;
};
struct SeinFall {
  struct SeinFall__Class *klass;
  struct MonitorData *monitor;
  struct SeinFall__Fields fields;
};
struct __declspec(align(8)) LandPrediction__Fields {
  float LandAntecipationTime;
  struct LayerMask CollisionMask;
  struct PlatformMovement * m_plataformMovement;
  struct Action_1_UnityEngine_RaycastHit_ * m_onGroundDetection;
  struct RaycastHit m_hit;
  bool _GroundDetected_k__BackingField;
};
struct LandPrediction {
  struct LandPrediction__Class *klass;
  struct MonitorData *monitor;
  struct LandPrediction__Fields fields;
};
struct PlatformMovement__Fields {
  struct MonoBehaviour__Fields _;
  struct DynamicDataResolver * m_dataResolver;
  struct IsOnCollisionState * Ceiling;
  struct IsOnCollisionState * Ground;
  struct IsOnCollisionState * WallLeft;
  struct IsOnCollisionState * WallRight;
  struct Vector3 CeilingNormal;
  struct Vector3 GroundNormal;
  struct Vector3 WallRightNormal;
  struct Vector3 WallLeftNormal;
  float fallTime;
  float landTime;
  float ClimbableWallAngleLimit;
  float LastTimeOnGround;
  bool m_inPrewarmed;
  bool m_areComponentsCached;
  struct Vector3 m_localSpeed;
  float m_gravityAngle;
  enum SurfaceMaterialType__Enum m_groundSurfaceMaterialType;
  struct StringBuilder * m_speedHistorySinceLastFrame;
  struct CapsuleCollider * m_capsuleCollider;
  float m_cachedCapsuleRadius;
  float m_cachedCapsuleHeight;
  struct MovingPlatformsController * m_movingPlatform;
  struct Dictionary_2_UnityEngine_GameObject_GrabbableSurface_ * m_cacheObjectToGrabbableSurfaces;
  struct List_1_UnityEngine_GameObject_ * m_removeObjects;
  int32_t m_pruneRemainingFrameDelay;
  bool DebugVelocity;
  bool DebugRootMotion;
  bool m_insideUpdate;
  struct Vector3 m_prevPosition;
  struct Rigidbody * m_rigidbody;
  struct Vector3 m_savePositionOverrideValue;
  bool m_shouldOverridePositionNextSave;
  enum SuspendableMask__Enum m_suspensionMask;
  struct Vector3 _LastOnGroundPosition_k__BackingField;
  float _LastOnGroundTime_k__BackingField;
  struct Action_2_UnityEngine_Vector3_UnityEngine_Collider_ * OnCollisionGroundEvent;
  struct Action_2_UnityEngine_Vector3_UnityEngine_Collider_ * OnCollisionCeilingEvent;
  struct Action_2_UnityEngine_Vector3_UnityEngine_Collider_ * OnCollisionWallLeftEvent;
  struct Action_2_UnityEngine_Vector3_UnityEngine_Collider_ * OnCollisionWallRightEvent;
  struct Action_2_UnityEngine_Vector3_UnityEngine_Collider_ * OnLandOnGroundEvent;
  struct Action_2_UnityEngine_Vector3_UnityEngine_Collider_ * OnLandOnWallLeftEvent;
  struct Action_2_UnityEngine_Vector3_UnityEngine_Collider_ * OnLandOnWallRightEvent;
  struct Action_2_UnityEngine_Vector3_UnityEngine_Collider_ * OnLandOnCeilingEvent;
  struct Action * OnHitWater;
  bool ForceKeepInAir;
};
struct PlatformMovement {
  struct PlatformMovement__Class *klass;
  struct MonitorData *monitor;
  struct PlatformMovement__Fields fields;
};
struct __declspec(align(8)) IsOnCollisionState__Fields {
  bool WasOn;
  bool IsOn;
  bool FutureOn;
};
struct IsOnCollisionState {
  struct IsOnCollisionState__Class *klass;
  struct MonitorData *monitor;
  struct IsOnCollisionState__Fields fields;
};
struct __declspec(align(8)) MovingPlatformsController__Fields {
  bool IsOnMovingPlatform;
  bool m_wasAttached;
  struct Vector2 Velocity;
  bool m_ignoreForAFrameBecauseOfUnitysDelayedCollisionCallbacks;
  bool m_dontUpdateVelocityThisFrame;
  struct PlatformMovement * m_platformMovement;
  struct Transform * m_groundPlatform;
  struct Transform * m_oldGroundPlatform;
  struct Matrix4x4 m_groundPlatformMatrix;
  struct Transform * m_ceilingPlatform;
  struct Transform * m_oldCeilingPlatform;
  struct Matrix4x4 m_ceilingPlatformMatrix;
  struct Transform * m_wallLeftPlatform;
  struct Transform * m_oldWallLeftPlatform;
  struct Matrix4x4 m_wallLeftPlatformMatrix;
  struct Transform * m_wallRightPlatform;
  struct Transform * m_oldWallRightPlatform;
  struct Matrix4x4 m_wallRightPlatformMatrix;
};
struct MovingPlatformsController {
  struct MovingPlatformsController__Class *klass;
  struct MonitorData *monitor;
  struct MovingPlatformsController__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_UnityEngine_GameObject_GrabbableSurface___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_GrabbableSurface___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_UnityEngine_GameObject_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_GrabbableSurface_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_GrabbableSurface_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_UnityEngine_GameObject_GrabbableSurface_ {
  struct Dictionary_2_UnityEngine_GameObject_GrabbableSurface___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_UnityEngine_GameObject_GrabbableSurface___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_GrabbableSurface_ {
  int32_t hashCode;
  int32_t next;
  struct GameObject * key;
  struct GrabbableSurface * value;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_GrabbableSurface___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_GrabbableSurface___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_GrabbableSurface_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_GrabbableSurface___Array {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_GrabbableSurface___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_GrabbableSurface_ vector[32];
};
struct GrabbableSurface__Fields {
  struct MonoBehaviour__Fields _;
  struct Rigidbody * PullRigidbody;
  float PullForce;
  bool ShouldGrabOnFlatGroundAngles;
  bool PerformReleaseRaycastTest;
  bool UseStopPoints;
  struct Vector3 StopPointA;
  struct Vector3 StopPointB;
  struct Vector3 m_stopPointAWorld;
  struct Vector3 m_stopPointBWorld;
  int32_t _SpiritLeashCost_k__BackingField;
  struct Transform * _HookTargetTransform_k__BackingField;
  float _PositionOffset_k__BackingField;
  struct MeshCollider * m_meshCollider;
  struct GrabbableSurface_PositionInfo * m_positionInfo;
  struct GrabbableSurface_PositionInfo * m_positionFront;
  struct GrabbableSurface_PositionInfo * m_positionBack;
  struct List_1_UnityEngine_Vector3_ * m_vertices;
  struct List_1_UnityEngine_Vector3_ * m_normals;
  struct List_1_UnityEngine_Vector3_ * m_verticesWorld;
  struct List_1_UnityEngine_Vector3_ * m_normalsWorld;
};
struct GrabbableSurface {
  struct GrabbableSurface__Class *klass;
  struct MonitorData *monitor;
  struct GrabbableSurface__Fields fields;
};
enum GrabbableSurfaceSettings_DebugDrawMode__Enum : int32_t {
  GrabbableSurfaceSettings_DebugDrawMode__Enum_Always = 0,
  GrabbableSurfaceSettings_DebugDrawMode__Enum_SelectedInHierarchy = 1,
};
struct GrabbableSurfaceSettings_DebugDrawMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum GrabbableSurfaceSettings_DebugDrawMode__Enum value;
};
struct GrabbableSurfaceSettings__Fields {
  struct ScriptableObject__Fields _;
  enum GrabbableSurfaceSettings_DebugDrawMode__Enum DebugDraw;
  float OffsetFromSurface;
  float AngleOfNormalWithDownToConsiderCeiling;
  float AngleOfNormalWithDownToConsiderGround;
  float MinAngleBetweenSegmentsToKeepAdvancing;
};
struct GrabbableSurfaceSettings {
  struct GrabbableSurfaceSettings__Class *klass;
  struct MonitorData *monitor;
  struct GrabbableSurfaceSettings__Fields fields;
};
struct __declspec(align(8)) GrabbableSurface_PositionInfo__Fields {
  struct Vector3 PointInSegment;
  uint32_t SegmentIndex;
  float SegmentAlpha;
  struct Vector3 SegmentDirection;
  struct Vector3 SegmentNormal;
};
struct GrabbableSurface_PositionInfo {
  struct GrabbableSurface_PositionInfo__Class *klass;
  struct MonitorData *monitor;
  struct GrabbableSurface_PositionInfo__Fields fields;
};
enum SpiritLeashMode__Enum : int32_t {
  SpiritLeashMode__Enum_Both = 0,
  SpiritLeashMode__Enum_HookOnly = 1,
  SpiritLeashMode__Enum_PullOnly = 2,
};
struct SpiritLeashMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SpiritLeashMode__Enum value;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_GrabbableSurface___Fields {
  struct Dictionary_2_UnityEngine_GameObject_GrabbableSurface_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_GrabbableSurface_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_GrabbableSurface___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_GrabbableSurface___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_GrabbableSurface___Fields {
  struct Dictionary_2_UnityEngine_GameObject_GrabbableSurface_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_GrabbableSurface_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_GrabbableSurface___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_GrabbableSurface___Fields fields;
};
struct GrabbableSurface__Array {
  struct GrabbableSurface__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct GrabbableSurface * vector[32];
};
struct IEnumerator_1_GrabbableSurface_ {
  struct IEnumerator_1_GrabbableSurface___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_GrabbableSurface_ {
  struct ICollection_1_GrabbableSurface___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_UnityEngine_GameObject_GrabbableSurface_ {
  struct GameObject * key;
  struct GrabbableSurface * value;
};
struct KeyValuePair_2_UnityEngine_GameObject_GrabbableSurface___Boxed {
  struct KeyValuePair_2_UnityEngine_GameObject_GrabbableSurface___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_UnityEngine_GameObject_GrabbableSurface_ fields;
};
struct KeyValuePair_2_UnityEngine_GameObject_GrabbableSurface___Array {
  struct KeyValuePair_2_UnityEngine_GameObject_GrabbableSurface___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_UnityEngine_GameObject_GrabbableSurface_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_GrabbableSurface_ {
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_GrabbableSurface___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_GrabbableSurface_ {
  struct IEnumerable_1_GrabbableSurface___Class *klass;
  struct MonitorData *monitor;
};
struct Action_2_UnityEngine_Vector3_UnityEngine_Collider___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_2_UnityEngine_Vector3_UnityEngine_Collider_ {
  struct Action_2_UnityEngine_Vector3_UnityEngine_Collider___Class *klass;
  struct MonitorData *monitor;
  struct Action_2_UnityEngine_Vector3_UnityEngine_Collider___Fields fields;
};
struct CharacterPlatformMovement__Fields {
  struct PlatformMovement__Fields _;
  float ForceStickKeepToSurfaceDistance;
  bool HeadAgainstWall;
  bool FeetAgainstWall;
  struct Vector3 HeadWallNormal;
  struct Vector3 FeetWallNormal;
  bool KinematicMode;
  bool UseCenterRayForGroundAngle;
  float ClimbWallExtraTime;
  bool CeilingRayHit;
  bool GroundRayHit;
  bool WallLeftRayHit;
  bool WallRightRayHit;
  struct Vector3 GroundRayNormal;
  struct Vector3 GroundRayPoint;
  bool GainHorizontalSpeedOffWall;
  float InheritVelocityMultiplier;
  bool Enabled;
  bool OnlyGroundMovement;
  bool SlowOnCollisionWithWall;
  bool ShouldStickToPlatforms;
  float LandAnticipationTime;
  bool feetLandAnticipationCheck;
  struct Action_1_MoonControllerColliderHit_ * OnMoonControllerCollision;
  struct Action_1_UnityEngine_Collision_ * OnNativeCollision;
  struct Action * OnPostUpdateCollision;
  bool m_collisionThisFrame;
  struct MoonCharacterController * m_characterController;
  struct Vector2 m_groundContactNormal;
  struct Vector2 m_ceilingContactNormal;
  struct Vector2 m_wallLeftContactNormal;
  struct Vector2 m_wallRightContactNormal;
  struct Collider * m_groundCollider;
  struct Collider * m_ceilingCollider;
  struct Collider * m_wallLeftCollider;
  struct Collider * m_wallRightCollider;
  struct DamageDealer * m_groundDamageDealer;
  struct DamageDealer * m_ceilingDamageDealer;
  struct DamageDealer * m_wallLeftDamageDealer;
  struct DamageDealer * m_wallRightDamageDealer;
  bool ApplyGroundPenetrationPrevention;
  bool _UseSafeMovementCode_k__BackingField;
  bool m_movingPlatfromsNeedUpdate;
  bool m_isSuspended;
  bool m_anticipatingLanding;
  struct RaycastHit m_antecipationRayCastHit;
  struct IKLimb__Array * FeetIK;
  bool m_feetAnticipatingLanding;
  struct List_1_CharacterPlatformMovement_ScheduledSpeedCurve_ * m_scheduledSpeedCurves;
  struct CharacterPlatformMovement_KickbackEntry * m_kickback;
  struct CharacterPlatformMovement_AirSuspension * m_airSuspension;
  struct PlatformingFXFunctionality * PlatformingFxFunctionality;
  int32_t m_placeOnGroundRequestId;
  float m_climbableWallTimer;
  struct Action * OnPreApplySpeed;
  struct Action * OnPostAdjustSpeedBasedOnCollisions;
  struct Vector2 m_externalForce;
  struct Vector3 m_oldPosition;
  bool ForceStick;
  struct Vector2 AdditiveSpeed;
  struct Vector2 AdditiveLocalSpeed;
  struct Vector2 LastAdditiveSpeed;
  struct List_1_ExternalForceEntry_ * m_externalForceEntries;
  float InheritedVelocityDeceleration;
  struct JobHandle m_handle;
  bool m_jobsExecuting;
  struct NativeArray_1_UnityEngine_RaycastHit_ m_raycastResults;
  struct NativeArray_1_UnityEngine_RaycastCommand_ m_raycastCommands;
  bool m_hasCreatedNativeArrays;
  struct RaycastHit__Array * m_tempResults;
  struct RaycastCommand__Array * m_cmds;
  struct Boolean__Array * m_hitResults;
  int32_t m_hitReqId;
  bool _GroundNormalIsValid_k__BackingField;
  float m_Gravity;
  bool EnableDebugDraw;
  struct Vector2 m_prevWorldSpeed;
};
struct CharacterPlatformMovement {
  struct CharacterPlatformMovement__Class *klass;
  struct MonitorData *monitor;
  struct CharacterPlatformMovement__Fields fields;
};
struct Action_1_MoonControllerColliderHit___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_MoonControllerColliderHit_ {
  struct Action_1_MoonControllerColliderHit___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_MoonControllerColliderHit___Fields fields;
};
struct MoonControllerColliderHit {
  struct Collider * Collider;
  struct MoonCharacterController * Controller;
  struct Vector3 MoveDirection;
  float MoveLength;
  struct Vector3 Normal;
  struct Vector3 Point;
  float Distance;
  float ContinueMoveLength;
  struct Vector3 ContinueMoveDirection;
};
struct MoonControllerColliderHit__Boxed {
  struct MoonControllerColliderHit__Class *klass;
  struct MonitorData *monitor;
  struct MoonControllerColliderHit fields;
};
struct MoonCharacterController__Fields {
  struct MonoBehaviour__Fields _;
  float MinPenetration;
  int32_t m_safeRecursion;
  struct Rigidbody * m_rigidbody;
  struct CharacterPlatformMovement * m_controllerPenetrate;
  struct CapsuleCollider * m_capsule;
  bool m_isPrewarmed;
  struct Material * mat;
  float range;
  struct Transform * shape;
};
struct MoonCharacterController {
  struct MoonCharacterController__Class *klass;
  struct MonitorData *monitor;
  struct MoonCharacterController__Fields fields;
};
enum DamageDealer_DamageDirectionMode__Enum : int32_t {
  DamageDealer_DamageDirectionMode__Enum_PositionBased = 0,
  DamageDealer_DamageDirectionMode__Enum_VelocityBased = 1,
  DamageDealer_DamageDirectionMode__Enum_Constant = 2,
};
struct DamageDealer_DamageDirectionMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DamageDealer_DamageDirectionMode__Enum value;
};
struct DamageDealer__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_DamageDealer_OverrideInfo_ * m_overrides;
  bool UseDamageByAreaResolver;
  enum GameWorldAreaID__Enum AreaResolverOverride;
  float m_damageAmount;
  enum DamageType__Enum DamageType;
  enum DamageWeight__Enum DamageWeight;
  enum DamageLayerMask__Enum DamageLayerMask;
  struct DamageOwner * DamageOwner;
  bool ActiveOnlyWithEntity;
  struct Entity * OwningEntity;
  struct Nullable_1_Boolean_ m_initActivated;
  bool m_activated;
  bool m_isKillSurface;
  bool PlayerOnly;
  bool AlwaysIncludeMinecarts;
  enum AbilityType__Enum AbilityType;
  float TickRate;
  float KickbackForce;
  enum DamageDealer_DamageDirectionMode__Enum DamageForceDirection;
  struct Transform * ForceDirectionPosition;
  float SpeedTransfer;
  float DamageForceInheritVelocity;
  struct MoonVector3 * ConstantForceDirection;
  bool IsContinuousDamage;
  float ContinuousDamageTickRate;
  struct Action_2_DamageDealer_DamageResult_ * OnDamageDealt;
  struct Func_2_UnityEngine_GameObject_Boolean_ * ShouldDealDamage;
  struct DamageDealer_TweakDamageDelegate * TweakDamage;
  struct Condition_1 * Condition;
  bool RequireRigidbody;
  bool UsePlatformMovementForKickbackDirection;
  struct Rigidbody * PushBackBody;
  float PushBackForce;
  bool m_overrideDamageLayerMask;
  enum DamageLayerMask__Enum m_damageLayerMaskOverride;
  struct Vector3 m_prevPosition;
  struct Vector3 m_currentVelocity;
  struct AnimationCurve * m_defaultKickbackCurve;
  float m_continuousDamageTimer;
  struct List_1_UnityEngine_Collider_ * m_insideColliders;
  struct Damage * m_damage;
  struct Collider * m_collider;
  struct Polygon_1 * m_polygon;
  bool m_hasPolygon;
  bool m_hasCollider;
  bool m_hasMeshCollider;
  bool m_cachedComponents;
  bool m_concaveMeshCollider;
  bool m_isRegisterdWithDriver;
  struct String * m_clipTittle;
};
struct DamageDealer {
  struct DamageDealer__Class *klass;
  struct MonitorData *monitor;
  struct DamageDealer__Fields fields;
};
struct __declspec(align(8)) List_1_DamageDealer_OverrideInfo___Fields {
  struct DamageDealer_OverrideInfo__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_DamageDealer_OverrideInfo_ {
  struct List_1_DamageDealer_OverrideInfo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_DamageDealer_OverrideInfo___Fields fields;
};
struct __declspec(align(8)) DamageDealer_OverrideInfo__Fields {
  bool IsEnabled;
  bool ShouldOverrideDamage;
  float AmountOverride;
};
struct DamageDealer_OverrideInfo {
  struct DamageDealer_OverrideInfo__Class *klass;
  struct MonitorData *monitor;
  struct DamageDealer_OverrideInfo__Fields fields;
};
struct DamageDealer_OverrideInfo__Array {
  struct DamageDealer_OverrideInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DamageDealer_OverrideInfo * vector[32];
};
struct IEnumerator_1_DamageDealer_OverrideInfo_ {
  struct IEnumerator_1_DamageDealer_OverrideInfo___Class *klass;
  struct MonitorData *monitor;
};
struct Action_2_DamageDealer_DamageResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_2_DamageDealer_DamageResult_ {
  struct Action_2_DamageDealer_DamageResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_2_DamageDealer_DamageResult___Fields fields;
};
struct Func_2_UnityEngine_GameObject_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_UnityEngine_GameObject_Boolean_ {
  struct Func_2_UnityEngine_GameObject_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_UnityEngine_GameObject_Boolean___Fields fields;
};
struct DamageDealer_TweakDamageDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct DamageDealer_TweakDamageDelegate {
  struct DamageDealer_TweakDamageDelegate__Class *klass;
  struct MonitorData *monitor;
  struct DamageDealer_TweakDamageDelegate__Fields fields;
};
struct Polygon_1__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_UnityEngine_Vector2_ * Points;
  struct HashSet_1_System_Int32_ * Selected;
  float SmoothAngle;
  struct Vector2 FrontUVScale;
  struct Vector2 FrontUVOffset;
  struct Vector2 BackUVScale;
  struct Vector2 BackUVOffset;
  struct Vector2 SideUVScale;
  struct Vector2 SideUVOffset;
  struct Polygon_ShapeData * PolygonMesh;
  struct Polygon_ShapeData * PolygonCollider;
  bool ClosedShape;
  bool Invert;
  int32_t InsertBefore;
  struct Action * OnPolygonUpdateComponents;
};
struct Polygon_1 {
  struct Polygon_1__Class *klass;
  struct MonitorData *monitor;
  struct Polygon_1__Fields fields;
};
struct __declspec(align(8)) Polygon_ShapeData__Fields {
  bool GenerateFront;
  bool GenerateBack;
  bool GenerateSides;
  float Extrude;
  float Elevation;
  bool Enabled;
};
struct Polygon_ShapeData {
  struct Polygon_ShapeData__Class *klass;
  struct MonitorData *monitor;
  struct Polygon_ShapeData__Fields fields;
};
struct IKPostprocess__Fields {
  struct AnimationPostprocess__Fields _;
  int32_t OrderNumber;
  struct IK * IK;
  struct Transform * Root;
  struct Transform * endBone;
  struct Transform * startBone;
  struct IKSolverHeuristic * solver;
  bool boneScalingRequired;
  struct Vector3 ResultEndPos;
};
struct IKPostprocess {
  struct IKPostprocess__Class *klass;
  struct MonitorData *monitor;
  struct IKPostprocess__Fields fields;
};
struct IKLimb__Fields {
  struct IKPostprocess__Fields _;
  float Radius;
  struct Vector3 Anchor;
  struct Vector3 RaycastAxis;
  float InnerDistance;
  float OuterDistance;
  float GroundHigh;
  float GroundTarget;
  float GroundLow;
  struct LayerMask LayerMask;
  bool Raycast3D;
  float AlignFootToGround;
  bool UseOptimizedSolver;
  float OptimizedSolverTolerance;
  int32_t m_layer_mask;
  struct IkChainSolver * m_ikChainSolver;
  struct Vector3 m_groundNormal;
};
struct IKLimb {
  struct IKLimb__Class *klass;
  struct MonitorData *monitor;
  struct IKLimb__Fields fields;
};
struct IKLimb__Array {
  struct IKLimb__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IKLimb * vector[32];
};
struct __declspec(align(8)) List_1_CharacterPlatformMovement_ScheduledSpeedCurve___Fields {
  struct CharacterPlatformMovement_ScheduledSpeedCurve__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_CharacterPlatformMovement_ScheduledSpeedCurve_ {
  struct List_1_CharacterPlatformMovement_ScheduledSpeedCurve___Class *klass;
  struct MonitorData *monitor;
  struct List_1_CharacterPlatformMovement_ScheduledSpeedCurve___Fields fields;
};
struct CharacterPlatformMovement_ScheduledSpeedCurve__Array {
  struct CharacterPlatformMovement_ScheduledSpeedCurve__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CharacterPlatformMovement_ScheduledSpeedCurve * vector[32];
};
struct IEnumerator_1_CharacterPlatformMovement_ScheduledSpeedCurve_ {
  struct IEnumerator_1_CharacterPlatformMovement_ScheduledSpeedCurve___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) CharacterPlatformMovement_KickbackEntry__Fields {
  struct AnimationCurve * Curve;
  struct Vector2 KickbackDirection;
  float KickbackMultiplier;
  float CurrentTime;
  float Duration;
  float AirHangTime;
  bool AirHangStarted;
  bool ApplyForceAlongTheGround;
};
struct CharacterPlatformMovement_KickbackEntry {
  struct CharacterPlatformMovement_KickbackEntry__Class *klass;
  struct MonitorData *monitor;
  struct CharacterPlatformMovement_KickbackEntry__Fields fields;
};
struct __declspec(align(8)) CharacterPlatformMovement_AirSuspension__Fields {
  float CurrentTime;
  float Duration;
  float ForceX;
};
struct CharacterPlatformMovement_AirSuspension {
  struct CharacterPlatformMovement_AirSuspension__Class *klass;
  struct MonitorData *monitor;
  struct CharacterPlatformMovement_AirSuspension__Fields fields;
};
struct __declspec(align(8)) PlatformingFXFunctionality__Fields {
  float DistanceCooldown;
  float TimeCooldown;
  struct TimeDistanceGate * m_cooldownGate;
  struct TimeDistanceGate * m_footstepDetailsCooldownGate;
};
struct PlatformingFXFunctionality {
  struct PlatformingFXFunctionality__Class *klass;
  struct MonitorData *monitor;
  struct PlatformingFXFunctionality__Fields fields;
};
struct __declspec(align(8)) TimeDistanceGate__Fields {
  float m_lastTime;
  float m_timeCooldownOriginal;
  float m_timeCooldown;
  float m_distanceCooldownOriginal;
  float m_distanceCooldown;
  struct Vector3 m_lastPosition;
};
struct TimeDistanceGate {
  struct TimeDistanceGate__Class *klass;
  struct MonitorData *monitor;
  struct TimeDistanceGate__Fields fields;
};
struct __declspec(align(8)) List_1_ExternalForceEntry___Fields {
  struct ExternalForceEntry__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ExternalForceEntry_ {
  struct List_1_ExternalForceEntry___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ExternalForceEntry___Fields fields;
};
struct ExternalForceEntry {
  struct Vector2 Force;
  float Duration;
  float Dampening;
  float CurrentTime;
  struct AnimationCurve * DampeningOverTime;
  struct Object_1 * Source;
};
struct ExternalForceEntry__Boxed {
  struct ExternalForceEntry__Class *klass;
  struct MonitorData *monitor;
  struct ExternalForceEntry fields;
};
struct ExternalForceEntry__Array {
  struct ExternalForceEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ExternalForceEntry vector[32];
};
struct IEnumerator_1_ExternalForceEntry_ {
  struct IEnumerator_1_ExternalForceEntry___Class *klass;
  struct MonitorData *monitor;
};
struct RaycastCommand__Array {
  struct RaycastCommand__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RaycastCommand vector[32];
};
struct Action_1_UnityEngine_RaycastHit___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_UnityEngine_RaycastHit_ {
  struct Action_1_UnityEngine_RaycastHit___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_UnityEngine_RaycastHit___Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinRun___Fields {
  bool HasState;
  struct SeinRun * State;
};
struct CharacterStateWrapper_1_SeinRun_ {
  struct CharacterStateWrapper_1_SeinRun___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinRun___Fields fields;
};
enum SeinRun_State__Enum : int32_t {
  SeinRun_State__Enum_Run = 0,
  SeinRun_State__Enum_Jog = 1,
  SeinRun_State__Enum_Walk = 2,
};
struct SeinRun_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinRun_State__Enum value;
};
struct SeinRun__Fields {
  struct CharacterState__Fields _;
  float JogThreshold;
  float WalkThreshold;
  struct AnimationCurve * InputCurve;
  struct AnimationCurve * RunAnimationSpeed;
  struct AnimationCurve * JogAnimationSpeed;
  struct AnimationCurve * WalkAnimationSpeed;
  float m_horizontalInputDelay;
  float m_SharpTurnTimer;
  float m_lastInputDirection;
  bool m_wasFacingLeft;
  enum SeinRun_State__Enum CurrentState;
  struct Func_1_Boolean_ * m_shouldRunPlay;
  struct Func_1_Boolean_ * m_shouldJogPlay;
  struct Func_1_Boolean_ * m_shouldWalkPlay;
};
struct SeinRun {
  struct SeinRun__Class *klass;
  struct MonitorData *monitor;
  struct SeinRun__Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinIdle___Fields {
  bool HasState;
  struct SeinIdle * State;
};
struct CharacterStateWrapper_1_SeinIdle_ {
  struct CharacterStateWrapper_1_SeinIdle___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinIdle___Fields fields;
};
struct SeinIdle__Fields {
  struct CharacterState__Fields _;
  bool m_wasIdling;
  float m_idleTime;
  float YawnAnimationDelay;
  struct ActiveAnimationHandle m_activeAnimation;
  struct MoonAnimation * m_lastAnimation;
  struct Func_1_Boolean_ * m_shouldIdleKeepPlayingDelegate;
};
struct SeinIdle {
  struct SeinIdle__Class *klass;
  struct MonitorData *monitor;
  struct SeinIdle__Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinLookUp___Fields {
  bool HasState;
  struct SeinLookUp * State;
};
struct CharacterStateWrapper_1_SeinLookUp_ {
  struct CharacterStateWrapper_1_SeinLookUp___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinLookUp___Fields fields;
};
struct SeinLookUp__Fields {
  struct CharacterState__Fields _;
  float Drag;
  float LookDelay;
  struct MoonAnimation * LookUp;
  float LookUpDuration;
  float LookUpHeight;
  float m_height;
  bool m_isLookingDown;
  bool m_isLookingUp;
  float m_lookDelay;
};
struct SeinLookUp {
  struct SeinLookUp__Class *klass;
  struct MonitorData *monitor;
  struct SeinLookUp__Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinBashAttack___Fields {
  bool HasState;
  struct SeinBashAttack * State;
};
struct CharacterStateWrapper_1_SeinBashAttack_ {
  struct CharacterStateWrapper_1_SeinBashAttack___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinBashAttack___Fields fields;
};
struct SeinBashAttack__Fields {
  struct CharacterState__Fields _;
  struct GameObject * BashAttackGamePrefab;
  float BashVelocity;
  float ThrowForce;
  float EnemyThrowForce;
  float DelayTillNextBash;
  float DelayTillGlide;
  float DelayTillSpiritLeash;
  struct AnimationCurve * FrictionCurve;
  float FrictionDuration;
  float NoAirDecelerationDuration;
  float Range;
  float BashedProjectileDamageMultiplier;
  float AllowTurnNormalizedTimeLowerThreshold;
  float AllowTurnNormalizedTimeUpperThreshold;
  struct IBashAttackable * Target;
  struct IBashAttackable * m_potentialFutureTarget;
  bool LookForFutureTargets;
  struct Vector3 m_directionToTarget;
  float m_bashAngle;
  struct Vector3 m_playerTargetPosition;
  struct BashAttackGame * m_bashAttackGame;
  float m_frictionTimeRemaining;
  struct IBashAttackable * m_lastTarget;
  struct Transform * m_seinTransform;
  bool m_spriteMirrorLock;
  float m_timeRemainingTillNextBash;
  float m_timeRemainingTillGlideAllowed;
  float m_timeRemainingTillSpiritLeashAllowed;
  float m_timeRemainingOfBashButtonPress;
  float m_timeSinceBash;
  struct HashSet_1_Moon_ISuspendable_ * m_bashSuspendables;
  struct ActiveAnimationHandle m_jumpActiveAnimation;
  struct ActiveAnimationHandle m_jumpTurnActiveAnimation;
  struct MoonAnimation__Array * m_lastJumpSet;
  int32_t m_lastJumpIndex;
  bool IsBashing;
  struct SeinBashVersionAsset * BashVersionAsset;
  float m_bashThroughEnemiesRemainingTime;
  struct HashSet_1_IAttackable_ * m_enemiesBashedThrough;
  struct HashSet_1_Moon_Entity_ * m_entitiesBashedThrough;
  bool m_hasStarted;
  float BackFlipSpeed;
  bool m_usingJumpToBash;
  float m_jumpBashHoldRemaining;
  float m_timeSinceJump;
  float HoldJumpToBashTime;
  float HoldJumpToBashPadding;
  float HoldJumpTimeUntilBashOverride;
  float DoubleTapJumpWindow;
  float GlideIgnoreBashTime;
  float HoldUpAngleRange;
  bool m_fromGround;
  float m_holdAirTime;
  struct Guid _AttackableConsumerID_k__BackingField;
};
struct SeinBashAttack {
  struct SeinBashAttack__Class *klass;
  struct MonitorData *monitor;
  struct SeinBashAttack__Fields fields;
};
struct IBashAttackable {
  struct IBashAttackable__Class *klass;
  struct MonitorData *monitor;
};
enum BashAttackGame_State__Enum : int32_t {
  BashAttackGame_State__Enum_None = -1,
  BashAttackGame_State__Enum_Appearing = 0,
  BashAttackGame_State__Enum_Playing = 1,
  BashAttackGame_State__Enum_Disappearing = 2,
};}