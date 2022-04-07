namespace app {
struct FloatingRockTurrentEnemySettings {
  struct FloatingRockTurrentEnemySettings__Class *klass;
  struct MonitorData *monitor;
  struct FloatingRockTurrentEnemySettings__Fields fields;
};
struct FloatingRockTurrentEnemySettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FloatingRockTurrentEnemySettings__StaticFields {
};
struct FloatingRockTurrentEnemySettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FloatingRockTurrentEnemySettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FloatingRockTurrentEnemySettings__VTable vtable;
};

struct __declspec(align(8)) FloatingRockTurretEnemyAnimations__Fields {
  struct TextureAnimationWithTransitions * Respawn;
  struct TextureAnimationWithTransitions * Idle;
  struct TextureAnimationWithTransitions * Charging;
  struct TextureAnimationWithTransitions * Shooting;
};
struct FloatingRockTurretEnemyAnimations {
  struct FloatingRockTurretEnemyAnimations__Class *klass;
  struct MonitorData *monitor;
  struct FloatingRockTurretEnemyAnimations__Fields fields;
};
struct FloatingRockTurretEnemyAnimations__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FloatingRockTurretEnemyAnimations__StaticFields {
};
struct FloatingRockTurretEnemyAnimations__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FloatingRockTurretEnemyAnimations__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FloatingRockTurretEnemyAnimations__VTable vtable;
};

struct FloatingRockTurretEnemy__Fields {
  struct Enemy2D__Fields _;
  struct FloatingRockTurretEnemy_States * State;
  struct FloatingRockTurrentEnemySettings * Settings;
  struct FloatingRockTurretEnemyAnimations * Animations;
  struct FloatingRockTurretEnemyAnimations * AnimationsB;
  struct FloatingRockTurretEnemyAnimations * AnimationsC;
  struct CharacterAnimationSystem * AnimationB;
  struct CharacterAnimationSystem * AnimationC;
  struct PrefabSpawner * ChargingEffect;
  struct PrefabSpawner * ShootingEffect;
  struct SoundProvider * FormingSound;
  struct SoundProvider * ShootingSound;
  struct SoundProvider * DeformingSound;
  struct ProjectileSpawner * ProjectileSpawner;
  struct RigidbodyMovement * Movement;
  struct SpriteRotationController * SpriteRotation;
  struct FloatingRockTurretEnemyEffects * Effects;
  struct BaseAnimator * RespawnAnimator;
  bool m_timedRespawn;
};
struct FloatingRockTurretEnemy {
  struct FloatingRockTurretEnemy__Class *klass;
  struct MonitorData *monitor;
  struct FloatingRockTurretEnemy__Fields fields;
};
struct __declspec(align(8)) FloatingRockTurretEnemy_States__Fields {
  struct State_2 * Respawn;
  struct State_2 * Idle;
  struct State_2 * Charge;
  struct State_2 * Laser;
  struct State_2 * Shooting;
};
struct FloatingRockTurretEnemy_States {
  struct FloatingRockTurretEnemy_States__Class *klass;
  struct MonitorData *monitor;
  struct FloatingRockTurretEnemy_States__Fields fields;
};
struct FloatingRockTurretEnemyEffects__Fields {
  struct MonoBehaviour__Fields _;
  struct ParticleSystem * ChargingEmitter;
  struct BaseAnimator * ChargingAnimator;
};
struct FloatingRockTurretEnemyEffects {
  struct FloatingRockTurretEnemyEffects__Class *klass;
  struct MonitorData *monitor;
  struct FloatingRockTurretEnemyEffects__Fields fields;
};
struct FloatingRockTurretEnemy_States__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FloatingRockTurretEnemy_States__StaticFields {
};
struct FloatingRockTurretEnemy_States__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FloatingRockTurretEnemy_States__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FloatingRockTurretEnemy_States__VTable vtable;
};
struct FloatingRockTurretEnemyEffects__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FloatingRockTurretEnemyEffects__StaticFields {
};
struct FloatingRockTurretEnemyEffects__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FloatingRockTurretEnemyEffects__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FloatingRockTurretEnemyEffects__VTable vtable;
};
struct FloatingRockTurretEnemy__VTable {
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
struct FloatingRockTurretEnemy__StaticFields {
};
struct FloatingRockTurretEnemy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FloatingRockTurretEnemy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FloatingRockTurretEnemy__VTable vtable;
};

struct FloatingRockTurretEnemyPlaceholder__Fields {
  struct RespawningPlaceholder__Fields _;
  struct FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings * Settings;
  struct GameObject * FloatingRockTurretEnemy;
};
struct FloatingRockTurretEnemyPlaceholder {
  struct FloatingRockTurretEnemyPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct FloatingRockTurretEnemyPlaceholder__Fields fields;
};
struct __declspec(align(8)) FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__Fields {
  float Health;
  float DamageOnTouch;
  float ProjectileDamage;
  int32_t NumberOfExpOrbsToDrop;
  struct DropLootSettings * LootSettings;
  float ChargeDuration;
  float ShootingDuration;
  float ShootingForce;
  float SpringForce;
  float Drag;
  float DisolveDistance;
  float TriggerDistance;
  float ProjectileSpeed;
};
struct FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings {
  struct FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__Class *klass;
  struct MonitorData *monitor;
  struct FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__Fields fields;
};
struct FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__StaticFields {
};
struct FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__VTable vtable;
};
struct FloatingRockTurretEnemyPlaceholder__VTable {
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
struct FloatingRockTurretEnemyPlaceholder__StaticFields {
};
struct FloatingRockTurretEnemyPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FloatingRockTurretEnemyPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FloatingRockTurretEnemyPlaceholder__VTable vtable;
};

struct JumpShootShark__Fields {
  struct Enemy2D__Fields _;
  struct JumpShootSharkAnimations * Animations;
  struct JumpShootSharkSettings * Settings;
  struct Transform * ProjectileSpawner;
  struct PrefabSpawner * EmergePrefab;
  struct PrefabSpawner * SubmergePrefab;
  struct Vector3 EmergePosition;
  struct GameObject * Projectile;
  float ProjectileSpeed;
  struct JumpShootShark_States * State;
  struct SoundSource * EmergeAnticipation;
  struct SoundSource * Emerge;
  struct SoundSource * Shoot;
  struct SoundSource * Submerge;
  struct GameObject * HideGroup;
  bool m_hasFired;
  struct AnimationCurve * JumpCurve;
};
struct JumpShootShark {
  struct JumpShootShark__Class *klass;
  struct MonitorData *monitor;
  struct JumpShootShark__Fields fields;
};
struct __declspec(align(8)) List_1_JumpShootShark___Fields {
  struct JumpShootShark__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_JumpShootShark_ {
  struct List_1_JumpShootShark___Class *klass;
  struct MonitorData *monitor;
  struct List_1_JumpShootShark___Fields fields;
};
struct JumpShootShark__Array {
  struct JumpShootShark__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct JumpShootShark * vector[32];
};
struct IEnumerator_1_JumpShootShark_ {
  struct IEnumerator_1_JumpShootShark___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) JumpShootSharkAnimations__Fields {
  struct TextureAnimationWithTransitions * Jumping;
};
struct JumpShootSharkAnimations {
  struct JumpShootSharkAnimations__Class *klass;
  struct MonitorData *monitor;
  struct JumpShootSharkAnimations__Fields fields;
};
struct __declspec(align(8)) JumpShootSharkSettings__Fields {
  float MaxFallSpeed;
  struct GameObject * Projectile;
  float ProjectileSpeed;
  float EmergingDuration;
  float SubmergeDuration;
  float JumpDuration;
  float JumpHeight;
  float ShootDelay;
};
struct JumpShootSharkSettings {
  struct JumpShootSharkSettings__Class *klass;
  struct MonitorData *monitor;
  struct JumpShootSharkSettings__Fields fields;
};
struct __declspec(align(8)) JumpShootShark_States__Fields {
  struct State_2 * Hidden;
  struct State_2 * Emerging;
  struct State_2 * Jumping;
  struct State_2 * Submerge;
};
struct JumpShootShark_States {
  struct JumpShootShark_States__Class *klass;
  struct MonitorData *monitor;
  struct JumpShootShark_States__Fields fields;
};
struct IEnumerator_1_JumpShootShark___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_JumpShootShark___StaticFields {
};
struct IEnumerator_1_JumpShootShark___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_JumpShootShark___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_JumpShootShark___VTable vtable;
};
struct List_1_JumpShootShark___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData RemoveAt_1;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData get_Count_2;
};
struct List_1_JumpShootShark___StaticFields {
  struct JumpShootShark__Array * _emptyArray;
};
struct List_1_JumpShootShark___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_JumpShootShark___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_JumpShootShark___VTable vtable;
};
struct JumpShootSharkAnimations__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct JumpShootSharkAnimations__StaticFields {
};
struct JumpShootSharkAnimations__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JumpShootSharkAnimations__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JumpShootSharkAnimations__VTable vtable;
};
struct JumpShootSharkSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct JumpShootSharkSettings__StaticFields {
};
struct JumpShootSharkSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JumpShootSharkSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JumpShootSharkSettings__VTable vtable;
};
struct JumpShootShark_States__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct JumpShootShark_States__StaticFields {
};
struct JumpShootShark_States__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JumpShootShark_States__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JumpShootShark_States__VTable vtable;
};
struct JumpShootShark__VTable {
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
struct JumpShootShark__StaticFields {
  struct List_1_JumpShootShark_ * All;
};
struct JumpShootShark__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JumpShootShark__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JumpShootShark__VTable vtable;
};

enum JumpShootSharkAction_ActionType__Enum : int32_t {
  JumpShootSharkAction_ActionType__Enum_Emerge = 0,
};
struct JumpShootSharkAction_ActionType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum JumpShootSharkAction_ActionType__Enum value;
};
struct JumpShootSharkAction__Fields {
  struct ActionMethod__Fields _;
  struct JumpShootSharkPlaceholder * JumpShootShark;
  enum JumpShootSharkAction_ActionType__Enum Action;
  struct Transform * Position;
};
struct JumpShootSharkAction {
  struct JumpShootSharkAction__Class *klass;
  struct MonitorData *monitor;
  struct JumpShootSharkAction__Fields fields;
};
struct JumpShootSharkPlaceholder__Fields {
  struct RespawningPlaceholder__Fields _;
  struct JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings * Settings;
  struct GameObject * Prefab;
};
struct JumpShootSharkPlaceholder {
  struct JumpShootSharkPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct JumpShootSharkPlaceholder__Fields fields;
};
struct __declspec(align(8)) JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings__Fields {
  float Health;
  float DamageOnTouch;
  int32_t NumberOfExpOrbsToDrop;
  struct DropLootSettings * LootSettings;
  float JumpHeight;
};
struct JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings {
  struct JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings__Class *klass;
  struct MonitorData *monitor;
  struct JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings__Fields fields;
};
struct JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings__StaticFields {
};
struct JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings__VTable vtable;
};
struct JumpShootSharkPlaceholder__VTable {
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
struct JumpShootSharkPlaceholder__StaticFields {
};
struct JumpShootSharkPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JumpShootSharkPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JumpShootSharkPlaceholder__VTable vtable;
};
struct JumpShootSharkAction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData Perform;
  VirtualInvokeData GetNiceName;
  VirtualInvokeData Perform_1;
};
struct JumpShootSharkAction__StaticFields {
};
struct JumpShootSharkAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JumpShootSharkAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JumpShootSharkAction__VTable vtable;
};

struct JumpShootSharkZone__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_JumpShootSharkPlaceholder_ * JumpShootSharkPlaceholders;
};
struct JumpShootSharkZone {
  struct JumpShootSharkZone__Class *klass;
  struct MonitorData *monitor;
  struct JumpShootSharkZone__Fields fields;
};
struct __declspec(align(8)) List_1_JumpShootSharkPlaceholder___Fields {
  struct JumpShootSharkPlaceholder__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_JumpShootSharkPlaceholder_ {
  struct List_1_JumpShootSharkPlaceholder___Class *klass;
  struct MonitorData *monitor;
  struct List_1_JumpShootSharkPlaceholder___Fields fields;
};
struct JumpShootSharkPlaceholder__Array {
  struct JumpShootSharkPlaceholder__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct JumpShootSharkPlaceholder * vector[32];
};
struct IEnumerator_1_JumpShootSharkPlaceholder_ {
  struct IEnumerator_1_JumpShootSharkPlaceholder___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_JumpShootSharkPlaceholder___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_JumpShootSharkPlaceholder___StaticFields {
};
struct IEnumerator_1_JumpShootSharkPlaceholder___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_JumpShootSharkPlaceholder___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_JumpShootSharkPlaceholder___VTable vtable;
};
struct List_1_JumpShootSharkPlaceholder___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData RemoveAt_1;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData get_Count_2;
};
struct List_1_JumpShootSharkPlaceholder___StaticFields {
  struct JumpShootSharkPlaceholder__Array * _emptyArray;
};
struct List_1_JumpShootSharkPlaceholder___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_JumpShootSharkPlaceholder___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_JumpShootSharkPlaceholder___VTable vtable;
};
struct JumpShootSharkZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct JumpShootSharkZone__StaticFields {
};
struct JumpShootSharkZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JumpShootSharkZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JumpShootSharkZone__VTable vtable;
};

struct __declspec(align(8)) SlugState__Fields {
  struct SlugEnemy * Slug;
};
struct SlugState {
  struct SlugState__Class *klass;
  struct MonitorData *monitor;
  struct SlugState__Fields fields;
};
struct AcidSlugState__Fields {
  struct SlugState__Fields _;
  struct AcidSlugEnemy * AcidSlugEnemy;
};
struct AcidSlugState {
  struct AcidSlugState__Class *klass;
  struct MonitorData *monitor;
  struct AcidSlugState__Fields fields;
};
struct AcidSlugCrawlingState__Fields {
  struct AcidSlugState__Fields _;
  float m_acidDripRemainingTime;
  float m_acidTrailMarkRemainingTime;
  struct SoundSource * Sound;
  struct SoundSource * moveSound;
};
struct AcidSlugCrawlingState {
  struct AcidSlugCrawlingState__Class *klass;
  struct MonitorData *monitor;
  struct AcidSlugCrawlingState__Fields fields;
};
struct SlugEnemy__Fields {
  struct Enemy2D__Fields _;
  struct TraceGroundMovement * Movement;
  struct AnimationCurve * AnimationFromBend;
};
struct SlugEnemy {
  struct SlugEnemy__Class *klass;
  struct MonitorData *monitor;
  struct SlugEnemy__Fields fields;
};
struct AcidSlugEnemy__Fields {
  struct SlugEnemy__Fields _;
  struct SoundSource * CrawlingSoundSource;
  struct SoundSource * ChargingSoundSource;
  struct SoundSource * ShootingSoundSource;
  struct SoundSource * MovingSoundSource;
  struct AcidSlugEnemyAnimations * Animations;
  struct AcidSlugEnemySettings * Settings;
  struct AcidSlugEnemy_States * State;
};
struct AcidSlugEnemy {
  struct AcidSlugEnemy__Class *klass;
  struct MonitorData *monitor;
  struct AcidSlugEnemy__Fields fields;
};
struct __declspec(align(8)) AcidSlugEnemyAnimations__Fields {
  struct TextureAnimationWithTransitions * Crawling;
  struct TextureAnimationWithTransitions * Charging;
  struct TextureAnimationWithTransitions * Shooting;
};
struct AcidSlugEnemyAnimations {
  struct AcidSlugEnemyAnimations__Class *klass;
  struct MonitorData *monitor;
  struct AcidSlugEnemyAnimations__Fields fields;
};
struct __declspec(align(8)) AcidSlugEnemySettings__Fields {
  float WalkSpeed;
  struct AnimationCurve * WalkSpeedMultiplier;
  float AcidDripRate;
  struct GameObject * AcidDrip;
  struct SoundProvider * AcidDripSoundProvider;
  struct GameObject * AcidDripOnDamage;
  float AcidProjectileSpeed;
  float AcidDamage;
  struct GameObject * ShootEffect;
};
struct AcidSlugEnemySettings {
  struct AcidSlugEnemySettings__Class *klass;
  struct MonitorData *monitor;
  struct AcidSlugEnemySettings__Fields fields;
};
struct __declspec(align(8)) AcidSlugEnemy_States__Fields {
  struct AcidSlugCrawlingState * Crawl;
  struct AcidSlugChargingState * Charging;
  struct AcidSlugShootingState * Shooting;
};
struct AcidSlugEnemy_States {
  struct AcidSlugEnemy_States__Class *klass;
  struct MonitorData *monitor;
  struct AcidSlugEnemy_States__Fields fields;
};
struct AcidSlugChargingState__Fields {
  struct AcidSlugState__Fields _;
};
struct AcidSlugChargingState {
  struct AcidSlugChargingState__Class *klass;
  struct MonitorData *monitor;
  struct AcidSlugChargingState__Fields fields;
};
struct AcidSlugShootingState__Fields {
  struct AcidSlugState__Fields _;
};
struct AcidSlugShootingState {
  struct AcidSlugShootingState__Class *klass;
  struct MonitorData *monitor;
  struct AcidSlugShootingState__Fields fields;
};
struct SlugEnemy__VTable {
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
struct SlugEnemy__StaticFields {
};
struct SlugEnemy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SlugEnemy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SlugEnemy__VTable vtable;
};
struct SlugState__VTable {
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
struct SlugState__StaticFields {
};
struct SlugState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SlugState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SlugState__VTable vtable;
};
struct AcidSlugEnemyAnimations__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AcidSlugEnemyAnimations__StaticFields {
};
struct AcidSlugEnemyAnimations__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AcidSlugEnemyAnimations__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AcidSlugEnemyAnimations__VTable vtable;
};
struct AcidSlugEnemySettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AcidSlugEnemySettings__StaticFields {
};
struct AcidSlugEnemySettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AcidSlugEnemySettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AcidSlugEnemySettings__VTable vtable;
};
struct AcidSlugChargingState__VTable {
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
struct AcidSlugChargingState__StaticFields {
};
struct AcidSlugChargingState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AcidSlugChargingState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AcidSlugChargingState__VTable vtable;
};
struct AcidSlugShootingState__VTable {
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
struct AcidSlugShootingState__StaticFields {
};
struct AcidSlugShootingState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AcidSlugShootingState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AcidSlugShootingState__VTable vtable;
};
struct AcidSlugEnemy_States__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AcidSlugEnemy_States__StaticFields {
};
struct AcidSlugEnemy_States__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AcidSlugEnemy_States__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AcidSlugEnemy_States__VTable vtable;
};
struct AcidSlugEnemy__VTable {
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