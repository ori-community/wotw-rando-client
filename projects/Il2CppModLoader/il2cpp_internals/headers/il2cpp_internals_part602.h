namespace app {
struct List_1_SpiderEnemyLimb___StaticFields {
  struct SpiderEnemyLimb__Array * _emptyArray;
};
struct List_1_SpiderEnemyLimb___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_SpiderEnemyLimb___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_SpiderEnemyLimb___VTable vtable;
};
struct SpiderEnemy__VTable {
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
struct SpiderEnemy__StaticFields {
};
struct SpiderEnemy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderEnemy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderEnemy__VTable vtable;
};

struct __declspec(align(8)) SpiderEnemy_States__Fields {
  struct State_2 * Idle;
  struct State_2 * Spitting;
  struct State_2 * Shooting;
};
struct SpiderEnemy_States {
  struct SpiderEnemy_States__Class *klass;
  struct MonitorData *monitor;
  struct SpiderEnemy_States__Fields fields;
};
struct SpiderEnemy_States__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiderEnemy_States__StaticFields {
};
struct SpiderEnemy_States__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderEnemy_States__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderEnemy_States__VTable vtable;
};

struct __declspec(align(8)) StopWatchWrapper__Fields {
  struct Stopwatch * m_stopWatch;
};
struct StopWatchWrapper {
  struct StopWatchWrapper__Class *klass;
  struct MonitorData *monitor;
  struct StopWatchWrapper__Fields fields;
};
struct StopWatchWrapper__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct StopWatchWrapper__StaticFields {
};
struct StopWatchWrapper__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StopWatchWrapper__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StopWatchWrapper__VTable vtable;
};

enum StopWatchWrapper_LogType__Enum : int32_t {
  StopWatchWrapper_LogType__Enum_Default = 0,
  StopWatchWrapper_LogType__Enum_Warning = 1,
  StopWatchWrapper_LogType__Enum_Error = 2,
};
struct StopWatchWrapper_LogType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum StopWatchWrapper_LogType__Enum value;
};
enum StopWatchWrapper_Unit__Enum : int32_t {
  StopWatchWrapper_Unit__Enum_Miliseconds = 0,
  StopWatchWrapper_Unit__Enum_Seconds = 1,
};
struct StopWatchWrapper_Unit__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum StopWatchWrapper_Unit__Enum value;
};

struct TextMeshFloatSetter__Fields {
  struct MonoBehaviour__Fields _;
  struct FloatValueProvider * FloatValueProvider;
  float m_lastValue;
  struct TextMesh * m_textMesh;
};
struct TextMeshFloatSetter {
  struct TextMeshFloatSetter__Class *klass;
  struct MonitorData *monitor;
  struct TextMeshFloatSetter__Fields fields;
};
struct TextMeshFloatSetter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TextMeshFloatSetter__StaticFields {
};
struct TextMeshFloatSetter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TextMeshFloatSetter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TextMeshFloatSetter__VTable vtable;
};

struct TextMeshSetter__Fields {
  struct MonoBehaviour__Fields _;
  struct StringValueProvider * StringValueProvider;
  struct TextBox * m_textBox;
  struct String * m_previousString;
};
struct TextMeshSetter {
  struct TextMeshSetter__Class *klass;
  struct MonitorData *monitor;
  struct TextMeshSetter__Fields fields;
};
struct TextMeshSetter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TextMeshSetter__StaticFields {
};
struct TextMeshSetter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TextMeshSetter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TextMeshSetter__VTable vtable;
};

struct LoadTeaser__Fields {
  struct MonoBehaviour__Fields _;
  struct MessageBox * Instructions;
  struct SceneMetaData__Array * preloadScenes;
  float Timer;
  bool m_timerRunning;
};
struct LoadTeaser {
  struct LoadTeaser__Class *klass;
  struct MonitorData *monitor;
  struct LoadTeaser__Fields fields;
};
struct LoadTeaser__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LoadTeaser__StaticFields {
};
struct LoadTeaser__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LoadTeaser__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LoadTeaser__VTable vtable;
};

struct Tentacle__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * Target;
  struct LineRenderer * Renderer;
  float SegmentRestLength;
  float Gravity;
  int32_t SolverIterations;
  float TargetSeekForce;
  float JointCount;
  float Damping;
  struct VerletBody * m_verletBody;
};
struct Tentacle {
  struct Tentacle__Class *klass;
  struct MonitorData *monitor;
  struct Tentacle__Fields fields;
};
struct Tentacle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Tentacle__StaticFields {
};
struct Tentacle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Tentacle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Tentacle__VTable vtable;
};

struct TentacleEnemy__Fields {
  struct Enemy2D__Fields _;
  struct TentacleEnemy_StatesHolder * States;
  struct LineRenderer * Renderer;
  struct DamageTextSpawner * DamageTextSpawner;
  struct LegacyMaterialColorGradientAnimator * HurtColorAnimator;
  struct GameObject * HeadHitEffect;
  struct SoundProvider * DeathSound;
  struct Transform * Base;
  struct Transform * Head;
  struct TentacleHead * HeadSprite;
  float SpeedMultiplier;
  float AttackSpeedMultiplier;
  float Damping;
  float Stiffness;
  float HeadMass;
  float AttackDelay;
  float SpitAttackDelay;
  float SpitToMeleeDelay;
  float SlashEvadeProbability;
  float SeekDistance;
  float AttackDistance;
  float SpitAttackDistance;
  float Gravity;
  float HorizontalGravity;
  float DamageForceScale;
  float SlashEvadeForceScale;
  float DeathImpulseScale;
  float HeadDamageScale;
  struct CapsuleCollider__Array * HeadColliders;
  struct DamageDealer__Array * HeadDamageDealers;
  bool BodyIsObstacle;
  struct CapsuleCollider__Array * BodyColliders;
  struct DamageDealer__Array * BodyDamageDealers;
  struct VerletBody * m_verletBody;
  struct List_1_TentacleEnemy_Joint_ * m_joints;
  float m_length;
  float m_distanceToSein;
  float m_headDistanceToSein;
  bool m_attacking;
  bool m_spitting;
  bool m_holdingOri;
  float m_gravity;
  float m_horizontalGravity;
  float m_timeToNextAttack;
  float m_timeToNextSpit;
  bool m_evadedSlash;
  bool m_dead;
  struct TentacleEnemy_HeadRecoilData * m_headRecoil;
  float m_timeDisabledHeadCollidersLeft;
  struct GameObject * m_lastDamageSender;
  struct TentacleEnemy_WiggleData * m_targetWiggleSettings;
  struct TentacleEnemy_WiggleData * m_currentWiggleSettings;
  struct Vector3__Array * m_tentacleVertices;
  struct Vector3__Array * m_smoothTentacleVertices;
  struct Vector3__Array * m_moreSmoothTentacleVertices;
};
struct TentacleEnemy {
  struct TentacleEnemy__Class *klass;
  struct MonitorData *monitor;
  struct TentacleEnemy__Fields fields;
};
struct __declspec(align(8)) TentacleEnemy_StatesHolder__Fields {
  struct TentacleEnemy_IdleState * Idle;
  struct TentacleEnemy_LookAtOriState * LookAtOri;
  struct TentacleEnemy_MeleeAttackState * MeleeAttack;
  struct TentacleEnemy_SpitAttackState * SpitAttack;
  struct TentacleEnemy_StuckInGroundState * StuckInGround;
  struct TentacleEnemy_HoldingOriState * HoldingOri;
  struct TentacleEnemy_DyingState * Dying;
  struct TentacleEnemy_StunState * Stun;
};
struct TentacleEnemy_StatesHolder {
  struct TentacleEnemy_StatesHolder__Class *klass;
  struct MonitorData *monitor;
  struct TentacleEnemy_StatesHolder__Fields fields;
};
struct __declspec(align(8)) TentacleEnemy_TentacleState__Fields {
  struct TentacleEnemy * Tentacle;
  bool Enabled;
  struct TentacleEnemy_WiggleData * WiggleSettings;
  struct TentacleEnemy_WiggleData * m_modifiedWiggleSettings;
};
struct TentacleEnemy_TentacleState {
  struct TentacleEnemy_TentacleState__Class *klass;
  struct MonitorData *monitor;
  struct TentacleEnemy_TentacleState__Fields fields;
};
struct TentacleEnemy_IdleState__Fields {
  struct TentacleEnemy_TentacleState__Fields _;
  float SeekForceMin;
  float SeekForceMax;
  float TimeToResetTargetMin;
  float TimeToResetTargetMax;
  float MaxTargetDistance;
  struct Vector3 m_target;
  float m_timeResetTarget;
  float m_targetSeekForce;
};
struct TentacleEnemy_IdleState {
  struct TentacleEnemy_IdleState__Class *klass;
  struct MonitorData *monitor;
  struct TentacleEnemy_IdleState__Fields fields;
};
struct __declspec(align(8)) TentacleEnemy_WiggleData__Fields {
  float Strength;
  float Speed;
  float Frequency;
};
struct TentacleEnemy_WiggleData {
  struct TentacleEnemy_WiggleData__Class *klass;
  struct MonitorData *monitor;
  struct TentacleEnemy_WiggleData__Fields fields;
};
struct TentacleEnemy_LookAtOriState__Fields {
  struct TentacleEnemy_TentacleState__Fields _;
  float SeekForceMin;
  float SeekForceMax;
  float TimeToResetForceMin;
  float TimeToResetForceMax;
  float Wiggle;
  float m_timeResetForce;
  float m_seekForce;
};
struct TentacleEnemy_LookAtOriState {
  struct TentacleEnemy_LookAtOriState__Class *klass;
  struct MonitorData *monitor;
  struct TentacleEnemy_LookAtOriState__Fields fields;
};
enum TentacleEnemy_MeleeAttackState_AttackType__Enum : int32_t {
  TentacleEnemy_MeleeAttackState_AttackType__Enum_Stab = 0,
  TentacleEnemy_MeleeAttackState_AttackType__Enum_Catch = 1,
};
struct TentacleEnemy_MeleeAttackState_AttackType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TentacleEnemy_MeleeAttackState_AttackType__Enum value;
};
struct TentacleEnemy_MeleeAttackState__Fields {
  struct TentacleEnemy_TentacleState__Fields _;
  float PrepareSeekForce;
  float PrepareChargeForce;
  float AttackForce;
  float StabProbability;
  float StabChargeTimeMin;
  float StabChargeTimeMax;
  float CatchChargeTimeMin;
  float CatchChargeTimeMax;
  float StabDamage;
  float EvadeTrackingTreshold;
  struct SoundProvider * AttackSound;
  struct SoundProvider * ChargeSound;
  struct SoundProvider * HitGroundSound;
  struct GameObject * HitGorundParticleEffectPrefab;
  float m_timeToAttack;
  struct Vector3 m_attackDirection;
  struct Vector3 m_startAttackSeinPosition;
  bool m_tracingSein;
  enum TentacleEnemy_MeleeAttackState_AttackType__Enum m_currentAttackType;
  bool m_reset;
};
struct TentacleEnemy_MeleeAttackState {
  struct TentacleEnemy_MeleeAttackState__Class *klass;
  struct MonitorData *monitor;
  struct TentacleEnemy_MeleeAttackState__Fields fields;
};
struct TentacleEnemy_SpitAttackState__Fields {
  struct TentacleEnemy_TentacleState__Fields _;
  float ShootDelayMin;
  float ShootDelayMax;
  float ProjectileGravity;
  float ProjectileSpeed;
  struct ProjectileSpawner * ProjectileSpawner;
  struct LayerMask SweepTestLayerMask;
  float HeadOrientationForce;
  float PushBackForce;
  float VibrateAngle;
  float ChargeDiminishFactor;
  struct SoundProvider * AttackSound;
  struct SoundProvider * ChargeSound;
  float m_timeToShoot;
  float m_currentDelay;
  float m_originalHeadMass;
  bool m_updateSpawner;
};
struct TentacleEnemy_SpitAttackState {
  struct TentacleEnemy_SpitAttackState__Class *klass;
  struct MonitorData *monitor;
  struct TentacleEnemy_SpitAttackState__Fields fields;
};
struct TentacleEnemy_StuckInGroundState__Fields {
  struct TentacleEnemy_TentacleState__Fields _;
  float StuckTimeMin;
  float StuckTimeMax;
  float PullOutForce;
  float PullOutImpulse;
  struct AnimationCurve * PullOutEffortCurve;
  struct GameObject * PullOutParticleEffectPrefab;
  struct SoundProvider * PullOutSound;
  float TimeStuckLeft;
  struct Vector3 StuckPosition;
  struct Vector3 StuckOrientation;
  float m_originalHeadMass;
  float m_timeStuck;
};
struct TentacleEnemy_StuckInGroundState {
  struct TentacleEnemy_StuckInGroundState__Class *klass;
  struct MonitorData *monitor;
  struct TentacleEnemy_StuckInGroundState__Fields fields;
};
struct TentacleEnemy_HoldingOriState__Fields {
  struct TentacleEnemy_TentacleState__Fields _;
  float Damage;
  float DamageDelay;
  float FailDistance;
  float SeekForce;
  struct TentacleEnemy_WiggleData * HeadWiggle;
  struct SeinDamageReciever * DamageReceiver;
  float m_timeToDamage;
  struct ILeachable * m_leachable;
  struct Vector3 m_holdPosition;
};
struct TentacleEnemy_HoldingOriState {
  struct TentacleEnemy_HoldingOriState__Class *klass;
  struct MonitorData *monitor;
  struct TentacleEnemy_HoldingOriState__Fields fields;
};
struct ILeachable {
  struct ILeachable__Class *klass;
  struct MonitorData *monitor;
};
struct TentacleEnemy_DyingState__Fields {
  struct TentacleEnemy_TentacleState__Fields _;
  float DestroyDelay;
  float m_timeToDestroy;
};
struct TentacleEnemy_DyingState {
  struct TentacleEnemy_DyingState__Class *klass;
  struct MonitorData *monitor;
  struct TentacleEnemy_DyingState__Fields fields;
};
struct TentacleEnemy_StunState__Fields {
  struct TentacleEnemy_TentacleState__Fields _;
  float StunTimeMin;
  float StunTimeMax;
  struct TentacleEnemy_WiggleData * HeadWiggle;
  float TimeStunLeft;
};
struct TentacleEnemy_StunState {
  struct TentacleEnemy_StunState__Class *klass;
  struct MonitorData *monitor;
  struct TentacleEnemy_StunState__Fields fields;
};
struct LegacyMaterialColorGradientAnimator__Fields {
  struct LegacyAnimator__Fields _;
  bool AnimateChildren;
  struct Texture2D * Gradient;
  struct AnimationCurve * GradientCurve;
  bool Red;
  bool Green;
  bool Blue;
  bool Alpha;
  bool Half;
  struct String * Property;
  int32_t _PropertyID;
  struct List_1_LegacyMaterialColorGradientAnimator_RendererData_ * m_rendererData;
  struct Color__Array * GradientPixels;
};
struct LegacyMaterialColorGradientAnimator {
  struct LegacyMaterialColorGradientAnimator__Class *klass;
  struct MonitorData *monitor;
  struct LegacyMaterialColorGradientAnimator__Fields fields;
};
struct __declspec(align(8)) List_1_LegacyMaterialColorGradientAnimator_RendererData___Fields {
  struct LegacyMaterialColorGradientAnimator_RendererData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_LegacyMaterialColorGradientAnimator_RendererData_ {
  struct List_1_LegacyMaterialColorGradientAnimator_RendererData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_LegacyMaterialColorGradientAnimator_RendererData___Fields fields;
};
struct LegacyMaterialColorGradientAnimator_RendererData {
  struct Color OriginalValue;
  struct Renderer * Renderer;
};
struct LegacyMaterialColorGradientAnimator_RendererData__Boxed {
  struct LegacyMaterialColorGradientAnimator_RendererData__Class *klass;
  struct MonitorData *monitor;
  struct LegacyMaterialColorGradientAnimator_RendererData fields;
};
struct LegacyMaterialColorGradientAnimator_RendererData__Array {
  struct LegacyMaterialColorGradientAnimator_RendererData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LegacyMaterialColorGradientAnimator_RendererData vector[32];
};
struct IEnumerator_1_LegacyMaterialColorGradientAnimator_RendererData_ {
  struct IEnumerator_1_LegacyMaterialColorGradientAnimator_RendererData___Class *klass;
  struct MonitorData *monitor;
};
struct TentacleHead__Fields {
  struct MonoBehaviour__Fields _;
  struct Action_1_UnityEngine_Collider_ * OnTriggerEnterEvent;
};
struct TentacleHead {
  struct TentacleHead__Class *klass;
  struct MonitorData *monitor;
  struct TentacleHead__Fields fields;
};
struct __declspec(align(8)) List_1_TentacleEnemy_Joint___Fields {
  struct TentacleEnemy_Joint__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_TentacleEnemy_Joint_ {
  struct List_1_TentacleEnemy_Joint___Class *klass;
  struct MonitorData *monitor;
  struct List_1_TentacleEnemy_Joint___Fields fields;
};
struct __declspec(align(8)) TentacleEnemy_Joint__Fields {
  struct Transform * Transform;
  struct VerletBody_Point * PhysicalJoint;
};
struct TentacleEnemy_Joint {
  struct TentacleEnemy_Joint__Class *klass;
  struct MonitorData *monitor;
  struct TentacleEnemy_Joint__Fields fields;
};
struct TentacleEnemy_Joint__Array {
  struct TentacleEnemy_Joint__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TentacleEnemy_Joint * vector[32];
};
struct IEnumerator_1_TentacleEnemy_Joint_ {
  struct IEnumerator_1_TentacleEnemy_Joint___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) TentacleEnemy_HeadRecoilData__Fields {
  struct Vector3 Force;
  float TimeLeft;
  float DiminishRate;
};
struct TentacleEnemy_HeadRecoilData {
  struct TentacleEnemy_HeadRecoilData__Class *klass;
  struct MonitorData *monitor;
  struct TentacleEnemy_HeadRecoilData__Fields fields;
};
struct TentacleEnemy_WiggleData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TentacleEnemy_WiggleData__StaticFields {
  float StrengthChangeRate;
  float SpeedChangeRate;
  float FrequencyChangeRate;
};
struct TentacleEnemy_WiggleData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TentacleEnemy_WiggleData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TentacleEnemy_WiggleData__VTable vtable;
};
struct TentacleEnemy_TentacleState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Name;
  VirtualInvokeData OnBegin;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData OnInterrupt;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData __unknown_3;
  VirtualInvokeData ModifyDamage;
  VirtualInvokeData CanEvadeSlash;
  VirtualInvokeData ModifyWiggleSettings;
};
struct TentacleEnemy_TentacleState__StaticFields {
};
struct TentacleEnemy_TentacleState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TentacleEnemy_TentacleState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TentacleEnemy_TentacleState__VTable vtable;
};
struct TentacleEnemy_IdleState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Name;
  VirtualInvokeData OnBegin;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData OnInterrupt;
  VirtualInvokeData get_Name_1;
  VirtualInvokeData OnBegin_1;
  VirtualInvokeData OnInterrupt_1;
  VirtualInvokeData OnTentacleStateUpdate;
  VirtualInvokeData ModifyDamage;
  VirtualInvokeData CanEvadeSlash;
  VirtualInvokeData ModifyWiggleSettings;
};
struct TentacleEnemy_IdleState__StaticFields {
};
struct TentacleEnemy_IdleState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TentacleEnemy_IdleState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TentacleEnemy_IdleState__VTable vtable;
};
struct TentacleEnemy_LookAtOriState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Name;
  VirtualInvokeData OnBegin;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData OnInterrupt;
  VirtualInvokeData get_Name_1;
  VirtualInvokeData OnBegin_1;
  VirtualInvokeData OnInterrupt_1;
  VirtualInvokeData OnTentacleStateUpdate;
  VirtualInvokeData ModifyDamage;
  VirtualInvokeData CanEvadeSlash;
  VirtualInvokeData ModifyWiggleSettings;
};
struct TentacleEnemy_LookAtOriState__StaticFields {
};
struct TentacleEnemy_LookAtOriState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TentacleEnemy_LookAtOriState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TentacleEnemy_LookAtOriState__VTable vtable;
};
struct TentacleEnemy_MeleeAttackState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Name;
  VirtualInvokeData OnBegin;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData OnInterrupt;
  VirtualInvokeData get_Name_1;
  VirtualInvokeData OnBegin_1;
  VirtualInvokeData OnInterrupt_1;
  VirtualInvokeData OnTentacleStateUpdate;
  VirtualInvokeData ModifyDamage;
  VirtualInvokeData CanEvadeSlash;
  VirtualInvokeData ModifyWiggleSettings;
};
struct TentacleEnemy_MeleeAttackState__StaticFields {
};
struct TentacleEnemy_MeleeAttackState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TentacleEnemy_MeleeAttackState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TentacleEnemy_MeleeAttackState__VTable vtable;
};
struct TentacleEnemy_SpitAttackState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Name;
  VirtualInvokeData OnBegin;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData OnInterrupt;
  VirtualInvokeData get_Name_1;
  VirtualInvokeData OnBegin_1;
  VirtualInvokeData OnInterrupt_1;
  VirtualInvokeData OnTentacleStateUpdate;
  VirtualInvokeData ModifyDamage;
  VirtualInvokeData CanEvadeSlash;
  VirtualInvokeData ModifyWiggleSettings;
};
struct TentacleEnemy_SpitAttackState__StaticFields {
};
struct TentacleEnemy_SpitAttackState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TentacleEnemy_SpitAttackState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TentacleEnemy_SpitAttackState__VTable vtable;
};
struct TentacleEnemy_StuckInGroundState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Name;
  VirtualInvokeData OnBegin;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData OnInterrupt;
  VirtualInvokeData get_Name_1;
  VirtualInvokeData OnBegin_1;
  VirtualInvokeData OnInterrupt_1;
  VirtualInvokeData OnTentacleStateUpdate;
  VirtualInvokeData ModifyDamage;
  VirtualInvokeData CanEvadeSlash;
  VirtualInvokeData ModifyWiggleSettings;
};
struct TentacleEnemy_StuckInGroundState__StaticFields {
};
struct TentacleEnemy_StuckInGroundState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TentacleEnemy_StuckInGroundState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TentacleEnemy_StuckInGroundState__VTable vtable;
};
struct ILeachable__VTable {
  VirtualInvokeData StartLeach;
  VirtualInvokeData ReleaseLeach;
  VirtualInvokeData UpdateLeach;
};
struct ILeachable__StaticFields {
};
struct ILeachable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ILeachable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ILeachable__VTable vtable;
};
struct TentacleEnemy_HoldingOriState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Name;
  VirtualInvokeData OnBegin;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData OnInterrupt;
  VirtualInvokeData get_Name_1;
  VirtualInvokeData OnBegin_1;
  VirtualInvokeData OnInterrupt_1;
  VirtualInvokeData OnTentacleStateUpdate;
  VirtualInvokeData ModifyDamage;
  VirtualInvokeData CanEvadeSlash;
  VirtualInvokeData ModifyWiggleSettings;
};
struct TentacleEnemy_HoldingOriState__StaticFields {
};
struct TentacleEnemy_HoldingOriState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TentacleEnemy_HoldingOriState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TentacleEnemy_HoldingOriState__VTable vtable;
};
struct TentacleEnemy_DyingState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Name;
  VirtualInvokeData OnBegin;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData OnInterrupt;
  VirtualInvokeData get_Name_1;
  VirtualInvokeData OnBegin_1;
  VirtualInvokeData OnInterrupt_1;
  VirtualInvokeData OnTentacleStateUpdate;
  VirtualInvokeData ModifyDamage;
  VirtualInvokeData CanEvadeSlash;
  VirtualInvokeData ModifyWiggleSettings;
};
struct TentacleEnemy_DyingState__StaticFields {
};
struct TentacleEnemy_DyingState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TentacleEnemy_DyingState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TentacleEnemy_DyingState__VTable vtable;
};
struct TentacleEnemy_StunState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Name;
  VirtualInvokeData OnBegin;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData OnInterrupt;
  VirtualInvokeData get_Name_1;
  VirtualInvokeData OnBegin_1;
  VirtualInvokeData OnInterrupt_1;
  VirtualInvokeData OnTentacleStateUpdate;
  VirtualInvokeData ModifyDamage;
  VirtualInvokeData CanEvadeSlash;
  VirtualInvokeData ModifyWiggleSettings;
};
struct TentacleEnemy_StunState__StaticFields {
};
struct TentacleEnemy_StunState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TentacleEnemy_StunState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TentacleEnemy_StunState__VTable vtable;
};
struct TentacleEnemy_StatesHolder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TentacleEnemy_StatesHolder__StaticFields {
};
struct TentacleEnemy_StatesHolder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TentacleEnemy_StatesHolder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TentacleEnemy_StatesHolder__VTable vtable;
};
struct LegacyMaterialColorGradientAnimator_RendererData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LegacyMaterialColorGradientAnimator_RendererData__StaticFields {
};
struct LegacyMaterialColorGradientAnimator_RendererData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LegacyMaterialColorGradientAnimator_RendererData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LegacyMaterialColorGradientAnimator_RendererData__VTable vtable;
};
struct IEnumerator_1_LegacyMaterialColorGradientAnimator_RendererData___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_LegacyMaterialColorGradientAnimator_RendererData___StaticFields {
};
struct IEnumerator_1_LegacyMaterialColorGradientAnimator_RendererData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_LegacyMaterialColorGradientAnimator_RendererData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_LegacyMaterialColorGradientAnimator_RendererData___VTable vtable;
};
struct List_1_LegacyMaterialColorGradientAnimator_RendererData___VTable {
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
struct List_1_LegacyMaterialColorGradientAnimator_RendererData___StaticFields {
  struct LegacyMaterialColorGradientAnimator_RendererData__Array * _emptyArray;
};
struct List_1_LegacyMaterialColorGradientAnimator_RendererData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_LegacyMaterialColorGradientAnimator_RendererData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_LegacyMaterialColorGradientAnimator_RendererData___VTable vtable;
};
struct LegacyMaterialColorGradientAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_IsInScene;
  VirtualInvokeData set_IsInScene;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData Start;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnPoolSpawned_1;
  VirtualInvokeData Restart;
  VirtualInvokeData RestartReverse;
  VirtualInvokeData AnimateIt;
  VirtualInvokeData RestoreToOriginalState;
};
struct LegacyMaterialColorGradientAnimator__StaticFields {
};}