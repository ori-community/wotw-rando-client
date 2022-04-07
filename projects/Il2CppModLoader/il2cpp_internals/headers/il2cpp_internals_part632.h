namespace app {
struct KamikazeSootEnemyPlaceholder {
  struct KamikazeSootEnemyPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct KamikazeSootEnemyPlaceholder__Fields fields;
};
struct __declspec(align(8)) KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings__Fields {
  float Health;
  int32_t NumberOfExpOrbsToDrop;
  struct DropLootSettings * LootSettings;
};
struct KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings {
  struct KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings__Class *klass;
  struct MonitorData *monitor;
  struct KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings__Fields fields;
};
struct KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings__StaticFields {
};
struct KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings__VTable vtable;
};
struct KamikazeSootEnemyPlaceholder__VTable {
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
struct KamikazeSootEnemyPlaceholder__StaticFields {
};
struct KamikazeSootEnemyPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KamikazeSootEnemyPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KamikazeSootEnemyPlaceholder__VTable vtable;
};

struct KamikazeSootEnemyRunState__Fields {
  struct KamikazeSootEnemyState__Fields _;
};
struct KamikazeSootEnemyRunState {
  struct KamikazeSootEnemyRunState__Class *klass;
  struct MonitorData *monitor;
  struct KamikazeSootEnemyRunState__Fields fields;
};
struct KamikazeSootEnemyRunState__VTable {
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
struct KamikazeSootEnemyRunState__StaticFields {
};
struct KamikazeSootEnemyRunState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KamikazeSootEnemyRunState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KamikazeSootEnemyRunState__VTable vtable;
};

struct RammingEnemy__Fields {
  struct GroundEnemy__Fields _;
  struct RammingEnemyAnimations * Animations;
  struct RammingEnemySettings * Settings;
  struct RammingEnemySounds * Sounds;
  struct PrefabSpawner * HitWallEffect;
  struct Transform__Array * Zones;
  struct RammingEnemy_States * State;
  float IdleWaitTime;
};
struct RammingEnemy {
  struct RammingEnemy__Class *klass;
  struct MonitorData *monitor;
  struct RammingEnemy__Fields fields;
};
struct ArmouredRammingEnemy__Fields {
  struct RammingEnemy__Fields _;
  struct GameObject * RammingEnemy;
  struct Action_1_LegacyEntity_ * OnReplacedAction;
  struct PrefabSpawner * ShatterEffect;
};
struct ArmouredRammingEnemy {
  struct ArmouredRammingEnemy__Class *klass;
  struct MonitorData *monitor;
  struct ArmouredRammingEnemy__Fields fields;
};
struct __declspec(align(8)) RammingEnemyAnimations__Fields {
  struct TextureAnimationWithTransitions * Idle;
  struct TextureAnimationWithTransitions * Alert;
  struct TextureAnimationWithTransitions * Running;
  struct TextureAnimationWithTransitions * Stunned;
  struct TextureAnimationWithTransitions * Braking;
  struct TextureAnimationWithTransitions * Thrown;
  struct TextureAnimationWithTransitions * Retreat;
  struct TextureAnimationWithTransitions * HitWall;
  struct TextureAnimationWithTransitions * KnockBack;
};
struct RammingEnemyAnimations {
  struct RammingEnemyAnimations__Class *klass;
  struct MonitorData *monitor;
  struct RammingEnemyAnimations__Fields fields;
};
struct __declspec(align(8)) RammingEnemySettings__Fields {
  float AlertDuration;
  float StunnedDuration;
  float RunSpeed;
  float BrakingDuration;
  float AccelerationDuration;
  float AlertRange;
  float Gravity;
  float HitWallStunSpeed;
  float KnockBackSpeed;
  float BouncingDuration;
  float KnockBackDuration;
  float RecoverTime;
  float BashSpeed;
  float RetreatSpeed;
  float RetreatDistance;
  bool CanDieToLevelUpBlast;
  struct AnimationCurve * RunningSpeedMultipliedOverTime;
  struct AnimationCurve * BrakingSpeedMultiplierOverTime;
  struct AnimationCurve * BouncingSpeedMultiplierOverTime;
};
struct RammingEnemySettings {
  struct RammingEnemySettings__Class *klass;
  struct MonitorData *monitor;
  struct RammingEnemySettings__Fields fields;
};
struct __declspec(align(8)) RammingEnemySounds__Fields {
  struct SoundProvider * Alert;
  struct SoundProvider * Brake;
  struct SoundSource * Idle;
  struct SoundSource * Run;
  struct SoundProvider * HitSein;
  struct SoundProvider * Hurt;
  struct SoundProvider * Deflected;
  struct SoundProvider * Dash;
  struct SoundProvider * OnHitWall;
};
struct RammingEnemySounds {
  struct RammingEnemySounds__Class *klass;
  struct MonitorData *monitor;
  struct RammingEnemySounds__Fields fields;
};
struct __declspec(align(8)) RammingEnemy_States__Fields {
  struct RammingIdleState * Idle;
  struct RammingAlertState * Alert;
  struct RammingRunningState * Running;
  struct RammingBrakingState * Braking;
  struct RammingBrakingState * RetreatBraking;
  struct RammingHitWallState * HitWall;
  struct RammingStunnedState * Stunned;
  struct RammingKnockBackState * KnockBack;
  struct RammingRetreatState * Retreat;
};
struct RammingEnemy_States {
  struct RammingEnemy_States__Class *klass;
  struct MonitorData *monitor;
  struct RammingEnemy_States__Fields fields;
};
struct RammingEnemyState__Fields {
  struct GroundEnemyState__Fields _;
  struct RammingEnemy * RammingEnemy;
};
struct RammingEnemyState {
  struct RammingEnemyState__Class *klass;
  struct MonitorData *monitor;
  struct RammingEnemyState__Fields fields;
};
struct RammingIdleState__Fields {
  struct RammingEnemyState__Fields _;
};
struct RammingIdleState {
  struct RammingIdleState__Class *klass;
  struct MonitorData *monitor;
  struct RammingIdleState__Fields fields;
};
struct RammingAlertState__Fields {
  struct RammingEnemyState__Fields _;
};
struct RammingAlertState {
  struct RammingAlertState__Class *klass;
  struct MonitorData *monitor;
  struct RammingAlertState__Fields fields;
};
struct RammingRunningState__Fields {
  struct RammingEnemyState__Fields _;
};
struct RammingRunningState {
  struct RammingRunningState__Class *klass;
  struct MonitorData *monitor;
  struct RammingRunningState__Fields fields;
};
struct RammingBrakingState__Fields {
  struct RammingEnemyState__Fields _;
};
struct RammingBrakingState {
  struct RammingBrakingState__Class *klass;
  struct MonitorData *monitor;
  struct RammingBrakingState__Fields fields;
};
struct RammingHitWallState__Fields {
  struct RammingEnemyState__Fields _;
};
struct RammingHitWallState {
  struct RammingHitWallState__Class *klass;
  struct MonitorData *monitor;
  struct RammingHitWallState__Fields fields;
};
struct RammingStunnedState__Fields {
  struct RammingEnemyState__Fields _;
};
struct RammingStunnedState {
  struct RammingStunnedState__Class *klass;
  struct MonitorData *monitor;
  struct RammingStunnedState__Fields fields;
};
struct RammingKnockBackState__Fields {
  struct RammingEnemyState__Fields _;
};
struct RammingKnockBackState {
  struct RammingKnockBackState__Class *klass;
  struct MonitorData *monitor;
  struct RammingKnockBackState__Fields fields;
};
struct RammingRetreatState__Fields {
  struct RammingEnemyState__Fields _;
};
struct RammingRetreatState {
  struct RammingRetreatState__Class *klass;
  struct MonitorData *monitor;
  struct RammingRetreatState__Fields fields;
};
struct RammingEnemyAnimations__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RammingEnemyAnimations__StaticFields {
};
struct RammingEnemyAnimations__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RammingEnemyAnimations__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RammingEnemyAnimations__VTable vtable;
};
struct RammingEnemySettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RammingEnemySettings__StaticFields {
};
struct RammingEnemySettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RammingEnemySettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RammingEnemySettings__VTable vtable;
};
struct RammingEnemySounds__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RammingEnemySounds__StaticFields {
};
struct RammingEnemySounds__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RammingEnemySounds__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RammingEnemySounds__VTable vtable;
};
struct RammingAlertState__VTable {
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
struct RammingAlertState__StaticFields {
};
struct RammingAlertState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RammingAlertState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RammingAlertState__VTable vtable;
};
struct RammingEnemyState__VTable {
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
struct RammingEnemyState__StaticFields {
};
struct RammingEnemyState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RammingEnemyState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RammingEnemyState__VTable vtable;
};
struct RammingIdleState__VTable {
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
struct RammingIdleState__StaticFields {
};
struct RammingIdleState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RammingIdleState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RammingIdleState__VTable vtable;
};
struct RammingRunningState__VTable {
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
struct RammingRunningState__StaticFields {
};
struct RammingRunningState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RammingRunningState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RammingRunningState__VTable vtable;
};
struct RammingBrakingState__VTable {
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
struct RammingBrakingState__StaticFields {
};
struct RammingBrakingState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RammingBrakingState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RammingBrakingState__VTable vtable;
};
struct RammingHitWallState__VTable {
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
struct RammingHitWallState__StaticFields {
};
struct RammingHitWallState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RammingHitWallState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RammingHitWallState__VTable vtable;
};
struct RammingStunnedState__VTable {
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
struct RammingStunnedState__StaticFields {
};
struct RammingStunnedState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RammingStunnedState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RammingStunnedState__VTable vtable;
};
struct RammingKnockBackState__VTable {
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
struct RammingKnockBackState__StaticFields {
};
struct RammingKnockBackState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RammingKnockBackState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RammingKnockBackState__VTable vtable;
};
struct RammingRetreatState__VTable {
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
struct RammingRetreatState__StaticFields {
};
struct RammingRetreatState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RammingRetreatState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RammingRetreatState__VTable vtable;
};
struct RammingEnemy_States__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RammingEnemy_States__StaticFields {
};
struct RammingEnemy_States__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RammingEnemy_States__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RammingEnemy_States__VTable vtable;
};
struct RammingEnemy__VTable {
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
  VirtualInvokeData OnModifyDamage;
};
struct RammingEnemy__StaticFields {
};
struct RammingEnemy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RammingEnemy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RammingEnemy__VTable vtable;
};
struct ArmouredRammingEnemy__VTable {
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
  VirtualInvokeData OnModifyDamage;
};
struct ArmouredRammingEnemy__StaticFields {
};
struct ArmouredRammingEnemy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ArmouredRammingEnemy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ArmouredRammingEnemy__VTable vtable;
};

struct ArmouredRammingEnemy_c {
  struct ArmouredRammingEnemy_c__Class *klass;
  struct MonitorData *monitor;
};
struct ArmouredRammingEnemy_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ArmouredRammingEnemy_c__StaticFields {
  struct ArmouredRammingEnemy_c * __9;
  struct Action_1_LegacyEntity_ * __9__4_0;
};
struct ArmouredRammingEnemy_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ArmouredRammingEnemy_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ArmouredRammingEnemy_c__VTable vtable;
};

struct RammingEnemyPlaceholder__Fields {
  struct RespawningPlaceholder__Fields _;
  struct RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings * Settings;
  struct GameObject * RammingEnemy;
  struct Transform__Array * Zones;
};
struct RammingEnemyPlaceholder {
  struct RammingEnemyPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct RammingEnemyPlaceholder__Fields fields;
};
struct __declspec(align(8)) RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings__Fields {
  float Health;
  float DamageOnTouch;
  int32_t NumberOfExpOrbsToDrop;
  float AlertRange;
  bool CanDieToLevelUpBlast;
  struct DropLootSettings * LootSettings;
};
struct RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings {
  struct RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings__Class *klass;
  struct MonitorData *monitor;
  struct RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings__Fields fields;
};
struct RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings__StaticFields {
};
struct RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings__VTable vtable;
};
struct RammingEnemyPlaceholder__VTable {
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
struct RammingEnemyPlaceholder__StaticFields {
};
struct RammingEnemyPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RammingEnemyPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RammingEnemyPlaceholder__VTable vtable;
};

struct RammingThrownState__Fields {
  struct RammingEnemyState__Fields _;
};
struct RammingThrownState {
  struct RammingThrownState__Class *klass;
  struct MonitorData *monitor;
  struct RammingThrownState__Fields fields;
};
struct RammingThrownState__VTable {
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
struct RammingThrownState__StaticFields {
};
struct RammingThrownState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RammingThrownState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RammingThrownState__VTable vtable;
};

struct __declspec(align(8)) FloatingRockLaserEnemySettings__Fields {
  float ChargeDuration;
  float ShootingDuration;
  float ShootingForce;
  float LaserForce;
  float SpringForce;
  float Drag;
  struct GameObject * Projectile;
  float ProjectileSpeed;
  float LaserDuration;
  float LaserChaseSpeed;
  float LaserChaseSpeedDistance;
  float LaserLength;
  float LaserDamage;
  float CloseDistance;
  float LaserAngularOffset;
  float ProjectileDamage;
};
struct FloatingRockLaserEnemySettings {
  struct FloatingRockLaserEnemySettings__Class *klass;
  struct MonitorData *monitor;
  struct FloatingRockLaserEnemySettings__Fields fields;
};
struct FloatingRockLaserEnemySettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FloatingRockLaserEnemySettings__StaticFields {
};
struct FloatingRockLaserEnemySettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FloatingRockLaserEnemySettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FloatingRockLaserEnemySettings__VTable vtable;
};

struct __declspec(align(8)) FloatingRockLaserEnemyAnimations__Fields {
  struct TextureAnimationWithTransitions * Idle;
  struct TextureAnimationWithTransitions * Charging;
  struct TextureAnimationWithTransitions * Laser;
  struct TextureAnimationWithTransitions * Shooting;
};
struct FloatingRockLaserEnemyAnimations {
  struct FloatingRockLaserEnemyAnimations__Class *klass;
  struct MonitorData *monitor;
  struct FloatingRockLaserEnemyAnimations__Fields fields;
};
struct FloatingRockLaserEnemyAnimations__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FloatingRockLaserEnemyAnimations__StaticFields {
};
struct FloatingRockLaserEnemyAnimations__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FloatingRockLaserEnemyAnimations__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FloatingRockLaserEnemyAnimations__VTable vtable;
};

struct FloatingRockLaserEnemy__Fields {
  struct Enemy2D__Fields _;
  struct FloatingRockLaserEnemy_States * State;
  struct FloatingRockLaserEnemySettings * Settings;
  struct FloatingRockLaserEnemyAnimations * Animations;
  struct FloatingRockLaserEnemyAnimations * AnimationsB;
  struct FloatingRockLaserEnemyAnimations * AnimationsC;
  struct CharacterAnimationSystem * AnimationB;
  struct CharacterAnimationSystem * AnimationC;
  struct PrefabSpawner * ChargingEffect;
  struct PrefabSpawner * ShootingEffect;
  struct ProjectileSpawner * ProjectileSpawner;
  struct RigidbodyMovement * Movement;
  struct SoundSource * ChargingSound;
  struct SoundSource * ShootingSound;
  struct SoundSource * LaserSound;
  struct SoundSource * IdleSound;
  struct SoundSource * LaserHitSound;
  struct AnimationCurve * LaserThicknessCurve;
  struct AnimationCurve * LaserAngleOverTimeCurve;
  struct BlockableLaser * Laser;
  struct LayerMask LaserLayerMask;
  float m_laserSpeed;
  struct Vector3 m_laserDirection;
  float m_laserRotationSpeed;
  struct Vector3 m_laserStartPosition;
};
struct FloatingRockLaserEnemy {
  struct FloatingRockLaserEnemy__Class *klass;
  struct MonitorData *monitor;
  struct FloatingRockLaserEnemy__Fields fields;
};
struct __declspec(align(8)) FloatingRockLaserEnemy_States__Fields {
  struct State_2 * Idle;
  struct State_2 * Charge;
  struct State_2 * Laser;
  struct State_2 * Shooting;
};
struct FloatingRockLaserEnemy_States {
  struct FloatingRockLaserEnemy_States__Class *klass;
  struct MonitorData *monitor;
  struct FloatingRockLaserEnemy_States__Fields fields;
};
struct FloatingRockLaserEnemy_States__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FloatingRockLaserEnemy_States__StaticFields {
};
struct FloatingRockLaserEnemy_States__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FloatingRockLaserEnemy_States__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FloatingRockLaserEnemy_States__VTable vtable;
};
struct FloatingRockLaserEnemy__VTable {
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
  VirtualInvokeData OnModifyDamage;
};
struct FloatingRockLaserEnemy__StaticFields {
};
struct FloatingRockLaserEnemy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FloatingRockLaserEnemy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FloatingRockLaserEnemy__VTable vtable;
};

struct FloatingRockLaserEnemyPlaceholder__Fields {
  struct RespawningPlaceholder__Fields _;
  struct FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings * Settings;
  struct GameObject * FloatingRockLaserEnemy;
};
struct FloatingRockLaserEnemyPlaceholder {
  struct FloatingRockLaserEnemyPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct FloatingRockLaserEnemyPlaceholder__Fields fields;
};
struct __declspec(align(8)) FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings__Fields {
  float Health;
  float DamageOnTouch;
  float ProjectileDamage;
  int32_t NumberOfExpOrbsToDrop;
  struct DropLootSettings * LootSettings;
  float ChargeDuration;
  float ShootingDuration;
  float ShootingForce;
  float LaserForce;
  float SpringForce;
  float Drag;
  float ProjectileSpeed;
  float LaserDuration;
  float LaserChaseSpeed;
  float LaserChaseSpeedDistance;
  float LaserLength;
  float LaserDamage;
  float CloseDistance;
  float TriggerDistance;
  float LaserAngularOffset;
};
struct FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings {
  struct FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings__Class *klass;
  struct MonitorData *monitor;
  struct FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings__Fields fields;
};
struct FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings__StaticFields {
};
struct FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings__VTable vtable;
};
struct FloatingRockLaserEnemyPlaceholder__VTable {
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
struct FloatingRockLaserEnemyPlaceholder__StaticFields {
};
struct FloatingRockLaserEnemyPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FloatingRockLaserEnemyPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FloatingRockLaserEnemyPlaceholder__VTable vtable;
};

struct __declspec(align(8)) FloatingRockTurrentEnemySettings__Fields {
  float ChargeDuration;
  float ShootingDuration;
  float ShootingForce;
  float SpringForce;
  float Drag;
  float DisolveDistance;
  struct GameObject * Projectile;
  float ProjectileSpeed;
  float ProjectileDamage;
  struct GameObject * RespawnEffect;
};}