namespace app {
struct KwolokBossTendrilStrikeBehaviour_StabRightOutState__StaticFields {
};
struct KwolokBossTendrilStrikeBehaviour_StabRightOutState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KwolokBossTendrilStrikeBehaviour_StabRightOutState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KwolokBossTendrilStrikeBehaviour_StabRightOutState__VTable vtable;
};

struct KwolokBossTendrilVariationBrain__Fields {
  struct MonoBehaviour__Fields _;
  struct KwolokBossTendril * m_tendril;
  struct Enum__Array * Entries;
};
struct KwolokBossTendrilVariationBrain {
  struct KwolokBossTendrilVariationBrain__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossTendrilVariationBrain__Fields fields;
};
struct KwolokBossTendrilVariationBrain__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetEntries;
  VirtualInvokeData Evaluate;
  VirtualInvokeData get_ShouldSkip;
};
struct KwolokBossTendrilVariationBrain__StaticFields {
};
struct KwolokBossTendrilVariationBrain__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KwolokBossTendrilVariationBrain__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KwolokBossTendrilVariationBrain__VTable vtable;
};

struct KwolokBossTongueAttackBehaviour__Fields {
  struct KwolokBossBaseBehaviour__Fields _;
  struct MoonTimeline * Timeline;
  struct EventTriggerAnimator * MouthHeightLockEvent;
  struct EventTriggerAnimator * TargetLockEvent;
  struct EventTriggerAnimator * MaxExtentReachedEvent;
  struct MoonFloat * TongueIKWeight;
  float AccelerationMultiplier;
  float DecelerationMultiplier;
  float IKLerpInTime;
  float IKLerpOutTime;
  bool CanHitTerrain;
  bool UseTongueMaxLength;
  float AngleForMaxHeightAnimationBlend;
  struct GameObject * TerrainHitFX;
  float TongueOverlapWithSolidsRadius;
  bool m_tongueHitFXSpawned;
  struct SoundHost * TongueSoundHost;
  struct Event_1 * TongueEnterWaterEvent;
  bool m_tongueEnterWaterPlayed;
  struct Vector3 m_lockedMouthPosition;
};
struct KwolokBossTongueAttackBehaviour {
  struct KwolokBossTongueAttackBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossTongueAttackBehaviour__Fields fields;
};
struct KwolokBossTongueAttackBehaviour__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
  VirtualInvokeData OnValidate;
  VirtualInvokeData get_Info;
  VirtualInvokeData PerformSanityCheck;
  VirtualInvokeData get_Status;
  VirtualInvokeData Execute;
  VirtualInvokeData Reset;
  VirtualInvokeData InitializeBehaviourNode;
  VirtualInvokeData CompareTo;
  VirtualInvokeData get_TaskStatus;
  VirtualInvokeData set_TaskStatus;
  VirtualInvokeData get_ForceReturnTaskStatus;
  VirtualInvokeData set_ForceReturnTaskStatus;
  VirtualInvokeData OnExecuteTask;
  VirtualInvokeData OnInitializeTask;
  VirtualInvokeData OnEnterTask;
  VirtualInvokeData OnExitTask;
  VirtualInvokeData OnResetTask;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData MoonCleanup;
  VirtualInvokeData Execute_1;
  VirtualInvokeData Reset_1;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData OnReset;
  VirtualInvokeData OnBehaviourTreeInitialize;
  VirtualInvokeData OnExecute;
  VirtualInvokeData OnEntityInitialization;
  VirtualInvokeData get_InitOrder;
  VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
  VirtualInvokeData ShouldPauseLocomotion;
  VirtualInvokeData CacheSerializedComponents;
  VirtualInvokeData OnEntityInitialized;
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData InitializeCancellableController;
  VirtualInvokeData CanCancel;
  VirtualInvokeData InitializeHitReactionController;
  VirtualInvokeData CanAccumulateHits;
  VirtualInvokeData CanHitReact;
  VirtualInvokeData ComputeUtility;
  VirtualInvokeData IsLocomotionFollowAllowed;
  VirtualInvokeData IsLocomotionStayAtRangeAllowed;
  VirtualInvokeData ModifyPostAttackCooldown;
  VirtualInvokeData ModifyMaxLookAtWeights;
};
struct KwolokBossTongueAttackBehaviour__StaticFields {
};
struct KwolokBossTongueAttackBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KwolokBossTongueAttackBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KwolokBossTongueAttackBehaviour__VTable vtable;
};

enum KwolokBossUnderwaterPullBehaviour_State__Enum : int32_t {
  KwolokBossUnderwaterPullBehaviour_State__Enum_Invalid = 0,
  KwolokBossUnderwaterPullBehaviour_State__Enum_Positioning = 1,
  KwolokBossUnderwaterPullBehaviour_State__Enum_Pulling = 2,
  KwolokBossUnderwaterPullBehaviour_State__Enum_FailedPull = 3,
  KwolokBossUnderwaterPullBehaviour_State__Enum_Swallowing = 4,
  KwolokBossUnderwaterPullBehaviour_State__Enum_Biting = 5,
  KwolokBossUnderwaterPullBehaviour_State__Enum_Spitting = 6,
  KwolokBossUnderwaterPullBehaviour_State__Enum_Done = 7,
};
struct KwolokBossUnderwaterPullBehaviour_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum KwolokBossUnderwaterPullBehaviour_State__Enum value;
};
struct KwolokBossUnderwaterPullBehaviour__Fields {
  struct KwolokBossBaseBehaviour__Fields _;
  struct MoonTimeline * PullStart;
  struct MoonTimeline * PullLoop;
  struct MoonTimeline * PullEnd;
  struct MoonTimeline * ChompLoop;
  struct MoonTimeline * Spit;
  struct EventTriggerAnimator * SpitEvent;
  struct EventTriggerAnimator * DamageEvent;
  struct MoonReference_1_WaterCurrentZone_ * WaterCurrentZone;
  struct MoonReference_1_VelocityBezierSplineComponent_ * PullPath;
  struct MoonReference_1_Moon_Setups_ChangeStateOnCondition_ * PullWallLeft;
  struct MoonReference_1_Moon_Setups_ChangeStateOnCondition_ * PullWallRight;
  struct Transform * KwolokTongueRootTransform;
  float ChompDamage;
  float MaxSeinOffsetFromPath;
  float SwallowDistance;
  float SpitForce;
  float CurrentStrength;
  float PullLoopTime;
  float m_pullLoopTimer;
  bool m_hasOri;
  int32_t m_repositionCount;
  float AccelerationMultiplier;
  float DecelerationMultiplier;
  float MaxMovementSpeed;
  int32_t MaxRepositions;
  float BitingAngleChangeSpeedMult;
  bool ProjectilesAllowed;
  struct ProjectileSpawner * Spawner;
  struct List_1_Moon_MoonReference_1__1 * SpawnPoints;
  struct List_1_Moon_MoonReference_1__1 * SpawnPointsMirrored;
  struct List_1_Moon_Timeline_EventTriggerAnimator_ * SpawnEvents;
  int32_t MaxProjectiles;
  float ProjectileSpeed;
  struct List_1_UnityEngine_Transform_ * m_spawnPointsCached;
  struct List_1_UnityEngine_Transform_ * m_spawnPointsMirroredCached;
  struct List_1_UnityEngine_Transform_ * m_usedSpawnPoints;
  struct List_1_Projectile_ * m_spawnedProjectiles;
  int32_t m_numSpawnedProjectiles;
  enum KwolokBossUnderwaterPullBehaviour_State__Enum m_currentState;
  struct WaterCurrentZone * m_waterCurrentZoneCached;
  struct VelocityBezierSplineComponent * m_pullPathCached;
  struct KwolokBossLocomotion_MoveRequest * m_moveRequest;
  bool m_isMirrored;
  struct Enum__Array * Entries;
};
struct KwolokBossUnderwaterPullBehaviour {
  struct KwolokBossUnderwaterPullBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossUnderwaterPullBehaviour__Fields fields;
};
struct __declspec(align(8)) MoonReference_1_WaterCurrentZone___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_WaterCurrentZone_ * m_cachedProxyType;
  struct WaterCurrentZone * m_volatileValue;
};
struct MoonReference_1_WaterCurrentZone_ {
  struct MoonReference_1_WaterCurrentZone___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_WaterCurrentZone___Fields fields;
};
struct IMoonType_1_WaterCurrentZone_ {
  struct IMoonType_1_WaterCurrentZone___Class *klass;
  struct MonitorData *monitor;
};
struct BaseZone__Fields {
  struct SaveSerialize__Fields _;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  bool m_active;
  struct Transform * m_transform;
};
struct BaseZone {
  struct BaseZone__Class *klass;
  struct MonitorData *monitor;
  struct BaseZone__Fields fields;
};
struct RectangleGameplayZone__Fields {
  struct BaseZone__Fields _;
  struct Rect m_bounds;
};
struct RectangleGameplayZone {
  struct RectangleGameplayZone__Class *klass;
  struct MonitorData *monitor;
  struct RectangleGameplayZone__Fields fields;
};
struct WaterCurrentZone__Fields {
  struct RectangleGameplayZone__Fields _;
  float CurrentStrength;
  struct Vector2 CurrentDirection;
  float CurrentCycleLength;
  struct AnimationCurve * CurrentStrengthCycleCurve;
  struct Renderer * DebugRenderer;
  struct Vector2 InnerBoundsOffset_deleteThis;
  bool IgnoreCurrentStrength;
  struct Bounds m_innerBounds;
  struct Bounds m_outerBounds;
  float m_timer;
  float m_startAlpha;
};
struct WaterCurrentZone {
  struct WaterCurrentZone__Class *klass;
  struct MonitorData *monitor;
  struct WaterCurrentZone__Fields fields;
};
struct EnemyNoGoZone__Fields {
  struct RectangleGameplayZone__Fields _;
};
struct EnemyNoGoZone {
  struct EnemyNoGoZone__Class *klass;
  struct MonitorData *monitor;
  struct EnemyNoGoZone__Fields fields;
};
struct __declspec(align(8)) MoonReference_1_VelocityBezierSplineComponent___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_VelocityBezierSplineComponent_ * m_cachedProxyType;
  struct VelocityBezierSplineComponent * m_volatileValue;
};
struct MoonReference_1_VelocityBezierSplineComponent_ {
  struct MoonReference_1_VelocityBezierSplineComponent___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_VelocityBezierSplineComponent___Fields fields;
};
struct IMoonType_1_VelocityBezierSplineComponent_ {
  struct IMoonType_1_VelocityBezierSplineComponent___Class *klass;
  struct MonitorData *monitor;
};
struct VelocityBezierSplineComponent__Fields {
  struct MonoBehaviour__Fields _;
  struct VelocityBezierSpline * spline;
  int32_t m_buildnum;
  struct Vector3__Array * m_drawcache;
  struct BaseSpline_SplineIterator * m_iterator;
  bool lock_transform_on_play;
  struct SplineEventHandler * spline_event;
};
struct VelocityBezierSplineComponent {
  struct VelocityBezierSplineComponent__Class *klass;
  struct MonitorData *monitor;
  struct VelocityBezierSplineComponent__Fields fields;
};
enum BaseSpline_SplineWrapMode__Enum : int32_t {
  BaseSpline_SplineWrapMode__Enum_Once = 0,
  BaseSpline_SplineWrapMode__Enum_Repeat = 1,
  BaseSpline_SplineWrapMode__Enum_PingPong = 2,
  BaseSpline_SplineWrapMode__Enum_Loop = 3,
};
struct BaseSpline_SplineWrapMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BaseSpline_SplineWrapMode__Enum value;
};
enum BaseSpline_SplineReparamType__Enum : int32_t {
  BaseSpline_SplineReparamType__Enum_None = 0,
  BaseSpline_SplineReparamType__Enum_Simple = 1,
  BaseSpline_SplineReparamType__Enum_RungeKutta = 2,
};
struct BaseSpline_SplineReparamType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BaseSpline_SplineReparamType__Enum value;
};
struct __declspec(align(8)) BaseSpline__Fields {
  enum BaseSpline_SplineWrapMode__Enum m_wrapmode;
  float m_length;
  int32_t m_stepcount;
  enum BaseSpline_SplineReparamType__Enum m_reparam;
  int32_t m_buildnum;
};
struct BaseSpline {
  struct BaseSpline__Class *klass;
  struct MonitorData *monitor;
  struct BaseSpline__Fields fields;
};
struct VelocityBezierSpline__Fields {
  struct BaseSpline__Fields _;
  struct List_1_VelocityBezierSpline_VelocityBezierSplinePoint_ * points;
  struct VelocityBezierSpline_VelocityBezierSplineSegment__Array * segments;
  float m_precompdiv;
};
struct VelocityBezierSpline {
  struct VelocityBezierSpline__Class *klass;
  struct MonitorData *monitor;
  struct VelocityBezierSpline__Fields fields;
};
struct BezierSpline__Fields {
  struct BaseSpline__Fields _;
  struct List_1_BezierSpline_BezierSplinePoint_ * points;
  struct BezierSpline_BezierSplineSegment__Array * m_segments;
  float m_precompdiv;
};
struct BezierSpline {
  struct BezierSpline__Class *klass;
  struct MonitorData *monitor;
  struct BezierSpline__Fields fields;
};
struct __declspec(align(8)) List_1_BezierSpline_BezierSplinePoint___Fields {
  struct BezierSpline_BezierSplinePoint__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_BezierSpline_BezierSplinePoint_ {
  struct List_1_BezierSpline_BezierSplinePoint___Class *klass;
  struct MonitorData *monitor;
  struct List_1_BezierSpline_BezierSplinePoint___Fields fields;
};
enum BaseSpline_SplinePointType__Enum : int32_t {
  BaseSpline_SplinePointType__Enum_Corner = 0,
  BaseSpline_SplinePointType__Enum_Smooth = 1,
  BaseSpline_SplinePointType__Enum_Bezier = 2,
  BaseSpline_SplinePointType__Enum_BezierCorner = 3,
};
struct BaseSpline_SplinePointType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BaseSpline_SplinePointType__Enum value;
};
struct __declspec(align(8)) BezierSpline_BezierSplinePoint__Fields {
  struct Vector3 position;
  struct Vector3 m_prevctrl;
  struct Vector3 m_nextctrl;
  enum BaseSpline_SplinePointType__Enum m_type;
};
struct BezierSpline_BezierSplinePoint {
  struct BezierSpline_BezierSplinePoint__Class *klass;
  struct MonitorData *monitor;
  struct BezierSpline_BezierSplinePoint__Fields fields;
};
struct BezierSpline_BezierSplinePoint__Array {
  struct BezierSpline_BezierSplinePoint__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct BezierSpline_BezierSplinePoint * vector[32];
};
struct IEnumerator_1_BezierSpline_BezierSplinePoint_ {
  struct IEnumerator_1_BezierSpline_BezierSplinePoint___Class *klass;
  struct MonitorData *monitor;
};
enum BaseSpline_SplineSegmentType__Enum : int32_t {
  BaseSpline_SplineSegmentType__Enum_Linear = 0,
  BaseSpline_SplineSegmentType__Enum_Curve = 1,
};
struct BaseSpline_SplineSegmentType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BaseSpline_SplineSegmentType__Enum value;
};
struct __declspec(align(8)) BezierSpline_BezierSplineSegment__Fields {
  struct Vector3 m_startpos;
  struct Vector3 m_endpos;
  struct Vector3 m_startctrl;
  struct Vector3 m_endctrl;
  float m_startlen;
  float m_endlen;
  float m_length;
  enum BaseSpline_SplineSegmentType__Enum m_type;
  struct Single__Array * m_params;
  struct Single__Array * m_precomps;
};
struct BezierSpline_BezierSplineSegment {
  struct BezierSpline_BezierSplineSegment__Class *klass;
  struct MonitorData *monitor;
  struct BezierSpline_BezierSplineSegment__Fields fields;
};
struct BezierSpline_BezierSplineSegment__Array {
  struct BezierSpline_BezierSplineSegment__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct BezierSpline_BezierSplineSegment * vector[32];
};
struct __declspec(align(8)) List_1_VelocityBezierSpline_VelocityBezierSplinePoint___Fields {
  struct VelocityBezierSpline_VelocityBezierSplinePoint__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_VelocityBezierSpline_VelocityBezierSplinePoint_ {
  struct List_1_VelocityBezierSpline_VelocityBezierSplinePoint___Class *klass;
  struct MonitorData *monitor;
  struct List_1_VelocityBezierSpline_VelocityBezierSplinePoint___Fields fields;
};
struct __declspec(align(8)) VelocityBezierSpline_VelocityBezierSplinePoint__Fields {
  struct Vector3 position;
  struct Vector3 m_prevctrl;
  struct Vector3 m_nextctrl;
  enum BaseSpline_SplinePointType__Enum m_type;
  struct Vector3 speed;
  struct Vector3 prev_velocity;
  struct Vector3 next_velocity;
  struct String * action;
};
struct VelocityBezierSpline_VelocityBezierSplinePoint {
  struct VelocityBezierSpline_VelocityBezierSplinePoint__Class *klass;
  struct MonitorData *monitor;
  struct VelocityBezierSpline_VelocityBezierSplinePoint__Fields fields;
};
struct VelocityBezierSpline_VelocityBezierSplinePoint__Array {
  struct VelocityBezierSpline_VelocityBezierSplinePoint__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct VelocityBezierSpline_VelocityBezierSplinePoint * vector[32];
};
struct IEnumerator_1_VelocityBezierSpline_VelocityBezierSplinePoint_ {
  struct IEnumerator_1_VelocityBezierSpline_VelocityBezierSplinePoint___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) VelocityBezierSpline_VelocityBezierSplineSegment__Fields {
  struct Vector3 m_startpos;
  struct Vector3 m_endpos;
  struct Vector3 m_startctrl;
  struct Vector3 m_endctrl;
  float m_startlen;
  float m_endlen;
  float m_length;
  enum BaseSpline_SplineSegmentType__Enum m_type;
  struct Single__Array * m_params;
  struct Single__Array * m_precomps;
  struct Vector3 start_speed;
  struct Vector3 end_speed;
  struct Vector3 start_vc;
  struct Vector3 end_vc;
};
struct VelocityBezierSpline_VelocityBezierSplineSegment {
  struct VelocityBezierSpline_VelocityBezierSplineSegment__Class *klass;
  struct MonitorData *monitor;
  struct VelocityBezierSpline_VelocityBezierSplineSegment__Fields fields;
};
struct VelocityBezierSpline_VelocityBezierSplineSegment__Array {
  struct VelocityBezierSpline_VelocityBezierSplineSegment__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct VelocityBezierSpline_VelocityBezierSplineSegment * vector[32];
};
struct __declspec(align(8)) BaseSpline_SplineIterator__Fields {
  struct Transform * m_transform;
  struct BaseSpline * m_spline;
  int32_t m_segidx;
  int32_t m_startidx;
  int32_t m_endidx;
  bool m_reverse;
  bool m_back;
  bool m_onceout;
  float m_segpos;
  int32_t loops;
  int32_t old_seg;
  struct Matrix4x4 matrix;
};
struct BaseSpline_SplineIterator {
  struct BaseSpline_SplineIterator__Class *klass;
  struct MonitorData *monitor;
  struct BaseSpline_SplineIterator__Fields fields;
};
struct SplineEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct SplineEventHandler {
  struct SplineEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct SplineEventHandler__Fields fields;
};
struct IMoonType_1_WaterCurrentZone___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_WaterCurrentZone___StaticFields {
};
struct IMoonType_1_WaterCurrentZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_WaterCurrentZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_WaterCurrentZone___VTable vtable;
};
struct EnemyNoGoZone__VTable {
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
  VirtualInvokeData get_Category;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_ShouldUpdateWhileDisabled;
  VirtualInvokeData ContainsPoint;
  VirtualInvokeData OnEnableRuntime;
  VirtualInvokeData OnDisableRuntime;
  VirtualInvokeData OnZoneUpdate;
  VirtualInvokeData get_Category_1;
  VirtualInvokeData get_ShouldSerialize;
  VirtualInvokeData get_UpdateType_1;
  VirtualInvokeData get_ShouldUpdateWhileDisabled_1;
  VirtualInvokeData AwakeInternal;
  VirtualInvokeData DestroyInternal;
  VirtualInvokeData OnEnableEditor;
  VirtualInvokeData OnDisableEditor;
  VirtualInvokeData EditorUpdate;
  VirtualInvokeData ShouldTriggerZoneChange;
  VirtualInvokeData OnZoneChange;
  VirtualInvokeData get_EditorBounds;
  VirtualInvokeData set_EditorBounds;
  VirtualInvokeData RefreshBounds;
};
struct EnemyNoGoZone__StaticFields {
  struct Color RectangleFillColor;
  struct Color RectangleOutlineColor;
  struct Color RectangleSelectedFillColor;
  struct Color RectangleSelectedOutlineColor;
};
struct EnemyNoGoZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EnemyNoGoZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EnemyNoGoZone__VTable vtable;
};
struct BaseZone__VTable {
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
  VirtualInvokeData get_Category;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_ShouldUpdateWhileDisabled;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData __unknown_3;
  VirtualInvokeData get_Category_1;
  VirtualInvokeData get_ShouldSerialize;
  VirtualInvokeData get_UpdateType_1;
  VirtualInvokeData get_ShouldUpdateWhileDisabled_1;
  VirtualInvokeData AwakeInternal;
  VirtualInvokeData DestroyInternal;
  VirtualInvokeData OnEnableEditor;
  VirtualInvokeData OnDisableEditor;
  VirtualInvokeData EditorUpdate;
  VirtualInvokeData ShouldTriggerZoneChange;
  VirtualInvokeData OnZoneChange;
};
struct BaseZone__StaticFields {
};
struct BaseZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BaseZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BaseZone__VTable vtable;
};
struct RectangleGameplayZone__VTable {
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
  VirtualInvokeData get_Category;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_ShouldUpdateWhileDisabled;
  VirtualInvokeData ContainsPoint;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData get_Category_1;
  VirtualInvokeData get_ShouldSerialize;
  VirtualInvokeData get_UpdateType_1;
  VirtualInvokeData get_ShouldUpdateWhileDisabled_1;
  VirtualInvokeData AwakeInternal;
  VirtualInvokeData DestroyInternal;
  VirtualInvokeData OnEnableEditor;
  VirtualInvokeData OnDisableEditor;
  VirtualInvokeData EditorUpdate;
  VirtualInvokeData ShouldTriggerZoneChange;
  VirtualInvokeData OnZoneChange;
  VirtualInvokeData get_EditorBounds;
  VirtualInvokeData set_EditorBounds;
  VirtualInvokeData RefreshBounds;
};
struct RectangleGameplayZone__StaticFields {
};
struct RectangleGameplayZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RectangleGameplayZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RectangleGameplayZone__VTable vtable;
};
struct WaterCurrentZone__VTable {
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
  VirtualInvokeData get_Category;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_ShouldUpdateWhileDisabled;
  VirtualInvokeData ContainsPoint;
  VirtualInvokeData OnEnableRuntime;
  VirtualInvokeData OnDisableRuntime;
  VirtualInvokeData OnZoneUpdate;
  VirtualInvokeData get_Category_1;
  VirtualInvokeData get_ShouldSerialize;
  VirtualInvokeData get_UpdateType_1;
  VirtualInvokeData get_ShouldUpdateWhileDisabled_1;
  VirtualInvokeData AwakeInternal;
  VirtualInvokeData DestroyInternal;
  VirtualInvokeData OnEnableEditor;
  VirtualInvokeData OnDisableEditor;
  VirtualInvokeData EditorUpdate;
  VirtualInvokeData ShouldTriggerZoneChange;
  VirtualInvokeData OnZoneChange;
  VirtualInvokeData get_EditorBounds;
  VirtualInvokeData set_EditorBounds;
  VirtualInvokeData RefreshBounds;
  VirtualInvokeData GetRtpcValue;
};
struct WaterCurrentZone__StaticFields {
};
struct WaterCurrentZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaterCurrentZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaterCurrentZone__VTable vtable;
};
struct MoonReference_1_WaterCurrentZone___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
  VirtualInvokeData get_IsStaticValue;
  VirtualInvokeData GetTypeData;
  VirtualInvokeData CanResolve;
  VirtualInvokeData get_IsCrossSceneReference;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
};
struct MoonReference_1_WaterCurrentZone___StaticFields {
};
struct MoonReference_1_WaterCurrentZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_WaterCurrentZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_WaterCurrentZone___VTable vtable;
};
struct IMoonType_1_VelocityBezierSplineComponent___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_VelocityBezierSplineComponent___StaticFields {
};
struct IMoonType_1_VelocityBezierSplineComponent___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_VelocityBezierSplineComponent___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_VelocityBezierSplineComponent___VTable vtable;
};
struct BezierSpline_BezierSplinePoint__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BezierSpline_BezierSplinePoint__StaticFields {
};
struct BezierSpline_BezierSplinePoint__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BezierSpline_BezierSplinePoint__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BezierSpline_BezierSplinePoint__VTable vtable;
};
struct IEnumerator_1_BezierSpline_BezierSplinePoint___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_BezierSpline_BezierSplinePoint___StaticFields {
};
struct IEnumerator_1_BezierSpline_BezierSplinePoint___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_BezierSpline_BezierSplinePoint___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_BezierSpline_BezierSplinePoint___VTable vtable;
};
struct List_1_BezierSpline_BezierSplinePoint___VTable {
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
struct List_1_BezierSpline_BezierSplinePoint___StaticFields {
  struct BezierSpline_BezierSplinePoint__Array * _emptyArray;
};
struct List_1_BezierSpline_BezierSplinePoint___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_BezierSpline_BezierSplinePoint___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_BezierSpline_BezierSplinePoint___VTable vtable;
};
struct BezierSpline_BezierSplineSegment__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BezierSpline_BezierSplineSegment__StaticFields {
};
struct BezierSpline_BezierSplineSegment__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BezierSpline_BezierSplineSegment__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BezierSpline_BezierSplineSegment__VTable vtable;
};
struct BezierSpline__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetPointCount;
  VirtualInvokeData GetSegmentCount;
  VirtualInvokeData GetPoint;
  VirtualInvokeData GetSegmentLength;
  VirtualInvokeData GetSegmentStartLength;
  VirtualInvokeData GetSegmentEndLength;
  VirtualInvokeData FindSegment;
  VirtualInvokeData GetDrawPosition;
  VirtualInvokeData GetPosition;
  VirtualInvokeData GetTangent;
  VirtualInvokeData GetNormal;
  VirtualInvokeData GetSpeed;
  VirtualInvokeData GetVelocity;
  VirtualInvokeData Rebuild;
  VirtualInvokeData GetColor;
  VirtualInvokeData GetHighlight;
  VirtualInvokeData GetAction;
  VirtualInvokeData PopAction;
};
struct BezierSpline__StaticFields {
};
struct BezierSpline__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BezierSpline__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BezierSpline__VTable vtable;
};
struct BaseSpline__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData __unknown_3;
  VirtualInvokeData __unknown_4;
  VirtualInvokeData __unknown_5;
  VirtualInvokeData __unknown_6;
  VirtualInvokeData __unknown_7;
  VirtualInvokeData __unknown_8;
  VirtualInvokeData __unknown_9;
  VirtualInvokeData __unknown_10;
  VirtualInvokeData __unknown_11;
  VirtualInvokeData __unknown_12;
  VirtualInvokeData Rebuild;
  VirtualInvokeData GetColor;
  VirtualInvokeData GetHighlight;
  VirtualInvokeData GetAction;
  VirtualInvokeData PopAction;
};
struct BaseSpline__StaticFields {
};
struct BaseSpline__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BaseSpline__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BaseSpline__VTable vtable;
};
struct VelocityBezierSpline_VelocityBezierSplinePoint__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VelocityBezierSpline_VelocityBezierSplinePoint__StaticFields {
};
struct VelocityBezierSpline_VelocityBezierSplinePoint__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VelocityBezierSpline_VelocityBezierSplinePoint__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VelocityBezierSpline_VelocityBezierSplinePoint__VTable vtable;
};
struct IEnumerator_1_VelocityBezierSpline_VelocityBezierSplinePoint___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_VelocityBezierSpline_VelocityBezierSplinePoint___StaticFields {
};
struct IEnumerator_1_VelocityBezierSpline_VelocityBezierSplinePoint___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_VelocityBezierSpline_VelocityBezierSplinePoint___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_VelocityBezierSpline_VelocityBezierSplinePoint___VTable vtable;
};
struct List_1_VelocityBezierSpline_VelocityBezierSplinePoint___VTable {
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
struct List_1_VelocityBezierSpline_VelocityBezierSplinePoint___StaticFields {
  struct VelocityBezierSpline_VelocityBezierSplinePoint__Array * _emptyArray;
};
struct List_1_VelocityBezierSpline_VelocityBezierSplinePoint___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_VelocityBezierSpline_VelocityBezierSplinePoint___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_VelocityBezierSpline_VelocityBezierSplinePoint___VTable vtable;
};
struct VelocityBezierSpline_VelocityBezierSplineSegment__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};}