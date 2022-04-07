namespace app {
struct TimelineEventTrigger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_IsInScene;
  VirtualInvokeData set_IsInScene;
  VirtualInvokeData Convert;
  VirtualInvokeData OnPostTimeSlicedEnable;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData get_IsLooping;
  VirtualInvokeData get_CurrentTime;
  VirtualInvokeData set_CurrentTime;
  VirtualInvokeData OnPoolSpawned_1;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData Play;
  VirtualInvokeData Stop;
  VirtualInvokeData Pause;
  VirtualInvokeData OnFixedUpdate_1;
  VirtualInvokeData CacheOriginals;
  VirtualInvokeData SampleValue;
  VirtualInvokeData UpdateDurationAndTimeCache;
  VirtualInvokeData OnStartPlay;
  VirtualInvokeData OnStopPlay;
  VirtualInvokeData get_Duration;
  VirtualInvokeData RestoreToOriginalState;
  VirtualInvokeData Convert_1;
  VirtualInvokeData get_EventProviderName;
  VirtualInvokeData get_EventStart;
  VirtualInvokeData set_EventStart;
  VirtualInvokeData get_EventStay;
  VirtualInvokeData set_EventStay;
  VirtualInvokeData get_EventEnd;
  VirtualInvokeData set_EventEnd;
};
struct TimelineEventTrigger__StaticFields {
};
struct TimelineEventTrigger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimelineEventTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimelineEventTrigger__VTable vtable;
};
struct ShootProjectileBehaviour__VTable {
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
  VirtualInvokeData Shoot;
};
struct ShootProjectileBehaviour__StaticFields {
};
struct ShootProjectileBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShootProjectileBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShootProjectileBehaviour__VTable vtable;
};
struct ShootMultiProjectileRadialBehaviour__VTable {
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
  VirtualInvokeData Shoot;
};
struct ShootMultiProjectileRadialBehaviour__StaticFields {
};
struct ShootMultiProjectileRadialBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShootMultiProjectileRadialBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShootMultiProjectileRadialBehaviour__VTable vtable;
};

struct SpikeSlugKickUpReactionBehaviour__Fields {
  struct UpperKickReactionBehaviour__Fields _;
  float AirSpinRotationAmount;
  bool m_shouldSkipUpdate;
  struct SpikeSlugLocomotion * m_slugLocomotion;
  struct SpikeSlugEntity * m_slug;
};
struct SpikeSlugKickUpReactionBehaviour {
  struct SpikeSlugKickUpReactionBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SpikeSlugKickUpReactionBehaviour__Fields fields;
};
struct SpikeSlugKickUpReactionBehaviour__VTable {
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
  VirtualInvokeData get_ShouldSkipUpdate;
};
struct SpikeSlugKickUpReactionBehaviour__StaticFields {
};
struct SpikeSlugKickUpReactionBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpikeSlugKickUpReactionBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpikeSlugKickUpReactionBehaviour__VTable vtable;
};

struct StepMovementBehaviour__Fields {
  struct EntityBehaviour__Fields _;
  struct AnimationCurve * StepSpeedOverTimeNormalized;
  float MaxStepSpeed;
  struct Vector3 InitPosition;
  float MaxDistanceFromInitPos;
  float MaxStepTime;
  struct LegacyTimelineSequence * StepTS;
  float m_timer;
  struct Locomotion * m_locomotion;
};
struct StepMovementBehaviour {
  struct StepMovementBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct StepMovementBehaviour__Fields fields;
};
struct StepMovementBehaviour__VTable {
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
struct StepMovementBehaviour__StaticFields {
};
struct StepMovementBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StepMovementBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StepMovementBehaviour__VTable vtable;
};

struct SlugHitBehaviour__Fields {
  struct EntityBehaviour__Fields _;
  struct ClipAnimation * KickBackAnimation;
  struct ClipAnimation * KickBackAirAnimation;
  struct SoundProvider * KickBackSoundProvider;
  struct ClipAnimation * KickForwardAnimation;
  struct ClipAnimation * KickForwardAirAnimation;
  struct SoundProvider * KickForwardSoundProvider;
  struct RootMotionProcessor * RootMotion;
  int32_t AnimationPriority;
  bool RestartAnimationForEachExecution;
  struct DamageDealer__Array * disableDamageDealers;
  struct Locomotion * m_locomotion;
  struct IActiveAnimation * m_animationState;
  struct Dictionary_2_Moon_ClipAnimation_SoundProvider_ * m_animToSoundDic;
  struct Damage * m_lastDamageReceived;
};
struct SlugHitBehaviour {
  struct SlugHitBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SlugHitBehaviour__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_Moon_ClipAnimation_SoundProvider___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_Moon_ClipAnimation_SoundProvider___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_Moon_ClipAnimation_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_ClipAnimation_SoundProvider_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_ClipAnimation_SoundProvider_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_Moon_ClipAnimation_SoundProvider_ {
  struct Dictionary_2_Moon_ClipAnimation_SoundProvider___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_Moon_ClipAnimation_SoundProvider___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_ClipAnimation_SoundProvider_ {
  int32_t hashCode;
  int32_t next;
  struct ClipAnimation * key;
  struct SoundProvider * value;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_ClipAnimation_SoundProvider___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_Moon_ClipAnimation_SoundProvider___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_Moon_ClipAnimation_SoundProvider_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_ClipAnimation_SoundProvider___Array {
  struct Dictionary_2_TKey_TValue_Entry_Moon_ClipAnimation_SoundProvider___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_Moon_ClipAnimation_SoundProvider_ vector[32];
};
struct IEqualityComparer_1_Moon_ClipAnimation_ {
  struct IEqualityComparer_1_Moon_ClipAnimation___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Moon_ClipAnimation_SoundProvider___Fields {
  struct Dictionary_2_Moon_ClipAnimation_SoundProvider_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_ClipAnimation_SoundProvider_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_ClipAnimation_SoundProvider___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_ClipAnimation_SoundProvider___Fields fields;
};
struct ClipAnimation__Array {
  struct ClipAnimation__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ClipAnimation * vector[32];
};
struct IEnumerator_1_Moon_ClipAnimation_ {
  struct IEnumerator_1_Moon_ClipAnimation___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Moon_ClipAnimation_SoundProvider___Fields {
  struct Dictionary_2_Moon_ClipAnimation_SoundProvider_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_ClipAnimation_SoundProvider_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_ClipAnimation_SoundProvider___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_ClipAnimation_SoundProvider___Fields fields;
};
struct SoundProvider__Array {
  struct SoundProvider__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SoundProvider * vector[32];
};
struct IEnumerator_1_SoundProvider_ {
  struct IEnumerator_1_SoundProvider___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_Moon_ClipAnimation_ {
  struct ICollection_1_Moon_ClipAnimation___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_SoundProvider_ {
  struct ICollection_1_SoundProvider___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_Moon_ClipAnimation_SoundProvider_ {
  struct ClipAnimation * key;
  struct SoundProvider * value;
};
struct KeyValuePair_2_Moon_ClipAnimation_SoundProvider___Boxed {
  struct KeyValuePair_2_Moon_ClipAnimation_SoundProvider___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_Moon_ClipAnimation_SoundProvider_ fields;
};
struct KeyValuePair_2_Moon_ClipAnimation_SoundProvider___Array {
  struct KeyValuePair_2_Moon_ClipAnimation_SoundProvider___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_Moon_ClipAnimation_SoundProvider_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_Moon_ClipAnimation_SoundProvider_ {
  struct IEnumerator_1_KeyValuePair_2_Moon_ClipAnimation_SoundProvider___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_ClipAnimation_ {
  struct IEnumerable_1_Moon_ClipAnimation___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_SoundProvider_ {
  struct IEnumerable_1_SoundProvider___Class *klass;
  struct MonitorData *monitor;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_ClipAnimation_SoundProvider___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_ClipAnimation_SoundProvider___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_Moon_ClipAnimation_SoundProvider___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_Moon_ClipAnimation_SoundProvider___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_Moon_ClipAnimation_SoundProvider___VTable vtable;
};
struct IEqualityComparer_1_Moon_ClipAnimation___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_Moon_ClipAnimation___StaticFields {
};
struct IEqualityComparer_1_Moon_ClipAnimation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_Moon_ClipAnimation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_Moon_ClipAnimation___VTable vtable;
};
struct IEnumerator_1_Moon_ClipAnimation___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_ClipAnimation___StaticFields {
};
struct IEnumerator_1_Moon_ClipAnimation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_ClipAnimation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_ClipAnimation___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_ClipAnimation_SoundProvider___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
};
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_ClipAnimation_SoundProvider___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_ClipAnimation_SoundProvider___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_ClipAnimation_SoundProvider___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_ClipAnimation_SoundProvider___VTable vtable;
};
struct IEnumerator_1_SoundProvider___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_SoundProvider___StaticFields {
};
struct IEnumerator_1_SoundProvider___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_SoundProvider___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_SoundProvider___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_ClipAnimation_SoundProvider___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
};
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_ClipAnimation_SoundProvider___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_ClipAnimation_SoundProvider___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_ClipAnimation_SoundProvider___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_ClipAnimation_SoundProvider___VTable vtable;
};
struct ICollection_1_Moon_ClipAnimation___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_Moon_ClipAnimation___StaticFields {
};
struct ICollection_1_Moon_ClipAnimation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_Moon_ClipAnimation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_Moon_ClipAnimation___VTable vtable;
};
struct ICollection_1_SoundProvider___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_SoundProvider___StaticFields {
};
struct ICollection_1_SoundProvider___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_SoundProvider___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_SoundProvider___VTable vtable;
};
struct KeyValuePair_2_Moon_ClipAnimation_SoundProvider___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_Moon_ClipAnimation_SoundProvider___StaticFields {
};
struct KeyValuePair_2_Moon_ClipAnimation_SoundProvider___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_Moon_ClipAnimation_SoundProvider___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_Moon_ClipAnimation_SoundProvider___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_Moon_ClipAnimation_SoundProvider___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_Moon_ClipAnimation_SoundProvider___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_Moon_ClipAnimation_SoundProvider___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_Moon_ClipAnimation_SoundProvider___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_Moon_ClipAnimation_SoundProvider___VTable vtable;
};
struct IEnumerable_1_Moon_ClipAnimation___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_Moon_ClipAnimation___StaticFields {
};
struct IEnumerable_1_Moon_ClipAnimation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_Moon_ClipAnimation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_Moon_ClipAnimation___VTable vtable;
};
struct IEnumerable_1_SoundProvider___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_SoundProvider___StaticFields {
};
struct IEnumerable_1_SoundProvider___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_SoundProvider___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_SoundProvider___VTable vtable;
};
struct Dictionary_2_Moon_ClipAnimation_SoundProvider___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
  VirtualInvokeData ContainsKey;
  VirtualInvokeData Add;
  VirtualInvokeData Remove;
  VirtualInvokeData TryGetValue;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
  VirtualInvokeData Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IDictionary_get_Item;
  VirtualInvokeData System_Collections_IDictionary_set_Item;
  VirtualInvokeData System_Collections_IDictionary_get_Keys;
  VirtualInvokeData System_Collections_IDictionary_get_Values;
  VirtualInvokeData System_Collections_IDictionary_Contains;
  VirtualInvokeData System_Collections_IDictionary_Add;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
  VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
  VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
  VirtualInvokeData System_Collections_IDictionary_Remove;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData ContainsKey_1;
  VirtualInvokeData TryGetValue_1;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
  VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
  VirtualInvokeData get_Count_2;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData OnDeserialization;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData OnDeserialization_1;
};
struct Dictionary_2_Moon_ClipAnimation_SoundProvider___StaticFields {
};
struct Dictionary_2_Moon_ClipAnimation_SoundProvider___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_Moon_ClipAnimation_SoundProvider___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_Moon_ClipAnimation_SoundProvider___VTable vtable;
};
struct SlugHitBehaviour__VTable {
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
struct SlugHitBehaviour__StaticFields {
};
struct SlugHitBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SlugHitBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SlugHitBehaviour__VTable vtable;
};

enum SlugKickupHitBehaviour_KickupState__Enum : int32_t {
  SlugKickupHitBehaviour_KickupState__Enum_Kickup = 0,
  SlugKickupHitBehaviour_KickupState__Enum_Falling = 1,
  SlugKickupHitBehaviour_KickupState__Enum_Landing = 2,
  SlugKickupHitBehaviour_KickupState__Enum_Death = 3,
};
struct SlugKickupHitBehaviour_KickupState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SlugKickupHitBehaviour_KickupState__Enum value;
};
struct SlugKickupHitBehaviour__Fields {
  struct EntityReactionBehaviour__Fields _;
  enum SlugKickupHitBehaviour_KickupState__Enum State;
  struct LegacyTimelineSequence * GroundHitAnimator;
  struct LegacyTimelineSequence * AirHitAnimator;
  struct LegacyTimelineSequence * KickupAnimator;
  struct LegacyTimelineSequence * LandingAnimator;
  struct LegacyTimelineSequence * HardLandingAnimator;
  struct LegacyTimelineSequence * DeathAnimator;
  struct RootMotionProcessorData * RootMotion;
  struct RootMotionProcessorData * LandingRootMotion;
  struct RootMotionProcessorData * DeathRootMotion;
  struct OrbSpawner * OrbSpawner;
  struct TimelineEventTrigger * OrbSpawnEventTrigger;
  struct GroundEntityLocomotion * m_locomotion;
  struct LegacyTimelineSequence * m_hitAnim;
  float MaxAngularSpeed;
  struct Transform * m_rotationTransform;
  struct LayerMask GroundMask;
  float alignTime;
  float destAngle;
  float bounceMult;
  float minBounce;
  float retToNeutralMod;
  float m_angularSpeed;
  int32_t consecutiveHitsForKickup;
  float m_initLerpAngle;
  float m_initLerpDeltaAngle;
  bool m_initLerpAngleSet;
  float m_angle;
  bool m_bouncedGround;
  bool m_bouncedWall;
  int32_t m_consecutiveHits;
  float m_lastHitTime;
  struct HitReactionBehaviour * m_hitReaction;
  struct Vector2 m_hitDirection;
  float consHitDirectionAddY;
  float consHitDirectionMultX;
  bool stickToWallsWhenFalling;
  float upsideDownDirectionAddY;
  bool m_wasCacheSerialized;
};
struct SlugKickupHitBehaviour {
  struct SlugKickupHitBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SlugKickupHitBehaviour__Fields fields;
};
struct SlugKickupHitBehaviour__VTable {
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
struct SlugKickupHitBehaviour__StaticFields {
};
struct SlugKickupHitBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SlugKickupHitBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SlugKickupHitBehaviour__VTable vtable;
};

struct SlugPlaceholder__Fields {
  struct EntityPlaceholder__Fields _;
  enum GroundPatrolDirectionMode__Enum MovementPattern;
  bool ShouldIdleDuringPatrol;
  struct GameObject * SlugEntityPrefab;
};
struct SlugPlaceholder {
  struct SlugPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct SlugPlaceholder__Fields fields;
};
struct SlugPlaceholder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData IDisableOnRecordablePreview_get_gameObject;
  VirtualInvokeData OnSceneRootPreDisable;
  VirtualInvokeData get_Prefab;
  VirtualInvokeData get_RequiresGroundToSpawn;
  VirtualInvokeData get_CheckForOverlap;
  VirtualInvokeData ClearPrefabLinks;
  VirtualInvokeData get_CanSpawn;
  VirtualInvokeData InstantiateInstance;
  VirtualInvokeData PoolCurrentInstance;
  VirtualInvokeData Spawn;
  VirtualInvokeData OnStart;
  VirtualInvokeData OnPlaceholderEnable;
  VirtualInvokeData OnPlaceholderDisable;
  VirtualInvokeData OnRestoreCheckpoint;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData OnHealthZero;
  VirtualInvokeData OnDeath;
  VirtualInvokeData UpdateAutoSpawnState;
  VirtualInvokeData UpdateSpawnOnEventState;
  VirtualInvokeData get_IsOnScreenPaddedExtended;
  VirtualInvokeData get_IsOnScreenPadded;
  VirtualInvokeData get_IsOnScreen;
  VirtualInvokeData InstantiateFromPooledObj;
  VirtualInvokeData IsUsingVariations;
  VirtualInvokeData CanUseAutosetupPositionInOnSand;
};
struct SlugPlaceholder__StaticFields {
};
struct SlugPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SlugPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SlugPlaceholder__VTable vtable;
};

struct SpikeSlugDeathBehaviour__Fields {
  struct SpikeSlugFallReactionBehaviour__Fields _;
  float AirSpinRotationAmount;
  struct GameObject * OrbInstantiationEffect;
  float SpiritSpearXSpeedBoost;
  float SpiritSpearYSpeedBoost;
};
struct SpikeSlugDeathBehaviour {
  struct SpikeSlugDeathBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SpikeSlugDeathBehaviour__Fields fields;
};
struct SpikeSlugDeathBehaviour__VTable {
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
struct SpikeSlugDeathBehaviour__StaticFields {
};
struct SpikeSlugDeathBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpikeSlugDeathBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpikeSlugDeathBehaviour__VTable vtable;
};

struct SpikeSlugDeathReaction__Fields {
  struct EntityReactionBehaviour__Fields _;
  struct MoonTimeline * Death;
  struct DeathStartEffectSpawnSetting * DeathStartEffect;
  struct MoonTimeline * m_currentTimeline;
  struct SpikeSlugFallReactionBehaviour * m_fallBehaviour;
  struct SpikeSlugHitReactionBehaviour * m_hitReactionBehaviour;
  struct CharacterPlatformMovement * m_platformMovement;
  struct SpikeSlugLocomotion * m_locomotion;
  bool m_waitingForDeath;
  int32_t MaxDeathBounces;
  float DeathKickbackMinMagnitude;
  float DeathKickbackMinBoost;
  float DeathKickbackMinUpDirection;
  struct MoonTimeline * HitShake;
  struct GameObject * FireDeathEffect;
  struct Transform * m_fireDeathEffectInstance;
  bool m_isBombSlug;
  bool m_wasCacheSerialized;
};
struct SpikeSlugDeathReaction {
  struct SpikeSlugDeathReaction__Class *klass;
  struct MonitorData *monitor;
  struct SpikeSlugDeathReaction__Fields fields;
};
struct SpikeSlugDeathReaction__VTable {
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
struct SpikeSlugDeathReaction__StaticFields {
};
struct SpikeSlugDeathReaction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpikeSlugDeathReaction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpikeSlugDeathReaction__VTable vtable;
};

struct SpikeSlugDeathReaction_c {
  struct SpikeSlugDeathReaction_c__Class *klass;
  struct MonitorData *monitor;
};
struct SpikeSlugDeathReaction_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpikeSlugDeathReaction_c__StaticFields {
  struct SpikeSlugDeathReaction_c * __9;
  struct Action * __9__19_0;
};
struct SpikeSlugDeathReaction_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpikeSlugDeathReaction_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpikeSlugDeathReaction_c__VTable vtable;
};

struct __declspec(align(8)) SpikeSlugEntity_c_DisplayClass57_0__Fields {
  struct List_1_Moon_LocomotionAnimation_ * locomotionAnimations;
};}