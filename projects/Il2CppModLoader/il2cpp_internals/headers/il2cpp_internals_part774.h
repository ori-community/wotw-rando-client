namespace app {
struct PlayMoonTimelineOnCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnSkipCutscene;
  VirtualInvokeData OnDestroy;
};
struct PlayMoonTimelineOnCondition__StaticFields {
};
struct PlayMoonTimelineOnCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayMoonTimelineOnCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayMoonTimelineOnCondition__VTable vtable;
};

struct RestoreCheckpointAnimatorEntity__Fields {
  struct TimelineEntity__Fields _;
};
struct RestoreCheckpointAnimatorEntity {
  struct RestoreCheckpointAnimatorEntity__Class *klass;
  struct MonitorData *monitor;
  struct RestoreCheckpointAnimatorEntity__Fields fields;
};
struct RestoreCheckpointAnimatorEntity__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_EventReciever;
  VirtualInvokeData set_EventReciever;
  VirtualInvokeData StartPlayback;
  VirtualInvokeData StopPlayback;
  VirtualInvokeData PausePlayback;
  VirtualInvokeData ResumePlayback;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData get_PlayState;
  VirtualInvokeData get_PlaybackStatus;
  VirtualInvokeData get_Hash;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_ExecutionOrderOffset;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData PostEvent;
  VirtualInvokeData PostEvent_1;
  VirtualInvokeData PostRequest;
  VirtualInvokeData get_Hash_1;
  VirtualInvokeData get_UpdateType_1;
  VirtualInvokeData get_UpdateCategory;
  VirtualInvokeData SetTimeScale;
  VirtualInvokeData OnValidate;
  VirtualInvokeData OnPausePlayback;
  VirtualInvokeData OnResumePlayback;
  VirtualInvokeData OnStartPlayback;
  VirtualInvokeData OnStopPlayback;
  VirtualInvokeData OnUpdateEntity;
  VirtualInvokeData CanUpdate;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData SynchronizeData;
  VirtualInvokeData SynchronizePad;
  VirtualInvokeData PostEvent_2;
  VirtualInvokeData PostEvent_3;
  VirtualInvokeData PostRequest_1;
  VirtualInvokeData OnRootScopeStopped;
};
struct RestoreCheckpointAnimatorEntity__StaticFields {
};
struct RestoreCheckpointAnimatorEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RestoreCheckpointAnimatorEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RestoreCheckpointAnimatorEntity__VTable vtable;
};

struct ShowAreaMessageAnimatorEntity__Fields {
  struct TimelineEntity__Fields _;
  struct MessageProvider * Message;
};
struct ShowAreaMessageAnimatorEntity {
  struct ShowAreaMessageAnimatorEntity__Class *klass;
  struct MonitorData *monitor;
  struct ShowAreaMessageAnimatorEntity__Fields fields;
};
struct ShowAreaMessageAnimatorEntity__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_EventReciever;
  VirtualInvokeData set_EventReciever;
  VirtualInvokeData StartPlayback;
  VirtualInvokeData StopPlayback;
  VirtualInvokeData PausePlayback;
  VirtualInvokeData ResumePlayback;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData get_PlayState;
  VirtualInvokeData get_PlaybackStatus;
  VirtualInvokeData get_Hash;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_ExecutionOrderOffset;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData PostEvent;
  VirtualInvokeData PostEvent_1;
  VirtualInvokeData PostRequest;
  VirtualInvokeData get_Hash_1;
  VirtualInvokeData get_UpdateType_1;
  VirtualInvokeData get_UpdateCategory;
  VirtualInvokeData SetTimeScale;
  VirtualInvokeData OnValidate;
  VirtualInvokeData OnPausePlayback;
  VirtualInvokeData OnResumePlayback;
  VirtualInvokeData OnStartPlayback;
  VirtualInvokeData OnStopPlayback;
  VirtualInvokeData OnUpdateEntity;
  VirtualInvokeData CanUpdate;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData SynchronizeData;
  VirtualInvokeData SynchronizePad;
  VirtualInvokeData PostEvent_2;
  VirtualInvokeData PostEvent_3;
  VirtualInvokeData PostRequest_1;
  VirtualInvokeData OnRootScopeStopped;
};
struct ShowAreaMessageAnimatorEntity__StaticFields {
};
struct ShowAreaMessageAnimatorEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShowAreaMessageAnimatorEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShowAreaMessageAnimatorEntity__VTable vtable;
};

enum SphereColliderAnimator_AnimationMode__Enum : int32_t {
  SphereColliderAnimator_AnimationMode__Enum_Relative = 0,
  SphereColliderAnimator_AnimationMode__Enum_Abosolute = 1,
};
struct SphereColliderAnimator_AnimationMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SphereColliderAnimator_AnimationMode__Enum value;
};
struct SphereColliderAnimator__Fields {
  struct TimelineEntity__Fields _;
  struct MoonReference_1_UnityEngine_SphereCollider_ * Collider;
  struct AnimationCurve * RadiusCurve;
  enum SphereColliderAnimator_AnimationMode__Enum Mode;
  struct SphereCollider * m_collider;
  float m_time;
};
struct SphereColliderAnimator {
  struct SphereColliderAnimator__Class *klass;
  struct MonitorData *monitor;
  struct SphereColliderAnimator__Fields fields;
};
struct __declspec(align(8)) MoonReference_1_UnityEngine_SphereCollider___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_UnityEngine_SphereCollider_ * m_cachedProxyType;
  struct SphereCollider * m_volatileValue;
};
struct MoonReference_1_UnityEngine_SphereCollider_ {
  struct MoonReference_1_UnityEngine_SphereCollider___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_UnityEngine_SphereCollider___Fields fields;
};
struct IMoonType_1_UnityEngine_SphereCollider_ {
  struct IMoonType_1_UnityEngine_SphereCollider___Class *klass;
  struct MonitorData *monitor;
};
struct IMoonType_1_UnityEngine_SphereCollider___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_UnityEngine_SphereCollider___StaticFields {
};
struct IMoonType_1_UnityEngine_SphereCollider___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_UnityEngine_SphereCollider___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_UnityEngine_SphereCollider___VTable vtable;
};
struct MoonReference_1_UnityEngine_SphereCollider___VTable {
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
struct MoonReference_1_UnityEngine_SphereCollider___StaticFields {
};
struct MoonReference_1_UnityEngine_SphereCollider___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_UnityEngine_SphereCollider___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_UnityEngine_SphereCollider___VTable vtable;
};
struct SphereColliderAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_EventReciever;
  VirtualInvokeData set_EventReciever;
  VirtualInvokeData StartPlayback;
  VirtualInvokeData StopPlayback;
  VirtualInvokeData PausePlayback;
  VirtualInvokeData ResumePlayback;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData get_PlayState;
  VirtualInvokeData get_PlaybackStatus;
  VirtualInvokeData get_Hash;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_ExecutionOrderOffset;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData PostEvent;
  VirtualInvokeData PostEvent_1;
  VirtualInvokeData PostRequest;
  VirtualInvokeData get_Hash_1;
  VirtualInvokeData get_UpdateType_1;
  VirtualInvokeData get_UpdateCategory;
  VirtualInvokeData SetTimeScale;
  VirtualInvokeData OnValidate;
  VirtualInvokeData OnPausePlayback;
  VirtualInvokeData OnResumePlayback;
  VirtualInvokeData OnStartPlayback;
  VirtualInvokeData OnStopPlayback;
  VirtualInvokeData OnUpdateEntity;
  VirtualInvokeData CanUpdate;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData SynchronizeData;
  VirtualInvokeData SynchronizePad;
  VirtualInvokeData PostEvent_2;
  VirtualInvokeData PostEvent_3;
  VirtualInvokeData PostRequest_1;
  VirtualInvokeData OnRootScopeStopped;
  VirtualInvokeData get_ExternalTarget;
  VirtualInvokeData OnEntityCreated;
};
struct SphereColliderAnimator__StaticFields {
};
struct SphereColliderAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SphereColliderAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SphereColliderAnimator__VTable vtable;
};

struct ColliderAnimatorSystem__Fields {
  struct MonoBehaviour__Fields _;
  bool _IsRunning_k__BackingField;
  struct Queue_1_ColliderAnimatorSystem_SphereColliderAnimationState_ * m_statePool;
  struct List_1_ColliderAnimatorSystem_SphereColliderAnimationState_ * m_currentColliderStates;
  struct Dictionary_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState_ * m_instanceIDToSphereColliderState;
};
struct ColliderAnimatorSystem {
  struct ColliderAnimatorSystem__Class *klass;
  struct MonitorData *monitor;
  struct ColliderAnimatorSystem__Fields fields;
};
struct __declspec(align(8)) Queue_1_ColliderAnimatorSystem_SphereColliderAnimationState___Fields {
  struct ColliderAnimatorSystem_SphereColliderAnimationState__Array * _array;
  int32_t _head;
  int32_t _tail;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Queue_1_ColliderAnimatorSystem_SphereColliderAnimationState_ {
  struct Queue_1_ColliderAnimatorSystem_SphereColliderAnimationState___Class *klass;
  struct MonitorData *monitor;
  struct Queue_1_ColliderAnimatorSystem_SphereColliderAnimationState___Fields fields;
};
struct __declspec(align(8)) ColliderAnimatorSystem_SphereColliderAnimationState__Fields {
  int32_t InstanceID;
  struct SphereCollider * Collider;
  enum SphereColliderAnimator_AnimationMode__Enum Mode;
  float OriginalRadius;
  float DesiredRadius;
};
struct ColliderAnimatorSystem_SphereColliderAnimationState {
  struct ColliderAnimatorSystem_SphereColliderAnimationState__Class *klass;
  struct MonitorData *monitor;
  struct ColliderAnimatorSystem_SphereColliderAnimationState__Fields fields;
};
struct ColliderAnimatorSystem_SphereColliderAnimationState__Array {
  struct ColliderAnimatorSystem_SphereColliderAnimationState__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ColliderAnimatorSystem_SphereColliderAnimationState * vector[32];
};
struct IEnumerator_1_ColliderAnimatorSystem_SphereColliderAnimationState_ {
  struct IEnumerator_1_ColliderAnimatorSystem_SphereColliderAnimationState___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_ColliderAnimatorSystem_SphereColliderAnimationState___Fields {
  struct ColliderAnimatorSystem_SphereColliderAnimationState__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ColliderAnimatorSystem_SphereColliderAnimationState_ {
  struct List_1_ColliderAnimatorSystem_SphereColliderAnimationState___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ColliderAnimatorSystem_SphereColliderAnimationState___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState_ {
  struct Dictionary_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct ColliderAnimatorSystem_SphereColliderAnimationState * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___Fields {
  struct Dictionary_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___Fields {
  struct Dictionary_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___Fields fields;
};
struct ICollection_1_ColliderAnimatorSystem_SphereColliderAnimationState_ {
  struct ICollection_1_ColliderAnimatorSystem_SphereColliderAnimationState___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState_ {
  int32_t key;
  struct ColliderAnimatorSystem_SphereColliderAnimationState * value;
};
struct KeyValuePair_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___Boxed {
  struct KeyValuePair_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState_ fields;
};
struct KeyValuePair_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___Array {
  struct KeyValuePair_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_ColliderAnimatorSystem_SphereColliderAnimationState_ {
  struct IEnumerable_1_ColliderAnimatorSystem_SphereColliderAnimationState___Class *klass;
  struct MonitorData *monitor;
};
struct ColliderAnimatorSystem_SphereColliderAnimationState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ColliderAnimatorSystem_SphereColliderAnimationState__StaticFields {
};
struct ColliderAnimatorSystem_SphereColliderAnimationState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ColliderAnimatorSystem_SphereColliderAnimationState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ColliderAnimatorSystem_SphereColliderAnimationState__VTable vtable;
};
struct IEnumerator_1_ColliderAnimatorSystem_SphereColliderAnimationState___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_ColliderAnimatorSystem_SphereColliderAnimationState___StaticFields {
};
struct IEnumerator_1_ColliderAnimatorSystem_SphereColliderAnimationState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_ColliderAnimatorSystem_SphereColliderAnimationState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_ColliderAnimatorSystem_SphereColliderAnimationState___VTable vtable;
};
struct Queue_1_ColliderAnimatorSystem_SphereColliderAnimationState___VTable {
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
struct Queue_1_ColliderAnimatorSystem_SphereColliderAnimationState___StaticFields {
};
struct Queue_1_ColliderAnimatorSystem_SphereColliderAnimationState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Queue_1_ColliderAnimatorSystem_SphereColliderAnimationState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Queue_1_ColliderAnimatorSystem_SphereColliderAnimationState___VTable vtable;
};
struct List_1_ColliderAnimatorSystem_SphereColliderAnimationState___VTable {
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
struct List_1_ColliderAnimatorSystem_SphereColliderAnimationState___StaticFields {
  struct ColliderAnimatorSystem_SphereColliderAnimationState__Array * _emptyArray;
};
struct List_1_ColliderAnimatorSystem_SphereColliderAnimationState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_ColliderAnimatorSystem_SphereColliderAnimationState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_ColliderAnimatorSystem_SphereColliderAnimationState___VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___VTable vtable;
};
struct ICollection_1_ColliderAnimatorSystem_SphereColliderAnimationState___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_ColliderAnimatorSystem_SphereColliderAnimationState___StaticFields {
};
struct ICollection_1_ColliderAnimatorSystem_SphereColliderAnimationState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_ColliderAnimatorSystem_SphereColliderAnimationState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_ColliderAnimatorSystem_SphereColliderAnimationState___VTable vtable;
};
struct KeyValuePair_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___StaticFields {
};
struct KeyValuePair_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___VTable vtable;
};
struct IEnumerable_1_ColliderAnimatorSystem_SphereColliderAnimationState___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_ColliderAnimatorSystem_SphereColliderAnimationState___StaticFields {
};
struct IEnumerable_1_ColliderAnimatorSystem_SphereColliderAnimationState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_ColliderAnimatorSystem_SphereColliderAnimationState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_ColliderAnimatorSystem_SphereColliderAnimationState___VTable vtable;
};
struct Dictionary_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___VTable {
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
struct Dictionary_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___StaticFields {
};
struct Dictionary_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState___VTable vtable;
};
struct ColliderAnimatorSystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
};
struct ColliderAnimatorSystem__StaticFields {
  struct ColliderAnimatorSystem * s_instance;
};
struct ColliderAnimatorSystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ColliderAnimatorSystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ColliderAnimatorSystem__VTable vtable;
};

struct TeleportPlayerAnimatorEntity__Fields {
  struct TimelineEntity__Fields _;
  struct MoonReference_1_UnityEngine_Transform_ * Destination;
};
struct TeleportPlayerAnimatorEntity {
  struct TeleportPlayerAnimatorEntity__Class *klass;
  struct MonitorData *monitor;
  struct TeleportPlayerAnimatorEntity__Fields fields;
};
struct TeleportPlayerAnimatorEntity__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_EventReciever;
  VirtualInvokeData set_EventReciever;
  VirtualInvokeData StartPlayback;
  VirtualInvokeData StopPlayback;
  VirtualInvokeData PausePlayback;
  VirtualInvokeData ResumePlayback;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData get_PlayState;
  VirtualInvokeData get_PlaybackStatus;
  VirtualInvokeData get_Hash;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_ExecutionOrderOffset;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData PostEvent;
  VirtualInvokeData PostEvent_1;
  VirtualInvokeData PostRequest;
  VirtualInvokeData get_Hash_1;
  VirtualInvokeData get_UpdateType_1;
  VirtualInvokeData get_UpdateCategory;
  VirtualInvokeData SetTimeScale;
  VirtualInvokeData OnValidate;
  VirtualInvokeData OnPausePlayback;
  VirtualInvokeData OnResumePlayback;
  VirtualInvokeData OnStartPlayback;
  VirtualInvokeData OnStopPlayback;
  VirtualInvokeData OnUpdateEntity;
  VirtualInvokeData CanUpdate;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData SynchronizeData;
  VirtualInvokeData SynchronizePad;
  VirtualInvokeData PostEvent_2;
  VirtualInvokeData PostEvent_3;
  VirtualInvokeData PostRequest_1;
  VirtualInvokeData OnRootScopeStopped;
  VirtualInvokeData OnEntityCreated;
};
struct TeleportPlayerAnimatorEntity__StaticFields {
};
struct TeleportPlayerAnimatorEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TeleportPlayerAnimatorEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TeleportPlayerAnimatorEntity__VTable vtable;
};

struct UberBloomAnimator__Fields {
  struct TimelineEntity__Fields _;
  struct AnimationCurve * IntensityWeightCurve;
  struct AnimationCurve * ThresholdWeightCurve;
  float Intensity;
  float Threshold;
  float m_time;
};
struct UberBloomAnimator {
  struct UberBloomAnimator__Class *klass;
  struct MonitorData *monitor;
  struct UberBloomAnimator__Fields fields;
};
struct __declspec(align(8)) List_1_UberBloomAnimator___Fields {
  struct UberBloomAnimator__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UberBloomAnimator_ {
  struct List_1_UberBloomAnimator___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UberBloomAnimator___Fields fields;
};
struct UberBloomAnimator__Array {
  struct UberBloomAnimator__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberBloomAnimator * vector[32];
};
struct IEnumerator_1_UberBloomAnimator_ {
  struct IEnumerator_1_UberBloomAnimator___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_UberBloomAnimator___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UberBloomAnimator___StaticFields {
};
struct IEnumerator_1_UberBloomAnimator___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UberBloomAnimator___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UberBloomAnimator___VTable vtable;
};
struct List_1_UberBloomAnimator___VTable {
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
struct List_1_UberBloomAnimator___StaticFields {
  struct UberBloomAnimator__Array * _emptyArray;
};
struct List_1_UberBloomAnimator___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UberBloomAnimator___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UberBloomAnimator___VTable vtable;
};
struct UberBloomAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_EventReciever;
  VirtualInvokeData set_EventReciever;
  VirtualInvokeData StartPlayback;
  VirtualInvokeData StopPlayback;
  VirtualInvokeData PausePlayback;
  VirtualInvokeData ResumePlayback;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData get_PlayState;
  VirtualInvokeData get_PlaybackStatus;
  VirtualInvokeData get_Hash;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_ExecutionOrderOffset;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData PostEvent;
  VirtualInvokeData PostEvent_1;
  VirtualInvokeData PostRequest;
  VirtualInvokeData get_Hash_1;
  VirtualInvokeData get_UpdateType_1;
  VirtualInvokeData get_UpdateCategory;
  VirtualInvokeData SetTimeScale;
  VirtualInvokeData OnValidate;
  VirtualInvokeData OnPausePlayback;
  VirtualInvokeData OnResumePlayback;
  VirtualInvokeData OnStartPlayback;
  VirtualInvokeData OnStopPlayback;
  VirtualInvokeData OnUpdateEntity;
  VirtualInvokeData CanUpdate;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData SynchronizeData;
  VirtualInvokeData SynchronizePad;
  VirtualInvokeData PostEvent_2;
  VirtualInvokeData PostEvent_3;
  VirtualInvokeData PostRequest_1;
  VirtualInvokeData OnRootScopeStopped;
};
struct UberBloomAnimator__StaticFields {
  struct List_1_UberBloomAnimator_ * Influencers;
};
struct UberBloomAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberBloomAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberBloomAnimator__VTable vtable;
};

struct UberBrightnessContrastAnimator__Fields {
  struct TimelineEntity__Fields _;
  struct AnimationCurve * WeightCurve;
  float Brightness;
  float Contrast;
  float m_time;
};
struct UberBrightnessContrastAnimator {
  struct UberBrightnessContrastAnimator__Class *klass;
  struct MonitorData *monitor;
  struct UberBrightnessContrastAnimator__Fields fields;
};
struct __declspec(align(8)) List_1_UberBrightnessContrastAnimator___Fields {
  struct UberBrightnessContrastAnimator__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UberBrightnessContrastAnimator_ {
  struct List_1_UberBrightnessContrastAnimator___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UberBrightnessContrastAnimator___Fields fields;
};
struct UberBrightnessContrastAnimator__Array {
  struct UberBrightnessContrastAnimator__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberBrightnessContrastAnimator * vector[32];
};
struct IEnumerator_1_UberBrightnessContrastAnimator_ {
  struct IEnumerator_1_UberBrightnessContrastAnimator___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_UberBrightnessContrastAnimator___VTable {
  VirtualInvokeData get_Current;
};}