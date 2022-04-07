namespace app {
struct DropSlugEnemy {
  struct DropSlugEnemy__Class *klass;
  struct MonitorData *monitor;
  struct DropSlugEnemy__Fields fields;
};
struct __declspec(align(8)) DropSlugEnemyAnimations__Fields {
  struct TextureAnimationWithTransitions * Respawn;
  struct TextureAnimationWithTransitions * Idle;
  struct TextureAnimationWithTransitions * Alert;
  struct TextureAnimationWithTransitions * Fall;
  struct TextureAnimationWithTransitions * Thrown;
};
struct DropSlugEnemyAnimations {
  struct DropSlugEnemyAnimations__Class *klass;
  struct MonitorData *monitor;
  struct DropSlugEnemyAnimations__Fields fields;
};
struct __declspec(align(8)) DropSlugEnemySettings__Fields {
  struct AnimationCurve * SpeedMultiplierOverTime;
  float Speed;
  float BelowOffset;
  float AlertRange;
  float FallRange;
  float HorizontalMaxSpeed;
  float HorizontalAcceleration;
  float ExplosionDamage;
  float ThrownGravity;
  struct GameObject * RespawnEffect;
};
struct DropSlugEnemySettings {
  struct DropSlugEnemySettings__Class *klass;
  struct MonitorData *monitor;
  struct DropSlugEnemySettings__Fields fields;
};
struct __declspec(align(8)) DropSlugEnemy_States__Fields {
  struct State_2 * Respawn;
  struct DropSlugIdleState * Idle;
  struct DropSlugAlertState * Alert;
  struct DropSlugFallState * Fall;
  struct DropSlugLandState * Land;
  struct DropSlugThrownState * Thrown;
};
struct DropSlugEnemy_States {
  struct DropSlugEnemy_States__Class *klass;
  struct MonitorData *monitor;
  struct DropSlugEnemy_States__Fields fields;
};
struct DropSlugIdleState__Fields {
  struct DropSlugState__Fields _;
};
struct DropSlugIdleState {
  struct DropSlugIdleState__Class *klass;
  struct MonitorData *monitor;
  struct DropSlugIdleState__Fields fields;
};
struct DropSlugFallState__Fields {
  struct DropSlugState__Fields _;
};
struct DropSlugFallState {
  struct DropSlugFallState__Class *klass;
  struct MonitorData *monitor;
  struct DropSlugFallState__Fields fields;
};
struct DropSlugLandState__Fields {
  struct DropSlugState__Fields _;
};
struct DropSlugLandState {
  struct DropSlugLandState__Class *klass;
  struct MonitorData *monitor;
  struct DropSlugLandState__Fields fields;
};
struct DropSlugThrownState__Fields {
  struct DropSlugState__Fields _;
};
struct DropSlugThrownState {
  struct DropSlugThrownState__Class *klass;
  struct MonitorData *monitor;
  struct DropSlugThrownState__Fields fields;
};
struct DropSlugEnemyAnimations__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DropSlugEnemyAnimations__StaticFields {
};
struct DropSlugEnemyAnimations__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DropSlugEnemyAnimations__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DropSlugEnemyAnimations__VTable vtable;
};
struct DropSlugEnemySettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DropSlugEnemySettings__StaticFields {
};
struct DropSlugEnemySettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DropSlugEnemySettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DropSlugEnemySettings__VTable vtable;
};
struct DropSlugIdleState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData OnExit_1;
};
struct DropSlugIdleState__StaticFields {
};
struct DropSlugIdleState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DropSlugIdleState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DropSlugIdleState__VTable vtable;
};
struct DropSlugFallState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData OnExit_1;
};
struct DropSlugFallState__StaticFields {
};
struct DropSlugFallState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DropSlugFallState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DropSlugFallState__VTable vtable;
};
struct DropSlugLandState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData OnExit_1;
};
struct DropSlugLandState__StaticFields {
};
struct DropSlugLandState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DropSlugLandState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DropSlugLandState__VTable vtable;
};
struct DropSlugThrownState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData OnExit_1;
};
struct DropSlugThrownState__StaticFields {
};
struct DropSlugThrownState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DropSlugThrownState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DropSlugThrownState__VTable vtable;
};
struct DropSlugEnemy_States__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DropSlugEnemy_States__StaticFields {
};
struct DropSlugEnemy_States__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DropSlugEnemy_States__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DropSlugEnemy_States__VTable vtable;
};
struct DropSlugEnemy__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData OnTimedRespawn;
  VirtualInvokeData RegisterRespawnDelegate;
  VirtualInvokeData OnFrustumEnter;
  VirtualInvokeData OnFrustumExit;
  VirtualInvokeData get_InsideFrustum;
  VirtualInvokeData get_Bounds;
  VirtualInvokeData get_AllowCacheBounds;
  VirtualInvokeData Moon_IHitStopReceiver_get_gameObject;
  VirtualInvokeData GetHitStopAutoSuspendables;
  VirtualInvokeData OnHitStopStart;
  VirtualInvokeData OnHitStopEnd;
  VirtualInvokeData GetHitStopAutoSuspendables_1;
  VirtualInvokeData CanBeOptimized;
  VirtualInvokeData get_Position;
  VirtualInvokeData OnFreeze;
  VirtualInvokeData OnUnfreeze;
  VirtualInvokeData OnEnterBash;
  VirtualInvokeData OnHitStopStart_1;
  VirtualInvokeData OnHitStopEnd_1;
  VirtualInvokeData IPuppetBase_get_Animation;
  VirtualInvokeData get_Animator;
  VirtualInvokeData get_SoundHost;
};
struct DropSlugEnemy__StaticFields {
};
struct DropSlugEnemy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DropSlugEnemy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DropSlugEnemy__VTable vtable;
};
struct DropSlugState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData OnExit_1;
};
struct DropSlugState__StaticFields {
};
struct DropSlugState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DropSlugState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DropSlugState__VTable vtable;
};
struct DropSlugAlertState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData OnExit_1;
};
struct DropSlugAlertState__StaticFields {
};
struct DropSlugAlertState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DropSlugAlertState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DropSlugAlertState__VTable vtable;
};

struct DropSlugEnemyPlaceholder__Fields {
  struct RespawningPlaceholder__Fields _;
  struct DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings * Settings;
  struct EntityPlaceholderScalingData * Scaling;
  struct GameObject * DropOwlEnemy;
};
struct DropSlugEnemyPlaceholder {
  struct DropSlugEnemyPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct DropSlugEnemyPlaceholder__Fields fields;
};
struct __declspec(align(8)) DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__Fields {
  float Health;
  float DamageOnTouch;
  int32_t NumberOfExpOrbsToDrop;
  struct DropLootSettings * LootSettings;
  float AlertRange;
  float FallRange;
  float DropDistance;
  float Speed;
  float ExplosionDamage;
};
struct DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings {
  struct DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__Class *klass;
  struct MonitorData *monitor;
  struct DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__Fields fields;
};
struct DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__StaticFields {
};
struct DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__VTable vtable;
};
struct DropSlugEnemyPlaceholder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData get_CheckForOverlap;
  VirtualInvokeData get_CanSpawn;
  VirtualInvokeData get_NeedsToRespawn;
  VirtualInvokeData UpdateSpawnState;
  VirtualInvokeData Instantiate;
};
struct DropSlugEnemyPlaceholder__StaticFields {
};
struct DropSlugEnemyPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DropSlugEnemyPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DropSlugEnemyPlaceholder__VTable vtable;
};

struct __declspec(align(8)) FishState__Fields {
  struct FishEnemy * Fish;
};
struct FishState {
  struct FishState__Class *klass;
  struct MonitorData *monitor;
  struct FishState__Fields fields;
};
struct FishAttackState__Fields {
  struct FishState__Fields _;
  float m_lastDistance;
  float m_lastAngle;
  float m_attackAngle;
};
struct FishAttackState {
  struct FishAttackState__Class *klass;
  struct MonitorData *monitor;
  struct FishAttackState__Fields fields;
};
struct FishEnemy__Fields {
  struct Enemy2D__Fields _;
  struct FishEnemyAnimations * Animations;
  struct FishEnemySounds * Sounds;
  struct FlyMovement * FlyMovement;
  struct FishEnemySettings * Settings;
  struct Transform * Rotation;
  struct FishEnemy_States * State;
  struct Transform * WanderTarget;
  struct AnimationCurve * AnimationFromBend;
  float m_lastAngle;
  float m_currentAngularVelocity;
  bool m_inWater;
  float Angle;
};
struct FishEnemy {
  struct FishEnemy__Class *klass;
  struct MonitorData *monitor;
  struct FishEnemy__Fields fields;
};
struct __declspec(align(8)) FishEnemyAnimations__Fields {
  struct TwistAnimationSet * Idle;
  struct TwistAnimationSet * Swim;
  struct TextureAnimationWithTransitions * Attack;
  struct TextureAnimationWithTransitions * Bashed;
  struct TextureAnimationWithTransitions * BounceCeiling;
  struct TextureAnimationWithTransitions * BounceFloor;
  struct TextureAnimationWithTransitions * BounceWall;
  struct TextureAnimationWithTransitions * Fall;
  struct TextureAnimationWithTransitions * Flop;
  struct TextureAnimationWithTransitions * IdleFlipHorizontal;
  struct TextureAnimationWithTransitions * IdleFlipVertical;
  struct TextureAnimationWithTransitions * SwimFlipHorizontal;
  struct TextureAnimationWithTransitions * SwimFlipVertical;
};
struct FishEnemyAnimations {
  struct FishEnemyAnimations__Class *klass;
  struct MonitorData *monitor;
  struct FishEnemyAnimations__Fields fields;
};
struct __declspec(align(8)) TwistAnimationSet__Fields {
  struct TextureAnimationWithTransitions__Array * Animations;
};
struct TwistAnimationSet {
  struct TwistAnimationSet__Class *klass;
  struct MonitorData *monitor;
  struct TwistAnimationSet__Fields fields;
};
struct TextureAnimationWithTransitions__Array {
  struct TextureAnimationWithTransitions__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TextureAnimationWithTransitions * vector[32];
};
struct __declspec(align(8)) FishEnemySounds__Fields {
  struct SoundSource * Swim;
  struct SoundProvider * Alert;
  struct SoundSource * Bite;
  struct SoundSource * Flop;
  struct SoundSource * EnterWater;
  struct SoundSource * ExitWater;
};
struct FishEnemySounds {
  struct FishEnemySounds__Class *klass;
  struct MonitorData *monitor;
  struct FishEnemySounds__Fields fields;
};
struct __declspec(align(8)) FishEnemySettings__Fields {
  struct AnimationCurve * IdleSpeedOverDistance;
  struct AnimationCurve * AttackDistanceOverTime;
  struct AnimationCurve * AttackAngleOverTime;
  struct AnimationCurve * SwimSpeedOverTime;
  float EnterSwimRange;
  float ExitSwimRange;
  float AttackRange;
  float MaxSwimDistance;
  float MinSwimDuration;
  float IdleSpeed;
  float SwimSpeed;
  float AttackSpeed;
  float Gravity;
  float IdleTurnSpeed;
  float SwimTurnSpeed;
  float AttackDuration;
  float BounceDuration;
  float BashDuration;
  float BashSpeed;
};
struct FishEnemySettings {
  struct FishEnemySettings__Class *klass;
  struct MonitorData *monitor;
  struct FishEnemySettings__Fields fields;
};
struct __declspec(align(8)) FishEnemy_States__Fields {
  struct FishIdleState * Idle;
  struct FishSwimState * Swim;
  struct FishAttackState * Attack;
  struct FishBashedState * Bashed;
  struct FishBounceState * Bounce;
  struct FishFlopState * Flop;
  struct FishFallState * Fall;
};
struct FishEnemy_States {
  struct FishEnemy_States__Class *klass;
  struct MonitorData *monitor;
  struct FishEnemy_States__Fields fields;
};
struct FishIdleState__Fields {
  struct FishState__Fields _;
  float m_lockAnimationTime;
};
struct FishIdleState {
  struct FishIdleState__Class *klass;
  struct MonitorData *monitor;
  struct FishIdleState__Fields fields;
};
struct FishSwimState__Fields {
  struct FishState__Fields _;
  float m_lockAnimationTime;
};
struct FishSwimState {
  struct FishSwimState__Class *klass;
  struct MonitorData *monitor;
  struct FishSwimState__Fields fields;
};
struct FishBashedState__Fields {
  struct FishState__Fields _;
};
struct FishBashedState {
  struct FishBashedState__Class *klass;
  struct MonitorData *monitor;
  struct FishBashedState__Fields fields;
};
struct FishBounceState__Fields {
  struct FishState__Fields _;
};
struct FishBounceState {
  struct FishBounceState__Class *klass;
  struct MonitorData *monitor;
  struct FishBounceState__Fields fields;
};
struct FishFlopState__Fields {
  struct FishState__Fields _;
};
struct FishFlopState {
  struct FishFlopState__Class *klass;
  struct MonitorData *monitor;
  struct FishFlopState__Fields fields;
};
struct FishFallState__Fields {
  struct FishState__Fields _;
};
struct FishFallState {
  struct FishFallState__Class *klass;
  struct MonitorData *monitor;
  struct FishFallState__Fields fields;
};
struct TwistAnimationSet__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TwistAnimationSet__StaticFields {
};
struct TwistAnimationSet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TwistAnimationSet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TwistAnimationSet__VTable vtable;
};
struct FishEnemyAnimations__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FishEnemyAnimations__StaticFields {
};
struct FishEnemyAnimations__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FishEnemyAnimations__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FishEnemyAnimations__VTable vtable;
};
struct FishEnemySounds__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FishEnemySounds__StaticFields {
};
struct FishEnemySounds__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FishEnemySounds__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FishEnemySounds__VTable vtable;
};
struct FishEnemySettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FishEnemySettings__StaticFields {
};
struct FishEnemySettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FishEnemySettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FishEnemySettings__VTable vtable;
};
struct FishIdleState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData OnExit_1;
};
struct FishIdleState__StaticFields {
};
struct FishIdleState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FishIdleState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FishIdleState__VTable vtable;
};
struct FishSwimState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData OnExit_1;
};
struct FishSwimState__StaticFields {
};
struct FishSwimState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FishSwimState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FishSwimState__VTable vtable;
};
struct FishBashedState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData OnExit_1;
};
struct FishBashedState__StaticFields {
};
struct FishBashedState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FishBashedState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FishBashedState__VTable vtable;
};
struct FishBounceState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData OnExit_1;
};
struct FishBounceState__StaticFields {
};
struct FishBounceState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FishBounceState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FishBounceState__VTable vtable;
};
struct FishFlopState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData OnExit_1;
};
struct FishFlopState__StaticFields {
};
struct FishFlopState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FishFlopState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FishFlopState__VTable vtable;
};
struct FishFallState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData OnExit_1;
};
struct FishFallState__StaticFields {
};
struct FishFallState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FishFallState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FishFallState__VTable vtable;
};
struct FishEnemy_States__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FishEnemy_States__StaticFields {
};
struct FishEnemy_States__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FishEnemy_States__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FishEnemy_States__VTable vtable;
};
struct FishEnemy__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData OnTimedRespawn;
  VirtualInvokeData RegisterRespawnDelegate;
  VirtualInvokeData OnFrustumEnter;
  VirtualInvokeData OnFrustumExit;
  VirtualInvokeData get_InsideFrustum;
  VirtualInvokeData get_Bounds;
  VirtualInvokeData get_AllowCacheBounds;
  VirtualInvokeData Moon_IHitStopReceiver_get_gameObject;
  VirtualInvokeData GetHitStopAutoSuspendables;
  VirtualInvokeData OnHitStopStart;
  VirtualInvokeData OnHitStopEnd;
  VirtualInvokeData GetHitStopAutoSuspendables_1;
  VirtualInvokeData CanBeOptimized;
  VirtualInvokeData get_Position;
  VirtualInvokeData OnFreeze;
  VirtualInvokeData OnUnfreeze;
  VirtualInvokeData OnEnterBash;
  VirtualInvokeData OnHitStopStart_1;
  VirtualInvokeData OnHitStopEnd_1;
  VirtualInvokeData IPuppetBase_get_Animation;
  VirtualInvokeData get_Animator;
  VirtualInvokeData get_SoundHost;
};
struct FishEnemy__StaticFields {
};
struct FishEnemy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FishEnemy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FishEnemy__VTable vtable;
};
struct FishState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
};
struct FishState__StaticFields {
};
struct FishState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FishState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FishState__VTable vtable;
};
struct FishAttackState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData OnExit_1;
};
struct FishAttackState__StaticFields {
};
struct FishAttackState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FishAttackState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FishAttackState__VTable vtable;
};

struct FishEnemyPlaceholder__Fields {
  struct RespawningPlaceholder__Fields _;
  struct Transform * WanderTarget;
  struct FishEnemyPlaceholder_FishEnemyPlaceholderSettings * Settings;
  struct GameObject * FishEnemy;
};
struct FishEnemyPlaceholder {
  struct FishEnemyPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct FishEnemyPlaceholder__Fields fields;
};
struct __declspec(align(8)) FishEnemyPlaceholder_FishEnemyPlaceholderSettings__Fields {
  float Health;
  float DamageOnTouch;
  int32_t NumberOfExpOrbsToDrop;
  struct DropLootSettings * LootSettings;
};
struct FishEnemyPlaceholder_FishEnemyPlaceholderSettings {
  struct FishEnemyPlaceholder_FishEnemyPlaceholderSettings__Class *klass;
  struct MonitorData *monitor;
  struct FishEnemyPlaceholder_FishEnemyPlaceholderSettings__Fields fields;
};
struct FishEnemyPlaceholder_FishEnemyPlaceholderSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FishEnemyPlaceholder_FishEnemyPlaceholderSettings__StaticFields {
};
struct FishEnemyPlaceholder_FishEnemyPlaceholderSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FishEnemyPlaceholder_FishEnemyPlaceholderSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FishEnemyPlaceholder_FishEnemyPlaceholderSettings__VTable vtable;
};
struct FishEnemyPlaceholder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData get_CheckForOverlap;
  VirtualInvokeData get_CanSpawn;
  VirtualInvokeData get_NeedsToRespawn;
  VirtualInvokeData UpdateSpawnState;
  VirtualInvokeData Instantiate;
};
struct FishEnemyPlaceholder__StaticFields {
};
struct FishEnemyPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FishEnemyPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FishEnemyPlaceholder__VTable vtable;
};

struct __declspec(align(8)) ChangeDetectorString__Fields {
  struct String * RecentValue;
};
struct ChangeDetectorString {
  struct ChangeDetectorString__Class *klass;
  struct MonitorData *monitor;
  struct ChangeDetectorString__Fields fields;
};
struct ChangeDetectorString__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ChangeDetectorString__StaticFields {
};
struct ChangeDetectorString__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChangeDetectorString__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChangeDetectorString__VTable vtable;
};

struct __declspec(align(8)) ChangeDetectorFloat__Fields {
  float RecentValue;
};
struct ChangeDetectorFloat {
  struct ChangeDetectorFloat__Class *klass;
  struct MonitorData *monitor;
  struct ChangeDetectorFloat__Fields fields;
};
struct ChangeDetectorFloat__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ChangeDetectorFloat__StaticFields {
};
struct ChangeDetectorFloat__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChangeDetectorFloat__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChangeDetectorFloat__VTable vtable;
};

struct __declspec(align(8)) ChangeDetectorApproxFloat__Fields {
  float Epsilon;
  float RecentValue;
};
struct ChangeDetectorApproxFloat {
  struct ChangeDetectorApproxFloat__Class *klass;
  struct MonitorData *monitor;
  struct ChangeDetectorApproxFloat__Fields fields;
};
struct ChangeDetectorApproxFloat__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ChangeDetectorApproxFloat__StaticFields {
};
struct ChangeDetectorApproxFloat__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChangeDetectorApproxFloat__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChangeDetectorApproxFloat__VTable vtable;
};}