namespace app {
struct BrainScript__StaticFields {
};
struct BrainScript__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BrainScript__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BrainScript__VTable vtable;
};
struct PetrifiedOwlStats__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PetrifiedOwlStats__StaticFields {
};
struct PetrifiedOwlStats__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlStats__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlStats__VTable vtable;
};
struct IEnumerator_1_Moon_AnimationPostprocess___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_AnimationPostprocess___StaticFields {
};
struct IEnumerator_1_Moon_AnimationPostprocess___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_AnimationPostprocess___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_AnimationPostprocess___VTable vtable;
};
struct List_1_Moon_AnimationPostprocess___VTable {
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
struct List_1_Moon_AnimationPostprocess___StaticFields {
  struct AnimationPostprocess__Array * _emptyArray;
};
struct List_1_Moon_AnimationPostprocess___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_AnimationPostprocess___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_AnimationPostprocess___VTable vtable;
};
struct PetrifiedOwlBrainBase__VTable {
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
  VirtualInvokeData UpdateEntries;
  VirtualInvokeData ExecuteEntry;
  VirtualInvokeData ExecuteEntry_1;
  VirtualInvokeData UpdateEntries_1;
  VirtualInvokeData OnPreRestore;
};
struct PetrifiedOwlBrainBase__StaticFields {
};
struct PetrifiedOwlBrainBase__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlBrainBase__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlBrainBase__VTable vtable;
};

struct PetrifiedOwlPhaseABrain__Fields {
  struct PetrifiedOwlBrainBase__Fields _;
  struct Robin * Robin;
  struct Brain * Brain;
  struct GameObject__Array * HornDamageReceivers;
  struct DamageReceiverForwarder * LeftClawDamageReceiver;
  struct DamageReceiverForwarder * RightClawDamageReceiver;
  struct BrainBehaviour * LeftClawHurtBehaviour;
  struct BrainBehaviour * RightClawHurtBehaviour;
  struct GameObject * HurtMaskLeftPrefab;
  struct GameObject * HurtMaskRightPrefab;
  float HurtMaskTransitionSpeed;
  struct AnimationPostprocess * HitReactionClawLeft;
  struct AnimationPostprocess * HitReactionClawRight;
  struct SoundProvider * HurtSound;
  struct BrainBehaviour * IdleBehaviour;
};
struct PetrifiedOwlPhaseABrain {
  struct PetrifiedOwlPhaseABrain__Class *klass;
  struct MonitorData *monitor;
  struct PetrifiedOwlPhaseABrain__Fields fields;
};
struct Robin__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject__Array * Objects;
};
struct Robin {
  struct Robin__Class *klass;
  struct MonitorData *monitor;
  struct Robin__Fields fields;
};
struct Brain__Fields {
  struct Suspendable__Fields _;
  bool _IsSuspended_k__BackingField;
  bool Enabled;
  float MinBehaviourScore;
  struct BrainBehaviour * CurrentBehaviour;
  struct List_1_Moon_BrainBehaviour_ * Behaviours;
  struct Action_1_Moon_BrainBehaviour_ * BehaviourStarted;
  struct Action_1_Moon_BrainBehaviour_ * BehaviourEnded;
  struct Queue_1_Moon_BrainBehaviour_ * m_behaviourQueue;
  bool m_prevEnabled;
  float m_lastSelectedBehaviourScore;
};
struct Brain {
  struct Brain__Class *klass;
  struct MonitorData *monitor;
  struct Brain__Fields fields;
};
struct BrainBehaviour__Fields {
  struct MonoBehaviour__Fields _;
  bool Enabled;
  bool Interruptable;
  float Cooldown;
  float CurrentCooldown;
  float m_cooldownTime;
  struct Brain * m_brain;
};
struct BrainBehaviour {
  struct BrainBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct BrainBehaviour__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_BrainBehaviour___Fields {
  struct BrainBehaviour__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_BrainBehaviour_ {
  struct List_1_Moon_BrainBehaviour___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_BrainBehaviour___Fields fields;
};
struct BrainBehaviour__Array {
  struct BrainBehaviour__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct BrainBehaviour * vector[32];
};
struct IEnumerator_1_Moon_BrainBehaviour_ {
  struct IEnumerator_1_Moon_BrainBehaviour___Class *klass;
  struct MonitorData *monitor;
};
struct Action_1_Moon_BrainBehaviour___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_Moon_BrainBehaviour_ {
  struct Action_1_Moon_BrainBehaviour___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_Moon_BrainBehaviour___Fields fields;
};
struct __declspec(align(8)) Queue_1_Moon_BrainBehaviour___Fields {
  struct BrainBehaviour__Array * _array;
  int32_t _head;
  int32_t _tail;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Queue_1_Moon_BrainBehaviour_ {
  struct Queue_1_Moon_BrainBehaviour___Class *klass;
  struct MonitorData *monitor;
  struct Queue_1_Moon_BrainBehaviour___Fields fields;
};
struct Robin__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Robin__StaticFields {
};
struct Robin__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Robin__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Robin__VTable vtable;
};
struct BrainBehaviour__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnStartBehaviour;
  VirtualInvokeData OnEndBehaviour;
  VirtualInvokeData OnUpdateBehaviour;
  VirtualInvokeData EndCondition;
  VirtualInvokeData GetScore;
  VirtualInvokeData ResetBehaviour;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
};
struct BrainBehaviour__StaticFields {
};
struct BrainBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BrainBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BrainBehaviour__VTable vtable;
};
struct IEnumerator_1_Moon_BrainBehaviour___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_BrainBehaviour___StaticFields {
};
struct IEnumerator_1_Moon_BrainBehaviour___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_BrainBehaviour___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_BrainBehaviour___VTable vtable;
};
struct List_1_Moon_BrainBehaviour___VTable {
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
struct List_1_Moon_BrainBehaviour___StaticFields {
  struct BrainBehaviour__Array * _emptyArray;
};
struct List_1_Moon_BrainBehaviour___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_BrainBehaviour___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_BrainBehaviour___VTable vtable;
};
struct Action_1_Moon_BrainBehaviour___VTable {
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
struct Action_1_Moon_BrainBehaviour___StaticFields {
};
struct Action_1_Moon_BrainBehaviour___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_Moon_BrainBehaviour___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_Moon_BrainBehaviour___VTable vtable;
};
struct Queue_1_Moon_BrainBehaviour___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_1;
};
struct Queue_1_Moon_BrainBehaviour___StaticFields {
};
struct Queue_1_Moon_BrainBehaviour___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Queue_1_Moon_BrainBehaviour___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Queue_1_Moon_BrainBehaviour___VTable vtable;
};
struct Brain__VTable {
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
};
struct Brain__StaticFields {
};
struct Brain__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Brain__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Brain__VTable vtable;
};
struct PetrifiedOwlPhaseABrain__VTable {
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
  VirtualInvokeData UpdateEntries;
  VirtualInvokeData ExecuteEntry;
  VirtualInvokeData ExecuteEntry_1;
  VirtualInvokeData UpdateEntries_1;
  VirtualInvokeData OnPreRestore;
};
struct PetrifiedOwlPhaseABrain__StaticFields {
};
struct PetrifiedOwlPhaseABrain__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlPhaseABrain__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlPhaseABrain__VTable vtable;
};

struct PetrifiedOwlPhaseBBrain__Fields {
  struct PetrifiedOwlBrainBase__Fields _;
  struct Robin * Robin;
  struct Brain * Brain;
  struct GameObject * LeftHornModel;
  struct GameObject * RightHornModel;
  struct DamageReceiverForwarder * LeftHornDamageReceiver;
  struct DamageReceiverForwarder * RightHornDamageReceiver;
  struct BrainBehaviour * HornDestroyedBehaviour;
};
struct PetrifiedOwlPhaseBBrain {
  struct PetrifiedOwlPhaseBBrain__Class *klass;
  struct MonitorData *monitor;
  struct PetrifiedOwlPhaseBBrain__Fields fields;
};
struct PetrifiedOwlPhaseBBrain__VTable {
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
  VirtualInvokeData UpdateEntries;
  VirtualInvokeData ExecuteEntry;
  VirtualInvokeData ExecuteEntry_1;
  VirtualInvokeData UpdateEntries_1;
  VirtualInvokeData OnPreRestore;
};
struct PetrifiedOwlPhaseBBrain__StaticFields {
};
struct PetrifiedOwlPhaseBBrain__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlPhaseBBrain__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlPhaseBBrain__VTable vtable;
};

struct PetrifiedOwlPhaseCBrain__Fields {
  struct PetrifiedOwlBrainBase__Fields _;
  float Health;
  float MaxHealth;
  struct BaseAnimator * HealthBarForFadeout;
  struct LegacyTimelineSequence * ExitSequence;
  float m_timeRunning;
};
struct PetrifiedOwlPhaseCBrain {
  struct PetrifiedOwlPhaseCBrain__Class *klass;
  struct MonitorData *monitor;
  struct PetrifiedOwlPhaseCBrain__Fields fields;
};
struct PetrifiedOwlPhaseCBrain__VTable {
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
  VirtualInvokeData UpdateEntries;
  VirtualInvokeData ExecuteEntry;
  VirtualInvokeData ExecuteEntry_1;
  VirtualInvokeData UpdateEntries_1;
  VirtualInvokeData OnPreRestore;
};
struct PetrifiedOwlPhaseCBrain__StaticFields {
};
struct PetrifiedOwlPhaseCBrain__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlPhaseCBrain__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlPhaseCBrain__VTable vtable;
};

struct ZProjectionFollower__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * FollowLocation;
};
struct ZProjectionFollower {
  struct ZProjectionFollower__Class *klass;
  struct MonitorData *monitor;
  struct ZProjectionFollower__Fields fields;
};
struct ZProjectionFollower__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ZProjectionFollower__StaticFields {
};
struct ZProjectionFollower__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ZProjectionFollower__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ZProjectionFollower__VTable vtable;
};

struct __declspec(align(8)) RockyEnemyAnimations__Fields {
  struct TextureAnimationWithTransitions * Idle;
  struct TextureAnimationWithTransitions * Walk;
  struct TextureAnimationWithTransitions * RunBack;
  struct TextureAnimationWithTransitions * Charging;
  struct TextureAnimationWithTransitions * Shooting;
  struct TextureAnimationWithTransitions * Thrown;
  struct TextureAnimationWithTransitions * Stomped;
  struct TextureAnimationWithTransitions * Stunned;
  struct TextureAnimationWithTransitions * Anticipating;
  struct TextureAnimationWithTransitions * Closing;
  struct TextureAnimationWithTransitions * Closed;
  struct TextureAnimationWithTransitions * Opening;
};
struct RockyEnemyAnimations {
  struct RockyEnemyAnimations__Class *klass;
  struct MonitorData *monitor;
  struct RockyEnemyAnimations__Fields fields;
};
struct RockyEnemyAnimations__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RockyEnemyAnimations__StaticFields {
};
struct RockyEnemyAnimations__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RockyEnemyAnimations__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RockyEnemyAnimations__VTable vtable;
};

struct RockyEnemyPlaceholder__Fields {
  struct RespawningPlaceholder__Fields _;
  struct RockyEnemyPlaceholder_RockyEnemyPlaceholderSettings * Settings;
  struct GameObject * RockyEnemy;
};
struct RockyEnemyPlaceholder {
  struct RockyEnemyPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct RockyEnemyPlaceholder__Fields fields;
};
struct __declspec(align(8)) RockyEnemyPlaceholder_RockyEnemyPlaceholderSettings__Fields {
  float Health;
  float DamageOnTouch;
  float ProjectileDamage;
  int32_t NumberOfExpOrbsToDrop;
  struct DropLootSettings * LootSettings;
  float WalkSpeed;
  float RunSpeed;
  float IdleDuration;
  float WalkDuration;
  float SeePlayerDistance;
  float MinChargeDistance;
  float ChargeDuration;
  float ProjectileSpeed;
  float Gravity;
  float ProjectileGravity;
  bool SpreadShot;
  float ClosingDistance;
  float OpenDistance;
  float AnticipationDuration;
  float OpeningDuration;
  float ClosingDuration;
  float OnDamageCloseDuration;
  float MinimumClosedDuration;
  float TurnToEnemyTimeOffsetSinceOpening;
  float AlmostStillSensitivity;
  struct Transform__Array * ActionZones;
  struct ActionMethod * EnterZoneAction;
  struct GameObject * OnClosedDamageAction;
  struct GameObject * OnClosedDeathAction;
  struct GameObject * OnOpenDamageAction;
  struct GameObject * OnOpenDeathAction;
};
struct RockyEnemyPlaceholder_RockyEnemyPlaceholderSettings {
  struct RockyEnemyPlaceholder_RockyEnemyPlaceholderSettings__Class *klass;
  struct MonitorData *monitor;
  struct RockyEnemyPlaceholder_RockyEnemyPlaceholderSettings__Fields fields;
};
struct RockyEnemyPlaceholder_RockyEnemyPlaceholderSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RockyEnemyPlaceholder_RockyEnemyPlaceholderSettings__StaticFields {
};
struct RockyEnemyPlaceholder_RockyEnemyPlaceholderSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RockyEnemyPlaceholder_RockyEnemyPlaceholderSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RockyEnemyPlaceholder_RockyEnemyPlaceholderSettings__VTable vtable;
};
struct RockyEnemyPlaceholder__VTable {
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
struct RockyEnemyPlaceholder__StaticFields {
};
struct RockyEnemyPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RockyEnemyPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RockyEnemyPlaceholder__VTable vtable;
};

struct RockyEnemyRock__Fields {
  struct MonoBehaviour__Fields _;
  float OpenDistance;
  float SlowDownFriction;
  bool m_turnedBack;
  struct Rigidbody * m_rigidbody;
  struct RockyEnemy * m_rockyEnemy;
};
struct RockyEnemyRock {
  struct RockyEnemyRock__Class *klass;
  struct MonitorData *monitor;
  struct RockyEnemyRock__Fields fields;
};
struct RockyEnemyRock__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RockyEnemyRock__StaticFields {
};
struct RockyEnemyRock__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RockyEnemyRock__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RockyEnemyRock__VTable vtable;
};

struct RockyEnemySpiritLeashedState__Fields {
  struct RockyEnemyState__Fields _;
  struct Vector3 m_spiritLeashPosition;
};
struct RockyEnemySpiritLeashedState {
  struct RockyEnemySpiritLeashedState__Class *klass;
  struct MonitorData *monitor;
  struct RockyEnemySpiritLeashedState__Fields fields;
};
struct RockyEnemySpiritLeashedState__VTable {
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
struct RockyEnemySpiritLeashedState__StaticFields {
};
struct RockyEnemySpiritLeashedState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RockyEnemySpiritLeashedState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RockyEnemySpiritLeashedState__VTable vtable;
};

struct RockyEnemyStompedState__Fields {
  struct RockyEnemyState__Fields _;
};
struct RockyEnemyStompedState {
  struct RockyEnemyStompedState__Class *klass;
  struct MonitorData *monitor;
  struct RockyEnemyStompedState__Fields fields;
};
struct RockyEnemyStompedState__VTable {
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
struct RockyEnemyStompedState__StaticFields {
};
struct RockyEnemyStompedState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RockyEnemyStompedState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RockyEnemyStompedState__VTable vtable;
};

struct RockyEnemyStunnedState__Fields {
  struct RockyEnemyState__Fields _;
};
struct RockyEnemyStunnedState {
  struct RockyEnemyStunnedState__Class *klass;
  struct MonitorData *monitor;
  struct RockyEnemyStunnedState__Fields fields;
};
struct RockyEnemyStunnedState__VTable {
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
struct RockyEnemyStunnedState__StaticFields {
};
struct RockyEnemyStunnedState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RockyEnemyStunnedState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RockyEnemyStunnedState__VTable vtable;
};

struct RockyEnemyTrappedState__Fields {
  struct RockyEnemyState__Fields _;
  float m_timer;
  float m_amount;
  enum DamageType__Enum m_damageType;
};
struct RockyEnemyTrappedState {
  struct RockyEnemyTrappedState__Class *klass;
  struct MonitorData *monitor;
  struct RockyEnemyTrappedState__Fields fields;
};
struct RockyEnemyTrappedState__VTable {
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
struct RockyEnemyTrappedState__StaticFields {
};
struct RockyEnemyTrappedState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RockyEnemyTrappedState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RockyEnemyTrappedState__VTable vtable;
};

struct BehaviourTreeEvaluationSystem__Fields {
  struct MonoBehaviour__Fields _;
  int32_t LeastSkips;
  enum UpdateType__Enum Update;
  enum BehaviourTreeEvaluationSystem_EvaluationMode__Enum Mode;
  struct BehaviourTreeEvaluationSystem_DistanceHeuristic * Distance;
  int32_t Interval;
  struct BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool * m_pool;
  struct List_1_System_Int32_ * m_entriesIds;
  struct Dictionary_2_System_Int32_BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry_ * m_entries;
  int32_t m_framesSkiped;
};
struct BehaviourTreeEvaluationSystem {
  struct BehaviourTreeEvaluationSystem__Class *klass;
  struct MonitorData *monitor;
  struct BehaviourTreeEvaluationSystem__Fields fields;
};
enum BehaviourTreeEvaluationSystem_DistanceHeuristic_DistanceCalculationStrategy__Enum : int32_t {
  BehaviourTreeEvaluationSystem_DistanceHeuristic_DistanceCalculationStrategy__Enum_SquaredMagnitude = 0,
  BehaviourTreeEvaluationSystem_DistanceHeuristic_DistanceCalculationStrategy__Enum_Manhathan = 1,
};
struct BehaviourTreeEvaluationSystem_DistanceHeuristic_DistanceCalculationStrategy__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BehaviourTreeEvaluationSystem_DistanceHeuristic_DistanceCalculationStrategy__Enum value;
};
struct __declspec(align(8)) BehaviourTreeEvaluationSystem_DistanceHeuristic__Fields {
  enum BehaviourTreeEvaluationSystem_DistanceHeuristic_DistanceCalculationStrategy__Enum DistanceCalculation;
  float CriticalEvaluationDistance;
  float SparseEvaluationDistance;
  float m_squaredCriticalEvaluationDistance;
  float m_squaredSparseEvaluationDistance;
};
struct BehaviourTreeEvaluationSystem_DistanceHeuristic {
  struct BehaviourTreeEvaluationSystem_DistanceHeuristic__Class *klass;
  struct MonitorData *monitor;
  struct BehaviourTreeEvaluationSystem_DistanceHeuristic__Fields fields;
};
struct __declspec(align(8)) BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool__Fields {
  struct Stack_1_BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry_ * m_pool;
};
struct BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool {
  struct BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool__Class *klass;
  struct MonitorData *monitor;
  struct BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool__Fields fields;
};
struct __declspec(align(8)) Stack_1_BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry___Fields {
  struct BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Array * _array;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Stack_1_BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry_ {
  struct Stack_1_BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry___Class *klass;
  struct MonitorData *monitor;
  struct Stack_1_BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry___Fields fields;
};
enum BehaviourTreeEvaluationSystem_AllowedEvaluationSkips__Enum : int32_t {
  BehaviourTreeEvaluationSystem_AllowedEvaluationSkips__Enum_None = 0,
  BehaviourTreeEvaluationSystem_AllowedEvaluationSkips__Enum_Few = 3,
  BehaviourTreeEvaluationSystem_AllowedEvaluationSkips__Enum_Some = 5,
  BehaviourTreeEvaluationSystem_AllowedEvaluationSkips__Enum_Many = 10,
};
struct BehaviourTreeEvaluationSystem_AllowedEvaluationSkips__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BehaviourTreeEvaluationSystem_AllowedEvaluationSkips__Enum value;
};
struct __declspec(align(8)) BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Fields {
  enum BehaviourTreeEvaluationSystem_AllowedEvaluationSkips__Enum AllowedSkips;
  int32_t m_framesWithNoEvaluation;
  struct Entity * m_entity;
};}