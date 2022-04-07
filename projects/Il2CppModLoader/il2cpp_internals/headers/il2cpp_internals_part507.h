namespace app {
struct CommonSpawnTask__VTable {
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
  VirtualInvokeData SetActivateDamageDealers;
  VirtualInvokeData SetPlatformMovementColliderEnabledState;
};
struct CommonSpawnTask__StaticFields {
};
struct CommonSpawnTask__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CommonSpawnTask__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CommonSpawnTask__VTable vtable;
};

struct EntitySpawnSetup_AfterSpawnStateSetupHolder__Fields {
  struct ChangeStateSetupHolder__Fields _;
};
struct EntitySpawnSetup_AfterSpawnStateSetupHolder {
  struct EntitySpawnSetup_AfterSpawnStateSetupHolder__Class *klass;
  struct MonitorData *monitor;
  struct EntitySpawnSetup_AfterSpawnStateSetupHolder__Fields fields;
};
struct EntitySpawnSetup_AfterSpawnStateSetupHolder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetSetupStates;
  VirtualInvokeData get_UseMapping;
  VirtualInvokeData get_UseDesiredValues;
  VirtualInvokeData get_UseUberState;
  VirtualInvokeData CacheSetupStates;
  VirtualInvokeData GetRequirementsForTimeline;
  VirtualInvokeData get_NewStateName;
};
struct EntitySpawnSetup_AfterSpawnStateSetupHolder__StaticFields {
};
struct EntitySpawnSetup_AfterSpawnStateSetupHolder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntitySpawnSetup_AfterSpawnStateSetupHolder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntitySpawnSetup_AfterSpawnStateSetupHolder__VTable vtable;
};

struct TimelineEntityTask__Fields {
  struct EntityTask__Fields _;
  struct MoonTimeline * Timeline;
  bool PauseLocomotion;
  enum BehaviourStatus__Enum StatusWhileRunning;
};
struct TimelineEntityTask {
  struct TimelineEntityTask__Class *klass;
  struct MonitorData *monitor;
  struct TimelineEntityTask__Fields fields;
};
struct TimelineEntityTask__VTable {
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
};
struct TimelineEntityTask__StaticFields {
};
struct TimelineEntityTask__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimelineEntityTask__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimelineEntityTask__VTable vtable;
};

struct EntityReactionBehaviour_1_BugHornEntity___Fields {
  struct EntityReactionBehaviour__Fields _;
};
struct EntityReactionBehaviour_1_BugHornEntity_ {
  struct EntityReactionBehaviour_1_BugHornEntity___Class *klass;
  struct MonitorData *monitor;
  struct EntityReactionBehaviour_1_BugHornEntity___Fields fields;
};
enum HornBugDeathReaction_State__Enum : int32_t {
  HornBugDeathReaction_State__Enum_Invalid = -1,
  HornBugDeathReaction_State__Enum_Hit = 0,
  HornBugDeathReaction_State__Enum_Fall = 1,
  HornBugDeathReaction_State__Enum_DeathEnd = 2,
  HornBugDeathReaction_State__Enum_Drowning = 3,
};
struct HornBugDeathReaction_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum HornBugDeathReaction_State__Enum value;
};
struct HornBugDeathReaction__Fields {
  struct EntityReactionBehaviour_1_BugHornEntity___Fields _;
  struct MoonTimeline * HitTimeline;
  struct MoonTimeline * FallTimeline;
  struct MoonTimeline * DeathEndTimeline;
  struct DeathStartEffectSpawnSetting * DeathStartEffect;
  struct MoonTimeline * m_currentTimeline;
  struct HornBugHitReactionBehaviour * m_hitReactionBehaviour;
  struct CharacterPlatformMovement * m_platformMovement;
  struct Locomotion * m_locomotion;
  bool m_waitingForDeath;
  enum HornBugDeathReaction_State__Enum m_state;
  float DeathKickbackMinMagnitude;
  float DeathKickbackMinBoost;
  float DeathKickbackMinUpDirection;
  struct MoonTimeline * DrownTimeline;
  float InitialDrowningSubmersion;
  struct GameObject * SplashPrefab;
  struct RootMotionProcessorData * RootMotion;
  float m_timeDrowning;
  struct Vector2 m_initialDrowningSpeed;
  struct EntityWeightData_EntityWeightSettings m_weightData;
  float m_prevYVelocity;
  bool m_isMovingVertically;
};
struct HornBugDeathReaction {
  struct HornBugDeathReaction__Class *klass;
  struct MonitorData *monitor;
  struct HornBugDeathReaction__Fields fields;
};
struct __declspec(align(8)) DeathStartEffectSpawnSetting__Fields {
  struct MoonReference_1_UnityEngine_GameObject_ * Prefab;
  struct MoonReference_1_UnityEngine_Transform_ * InstantiationLocation;
  struct Vector3 InstantiationOffset;
  struct MoonBool * ShouldMirror;
  struct Entity * m_entity;
};
struct DeathStartEffectSpawnSetting {
  struct DeathStartEffectSpawnSetting__Class *klass;
  struct MonitorData *monitor;
  struct DeathStartEffectSpawnSetting__Fields fields;
};
struct EntityHitReactionBehaviour_1_BugHornEntity___Fields {
  struct EntityReactionBehaviour_1_BugHornEntity___Fields _;
  struct List_1_DamageType_ * DamageTypePreventingInterruption;
  struct List_1_DamageWeight_ * DamageWeightPreventingInterruption;
  struct HashSet_1_DamageType_ * m_damageTypePreventingInterruption;
  struct HashSet_1_DamageWeight_ * m_damageWeightPreventingInterruption;
  bool _HasLocomotion_k__BackingField;
  struct CharacterPlatformMovement * m_platformMovement;
  enum EntityWeightData_EntityWeight__Enum m_weight;
  struct HitReactionSettings * m_kickbackSettings;
};
struct EntityHitReactionBehaviour_1_BugHornEntity_ {
  struct EntityHitReactionBehaviour_1_BugHornEntity___Class *klass;
  struct MonitorData *monitor;
  struct EntityHitReactionBehaviour_1_BugHornEntity___Fields fields;
};
struct HornBugHitReactionBehaviour__Fields {
  struct EntityHitReactionBehaviour_1_BugHornEntity___Fields _;
  struct MoonTimeline * HitFront;
  struct MoonTimeline * HitBack;
  struct MoonTimeline * HitAir;
  struct MoonTimeline * HitAdditive;
  struct MoonTimeline * Knockup;
  struct MoonTimeline * Knockback;
  struct MoonTimeline * Knockforward;
  struct MoonTimeline * HitAirAdditive;
  struct List_1_Moon_Timeline_EventTriggerAnimator_ * FlipEvents;
  struct MoonTimeline * HitShake;
  struct EntityDamageEvent * _DamageEvent_k__BackingField;
  float HitForceMultiplier;
  float HeavyHitForceMultiplier;
  float MinYForceForKnockup;
  float MinYForceFromHeavyAttacks;
  bool m_exitEarly;
  struct MoonTimeline * m_currentTimeline;
  struct ReactionFallingBehaviour * m_fallBehaviour;
  struct GroundEntityLocomotion * m_locomotion;
  struct List_1_HornBugHitReactionBehaviour_NonInterruptibleTaskCondition_ * DamageConditionsPreventingInterruption;
  struct Event_1 * OnAnyHitEvent;
  bool DebugPauseOnKnockup;
};
struct HornBugHitReactionBehaviour {
  struct HornBugHitReactionBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct HornBugHitReactionBehaviour__Fields fields;
};
struct __declspec(align(8)) List_1_DamageWeight___Fields {
  struct DamageWeight__Enum__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_DamageWeight_ {
  struct List_1_DamageWeight___Class *klass;
  struct MonitorData *monitor;
  struct List_1_DamageWeight___Fields fields;
};
struct DamageWeight__Enum__Array {
  struct DamageWeight__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum DamageWeight__Enum vector[32];
};
struct IEnumerator_1_DamageWeight_ {
  struct IEnumerator_1_DamageWeight___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) HashSet_1_DamageWeight___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_DamageWeight___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_DamageWeight_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_DamageWeight_ {
  struct HashSet_1_DamageWeight___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_DamageWeight___Fields fields;
};
struct HashSet_1_T_Slot_DamageWeight_ {
  int32_t hashCode;
  int32_t next;
  enum DamageWeight__Enum value;
};
struct HashSet_1_T_Slot_DamageWeight___Boxed {
  struct HashSet_1_T_Slot_DamageWeight___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_DamageWeight_ fields;
};
struct HashSet_1_T_Slot_DamageWeight___Array {
  struct HashSet_1_T_Slot_DamageWeight___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_DamageWeight_ vector[32];
};
struct IEqualityComparer_1_DamageWeight_ {
  struct IEqualityComparer_1_DamageWeight___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_DamageWeight_ {
  struct IEnumerable_1_DamageWeight___Class *klass;
  struct MonitorData *monitor;
};
struct HitReactionSettings__Fields {
  struct ScriptableObject__Fields _;
  bool IsAdditiveKickbackEnabled;
  float KickbackForceDampening;
  float KickbackBaseMultiplier;
  float KickbackVeryLightDamageMultiplier;
  float KickbackLightDamageMultiplier;
  float KickbackMediumDamageMultiplier;
  float KickbackHeavyDamageMultiplier;
  float KickbackHeavierDamageMultiplier;
  float KickbackLightEntityMultiplier;
  float KickbackMediumEntityMultiplier;
  float KickbackHeavyEntityMultiplier;
  bool IsAdditiveAnimScalingEnabled;
  struct Vector2 AdditiveAnimDamageAmountRange;
  struct Vector2 AdditiveAnimWeightRange;
};
struct HitReactionSettings {
  struct HitReactionSettings__Class *klass;
  struct MonitorData *monitor;
  struct HitReactionSettings__Fields fields;
};
enum ReactionFallingBehaviour_FallState__Enum : int32_t {
  ReactionFallingBehaviour_FallState__Enum_Resting = 0,
  ReactionFallingBehaviour_FallState__Enum_Falling = 1,
  ReactionFallingBehaviour_FallState__Enum_Landing = 2,
  ReactionFallingBehaviour_FallState__Enum_HandlingCollision = 3,
};
struct ReactionFallingBehaviour_FallState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ReactionFallingBehaviour_FallState__Enum value;
};
struct ReactionFallingBehaviour__Fields {
  struct EntityReactionBehaviour__Fields _;
  struct MoonTimeline * LandSequenceNew;
  struct MoonTimeline * ShortLandSequence;
  struct LegacyTimelineSequence * LandSequence;
  struct MoonTimeline * FallingTimeline;
  struct MoonTimeline * FallingUpToDownTimeline;
  struct MoonTimeline * FallingUpToDownFastTimeline;
  float VerticalSpeedToEnableUpToDownTransition;
  float VerticalSpeedToStartUpToDownTransition;
  struct MoonAnimation * FallingAnimation;
  bool LoopFallingAnimation;
  struct MoonTimeline * BounceTimeline;
  struct MoonTimeline * SoftBodySlamTimeline;
  struct MoonTimeline * HardBodySlamTimeline;
  struct MoonTimeline * ShakeTimeline;
  struct FloatAnimationParameter * FallSpeedParameter;
  int32_t AnimationPriority;
  struct RootMotionProcessorData * LandRootMotion;
  float CollisionHitStop;
  struct GameObject * ImpactEffect;
  float MinBounceForce;
  float MaxBounceForce;
  float WallRepelForce;
  float BounceEnergyConservation;
  bool LooseExtraEnergyWhenHitWall;
  float ExtraEnergyPercentageTooLooseWhenHitWall;
  float OutOfCameraViewDecelerationX;
  float OutOfCameraViewDecelerationY;
  struct ActiveAnimationHandle m_animation;
  struct Locomotion * m_locomotion;
  enum ReactionFallingBehaviour_FallState__Enum m_state;
  struct Vector3 m_collisionNormal;
  float m_collisionTimer;
  struct Vector2 m_bounceSpeed;
  float m_effectInstantiationTimer;
  bool m_playedShake;
  float m_bounceMultiplier;
  bool m_shouldDoUpToDownTransition;
  bool m_hasDoneUpToDownTransition;
  bool m_useShorLandAnimTrigger;
  bool m_hasHardBodySlamTimeline;
  bool m_hasSoftBodySlamTimeline;
};
struct ReactionFallingBehaviour {
  struct ReactionFallingBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct ReactionFallingBehaviour__Fields fields;
};
struct __declspec(align(8)) List_1_HornBugHitReactionBehaviour_NonInterruptibleTaskCondition___Fields {
  struct HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_HornBugHitReactionBehaviour_NonInterruptibleTaskCondition_ {
  struct List_1_HornBugHitReactionBehaviour_NonInterruptibleTaskCondition___Class *klass;
  struct MonitorData *monitor;
  struct List_1_HornBugHitReactionBehaviour_NonInterruptibleTaskCondition___Fields fields;
};
struct __declspec(align(8)) HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Fields {
  struct MoonReference_1_Moon_BehaviourSystem_ITask_ * Task;
  struct List_1_DamageType_ * DamageTypes;
};
struct HornBugHitReactionBehaviour_NonInterruptibleTaskCondition {
  struct HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Class *klass;
  struct MonitorData *monitor;
  struct HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Fields fields;
};
struct HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array {
  struct HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HornBugHitReactionBehaviour_NonInterruptibleTaskCondition * vector[32];
};
struct IEnumerator_1_HornBugHitReactionBehaviour_NonInterruptibleTaskCondition_ {
  struct IEnumerator_1_HornBugHitReactionBehaviour_NonInterruptibleTaskCondition___Class *klass;
  struct MonitorData *monitor;
};
struct EntityReactionBehaviour_1_BugHornEntity___VTable {
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
struct EntityReactionBehaviour_1_BugHornEntity___StaticFields {
};
struct EntityReactionBehaviour_1_BugHornEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityReactionBehaviour_1_BugHornEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityReactionBehaviour_1_BugHornEntity___VTable vtable;
};
struct DeathStartEffectSpawnSetting__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DeathStartEffectSpawnSetting__StaticFields {
};
struct DeathStartEffectSpawnSetting__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DeathStartEffectSpawnSetting__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DeathStartEffectSpawnSetting__VTable vtable;
};
struct IEnumerator_1_DamageWeight___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_DamageWeight___StaticFields {
};
struct IEnumerator_1_DamageWeight___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_DamageWeight___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_DamageWeight___VTable vtable;
};
struct List_1_DamageWeight___VTable {
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
struct List_1_DamageWeight___StaticFields {
  struct DamageWeight__Enum__Array * _emptyArray;
};
struct List_1_DamageWeight___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_DamageWeight___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_DamageWeight___VTable vtable;
};
struct HashSet_1_T_Slot_DamageWeight___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HashSet_1_T_Slot_DamageWeight___StaticFields {
};
struct HashSet_1_T_Slot_DamageWeight___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_T_Slot_DamageWeight___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_T_Slot_DamageWeight___VTable vtable;
};
struct IEqualityComparer_1_DamageWeight___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_DamageWeight___StaticFields {
};
struct IEqualityComparer_1_DamageWeight___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_DamageWeight___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_DamageWeight___VTable vtable;
};
struct IEnumerable_1_DamageWeight___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_DamageWeight___StaticFields {
};
struct IEnumerable_1_DamageWeight___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_DamageWeight___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_DamageWeight___VTable vtable;
};
struct HashSet_1_DamageWeight___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_T__Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData OnDeserialization;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData OnDeserialization_1;
  VirtualInvokeData Add;
  VirtualInvokeData UnionWith;
};
struct HashSet_1_DamageWeight___StaticFields {
};
struct HashSet_1_DamageWeight___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_DamageWeight___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_DamageWeight___VTable vtable;
};
struct HitReactionSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HitReactionSettings__StaticFields {
  bool s_isLoaded;
  struct HitReactionSettings * s_instance;
};
struct HitReactionSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HitReactionSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HitReactionSettings__VTable vtable;
};
struct EntityHitReactionBehaviour_1_BugHornEntity___VTable {
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
struct EntityHitReactionBehaviour_1_BugHornEntity___StaticFields {
};
struct EntityHitReactionBehaviour_1_BugHornEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityHitReactionBehaviour_1_BugHornEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityHitReactionBehaviour_1_BugHornEntity___VTable vtable;
};
struct ReactionFallingBehaviour__VTable {
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
  VirtualInvokeData get_ShouldLand;
  VirtualInvokeData OnEnterFalling;
  VirtualInvokeData OnExitFalling;
  VirtualInvokeData OnExitLanding;
  VirtualInvokeData FallingUpdate;
  VirtualInvokeData OnEnterLand;
  VirtualInvokeData LandUpdate;
  VirtualInvokeData OnEndLand;
  VirtualInvokeData OnEnterCollision;
  VirtualInvokeData CollisionUpdate;
};
struct ReactionFallingBehaviour__StaticFields {
};
struct ReactionFallingBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReactionFallingBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReactionFallingBehaviour__VTable vtable;
};
struct HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__StaticFields {
};
struct HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__VTable vtable;
};
struct IEnumerator_1_HornBugHitReactionBehaviour_NonInterruptibleTaskCondition___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_HornBugHitReactionBehaviour_NonInterruptibleTaskCondition___StaticFields {
};
struct IEnumerator_1_HornBugHitReactionBehaviour_NonInterruptibleTaskCondition___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_HornBugHitReactionBehaviour_NonInterruptibleTaskCondition___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_HornBugHitReactionBehaviour_NonInterruptibleTaskCondition___VTable vtable;
};
struct List_1_HornBugHitReactionBehaviour_NonInterruptibleTaskCondition___VTable {
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
struct List_1_HornBugHitReactionBehaviour_NonInterruptibleTaskCondition___StaticFields {
  struct HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array * _emptyArray;
};
struct List_1_HornBugHitReactionBehaviour_NonInterruptibleTaskCondition___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_HornBugHitReactionBehaviour_NonInterruptibleTaskCondition___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_HornBugHitReactionBehaviour_NonInterruptibleTaskCondition___VTable vtable;
};
struct HornBugHitReactionBehaviour__VTable {
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
struct HornBugHitReactionBehaviour__StaticFields {
};
struct HornBugHitReactionBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HornBugHitReactionBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HornBugHitReactionBehaviour__VTable vtable;
};
struct HornBugDeathReaction__VTable {
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
};
struct HornBugDeathReaction__StaticFields {
};
struct HornBugDeathReaction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HornBugDeathReaction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HornBugDeathReaction__VTable vtable;
};

struct HornBugDeathReaction_c {
  struct HornBugDeathReaction_c__Class *klass;
  struct MonitorData *monitor;
};
struct HornBugDeathReaction_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HornBugDeathReaction_c__StaticFields {
  struct HornBugDeathReaction_c * __9;
  struct Action * __9__25_0;
};
struct HornBugDeathReaction_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HornBugDeathReaction_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HornBugDeathReaction_c__VTable vtable;
};

struct HornBugFallReactionBehaviour__Fields {
  struct ReactionFallingBehaviour__Fields _;
};
struct HornBugFallReactionBehaviour {
  struct HornBugFallReactionBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct HornBugFallReactionBehaviour__Fields fields;
};
struct HornBugFallReactionBehaviour__VTable {
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
  VirtualInvokeData get_ShouldLand;
  VirtualInvokeData OnEnterFalling;
  VirtualInvokeData OnExitFalling;
  VirtualInvokeData OnExitLanding;
  VirtualInvokeData FallingUpdate;
  VirtualInvokeData OnEnterLand;
  VirtualInvokeData LandUpdate;
  VirtualInvokeData OnEndLand;
  VirtualInvokeData OnEnterCollision;
  VirtualInvokeData CollisionUpdate;
};
struct HornBugFallReactionBehaviour__StaticFields {
};
struct HornBugFallReactionBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HornBugFallReactionBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HornBugFallReactionBehaviour__VTable vtable;
};

struct HornBugHitReactionBehaviour_c {
  struct HornBugHitReactionBehaviour_c__Class *klass;
  struct MonitorData *monitor;
};
struct HornBugHitReactionBehaviour_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HornBugHitReactionBehaviour_c__StaticFields {
  struct HornBugHitReactionBehaviour_c * __9;
  struct Action * __9__32_0;
};
struct HornBugHitReactionBehaviour_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HornBugHitReactionBehaviour_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HornBugHitReactionBehaviour_c__VTable vtable;
};

struct BugHornAgrroSelector {
  struct BugHornAgrroSelector__Class *klass;
  struct MonitorData *monitor;
};
struct BugHornAgrroSelector__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BugHornAgrroSelector__StaticFields {
};
struct BugHornAgrroSelector__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BugHornAgrroSelector__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BugHornAgrroSelector__VTable vtable;
};

enum BugHornEntity_SlamChargeType__Enum : int32_t {
  BugHornEntity_SlamChargeType__Enum_SingleAverage = 0,
  BugHornEntity_SlamChargeType__Enum_Multiple = 1,
};
struct BugHornEntity_SlamChargeType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BugHornEntity_SlamChargeType__Enum value;
};
enum BugHornEntity_LocomotionMode__Enum : int32_t {
  BugHornEntity_LocomotionMode__Enum_Ground = 0,
  BugHornEntity_LocomotionMode__Enum_Air = 1,
};}