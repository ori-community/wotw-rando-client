namespace app {
struct PlaceOnGroundAction__StaticFields {
};
struct PlaceOnGroundAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlaceOnGroundAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlaceOnGroundAction__VTable vtable;
};

struct PlayAnimatorAction__Fields {
  struct ActionWithDuration__Fields _;
  struct GameObject * Target;
  bool PlayReverse;
  bool Continue;
  bool Reverse;
  bool ContinueForward;
  bool ContinueBackward;
  bool PauseAnimatorsOnStart;
  bool ReverseIfAnimating;
  bool UseAnimatorsDuration;
  bool StopAtTimeout;
  struct LegacyAnimator__Array * m_animators;
  bool m_isPerformingAction;
  float AnimationDuration;
};
struct PlayAnimatorAction {
  struct PlayAnimatorAction__Class *klass;
  struct MonitorData *monitor;
  struct PlayAnimatorAction__Fields fields;
};
struct PlayAnimatorAction__VTable {
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
  VirtualInvokeData Stop;
  VirtualInvokeData get_IsPerforming;
  VirtualInvokeData get_IsBlocking;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData set_Duration;
  VirtualInvokeData get_Duration;
};
struct PlayAnimatorAction__StaticFields {
};
struct PlayAnimatorAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayAnimatorAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayAnimatorAction__VTable vtable;
};

struct __declspec(align(8)) PlayAnimatorAction_PerformActionCoroutine_d_19__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct PlayAnimatorAction * __4__this;
  struct Dictionary_2_LegacyAnimator_System_Single_ * _startTimeValues_5__2;
  float _t_5__3;
};
struct PlayAnimatorAction_PerformActionCoroutine_d_19 {
  struct PlayAnimatorAction_PerformActionCoroutine_d_19__Class *klass;
  struct MonitorData *monitor;
  struct PlayAnimatorAction_PerformActionCoroutine_d_19__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_LegacyAnimator_System_Single___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_LegacyAnimator_System_Single___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_LegacyAnimator_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_LegacyAnimator_System_Single_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_LegacyAnimator_System_Single_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_LegacyAnimator_System_Single_ {
  struct Dictionary_2_LegacyAnimator_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_LegacyAnimator_System_Single___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_LegacyAnimator_System_Single_ {
  int32_t hashCode;
  int32_t next;
  struct LegacyAnimator * key;
  float value;
};
struct Dictionary_2_TKey_TValue_Entry_LegacyAnimator_System_Single___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_LegacyAnimator_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_LegacyAnimator_System_Single_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_LegacyAnimator_System_Single___Array {
  struct Dictionary_2_TKey_TValue_Entry_LegacyAnimator_System_Single___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_LegacyAnimator_System_Single_ vector[32];
};
struct IEqualityComparer_1_LegacyAnimator_ {
  struct IEqualityComparer_1_LegacyAnimator___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_LegacyAnimator_System_Single___Fields {
  struct Dictionary_2_LegacyAnimator_System_Single_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_LegacyAnimator_System_Single_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_LegacyAnimator_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_LegacyAnimator_System_Single___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_LegacyAnimator_System_Single___Fields {
  struct Dictionary_2_LegacyAnimator_System_Single_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_LegacyAnimator_System_Single_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_LegacyAnimator_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_LegacyAnimator_System_Single___Fields fields;
};
struct ICollection_1_LegacyAnimator_ {
  struct ICollection_1_LegacyAnimator___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_LegacyAnimator_System_Single_ {
  struct LegacyAnimator * key;
  float value;
};
struct KeyValuePair_2_LegacyAnimator_System_Single___Boxed {
  struct KeyValuePair_2_LegacyAnimator_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_LegacyAnimator_System_Single_ fields;
};
struct KeyValuePair_2_LegacyAnimator_System_Single___Array {
  struct KeyValuePair_2_LegacyAnimator_System_Single___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_LegacyAnimator_System_Single_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_LegacyAnimator_System_Single_ {
  struct IEnumerator_1_KeyValuePair_2_LegacyAnimator_System_Single___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_LegacyAnimator_ {
  struct IEnumerable_1_LegacyAnimator___Class *klass;
  struct MonitorData *monitor;
};
struct Dictionary_2_TKey_TValue_Entry_LegacyAnimator_System_Single___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_LegacyAnimator_System_Single___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_LegacyAnimator_System_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_LegacyAnimator_System_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_LegacyAnimator_System_Single___VTable vtable;
};
struct IEqualityComparer_1_LegacyAnimator___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_LegacyAnimator___StaticFields {
};
struct IEqualityComparer_1_LegacyAnimator___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_LegacyAnimator___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_LegacyAnimator___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_LegacyAnimator_System_Single___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_LegacyAnimator_System_Single___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_LegacyAnimator_System_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_LegacyAnimator_System_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_LegacyAnimator_System_Single___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_LegacyAnimator_System_Single___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_LegacyAnimator_System_Single___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_LegacyAnimator_System_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_LegacyAnimator_System_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_LegacyAnimator_System_Single___VTable vtable;
};
struct ICollection_1_LegacyAnimator___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_LegacyAnimator___StaticFields {
};
struct ICollection_1_LegacyAnimator___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_LegacyAnimator___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_LegacyAnimator___VTable vtable;
};
struct KeyValuePair_2_LegacyAnimator_System_Single___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_LegacyAnimator_System_Single___StaticFields {
};
struct KeyValuePair_2_LegacyAnimator_System_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_LegacyAnimator_System_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_LegacyAnimator_System_Single___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_LegacyAnimator_System_Single___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_LegacyAnimator_System_Single___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_LegacyAnimator_System_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_LegacyAnimator_System_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_LegacyAnimator_System_Single___VTable vtable;
};
struct IEnumerable_1_LegacyAnimator___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_LegacyAnimator___StaticFields {
};
struct IEnumerable_1_LegacyAnimator___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_LegacyAnimator___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_LegacyAnimator___VTable vtable;
};
struct Dictionary_2_LegacyAnimator_System_Single___VTable {
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
struct Dictionary_2_LegacyAnimator_System_Single___StaticFields {
};
struct Dictionary_2_LegacyAnimator_System_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_LegacyAnimator_System_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_LegacyAnimator_System_Single___VTable vtable;
};
struct PlayAnimatorAction_PerformActionCoroutine_d_19__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct PlayAnimatorAction_PerformActionCoroutine_d_19__StaticFields {
};
struct PlayAnimatorAction_PerformActionCoroutine_d_19__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayAnimatorAction_PerformActionCoroutine_d_19__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayAnimatorAction_PerformActionCoroutine_d_19__VTable vtable;
};

struct PlayCharacterAnimation__Fields {
  struct PerformingAction__Fields _;
  struct TextureAnimationWithTransitions * Animation;
  struct MoonAnimation * NewAnimation;
  struct Condition_1 * Condition;
};
struct PlayCharacterAnimation {
  struct PlayCharacterAnimation__Class *klass;
  struct MonitorData *monitor;
  struct PlayCharacterAnimation__Fields fields;
};
struct PlayCharacterAnimation__VTable {
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
  VirtualInvokeData Stop;
  VirtualInvokeData get_IsPerforming;
  VirtualInvokeData get_IsBlocking;
};
struct PlayCharacterAnimation__StaticFields {
};
struct PlayCharacterAnimation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayCharacterAnimation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayCharacterAnimation__VTable vtable;
};

enum PlayCharacterAnimation3D_State__Enum : int32_t {
  PlayCharacterAnimation3D_State__Enum_Idle = 0,
  PlayCharacterAnimation3D_State__Enum_Playing = 1,
  PlayCharacterAnimation3D_State__Enum_Looping = 2,
};
struct PlayCharacterAnimation3D_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PlayCharacterAnimation3D_State__Enum value;
};
struct PlayCharacterAnimation3D__Fields {
  struct PerformingAction__Fields _;
  struct String * Animation;
  struct MoonAnimation * NewAnimation;
  struct MoonAnimation * LoopAnimation;
  struct Condition_1 * Condition;
  bool ApplyRootTransform;
  bool RootMotionDisablesStickToPlatforms;
  bool PlaceOnGround;
  bool WaitForFinish;
  struct StateMachineBehaviourProxy * TerminationEventSource;
  struct String * TerminationEventId;
  struct StateMachineBehaviourProxy * ConditionEventSource;
  struct String * ConditionEventId;
  bool Loop;
  struct Condition_1 * LoopCondition;
  struct PlayCharacterAnimation3D_EventToAction__Array * AnimationEventsActions;
  float Speed;
  enum PlayCharacterAnimation3D_State__Enum m_state;
  struct Transform * m_rootJoint;
  bool m_terminationEventReceived;
  bool m_conditionEventReceived;
  bool m_inited;
  struct ActiveAnimationHandle m_animationState;
  bool m_animationStarted;
};
struct PlayCharacterAnimation3D {
  struct PlayCharacterAnimation3D__Class *klass;
  struct MonitorData *monitor;
  struct PlayCharacterAnimation3D__Fields fields;
};
struct __declspec(align(8)) PlayCharacterAnimation3D_EventToAction__Fields {
  struct String * EventId;
  struct ActionMethod * Action;
};
struct PlayCharacterAnimation3D_EventToAction {
  struct PlayCharacterAnimation3D_EventToAction__Class *klass;
  struct MonitorData *monitor;
  struct PlayCharacterAnimation3D_EventToAction__Fields fields;
};
struct PlayCharacterAnimation3D_EventToAction__Array {
  struct PlayCharacterAnimation3D_EventToAction__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PlayCharacterAnimation3D_EventToAction * vector[32];
};
struct PlayCharacterAnimation3D_EventToAction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayCharacterAnimation3D_EventToAction__StaticFields {
};
struct PlayCharacterAnimation3D_EventToAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayCharacterAnimation3D_EventToAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayCharacterAnimation3D_EventToAction__VTable vtable;
};
struct PlayCharacterAnimation3D__VTable {
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
  VirtualInvokeData Stop;
  VirtualInvokeData get_IsPerforming;
  VirtualInvokeData get_IsBlocking;
};
struct PlayCharacterAnimation3D__StaticFields {
};
struct PlayCharacterAnimation3D__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayCharacterAnimation3D__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayCharacterAnimation3D__VTable vtable;
};

struct PlayerFaceDirectionAction__Fields {
  struct ActionMethod__Fields _;
  bool FaceLeft;
  struct Transform * Target;
};
struct PlayerFaceDirectionAction {
  struct PlayerFaceDirectionAction__Class *klass;
  struct MonitorData *monitor;
  struct PlayerFaceDirectionAction__Fields fields;
};
struct PlayerFaceDirectionAction__VTable {
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
struct PlayerFaceDirectionAction__StaticFields {
};
struct PlayerFaceDirectionAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerFaceDirectionAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerFaceDirectionAction__VTable vtable;
};

struct PlayFallAnimation__Fields {
  struct ActionMethod__Fields _;
  struct TextureAnimationWithTransitions * Animation;
};
struct PlayFallAnimation {
  struct PlayFallAnimation__Class *klass;
  struct MonitorData *monitor;
  struct PlayFallAnimation__Fields fields;
};
struct PlayFallAnimation__VTable {
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
struct PlayFallAnimation__StaticFields {
};
struct PlayFallAnimation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFallAnimation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayFallAnimation__VTable vtable;
};

struct PlaySoundAction__Fields {
  struct ActionMethod__Fields _;
  struct Event_1 * WiseEvent;
  struct AudioProperties * Audio;
  struct SoundProvider * SoundProvider;
  struct SoundHost * SoundHost;
  struct WwiseEventSystem_SoundHandle m_soundHandle;
};
struct PlaySoundAction {
  struct PlaySoundAction__Class *klass;
  struct MonitorData *monitor;
  struct PlaySoundAction__Fields fields;
};
struct __declspec(align(8)) AudioProperties__Fields {
  struct AudioClip * Clip;
  float Volume;
};
struct AudioProperties {
  struct AudioProperties__Class *klass;
  struct MonitorData *monitor;
  struct AudioProperties__Fields fields;
};
struct AudioProperties__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AudioProperties__StaticFields {
};
struct AudioProperties__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AudioProperties__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AudioProperties__VTable vtable;
};
struct PlaySoundAction__VTable {
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
struct PlaySoundAction__StaticFields {
};
struct PlaySoundAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlaySoundAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlaySoundAction__VTable vtable;
};

struct PreloadSceneAction__Fields {
  struct ActionMethod__Fields _;
  struct SceneMetaData * Scene;
};
struct PreloadSceneAction {
  struct PreloadSceneAction__Class *klass;
  struct MonitorData *monitor;
  struct PreloadSceneAction__Fields fields;
};
struct PreloadSceneAction__VTable {
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
struct PreloadSceneAction__StaticFields {
};
struct PreloadSceneAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PreloadSceneAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PreloadSceneAction__VTable vtable;
};

struct PreloadShaderAction__Fields {
  struct ActionMethod__Fields _;
};
struct PreloadShaderAction {
  struct PreloadShaderAction__Class *klass;
  struct MonitorData *monitor;
  struct PreloadShaderAction__Fields fields;
};
struct PreloadShaderAction__VTable {
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
struct PreloadShaderAction__StaticFields {
};
struct PreloadShaderAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PreloadShaderAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PreloadShaderAction__VTable vtable;
};

struct PrepareToContinueGameAction__Fields {
  struct ActionMethod__Fields _;
};
struct PrepareToContinueGameAction {
  struct PrepareToContinueGameAction__Class *klass;
  struct MonitorData *monitor;
  struct PrepareToContinueGameAction__Fields fields;
};
struct PrepareToContinueGameAction__VTable {
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
struct PrepareToContinueGameAction__StaticFields {
};
struct PrepareToContinueGameAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PrepareToContinueGameAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PrepareToContinueGameAction__VTable vtable;
};

struct PrewarmBackOutAction__Fields {
  struct ActionMethod__Fields _;
};
struct PrewarmBackOutAction {
  struct PrewarmBackOutAction__Class *klass;
  struct MonitorData *monitor;
  struct PrewarmBackOutAction__Fields fields;
};
struct PrewarmBackOutAction__VTable {
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
struct PrewarmBackOutAction__StaticFields {
};
struct PrewarmBackOutAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PrewarmBackOutAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PrewarmBackOutAction__VTable vtable;
};

struct PrewarmLoremasterReplayExitAction__Fields {
  struct ActionMethod__Fields _;
};
struct PrewarmLoremasterReplayExitAction {
  struct PrewarmLoremasterReplayExitAction__Class *klass;
  struct MonitorData *monitor;
  struct PrewarmLoremasterReplayExitAction__Fields fields;
};
struct PrewarmLoremasterReplayExitAction__VTable {
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
struct PrewarmLoremasterReplayExitAction__StaticFields {
};
struct PrewarmLoremasterReplayExitAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PrewarmLoremasterReplayExitAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PrewarmLoremasterReplayExitAction__VTable vtable;
};

struct PrewarmLoremasterReplayRestartAction__Fields {
  struct ActionMethod__Fields _;
};
struct PrewarmLoremasterReplayRestartAction {
  struct PrewarmLoremasterReplayRestartAction__Class *klass;
  struct MonitorData *monitor;
  struct PrewarmLoremasterReplayRestartAction__Fields fields;
};
struct PrewarmLoremasterReplayRestartAction__VTable {
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
struct PrewarmLoremasterReplayRestartAction__StaticFields {
};
struct PrewarmLoremasterReplayRestartAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PrewarmLoremasterReplayRestartAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PrewarmLoremasterReplayRestartAction__VTable vtable;
};

struct PrewarmSkipAction__Fields {
  struct ActionMethod__Fields _;
};
struct PrewarmSkipAction {
  struct PrewarmSkipAction__Class *klass;
  struct MonitorData *monitor;
  struct PrewarmSkipAction__Fields fields;
};
struct PrewarmSkipAction__VTable {
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
struct PrewarmSkipAction__StaticFields {
};
struct PrewarmSkipAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PrewarmSkipAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PrewarmSkipAction__VTable vtable;
};

struct PushBlockSetCollideWithPlayerAction__Fields {
  struct ActionMethod__Fields _;
  struct PushPullBlock * Target;
  bool ShouldEnable;
};
struct PushBlockSetCollideWithPlayerAction {
  struct PushBlockSetCollideWithPlayerAction__Class *klass;
  struct MonitorData *monitor;
  struct PushBlockSetCollideWithPlayerAction__Fields fields;
};
struct PushBlockSetCollideWithPlayerAction__VTable {
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
struct PushBlockSetCollideWithPlayerAction__StaticFields {
};
struct PushBlockSetCollideWithPlayerAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PushBlockSetCollideWithPlayerAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PushBlockSetCollideWithPlayerAction__VTable vtable;
};

enum RecordXboxDVRAction_XboxOneDVRID__Enum : int32_t {
  RecordXboxDVRAction_XboxOneDVRID__Enum_EscapeBoulder = 0,
};
struct RecordXboxDVRAction_XboxOneDVRID__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RecordXboxDVRAction_XboxOneDVRID__Enum value;
};
struct RecordXboxDVRAction__Fields {
  struct ActionMethod__Fields _;
  enum RecordXboxDVRAction_XboxOneDVRID__Enum ClipID;
  float ClipLength;
  float DelayRecording;
};
struct RecordXboxDVRAction {
  struct RecordXboxDVRAction__Class *klass;
  struct MonitorData *monitor;
  struct RecordXboxDVRAction__Fields fields;
};
struct RecordXboxDVRAction__VTable {
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
struct RecordXboxDVRAction__StaticFields {
};
struct RecordXboxDVRAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RecordXboxDVRAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RecordXboxDVRAction__VTable vtable;
};

struct RegisterStringTriggerAction__Fields {
  struct ActionMethod__Fields _;
  struct String * String;
};
struct RegisterStringTriggerAction {
  struct RegisterStringTriggerAction__Class *klass;
  struct MonitorData *monitor;
  struct RegisterStringTriggerAction__Fields fields;
};
struct RegisterStringTriggerAction__VTable {
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
struct RegisterStringTriggerAction__StaticFields {
};
struct RegisterStringTriggerAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RegisterStringTriggerAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RegisterStringTriggerAction__VTable vtable;
};

struct RemoveConfigurableJointAction__Fields {
  struct ActionMethod__Fields _;
  struct GameObject * ConfigurableJointGameObject;
};
struct RemoveConfigurableJointAction {
  struct RemoveConfigurableJointAction__Class *klass;
  struct MonitorData *monitor;
  struct RemoveConfigurableJointAction__Fields fields;
};
struct RemoveConfigurableJointAction__VTable {
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
struct RemoveConfigurableJointAction__StaticFields {
};}