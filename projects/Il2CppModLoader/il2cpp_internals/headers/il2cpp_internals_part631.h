namespace app {
struct ProjectileExplodeWall__StaticFields {
};
struct ProjectileExplodeWall__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ProjectileExplodeWall__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ProjectileExplodeWall__VTable vtable;
};

struct Respawner__Fields {
  struct MonoBehaviour__Fields _;
  struct SerializedFloatUberState * TimerUberState;
  struct GameObject * RespawnTarget;
  bool RespawnOnTimeout;
  bool RespawnOnScreen;
  float RespawnTime;
  float MinDistanceFromPlayer;
  struct MoonTimeline * RespawnTimeline;
  struct MoonTimeline * DestroyedTimeline;
  float m_timer;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  struct IUberState__Array * _AffectingUberStates_k__BackingField;
  struct List_1_UnityEngine_GameObject_ * _AllTargets_k__BackingField;
  bool _InvalidateParentTimelineCache_k__BackingField;
};
struct Respawner {
  struct Respawner__Class *klass;
  struct MonitorData *monitor;
  struct Respawner__Fields fields;
};
struct Respawner__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Apply;
  VirtualInvokeData get_ApplyOnEditor;
  VirtualInvokeData get_AffectingUberStates;
  VirtualInvokeData get_AllTargets;
  VirtualInvokeData get_InvalidateParentTimelineCache;
  VirtualInvokeData set_InvalidateParentTimelineCache;
};
struct Respawner__StaticFields {
};
struct Respawner__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Respawner__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Respawner__VTable vtable;
};

struct RespawningPlaceholderSpawnAction__Fields {
  struct ActionMethod__Fields _;
  struct RespawningPlaceholder * Placeholder;
};
struct RespawningPlaceholderSpawnAction {
  struct RespawningPlaceholderSpawnAction__Class *klass;
  struct MonitorData *monitor;
  struct RespawningPlaceholderSpawnAction__Fields fields;
};
struct RespawningPlaceholderSpawnAction__VTable {
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
struct RespawningPlaceholderSpawnAction__StaticFields {
};
struct RespawningPlaceholderSpawnAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RespawningPlaceholderSpawnAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RespawningPlaceholderSpawnAction__VTable vtable;
};

struct SpawnPrefabAction__Fields {
  struct ActionMethod__Fields _;
  struct PrefabSpawner * PrefabSource;
};
struct SpawnPrefabAction {
  struct SpawnPrefabAction__Class *klass;
  struct MonitorData *monitor;
  struct SpawnPrefabAction__Fields fields;
};
struct SpawnPrefabAction__VTable {
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
struct SpawnPrefabAction__StaticFields {
};
struct SpawnPrefabAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpawnPrefabAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpawnPrefabAction__VTable vtable;
};

struct TextureBasedOnHealth__Fields {
  struct MonoBehaviour__Fields _;
  struct LegacyEntity * Entity;
  struct Texture__Array * Textures;
  struct AnimationCurve * HealthToIndex;
  struct Renderer * m_renderer;
};
struct TextureBasedOnHealth {
  struct TextureBasedOnHealth__Class *klass;
  struct MonitorData *monitor;
  struct TextureBasedOnHealth__Fields fields;
};
struct TextureBasedOnHealth__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TextureBasedOnHealth__StaticFields {
};
struct TextureBasedOnHealth__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TextureBasedOnHealth__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TextureBasedOnHealth__VTable vtable;
};

enum DeadEnemyRagdoll_State__Enum : int32_t {
  DeadEnemyRagdoll_State__Enum_Plummit = 0,
  DeadEnemyRagdoll_State__Enum_PlummitLand = 1,
  DeadEnemyRagdoll_State__Enum_Bounce = 2,
  DeadEnemyRagdoll_State__Enum_Drown = 3,
};
struct DeadEnemyRagdoll_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DeadEnemyRagdoll_State__Enum value;
};
struct DeadEnemyRagdoll__Fields {
  struct MonoBehaviour__Fields _;
  struct CharacterAnimationSystem * Animation;
  struct DeadEnemyRagdoll_RagdollAnimations * Animations;
  struct BaseAnimator * FadeOutAnimator;
  struct SoundProvider * HitGroundSoundProvider;
  struct DeadEnemyRagdoll_EnemyPlumetSettings * PlumetSettings;
  struct GameObject * LandOnGroundImpactEffect;
  struct Transform * Sprite;
  struct CharacterSpriteMirror * SpriteMirror;
  bool ExplodeOnGround;
  bool ExplodeUnlessBashed;
  struct GameObject * ExplodeEffect;
  struct Vector3 m_startVelocity;
  struct Vector3 m_gravityVelocity;
  struct Rigidbody * m_rigidbody;
  float m_currentStateTime;
  enum DeadEnemyRagdoll_State__Enum m_currentState;
  struct Vector3 m_thrownDirection;
  struct Vector3 m_actualVelocity;
  struct SphereCollider * m_sphereCollider;
  float StartSpeed;
  float DamageForceSpeed;
  bool UseRange;
  float DamageForceSpeedMinX;
  float DamageForceSpeedMaxX;
  float DamageForceSpeedMinY;
  float DamageForceSpeedMaxY;
  float DirectionRandomness;
  float BounceMin;
  float BounceMax;
  float BounceX;
  float BounceSpeedThreshold;
  float RayDistance;
  struct LayerMask RayMask;
  bool m_drownAnimationPlaying;
  float m_lifeTime;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  float NoiseScale;
  float NoiseVarScale;
  float BounceGravity;
};
struct DeadEnemyRagdoll {
  struct DeadEnemyRagdoll__Class *klass;
  struct MonitorData *monitor;
  struct DeadEnemyRagdoll__Fields fields;
};
struct __declspec(align(8)) DeadEnemyRagdoll_RagdollAnimations__Fields {
  struct TextureAnimationWithTransitions * DeathPlummet;
  struct TextureAnimationWithTransitions * DeathPlummetLoop;
  struct TextureAnimationWithTransitions * DeathPlummetFlatLand;
  struct TextureAnimationWithTransitions * DeathPlummetEdgeLand;
  struct TextureAnimationWithTransitions * Drown;
};
struct DeadEnemyRagdoll_RagdollAnimations {
  struct DeadEnemyRagdoll_RagdollAnimations__Class *klass;
  struct MonitorData *monitor;
  struct DeadEnemyRagdoll_RagdollAnimations__Fields fields;
};
struct __declspec(align(8)) DeadEnemyRagdoll_EnemyPlumetSettings__Fields {
  struct AnimationCurve * RotationCurve;
  struct AnimationCurve * SpeedCurve;
  struct AnimationCurve * GravityCurve;
  float Gravity;
  struct AnimationCurve * WaterFrictionCurve;
  float DrownDelay;
};
struct DeadEnemyRagdoll_EnemyPlumetSettings {
  struct DeadEnemyRagdoll_EnemyPlumetSettings__Class *klass;
  struct MonitorData *monitor;
  struct DeadEnemyRagdoll_EnemyPlumetSettings__Fields fields;
};
struct DeadEnemyRagdoll_RagdollAnimations__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DeadEnemyRagdoll_RagdollAnimations__StaticFields {
};
struct DeadEnemyRagdoll_RagdollAnimations__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DeadEnemyRagdoll_RagdollAnimations__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DeadEnemyRagdoll_RagdollAnimations__VTable vtable;
};
struct DeadEnemyRagdoll_EnemyPlumetSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DeadEnemyRagdoll_EnemyPlumetSettings__StaticFields {
};
struct DeadEnemyRagdoll_EnemyPlumetSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DeadEnemyRagdoll_EnemyPlumetSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DeadEnemyRagdoll_EnemyPlumetSettings__VTable vtable;
};
struct DeadEnemyRagdoll__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData IDamageReciever_get_gameObject;
  VirtualInvokeData IDamageReciever_get_transform;
  VirtualInvokeData OnRecieveDamage;
  VirtualInvokeData OnReceiveContext;
};
struct DeadEnemyRagdoll__StaticFields {
};
struct DeadEnemyRagdoll__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DeadEnemyRagdoll__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DeadEnemyRagdoll__VTable vtable;
};

enum DeadJumpingSootEnemy_State__Enum : int32_t {
  DeadJumpingSootEnemy_State__Enum_Plummit = 0,
  DeadJumpingSootEnemy_State__Enum_PlummitLand = 1,
};
struct DeadJumpingSootEnemy_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DeadJumpingSootEnemy_State__Enum value;
};
struct DeadJumpingSootEnemy__Fields {
  struct MonoBehaviour__Fields _;
  struct CharacterAnimationSystem * Animation;
  struct DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations * Animations;
  enum DeadJumpingSootEnemy_State__Enum CurrentState;
  struct LegacyAnimator * FadeOutAnimator;
  float Gravity;
  struct SoundProvider * HitGroundSoundProvider;
  float KnockedBackDuration;
  struct AnimationCurve * KnockedBackGravityCurve;
  struct AnimationCurve * KnockedBackRotationCurve;
  struct AnimationCurve * KnockedBackSpeedCurve;
  struct GameObject * LandOnGroundImpactEffect;
  struct Transform * Sprite;
  struct CharacterSpriteMirror * SpriteMirror;
  struct Vector3 Velocity;
  struct Vector3 m_gravityVelocity;
  struct Rigidbody * m_rigidbody;
  float m_stateCurrentTime;
  struct Transform * m_transform;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  struct Vector3 m_thrownDirection;
};
struct DeadJumpingSootEnemy {
  struct DeadJumpingSootEnemy__Class *klass;
  struct MonitorData *monitor;
  struct DeadJumpingSootEnemy__Fields fields;
};
struct __declspec(align(8)) DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations__Fields {
  struct TextureAnimationWithTransitions * DeathPlummet;
  struct TextureAnimationWithTransitions * DeathPlummetLand;
};
struct DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations {
  struct DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations__Class *klass;
  struct MonitorData *monitor;
  struct DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations__Fields fields;
};
struct DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations__StaticFields {
};
struct DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations__VTable vtable;
};
struct DeadJumpingSootEnemy__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData IDamageReciever_get_gameObject;
  VirtualInvokeData IDamageReciever_get_transform;
  VirtualInvokeData OnRecieveDamage;
  VirtualInvokeData OnReceiveContext;
};
struct DeadJumpingSootEnemy__StaticFields {
};
struct DeadJumpingSootEnemy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DeadJumpingSootEnemy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DeadJumpingSootEnemy__VTable vtable;
};

struct JumperEnemyPlaceholder__Fields {
  struct RespawningPlaceholder__Fields _;
  struct JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings * Settings;
  struct GameObject * JumpingSootEnemy;
  struct Transform * JumpingZone;
};
struct JumperEnemyPlaceholder {
  struct JumperEnemyPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct JumperEnemyPlaceholder__Fields fields;
};
struct __declspec(align(8)) JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__Fields {
  float Health;
  float DamageOnTouch;
  int32_t NumberOfExpOrbsToDrop;
  struct DropLootSettings * LootSettings;
  float ChargeRange;
  float JumpHeight;
  float ShortJumpHeight;
  float JumpDistance;
  float Gravity;
  float ChargingDuration;
  float ExplosionDamage;
  int32_t GroundStompDamage;
  bool HasStompExplosion;
};
struct JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings {
  struct JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__Class *klass;
  struct MonitorData *monitor;
  struct JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__Fields fields;
};
struct JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__StaticFields {
};
struct JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__VTable vtable;
};
struct JumperEnemyPlaceholder__VTable {
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
struct JumperEnemyPlaceholder__StaticFields {
};
struct JumperEnemyPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JumperEnemyPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JumperEnemyPlaceholder__VTable vtable;
};

struct __declspec(align(8)) JumpingSootEnemyAnimations__Fields {
  struct TextureAnimationWithTransitions * Respawn;
  struct TextureAnimationWithTransitions * Idle;
  struct TextureAnimationWithTransitions * JumpCharge;
  struct TextureAnimationWithTransitions * Jump;
  struct TextureAnimationWithTransitions * ShortJump;
  struct TextureAnimationWithTransitions * JumpFlip;
  struct TextureAnimationWithTransitions * Fall;
  struct TextureAnimationWithTransitions * Confused;
  struct TextureAnimationWithTransitions * Thrown;
  struct TextureAnimationWithTransitions * Stomped;
};
struct JumpingSootEnemyAnimations {
  struct JumpingSootEnemyAnimations__Class *klass;
  struct MonitorData *monitor;
  struct JumpingSootEnemyAnimations__Fields fields;
};
struct JumpingSootEnemyAnimations__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct JumpingSootEnemyAnimations__StaticFields {
};
struct JumpingSootEnemyAnimations__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JumpingSootEnemyAnimations__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JumpingSootEnemyAnimations__VTable vtable;
};

struct EnemyZone__Fields {
  struct MonoBehaviour__Fields _;
  struct Rect m_bounds;
  struct Rect__Array * m_childBounds;
};
struct EnemyZone {
  struct EnemyZone__Class *klass;
  struct MonitorData *monitor;
  struct EnemyZone__Fields fields;
};
struct __declspec(align(8)) List_1_EnemyZone___Fields {
  struct EnemyZone__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_EnemyZone_ {
  struct List_1_EnemyZone___Class *klass;
  struct MonitorData *monitor;
  struct List_1_EnemyZone___Fields fields;
};
struct EnemyZone__Array {
  struct EnemyZone__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct EnemyZone * vector[32];
};
struct IEnumerator_1_EnemyZone_ {
  struct IEnumerator_1_EnemyZone___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_EnemyZone___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_EnemyZone___StaticFields {
};
struct IEnumerator_1_EnemyZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_EnemyZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_EnemyZone___VTable vtable;
};
struct List_1_EnemyZone___VTable {
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
struct List_1_EnemyZone___StaticFields {
  struct EnemyZone__Array * _emptyArray;
};
struct List_1_EnemyZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_EnemyZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_EnemyZone___VTable vtable;
};
struct EnemyZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Category;
};
struct EnemyZone__StaticFields {
  struct List_1_EnemyZone_ * All;
};
struct EnemyZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EnemyZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EnemyZone__VTable vtable;
};

struct KamikazeSootEnemy__Fields {
  struct GroundEnemy__Fields _;
  struct KamikazeSootEnemyAnimations * Animations;
  struct KamikazeSootEnemySettings * Settings;
  struct KamikazeSootEnemy_States * State;
  struct RollingMovement * RollingMovement;
  struct SoundSource * IdleSound;
  struct SoundSource * AlertSound;
  struct SoundSource * RollingSound;
  struct SoundSource * StartRollingSound;
  struct SoundSource * HitGroundSound;
  struct GameObject * KamikazeExplosion;
  bool m_timedRespawn;
  bool m_isSelfDestructing;
};
struct KamikazeSootEnemy {
  struct KamikazeSootEnemy__Class *klass;
  struct MonitorData *monitor;
  struct KamikazeSootEnemy__Fields fields;
};
struct __declspec(align(8)) KamikazeSootEnemyAnimations__Fields {
  struct TextureAnimationWithTransitions * Respawn;
  struct TextureAnimationWithTransitions * Idle;
  struct TextureAnimationWithTransitions * Rolling;
  struct TextureAnimationWithTransitions * Drop;
  struct TextureAnimationWithTransitions * Run;
  struct TextureAnimationWithTransitions * Alert;
};
struct KamikazeSootEnemyAnimations {
  struct KamikazeSootEnemyAnimations__Class *klass;
  struct MonitorData *monitor;
  struct KamikazeSootEnemyAnimations__Fields fields;
};
struct __declspec(align(8)) KamikazeSootEnemySettings__Fields {
  float InRange;
  float OutRange;
  float RollAcceleration;
  float RollDecceleration;
  float MaxRollSpeed;
  float RunAcceleration;
  float MaxRunSpeed;
  float WalkAcceleration;
  float MaxWalkSpeed;
  float Decceleration;
  float Gravity;
  float MaxFallSpeed;
  float AlertDuration;
  float RunDuration;
  float AirDeceleration;
  int32_t ExplosionDamage;
  struct GameObject * RespawnEffect;
};
struct KamikazeSootEnemySettings {
  struct KamikazeSootEnemySettings__Class *klass;
  struct MonitorData *monitor;
  struct KamikazeSootEnemySettings__Fields fields;
};
struct __declspec(align(8)) KamikazeSootEnemy_States__Fields {
  struct State_2 * Respawn;
  struct KamikazeSootEnemyDropState * Drop;
  struct KamikazeSootEnemyIdleState * Idle;
  struct KamikazeSootEnemyAlertState * Alert;
  struct KamikazeSootEnemyRollingState * Rolling;
};
struct KamikazeSootEnemy_States {
  struct KamikazeSootEnemy_States__Class *klass;
  struct MonitorData *monitor;
  struct KamikazeSootEnemy_States__Fields fields;
};
struct KamikazeSootEnemyState__Fields {
  struct GroundEnemyState__Fields _;
  struct KamikazeSootEnemy * KamikazeSootEnemy;
};
struct KamikazeSootEnemyState {
  struct KamikazeSootEnemyState__Class *klass;
  struct MonitorData *monitor;
  struct KamikazeSootEnemyState__Fields fields;
};
struct KamikazeSootEnemyDropState__Fields {
  struct KamikazeSootEnemyState__Fields _;
};
struct KamikazeSootEnemyDropState {
  struct KamikazeSootEnemyDropState__Class *klass;
  struct MonitorData *monitor;
  struct KamikazeSootEnemyDropState__Fields fields;
};
struct KamikazeSootEnemyAlertState__Fields {
  struct KamikazeSootEnemyState__Fields _;
};
struct KamikazeSootEnemyAlertState {
  struct KamikazeSootEnemyAlertState__Class *klass;
  struct MonitorData *monitor;
  struct KamikazeSootEnemyAlertState__Fields fields;
};
struct KamikazeSootEnemyIdleState__Fields {
  struct KamikazeSootEnemyState__Fields _;
};
struct KamikazeSootEnemyIdleState {
  struct KamikazeSootEnemyIdleState__Class *klass;
  struct MonitorData *monitor;
  struct KamikazeSootEnemyIdleState__Fields fields;
};
struct KamikazeSootEnemyRollingState__Fields {
  struct KamikazeSootEnemyState__Fields _;
  float m_timeOffGround;
};
struct KamikazeSootEnemyRollingState {
  struct KamikazeSootEnemyRollingState__Class *klass;
  struct MonitorData *monitor;
  struct KamikazeSootEnemyRollingState__Fields fields;
};
struct RollingMovement__Fields {
  struct SaveSerialize__Fields _;
  struct Rigidbody * m_rigidbody;
  struct Vector3 Speed;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  struct Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider_ * OnCollisionGroundEvent;
  struct Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider_ * OnCollisionWallLeftEvent;
  struct Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider_ * OnCollisionWallRightEvent;
  struct Vector3 m_groundNormal;
  struct Vector3 GroundNormal;
  bool IsOnGround;
  struct IsOnCollisionState * WallLeft;
  struct IsOnCollisionState * WallRight;
  struct IsOnCollisionState * Ground;
};
struct RollingMovement {
  struct RollingMovement__Class *klass;
  struct MonitorData *monitor;
  struct RollingMovement__Fields fields;
};
struct Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider_ {
  struct Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider___Class *klass;
  struct MonitorData *monitor;
  struct Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider___Fields fields;
};
struct KamikazeSootEnemyAnimations__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KamikazeSootEnemyAnimations__StaticFields {
};
struct KamikazeSootEnemyAnimations__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KamikazeSootEnemyAnimations__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KamikazeSootEnemyAnimations__VTable vtable;
};
struct KamikazeSootEnemySettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KamikazeSootEnemySettings__StaticFields {
};
struct KamikazeSootEnemySettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KamikazeSootEnemySettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KamikazeSootEnemySettings__VTable vtable;
};
struct KamikazeSootEnemyAlertState__VTable {
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
struct KamikazeSootEnemyAlertState__StaticFields {
};
struct KamikazeSootEnemyAlertState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KamikazeSootEnemyAlertState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KamikazeSootEnemyAlertState__VTable vtable;
};
struct KamikazeSootEnemyState__VTable {
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
struct KamikazeSootEnemyState__StaticFields {
};
struct KamikazeSootEnemyState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KamikazeSootEnemyState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KamikazeSootEnemyState__VTable vtable;
};
struct KamikazeSootEnemyDropState__VTable {
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
struct KamikazeSootEnemyDropState__StaticFields {
};
struct KamikazeSootEnemyDropState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KamikazeSootEnemyDropState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KamikazeSootEnemyDropState__VTable vtable;
};
struct KamikazeSootEnemyIdleState__VTable {
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
struct KamikazeSootEnemyIdleState__StaticFields {
};
struct KamikazeSootEnemyIdleState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KamikazeSootEnemyIdleState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KamikazeSootEnemyIdleState__VTable vtable;
};
struct KamikazeSootEnemyRollingState__VTable {
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
struct KamikazeSootEnemyRollingState__StaticFields {
};
struct KamikazeSootEnemyRollingState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KamikazeSootEnemyRollingState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KamikazeSootEnemyRollingState__VTable vtable;
};
struct KamikazeSootEnemy_States__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KamikazeSootEnemy_States__StaticFields {
};
struct KamikazeSootEnemy_States__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KamikazeSootEnemy_States__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KamikazeSootEnemy_States__VTable vtable;
};
struct Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider___StaticFields {
};
struct Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider___VTable vtable;
};
struct RollingMovement__VTable {
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
};
struct RollingMovement__StaticFields {
};
struct RollingMovement__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RollingMovement__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RollingMovement__VTable vtable;
};
struct KamikazeSootEnemy__VTable {
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
struct KamikazeSootEnemy__StaticFields {
};
struct KamikazeSootEnemy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KamikazeSootEnemy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KamikazeSootEnemy__VTable vtable;
};

struct KamikazeSootEnemyPlaceholder__Fields {
  struct RespawningPlaceholder__Fields _;
  struct KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings * Settings;
  struct GameObject * Prefab;
};}