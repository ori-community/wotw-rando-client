namespace app {

struct MortarEntity_AimVeloCache_Caster {
  struct MortarEntity_AimVeloCache_Caster__Class *klass;
  struct MonitorData *monitor;
};
struct MortarEntity_AimVeloCache_Caster__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MortarEntity_AimVeloCache_Caster__StaticFields {
  float ArcMaxDuration;
  float ArcTimeStep;
  float HitTolerance;
  struct RaycastHit__Array * s_smallRaycastCache;
};
struct MortarEntity_AimVeloCache_Caster__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MortarEntity_AimVeloCache_Caster__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MortarEntity_AimVeloCache_Caster__VTable vtable;
};

struct EntityReactionBehaviour_1_MortarEntity___Fields {
  struct EntityReactionBehaviour__Fields _;
};
struct EntityReactionBehaviour_1_MortarEntity_ {
  struct EntityReactionBehaviour_1_MortarEntity___Class *klass;
  struct MonitorData *monitor;
  struct EntityReactionBehaviour_1_MortarEntity___Fields fields;
};
struct EntityHitReactionBehaviour_1_MortarEntity___Fields {
  struct EntityReactionBehaviour_1_MortarEntity___Fields _;
  struct List_1_DamageType_ * DamageTypePreventingInterruption;
  struct List_1_DamageWeight_ * DamageWeightPreventingInterruption;
  struct HashSet_1_DamageType_ * m_damageTypePreventingInterruption;
  struct HashSet_1_DamageWeight_ * m_damageWeightPreventingInterruption;
  bool _HasLocomotion_k__BackingField;
  struct CharacterPlatformMovement * m_platformMovement;
  enum EntityWeightData_EntityWeight__Enum m_weight;
  struct HitReactionSettings * m_kickbackSettings;
};
struct EntityHitReactionBehaviour_1_MortarEntity_ {
  struct EntityHitReactionBehaviour_1_MortarEntity___Class *klass;
  struct MonitorData *monitor;
  struct EntityHitReactionBehaviour_1_MortarEntity___Fields fields;
};
struct MortarHitReaction__Fields {
  struct EntityHitReactionBehaviour_1_MortarEntity___Fields _;
  struct MoonTimeline * HitAdditive;
  struct MortarHideBehaviour * HideBehaviour;
  struct Event_1 * OnAnyHitEvent;
};
struct MortarHitReaction {
  struct MortarHitReaction__Class *klass;
  struct MonitorData *monitor;
  struct MortarHitReaction__Fields fields;
};
struct EntityReactionBehaviour_1_MortarEntity___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnEntityInitialization;
  VirtualInvokeData get_InitOrder;
  VirtualInvokeData get_TaskStatus;
  VirtualInvokeData set_TaskStatus;
  VirtualInvokeData get_ForceReturnTaskStatus;
  VirtualInvokeData set_ForceReturnTaskStatus;
  VirtualInvokeData OnExecuteTask;
  VirtualInvokeData OnInitializeTask;
  VirtualInvokeData OnEnterTask;
  VirtualInvokeData OnExitTask;
  VirtualInvokeData OnResetTask;
  VirtualInvokeData get_Entity;
  VirtualInvokeData __unknown;
  VirtualInvokeData OnInitializeTask_1;
  VirtualInvokeData OnEnterTask_1;
  VirtualInvokeData OnExitTask_1;
  VirtualInvokeData OnResetTask_1;
  VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
  VirtualInvokeData ShouldPauseLocomotion;
  VirtualInvokeData get_RunInParallel;
  VirtualInvokeData get_CanInterruptSelf;
  VirtualInvokeData OnCacheSerializedComponents;
  VirtualInvokeData CanInterrupt;
  VirtualInvokeData HandleReasonToNotInterrupt;
};
struct EntityReactionBehaviour_1_MortarEntity___StaticFields {
};
struct EntityReactionBehaviour_1_MortarEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityReactionBehaviour_1_MortarEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityReactionBehaviour_1_MortarEntity___VTable vtable;
};
struct EntityHitReactionBehaviour_1_MortarEntity___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnEntityInitialization;
  VirtualInvokeData get_InitOrder;
  VirtualInvokeData get_TaskStatus;
  VirtualInvokeData set_TaskStatus;
  VirtualInvokeData get_ForceReturnTaskStatus;
  VirtualInvokeData set_ForceReturnTaskStatus;
  VirtualInvokeData OnExecuteTask;
  VirtualInvokeData OnInitializeTask;
  VirtualInvokeData OnEnterTask;
  VirtualInvokeData OnExitTask;
  VirtualInvokeData OnResetTask;
  VirtualInvokeData get_Entity;
  VirtualInvokeData OnExecuteTask_1;
  VirtualInvokeData OnInitializeTask_1;
  VirtualInvokeData OnEnterTask_1;
  VirtualInvokeData OnExitTask_1;
  VirtualInvokeData OnResetTask_1;
  VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
  VirtualInvokeData ShouldPauseLocomotion;
  VirtualInvokeData get_RunInParallel;
  VirtualInvokeData get_CanInterruptSelf;
  VirtualInvokeData OnCacheSerializedComponents;
  VirtualInvokeData CanInterrupt;
  VirtualInvokeData HandleReasonToNotInterrupt;
  VirtualInvokeData IsDamageTypePreventingInterruption;
  VirtualInvokeData IsInterruptingDamageWeight;
};
struct EntityHitReactionBehaviour_1_MortarEntity___StaticFields {
};
struct EntityHitReactionBehaviour_1_MortarEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityHitReactionBehaviour_1_MortarEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityHitReactionBehaviour_1_MortarEntity___VTable vtable;
};
struct MortarHitReaction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnEntityInitialization;
  VirtualInvokeData get_InitOrder;
  VirtualInvokeData get_TaskStatus;
  VirtualInvokeData set_TaskStatus;
  VirtualInvokeData get_ForceReturnTaskStatus;
  VirtualInvokeData set_ForceReturnTaskStatus;
  VirtualInvokeData OnExecuteTask;
  VirtualInvokeData OnInitializeTask;
  VirtualInvokeData OnEnterTask;
  VirtualInvokeData OnExitTask;
  VirtualInvokeData OnResetTask;
  VirtualInvokeData get_Entity;
  VirtualInvokeData OnExecuteTask_1;
  VirtualInvokeData OnInitializeTask_1;
  VirtualInvokeData OnEnterTask_1;
  VirtualInvokeData OnExitTask_1;
  VirtualInvokeData OnResetTask_1;
  VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
  VirtualInvokeData ShouldPauseLocomotion;
  VirtualInvokeData get_RunInParallel;
  VirtualInvokeData get_CanInterruptSelf;
  VirtualInvokeData OnCacheSerializedComponents;
  VirtualInvokeData CanInterrupt;
  VirtualInvokeData HandleReasonToNotInterrupt;
  VirtualInvokeData IsDamageTypePreventingInterruption;
  VirtualInvokeData IsInterruptingDamageWeight;
};
struct MortarHitReaction__StaticFields {
};
struct MortarHitReaction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MortarHitReaction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MortarHitReaction__VTable vtable;
};

struct MortarHitReaction_c {
  struct MortarHitReaction_c__Class *klass;
  struct MonitorData *monitor;
};
struct MortarHitReaction_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MortarHitReaction_c__StaticFields {
  struct MortarHitReaction_c * __9;
  struct Action * __9__9_0;
};
struct MortarHitReaction_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MortarHitReaction_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MortarHitReaction_c__VTable vtable;
};

struct TriggerColliderCallback_c {
  struct TriggerColliderCallback_c__Class *klass;
  struct MonitorData *monitor;
};
struct TriggerColliderCallback_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TriggerColliderCallback_c__StaticFields {
  struct TriggerColliderCallback_c * __9;
  struct TriggerColliderCallback_OnTrigger_Callback * __9__7_0;
  struct TriggerColliderCallback_OnTrigger_Callback * __9__7_1;
  struct TriggerColliderCallback_OnTrigger_Callback * __9__7_2;
};
struct TriggerColliderCallback_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TriggerColliderCallback_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TriggerColliderCallback_c__VTable vtable;
};

struct AirLocomotion__Fields {
  struct Locomotion__Fields _;
};
struct AirLocomotion {
  struct AirLocomotion__Class *klass;
  struct MonitorData *monitor;
  struct AirLocomotion__Fields fields;
};
struct AirLocomotion__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveToPoint;
  VirtualInvokeData MoveInTheDirection;
  VirtualInvokeData Stop;
  VirtualInvokeData get_TraversalTier;
  VirtualInvokeData set_TraversalTier;
  VirtualInvokeData get_FeetPosition;
  VirtualInvokeData get_HasArrivedAtTarget;
  VirtualInvokeData get_IsMovingToTarget;
  VirtualInvokeData get_GravityDirection;
  VirtualInvokeData OnEntityReset;
  VirtualInvokeData OnEntityInitialization;
  VirtualInvokeData get_InitOrder;
  VirtualInvokeData get_PreviusPositionForWaterfallInteraction;
  VirtualInvokeData get_PositionForWaterfallInteraction;
  VirtualInvokeData get_SpeedForWaterfallInteraction;
  VirtualInvokeData set_SpeedForWaterfallInteraction;
  VirtualInvokeData get_BoundsForWaterfallInteraction;
  VirtualInvokeData get_WaterfallIntersectionMode;
  VirtualInvokeData get_RigidbodyForWaterfallInteraction;
  VirtualInvokeData get_IsFlamable;
  VirtualInvokeData Prewarm;
  VirtualInvokeData get_FeetTransform;
  VirtualInvokeData get_FeetPosition_1;
  VirtualInvokeData get_HasArrivedAtTarget_1;
  VirtualInvokeData get_Gravity;
  VirtualInvokeData set_Gravity;
  VirtualInvokeData get_Weight;
  VirtualInvokeData set_Weight;
  VirtualInvokeData get_Entity;
  VirtualInvokeData get_ShouldReset;
  VirtualInvokeData get_IsMovingToTarget_1;
  VirtualInvokeData get_GravityDirection_1;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData OnPrewarm;
  VirtualInvokeData OnEntityInitialization_1;
  VirtualInvokeData Awake;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData ConfigureStateMachine;
  VirtualInvokeData get_DefaultFSMState;
  VirtualInvokeData OnEntityReset_1;
  VirtualInvokeData ResetLocomotion;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData UpdateLocomotionBehaviours;
  VirtualInvokeData GetNextBehaviour;
  VirtualInvokeData MoveToPoint_1;
  VirtualInvokeData MoveInTheDirection_1;
  VirtualInvokeData Stop_1;
};
struct AirLocomotion__StaticFields {
};
struct AirLocomotion__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AirLocomotion__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AirLocomotion__VTable vtable;
};

enum MothAggroState__Enum : int32_t {
  MothAggroState__Enum_Idle = 0,
  MothAggroState__Enum_Aggrod = 1,
  MothAggroState__Enum_LostAggro = 2,
};
struct MothAggroState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MothAggroState__Enum value;
};
struct __declspec(align(8)) MothAgroSelector__Fields {
  enum MothAggroState__Enum m_previusState;
};
struct MothAgroSelector {
  struct MothAgroSelector__Class *klass;
  struct MonitorData *monitor;
  struct MothAgroSelector__Fields fields;
};
struct MothAgroSelector__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MothAgroSelector__StaticFields {
};
struct MothAgroSelector__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MothAgroSelector__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MothAgroSelector__VTable vtable;
};

struct MothEnemy__Fields {
  struct EnemyEntity__Fields _;
  struct MothSwarmer * m_swarmer;
  float m_frozenTimer;
  bool m_isCarryingStickyMine;
  float MainPOIRadiusIdle;
  float MainPOIRadiusSeek;
  float ImmunityToDamageTimer;
  struct Transform * LeftWing;
  struct Transform * RightWing;
  struct AnimationCurve * WingFlapingCurve;
  float WingFlapingScale;
  float WingFlapingSpeed;
  float LandedWingFlapingSpeed;
  float RotationMultiplier;
  float RotationOffset;
  float m_wingTimer;
  struct Vector3 m_wingRotationBuffer;
  struct Transform * m_transform;
  bool _ShouldFlock_k__BackingField;
  bool _IsLanded_k__BackingField;
  struct Vector3 _PathTarget_k__BackingField;
  float _ReactionTime_k__BackingField;
};
struct MothEnemy {
  struct MothEnemy__Class *klass;
  struct MonitorData *monitor;
  struct MothEnemy__Fields fields;
};
struct __declspec(align(8)) UberSwarmer__Fields {
  struct UberSwarmerSettings * Settings;
  struct UberSwarm * m_swarm;
  struct Vector2 m_separation;
  struct Vector2 m_alignment;
  struct Vector2 m_cohesion;
  struct Vector2 m_wander;
  struct Vector2 m_obstacleAvoidance;
  struct Vector2 m_globalPOI;
  float m_wanderAngle;
  float m_noiseTimer;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct UberSwarmer {
  struct UberSwarmer__Class *klass;
  struct MonitorData *monitor;
  struct UberSwarmer__Fields fields;
};
struct MothSwarmer__Fields {
  struct UberSwarmer__Fields _;
  struct Vector2 MainPOI;
  float MainPOIRadius;
  bool Avoid;
  struct MothEnemy * m_enemy;
  struct Transform * m_transform;
  struct Rigidbody * m_rigidbody;
  struct Vector2 m_poiInfluence;
};
struct MothSwarmer {
  struct MothSwarmer__Class *klass;
  struct MonitorData *monitor;
  struct MothSwarmer__Fields fields;
};
struct UberSwarmerSettings__Fields {
  struct ScriptableObject__Fields _;
  float SeparationWeight;
  float AlignmentWeight;
  float CohesionWeight;
  float WanderWeight;
  float ObstacleAvoidanceWeight;
  float GlobalPOIWeight;
  float Speed;
  float Acceleration;
  float MinSpeed;
  float MaxSpeed;
  float MaxSteer;
  float NeighbourRadiusAlignment;
  float NeighbourRadiusCohesion;
  float DesiredSeparation;
  float MaxObstacleLookupDistance;
  float MaxObstacleLookupDistance45;
  float MaxObstacleLookupDistance90;
  float DistanceWeightThreshold;
  float WanderCircleRadius;
  float WanderCircleOffset;
  float WanderRateInDegrees;
  float NoiseForce;
  float NoiseFrequency;
  struct LayerMask RaycastLayerMask;
};
struct UberSwarmerSettings {
  struct UberSwarmerSettings__Class *klass;
  struct MonitorData *monitor;
  struct UberSwarmerSettings__Fields fields;
};
struct UberSwarm__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_UberSwarmer_ * Swarmers;
  struct LayerMask RaycastLayerMask;
  bool DebugShowVectorAlignment;
  bool DebugShowVectorSeparation;
  bool DebugShowVectorCohesion;
  bool DebugShowVectorAvoidance;
  bool DebugShowVectorGlobalPOI;
  bool DebugShowVectorWander;
  bool DebugShowRaysAvoidance;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct UberSwarm {
  struct UberSwarm__Class *klass;
  struct MonitorData *monitor;
  struct UberSwarm__Fields fields;
};
struct __declspec(align(8)) List_1_UberSwarmer___Fields {
  struct UberSwarmer__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UberSwarmer_ {
  struct List_1_UberSwarmer___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UberSwarmer___Fields fields;
};
struct UberSwarmer__Array {
  struct UberSwarmer__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberSwarmer * vector[32];
};
struct IEnumerator_1_UberSwarmer_ {
  struct IEnumerator_1_UberSwarmer___Class *klass;
  struct MonitorData *monitor;
};
enum UberSwarm_SwarmerEvent__Enum : int32_t {
  UberSwarm_SwarmerEvent__Enum_Hit = 0,
  UberSwarm_SwarmerEvent__Enum_Killed = 1,
  UberSwarm_SwarmerEvent__Enum_StickyMineStuck = 2,
};
struct UberSwarm_SwarmerEvent__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UberSwarm_SwarmerEvent__Enum value;
};
struct MothSwarm__Fields {
  struct UberSwarm__Fields _;
};
struct MothSwarm {
  struct MothSwarm__Class *klass;
  struct MonitorData *monitor;
  struct MothSwarm__Fields fields;
};
struct UberSwarmerSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberSwarmerSettings__StaticFields {
};
struct UberSwarmerSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberSwarmerSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberSwarmerSettings__VTable vtable;
};
struct IEnumerator_1_UberSwarmer___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UberSwarmer___StaticFields {
};
struct IEnumerator_1_UberSwarmer___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UberSwarmer___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UberSwarmer___VTable vtable;
};
struct List_1_UberSwarmer___VTable {
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
struct List_1_UberSwarmer___StaticFields {
  struct UberSwarmer__Array * _emptyArray;
};
struct List_1_UberSwarmer___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UberSwarmer___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UberSwarmer___VTable vtable;
};
struct UberSwarm__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData OnSwarmerEvent;
};
struct UberSwarm__StaticFields {
};
struct UberSwarm__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberSwarm__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberSwarm__VTable vtable;
};
struct UberSwarmer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData get_Position;
  VirtualInvokeData set_Position;
  VirtualInvokeData get_Velocity;
  VirtualInvokeData set_Velocity;
  VirtualInvokeData ISwarmer_get_IsActive;
  VirtualInvokeData ISwarmer_set_IsActive;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData __unknown_3;
  VirtualInvokeData __unknown_4;
  VirtualInvokeData CalculateExtraVelocities;
};
struct UberSwarmer__StaticFields {
};
struct UberSwarmer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberSwarmer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberSwarmer__VTable vtable;
};
struct MothSwarmer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData get_Position;
  VirtualInvokeData set_Position;
  VirtualInvokeData get_Velocity;
  VirtualInvokeData set_Velocity;
  VirtualInvokeData ISwarmer_get_IsActive;
  VirtualInvokeData ISwarmer_set_IsActive;
  VirtualInvokeData get_Position_1;
  VirtualInvokeData set_Position_1;
  VirtualInvokeData get_Velocity_1;
  VirtualInvokeData set_Velocity_1;
  VirtualInvokeData get_IsActive;
  VirtualInvokeData CalculateExtraVelocities;
};
struct MothSwarmer__StaticFields {
};
struct MothSwarmer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MothSwarmer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MothSwarmer__VTable vtable;
};
struct MothEnemy__VTable {
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
struct MothEnemy__StaticFields {
};
struct MothEnemy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MothEnemy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MothEnemy__VTable vtable;
};
struct MothSwarm__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData OnSwarmerEvent;
};
struct MothSwarm__StaticFields {
};
struct MothSwarm__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MothSwarm__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MothSwarm__VTable vtable;
};

struct MothLandBehaviour__Fields {
  struct EntityBehaviour__Fields _;
  float _LandRadius_k__BackingField;
  struct LayerMask LandLayer;
  struct MothEnemy * m_mothEnemy;
  struct Vector2 m_pointToLand;
  struct Vector2 m_pointToLandNormal;
  struct RaycastHit m_hit;
  bool m_spotFound;
};
struct MothLandBehaviour {
  struct MothLandBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct MothLandBehaviour__Fields fields;
};
struct MothLandBehaviour__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ExecutingObject;
  VirtualInvokeData set_ExecutingObject;
  VirtualInvokeData get_Entity;
  VirtualInvokeData get_Status;
  VirtualInvokeData get_ShouldPauseTree;
  VirtualInvokeData get_ShouldPauseLocomotion;
  VirtualInvokeData get_Utility;
  VirtualInvokeData get_DebugData;
  VirtualInvokeData get_OnEndBehaviourEvent;
  VirtualInvokeData set_OnEndBehaviourEvent;
  VirtualInvokeData Execute;
  VirtualInvokeData Interrupt;
  VirtualInvokeData UpdateBehaviour;
  VirtualInvokeData OnEntityInitialization;
  VirtualInvokeData get_InitOrder;
  VirtualInvokeData get_Utility_1;
  VirtualInvokeData Interrupt_1;
  VirtualInvokeData GetShouldPauseTree;
  VirtualInvokeData GetShouldPauseLocomotion;
  VirtualInvokeData OnInitialize;
  VirtualInvokeData OnExecute;
  VirtualInvokeData OnUpdateBehaviour;
  VirtualInvokeData OnEndBehaviour;
};
struct MothLandBehaviour__StaticFields {
};
struct MothLandBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MothLandBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MothLandBehaviour__VTable vtable;
};

struct MothSeekBehaviour__Fields {
  struct EntityBehaviour__Fields _;
};
struct MothSeekBehaviour {
  struct MothSeekBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct MothSeekBehaviour__Fields fields;
};
struct MothSeekBehaviour__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ExecutingObject;
  VirtualInvokeData set_ExecutingObject;
  VirtualInvokeData get_Entity;
  VirtualInvokeData get_Status;
  VirtualInvokeData get_ShouldPauseTree;
  VirtualInvokeData get_ShouldPauseLocomotion;
  VirtualInvokeData get_Utility;
  VirtualInvokeData get_DebugData;
  VirtualInvokeData get_OnEndBehaviourEvent;
  VirtualInvokeData set_OnEndBehaviourEvent;
  VirtualInvokeData Execute;
  VirtualInvokeData Interrupt;
  VirtualInvokeData UpdateBehaviour;
  VirtualInvokeData OnEntityInitialization;
  VirtualInvokeData get_InitOrder;
  VirtualInvokeData get_Utility_1;
  VirtualInvokeData Interrupt_1;
  VirtualInvokeData GetShouldPauseTree;
  VirtualInvokeData GetShouldPauseLocomotion;
  VirtualInvokeData OnInitialize;
  VirtualInvokeData OnExecute;
  VirtualInvokeData OnUpdateBehaviour;
  VirtualInvokeData OnEndBehaviour;
};
struct MothSeekBehaviour__StaticFields {
};
struct MothSeekBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MothSeekBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MothSeekBehaviour__VTable vtable;
};

struct MothSwarmPlaceholder__Fields {
  struct MonoBehaviour__Fields _;
};
struct MothSwarmPlaceholder {
  struct MothSwarmPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct MothSwarmPlaceholder__Fields fields;
};
struct MothSwarmPlaceholder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MothSwarmPlaceholder__StaticFields {
};
struct MothSwarmPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MothSwarmPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MothSwarmPlaceholder__VTable vtable;
};

enum PetrifiedOwlAttackCategory__Enum : int32_t {
  PetrifiedOwlAttackCategory__Enum_Common = 0,
  PetrifiedOwlAttackCategory__Enum_Special = 1,
  PetrifiedOwlAttackCategory__Enum_NonAttack = 2,
  PetrifiedOwlAttackCategory__Enum_Cinematic = 3,
};
struct PetrifiedOwlAttackCategory__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PetrifiedOwlAttackCategory__Enum value;
};
struct __declspec(align(8)) PetrifiedOwlBehaviourSettings__Fields {
  struct PetrifiedOwlBossEntity_Phases__Enum__Array * AllowedPhases;
  bool IsBlocking;
  enum PetrifiedOwlAttackCategory__Enum Category;
};
struct PetrifiedOwlBehaviourSettings {
  struct PetrifiedOwlBehaviourSettings__Class *klass;
  struct MonitorData *monitor;
  struct PetrifiedOwlBehaviourSettings__Fields fields;
};
enum PetrifiedOwlBossEntity_Phases__Enum : int32_t {
  PetrifiedOwlBossEntity_Phases__Enum_NotStarted = 0,
  PetrifiedOwlBossEntity_Phases__Enum_Fight1 = 1,
  PetrifiedOwlBossEntity_Phases__Enum_Escape1 = 2,
  PetrifiedOwlBossEntity_Phases__Enum_Fight2 = 3,
  PetrifiedOwlBossEntity_Phases__Enum_Fight3 = 4,
  PetrifiedOwlBossEntity_Phases__Enum_Completed = 5,
};
struct PetrifiedOwlBossEntity_Phases__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PetrifiedOwlBossEntity_Phases__Enum value;
};
struct PetrifiedOwlBossEntity_Phases__Enum__Array {
  struct PetrifiedOwlBossEntity_Phases__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum PetrifiedOwlBossEntity_Phases__Enum vector[32];
};
struct PetrifiedOwlBehaviourSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PetrifiedOwlBehaviourSettings__StaticFields {
};
struct PetrifiedOwlBehaviourSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlBehaviourSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlBehaviourSettings__VTable vtable;
};

struct EntityBehaviourNode_1_PetrifiedOwlBossEntity___Fields {
  struct EntityBehaviourNode__Fields _;
};}