namespace app {
struct SpitterEnemy {
  struct SpitterEnemy__Class *klass;
  struct MonitorData *monitor;
  struct SpitterEnemy__Fields fields;
};
struct ColosseumSpitterEnemy__Fields {
  struct SpitterEnemy__Fields _;
};
struct ColosseumSpitterEnemy {
  struct ColosseumSpitterEnemy__Class *klass;
  struct MonitorData *monitor;
  struct ColosseumSpitterEnemy__Fields fields;
};
struct __declspec(align(8)) ChargingSootEnemyAnimations__Fields {
  struct TextureAnimationWithTransitions * Idle;
  struct TextureAnimationWithTransitions * Walk;
  struct TextureAnimationWithTransitions * RunBack;
  struct TextureAnimationWithTransitions * Charging;
  struct TextureAnimationWithTransitions * Shooting;
  struct TextureAnimationWithTransitions * Thrown;
  struct TextureAnimationWithTransitions * Stomped;
  struct TextureAnimationWithTransitions * Stunned;
};
struct ChargingSootEnemyAnimations {
  struct ChargingSootEnemyAnimations__Class *klass;
  struct MonitorData *monitor;
  struct ChargingSootEnemyAnimations__Fields fields;
};
struct __declspec(align(8)) ChargingSootEnemySettings__Fields {
  float Acceleration;
  float Deceleration;
  float WalkSpeed;
  float RunSpeed;
  float AlertDuration;
  float IdleDuration;
  float WalkDuration;
  float SeePlayerDistance;
  float MinChargeDistance;
  float ChargeDuration;
  float ShootingDuration;
  float StunnedDuration;
  float ThrownDrag;
  float ProjectileSpeed;
  float Gravity;
  float ProjectileGravity;
  float ProjectileDamage;
  bool SpreadShot;
};
struct ChargingSootEnemySettings {
  struct ChargingSootEnemySettings__Class *klass;
  struct MonitorData *monitor;
  struct ChargingSootEnemySettings__Fields fields;
};
struct __declspec(align(8)) SpitterEnemy_States__Fields {
  struct SpitterEnemyIdleState * Idle;
  struct SpitterEnemyWalkState * Walk;
  struct SpitterEnemyRunBackState * RunBack;
  struct SpitterEnemyChargingState * SpitterEnemyCharging;
  struct SpitterEnemyShootingState * Shooting;
  struct SpitterEnemyThrownState * Thrown;
  struct SpitterEnemyStompedState * Stomped;
  struct SpitterEnemyStunnedState * Stunned;
  struct SpitterEnemySpiritLeashedState * SpiritLeashed;
  struct SpitterEnemyTrappedState * Trapped;
};
struct SpitterEnemy_States {
  struct SpitterEnemy_States__Class *klass;
  struct MonitorData *monitor;
  struct SpitterEnemy_States__Fields fields;
};
struct __declspec(align(8)) GroundEnemyState__Fields {
  struct GroundEnemy * GroundEnemy;
};
struct GroundEnemyState {
  struct GroundEnemyState__Class *klass;
  struct MonitorData *monitor;
  struct GroundEnemyState__Fields fields;
};
struct SpitterEnemyState__Fields {
  struct GroundEnemyState__Fields _;
  struct SpitterEnemy * SpitterEnemy;
};
struct SpitterEnemyState {
  struct SpitterEnemyState__Class *klass;
  struct MonitorData *monitor;
  struct SpitterEnemyState__Fields fields;
};
struct SpitterEnemyIdleState__Fields {
  struct SpitterEnemyState__Fields _;
};
struct SpitterEnemyIdleState {
  struct SpitterEnemyIdleState__Class *klass;
  struct MonitorData *monitor;
  struct SpitterEnemyIdleState__Fields fields;
};
struct JumperEnemyState__Fields {
  struct GroundEnemyState__Fields _;
  struct JumperEnemy * JumperEnemy;
};
struct JumperEnemyState {
  struct JumperEnemyState__Class *klass;
  struct MonitorData *monitor;
  struct JumperEnemyState__Fields fields;
};
struct JumperEnemyIdleState__Fields {
  struct JumperEnemyState__Fields _;
};
struct JumperEnemyIdleState {
  struct JumperEnemyIdleState__Class *klass;
  struct MonitorData *monitor;
  struct JumperEnemyIdleState__Fields fields;
};
struct JumperEnemy__Fields {
  struct GroundEnemy__Fields _;
  struct JumpingSootEnemySettings * Settings;
  struct JumpingSootEnemySounds * Sounds;
  struct JumperEnemy_States * State;
  struct Transform * JumpingZone;
  struct LayerMask RaycastLayerMask;
  struct Vector3 m_playerSmoothSpeed;
  bool m_shouldStomp;
  struct Vector3 m_thrownDirection;
  bool m_timedRespawn;
  struct GameObject * StompEffect;
  struct GameObject * LandEffect;
  float FallingDisabledTimeLeft;
};
struct JumperEnemy {
  struct JumperEnemy__Class *klass;
  struct MonitorData *monitor;
  struct JumperEnemy__Fields fields;
};
struct __declspec(align(8)) JumpingSootEnemySettings__Fields {
  float ChargeRange;
  float JumpHeight;
  float ShortJumpHeight;
  float JumpDistance;
  float StompAttackDistance;
  float Gravity;
  float MaxFallSpeed;
  float SphereCastRadius;
  struct LayerMask SphereCastMask;
  float ChargingDuration;
  float StunnedDuration;
  float ThrownDrag;
  int32_t GroundStompDamage;
  float ExplosionDamage;
  bool HasStompExplosion;
  struct GameObject * RespawnEffect;
};
struct JumpingSootEnemySettings {
  struct JumpingSootEnemySettings__Class *klass;
  struct MonitorData *monitor;
  struct JumpingSootEnemySettings__Fields fields;
};
struct __declspec(align(8)) JumpingSootEnemySounds__Fields {
  struct SoundProvider * Charge;
  struct SoundProvider * Jump;
  struct SoundSource * Idle;
  struct SoundProvider * Impact;
  struct SoundProvider * Land;
  struct SoundSource * FallOnGround;
};
struct JumpingSootEnemySounds {
  struct JumpingSootEnemySounds__Class *klass;
  struct MonitorData *monitor;
  struct JumpingSootEnemySounds__Fields fields;
};
struct __declspec(align(8)) JumperEnemy_States__Fields {
  struct State_2 * Respawn;
  struct JumperEnemyIdleState * Idle;
  struct JumperEnemyChargingState * JumpCharge;
  struct JumperEnemyFallState * Fall;
  struct JumperEnemyThrownState * Thrown;
  struct JumperEnemyStompedState * Stomped;
  struct JumperEnemyStunnedState * Stunned;
};
struct JumperEnemy_States {
  struct JumperEnemy_States__Class *klass;
  struct MonitorData *monitor;
  struct JumperEnemy_States__Fields fields;
};
struct JumperEnemyChargingState__Fields {
  struct JumperEnemyState__Fields _;
};
struct JumperEnemyChargingState {
  struct JumperEnemyChargingState__Class *klass;
  struct MonitorData *monitor;
  struct JumperEnemyChargingState__Fields fields;
};
struct JumperEnemyFallState__Fields {
  struct JumperEnemyState__Fields _;
};
struct JumperEnemyFallState {
  struct JumperEnemyFallState__Class *klass;
  struct MonitorData *monitor;
  struct JumperEnemyFallState__Fields fields;
};
struct JumperEnemyThrownState__Fields {
  struct JumperEnemyState__Fields _;
};
struct JumperEnemyThrownState {
  struct JumperEnemyThrownState__Class *klass;
  struct MonitorData *monitor;
  struct JumperEnemyThrownState__Fields fields;
};
struct JumperEnemyStompedState__Fields {
  struct JumperEnemyState__Fields _;
};
struct JumperEnemyStompedState {
  struct JumperEnemyStompedState__Class *klass;
  struct MonitorData *monitor;
  struct JumperEnemyStompedState__Fields fields;
};
struct JumperEnemyStunnedState__Fields {
  struct JumperEnemyState__Fields _;
};
struct JumperEnemyStunnedState {
  struct JumperEnemyStunnedState__Class *klass;
  struct MonitorData *monitor;
  struct JumperEnemyStunnedState__Fields fields;
};
struct SpitterEnemyChargingState__Fields {
  struct SpitterEnemyState__Fields _;
};
struct SpitterEnemyChargingState {
  struct SpitterEnemyChargingState__Class *klass;
  struct MonitorData *monitor;
  struct SpitterEnemyChargingState__Fields fields;
};
struct SpitterEnemyWalkState__Fields {
  struct SpitterEnemyState__Fields _;
};
struct SpitterEnemyWalkState {
  struct SpitterEnemyWalkState__Class *klass;
  struct MonitorData *monitor;
  struct SpitterEnemyWalkState__Fields fields;
};
struct SpitterEnemyRunBackState__Fields {
  struct SpitterEnemyState__Fields _;
};
struct SpitterEnemyRunBackState {
  struct SpitterEnemyRunBackState__Class *klass;
  struct MonitorData *monitor;
  struct SpitterEnemyRunBackState__Fields fields;
};
struct SpitterEnemyShootingState__Fields {
  struct SpitterEnemyState__Fields _;
};
struct SpitterEnemyShootingState {
  struct SpitterEnemyShootingState__Class *klass;
  struct MonitorData *monitor;
  struct SpitterEnemyShootingState__Fields fields;
};
struct SpitterEnemyThrownState__Fields {
  struct SpitterEnemyState__Fields _;
};
struct SpitterEnemyThrownState {
  struct SpitterEnemyThrownState__Class *klass;
  struct MonitorData *monitor;
  struct SpitterEnemyThrownState__Fields fields;
};
struct SpitterEnemyStompedState__Fields {
  struct SpitterEnemyState__Fields _;
};
struct SpitterEnemyStompedState {
  struct SpitterEnemyStompedState__Class *klass;
  struct MonitorData *monitor;
  struct SpitterEnemyStompedState__Fields fields;
};
struct SpitterEnemyStunnedState__Fields {
  struct SpitterEnemyState__Fields _;
  float m_stunnedTimeLeft;
};
struct SpitterEnemyStunnedState {
  struct SpitterEnemyStunnedState__Class *klass;
  struct MonitorData *monitor;
  struct SpitterEnemyStunnedState__Fields fields;
};
struct SpitterEnemySpiritLeashedState__Fields {
  struct SpitterEnemyState__Fields _;
  struct Vector3 m_spiritLeashPosition;
};
struct SpitterEnemySpiritLeashedState {
  struct SpitterEnemySpiritLeashedState__Class *klass;
  struct MonitorData *monitor;
  struct SpitterEnemySpiritLeashedState__Fields fields;
};
struct SpitterEnemyTrappedState__Fields {
  struct SpitterEnemyState__Fields _;
  float m_timer;
  float m_amount;
  enum DamageType__Enum m_damageType;
};
struct SpitterEnemyTrappedState {
  struct SpitterEnemyTrappedState__Class *klass;
  struct MonitorData *monitor;
  struct SpitterEnemyTrappedState__Fields fields;
};
struct Enemy2D__VTable {
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
struct Enemy2D__StaticFields {
};
struct Enemy2D__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Enemy2D__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Enemy2D__VTable vtable;
};
struct GroundEnemy__VTable {
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
struct GroundEnemy__StaticFields {
};
struct GroundEnemy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GroundEnemy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GroundEnemy__VTable vtable;
};
struct ChargingSootEnemyAnimations__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ChargingSootEnemyAnimations__StaticFields {
};
struct ChargingSootEnemyAnimations__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChargingSootEnemyAnimations__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChargingSootEnemyAnimations__VTable vtable;
};
struct ChargingSootEnemySettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ChargingSootEnemySettings__StaticFields {
};
struct ChargingSootEnemySettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChargingSootEnemySettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChargingSootEnemySettings__VTable vtable;
};
struct JumpingSootEnemySettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct JumpingSootEnemySettings__StaticFields {
};
struct JumpingSootEnemySettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JumpingSootEnemySettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JumpingSootEnemySettings__VTable vtable;
};
struct JumpingSootEnemySounds__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct JumpingSootEnemySounds__StaticFields {
};
struct JumpingSootEnemySounds__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JumpingSootEnemySounds__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JumpingSootEnemySounds__VTable vtable;
};
struct JumperEnemyChargingState__VTable {
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
struct JumperEnemyChargingState__StaticFields {
};
struct JumperEnemyChargingState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JumperEnemyChargingState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JumperEnemyChargingState__VTable vtable;
};
struct JumperEnemyFallState__VTable {
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
struct JumperEnemyFallState__StaticFields {
};
struct JumperEnemyFallState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JumperEnemyFallState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JumperEnemyFallState__VTable vtable;
};
struct JumperEnemyThrownState__VTable {
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
struct JumperEnemyThrownState__StaticFields {
};
struct JumperEnemyThrownState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JumperEnemyThrownState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JumperEnemyThrownState__VTable vtable;
};
struct JumperEnemyStompedState__VTable {
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
struct JumperEnemyStompedState__StaticFields {
};
struct JumperEnemyStompedState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JumperEnemyStompedState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JumperEnemyStompedState__VTable vtable;
};
struct JumperEnemyStunnedState__VTable {
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
struct JumperEnemyStunnedState__StaticFields {
};
struct JumperEnemyStunnedState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JumperEnemyStunnedState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JumperEnemyStunnedState__VTable vtable;
};
struct JumperEnemy_States__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct JumperEnemy_States__StaticFields {
};
struct JumperEnemy_States__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JumperEnemy_States__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JumperEnemy_States__VTable vtable;
};
struct JumperEnemy__VTable {
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
struct JumperEnemy__StaticFields {
};
struct JumperEnemy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JumperEnemy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JumperEnemy__VTable vtable;
};
struct JumperEnemyState__VTable {
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
struct JumperEnemyState__StaticFields {
};
struct JumperEnemyState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JumperEnemyState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JumperEnemyState__VTable vtable;
};
struct JumperEnemyIdleState__VTable {
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
struct JumperEnemyIdleState__StaticFields {
};
struct JumperEnemyIdleState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JumperEnemyIdleState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JumperEnemyIdleState__VTable vtable;
};
struct GroundEnemyState__VTable {
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
struct GroundEnemyState__StaticFields {
};
struct GroundEnemyState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GroundEnemyState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GroundEnemyState__VTable vtable;
};
struct SpitterEnemyChargingState__VTable {
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
struct SpitterEnemyChargingState__StaticFields {
};
struct SpitterEnemyChargingState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpitterEnemyChargingState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpitterEnemyChargingState__VTable vtable;
};
struct SpitterEnemyState__VTable {
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
struct SpitterEnemyState__StaticFields {
};
struct SpitterEnemyState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpitterEnemyState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpitterEnemyState__VTable vtable;
};
struct SpitterEnemyIdleState__VTable {
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
struct SpitterEnemyIdleState__StaticFields {
};
struct SpitterEnemyIdleState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpitterEnemyIdleState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpitterEnemyIdleState__VTable vtable;
};
struct SpitterEnemyWalkState__VTable {
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
struct SpitterEnemyWalkState__StaticFields {
};
struct SpitterEnemyWalkState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpitterEnemyWalkState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpitterEnemyWalkState__VTable vtable;
};
struct SpitterEnemyRunBackState__VTable {
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
struct SpitterEnemyRunBackState__StaticFields {
};
struct SpitterEnemyRunBackState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpitterEnemyRunBackState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpitterEnemyRunBackState__VTable vtable;
};
struct SpitterEnemyShootingState__VTable {
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
struct SpitterEnemyShootingState__StaticFields {
};
struct SpitterEnemyShootingState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpitterEnemyShootingState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpitterEnemyShootingState__VTable vtable;
};
struct SpitterEnemyThrownState__VTable {
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
struct SpitterEnemyThrownState__StaticFields {
};
struct SpitterEnemyThrownState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpitterEnemyThrownState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpitterEnemyThrownState__VTable vtable;
};
struct SpitterEnemyStompedState__VTable {
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
struct SpitterEnemyStompedState__StaticFields {
};
struct SpitterEnemyStompedState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpitterEnemyStompedState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpitterEnemyStompedState__VTable vtable;
};
struct SpitterEnemyStunnedState__VTable {
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
struct SpitterEnemyStunnedState__StaticFields {
};
struct SpitterEnemyStunnedState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpitterEnemyStunnedState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpitterEnemyStunnedState__VTable vtable;
};
struct SpitterEnemySpiritLeashedState__VTable {
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
struct SpitterEnemySpiritLeashedState__StaticFields {
};
struct SpitterEnemySpiritLeashedState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpitterEnemySpiritLeashedState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpitterEnemySpiritLeashedState__VTable vtable;
};
struct SpitterEnemyTrappedState__VTable {
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
struct SpitterEnemyTrappedState__StaticFields {
};
struct SpitterEnemyTrappedState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpitterEnemyTrappedState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpitterEnemyTrappedState__VTable vtable;
};
struct SpitterEnemy_States__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpitterEnemy_States__StaticFields {
};
struct SpitterEnemy_States__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpitterEnemy_States__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpitterEnemy_States__VTable vtable;
};
struct SpitterEnemy__VTable {
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
};}