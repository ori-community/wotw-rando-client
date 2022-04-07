namespace app {
struct IEnumerable_1_Moon_IEntityOwned_ {
  struct IEnumerable_1_Moon_IEntityOwned___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) EntityCinematicData__Fields {
  struct ActiveAnimationHandle m_activeAnimation;
  struct MoonAnimation * _Animation_k__BackingField;
  bool _Scheduled_k__BackingField;
};
struct EntityCinematicData {
  struct EntityCinematicData__Class *klass;
  struct MonitorData *monitor;
  struct EntityCinematicData__Fields fields;
};
struct __declspec(align(8)) EntityCinematicTask__Fields {
  enum BehaviourStatus__Enum m_status;
  struct Entity * m_entity;
  struct Locomotion * m_locomotion;
  enum AnimatorCullingMode__Enum m_originalAnimatorCullingMode;
  struct RootMotionProcessorData * m_rootMotion;
  struct EntityCinematicData * _Data_k__BackingField;
  struct Nullable_1_Moon_BehaviourSystem_BehaviourStatus_ _ForceReturnTaskStatus_k__BackingField;
};
struct EntityCinematicTask {
  struct EntityCinematicTask__Class *klass;
  struct MonitorData *monitor;
  struct EntityCinematicTask__Fields fields;
};
struct IEntityLocomotion {
  struct IEntityLocomotion__Class *klass;
  struct MonitorData *monitor;
};
struct BaseNPC__Fields {
  struct SaveSerialize__Fields _;
  struct MessageBox * m_messageBox;
  struct Action_1_MessageBox_HideAction_ * m_onMessageHide;
  struct MessageBox * m_npcScreen;
  bool m_ignoreOriListenAnimation;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct BaseNPC {
  struct BaseNPC__Class *klass;
  struct MonitorData *monitor;
  struct BaseNPC__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_BehaviourSystem_EntityBehaviourNode___Fields {
  struct EntityBehaviourNode__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_BehaviourSystem_EntityBehaviourNode_ {
  struct List_1_Moon_BehaviourSystem_EntityBehaviourNode___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_BehaviourSystem_EntityBehaviourNode___Fields fields;
};
struct EntityBehaviourNode__Array {
  struct EntityBehaviourNode__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct EntityBehaviourNode * vector[32];
};
struct IEnumerator_1_Moon_BehaviourSystem_EntityBehaviourNode_ {
  struct IEnumerator_1_Moon_BehaviourSystem_EntityBehaviourNode___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Moon_BehaviourSystem_EntityTask_ {
  struct IEnumerator_1_Moon_BehaviourSystem_EntityTask___Class *klass;
  struct MonitorData *monitor;
};
struct AuxBus__Fields {
  struct BaseType__Fields _;
};
struct AuxBus {
  struct AuxBus__Class *klass;
  struct MonitorData *monitor;
  struct AuxBus__Fields fields;
};
struct Action_2_Moon_BehaviourSystem_EntityTask_Moon_BehaviourSystem_BehaviourStatus___VTable {
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
struct Action_2_Moon_BehaviourSystem_EntityTask_Moon_BehaviourSystem_BehaviourStatus___StaticFields {
};
struct Action_2_Moon_BehaviourSystem_EntityTask_Moon_BehaviourSystem_BehaviourStatus___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_2_Moon_BehaviourSystem_EntityTask_Moon_BehaviourSystem_BehaviourStatus___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_2_Moon_BehaviourSystem_EntityTask_Moon_BehaviourSystem_BehaviourStatus___VTable vtable;
};
struct IEnumerator_1_EntityPlaceholder___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_EntityPlaceholder___StaticFields {
};
struct IEnumerator_1_EntityPlaceholder___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_EntityPlaceholder___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_EntityPlaceholder___VTable vtable;
};
struct List_1_EntityPlaceholder___VTable {
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
struct List_1_EntityPlaceholder___StaticFields {
  struct EntityPlaceholder__Array * _emptyArray;
};
struct List_1_EntityPlaceholder___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_EntityPlaceholder___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_EntityPlaceholder___VTable vtable;
};
struct IEnumerator_1_Moon_Entity___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Entity___StaticFields {
};
struct IEnumerator_1_Moon_Entity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Entity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_Entity___VTable vtable;
};
struct List_1_Moon_Entity___VTable {
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
struct List_1_Moon_Entity___StaticFields {
  struct Entity__Array * _emptyArray;
};
struct List_1_Moon_Entity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_Entity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_Entity___VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_Moon_Entity___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_Moon_Entity___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_Moon_Entity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_Moon_Entity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_Moon_Entity___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_List_1_Moon_Entity___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_List_1_Moon_Entity___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_List_1_Moon_Entity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_List_1_Moon_Entity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_List_1_Moon_Entity___VTable vtable;
};
struct IEnumerator_1_List_1_Moon_Entity___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_List_1_Moon_Entity___StaticFields {
};
struct IEnumerator_1_List_1_Moon_Entity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_List_1_Moon_Entity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_List_1_Moon_Entity___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_List_1_Moon_Entity___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_List_1_Moon_Entity___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_List_1_Moon_Entity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_List_1_Moon_Entity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_List_1_Moon_Entity___VTable vtable;
};
struct ICollection_1_List_1_Moon_Entity___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_List_1_Moon_Entity___StaticFields {
};
struct ICollection_1_List_1_Moon_Entity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_List_1_Moon_Entity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_List_1_Moon_Entity___VTable vtable;
};
struct KeyValuePair_2_System_Type_List_1_Moon_Entity___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_Type_List_1_Moon_Entity___StaticFields {
};
struct KeyValuePair_2_System_Type_List_1_Moon_Entity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_Type_List_1_Moon_Entity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_Type_List_1_Moon_Entity___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_Type_List_1_Moon_Entity___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_Type_List_1_Moon_Entity___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_Type_List_1_Moon_Entity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_Type_List_1_Moon_Entity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_Type_List_1_Moon_Entity___VTable vtable;
};
struct IEnumerable_1_List_1_Moon_Entity___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_List_1_Moon_Entity___StaticFields {
};
struct IEnumerable_1_List_1_Moon_Entity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_List_1_Moon_Entity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_List_1_Moon_Entity___VTable vtable;
};
struct Dictionary_2_System_Type_List_1_Moon_Entity___VTable {
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
struct Dictionary_2_System_Type_List_1_Moon_Entity___StaticFields {
};
struct Dictionary_2_System_Type_List_1_Moon_Entity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_Type_List_1_Moon_Entity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_Type_List_1_Moon_Entity___VTable vtable;
};
struct IMoonType_1_ISwitch___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_ISwitch___StaticFields {
};
struct IMoonType_1_ISwitch___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_ISwitch___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_ISwitch___VTable vtable;
};
struct ISwitch__VTable {
  VirtualInvokeData get_IsOn;
};
struct ISwitch__StaticFields {
};
struct ISwitch__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISwitch__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISwitch__VTable vtable;
};
struct MoonReference_1_ISwitch___VTable {
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
struct MoonReference_1_ISwitch___StaticFields {
};
struct MoonReference_1_ISwitch___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_ISwitch___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_ISwitch___VTable vtable;
};
struct EntitySpawnSetup__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EntitySpawnSetup__StaticFields {
};
struct EntitySpawnSetup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntitySpawnSetup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntitySpawnSetup__VTable vtable;
};
struct Archive__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Archive__StaticFields {
};
struct Archive__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Archive__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Archive__VTable vtable;
};
struct MoonGuid__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData Equals_1;
};
struct MoonGuid__StaticFields {
  struct MoonGuid * Empty;
};
struct MoonGuid__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonGuid__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonGuid__VTable vtable;
};
struct GuidOwner__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GuidOwner__StaticFields {
  struct MoonGuid * UNINITIALIZED_GUID;
};
struct GuidOwner__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GuidOwner__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GuidOwner__VTable vtable;
};
struct IEnumerator_1_LightPlatform___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_LightPlatform___StaticFields {
};
struct IEnumerator_1_LightPlatform___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_LightPlatform___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_LightPlatform___VTable vtable;
};
struct List_1_LightPlatform___VTable {
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
struct List_1_LightPlatform___StaticFields {
  struct LightPlatform__Array * _emptyArray;
};
struct List_1_LightPlatform___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_LightPlatform___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_LightPlatform___VTable vtable;
};
struct LightPlatform__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LightPlatform__StaticFields {
  struct List_1_LightPlatform_ * All;
};
struct LightPlatform__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LightPlatform__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LightPlatform__VTable vtable;
};
struct GoThroughPlatform__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GoThroughPlatform__StaticFields {
  int32_t Layer;
};
struct GoThroughPlatform__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GoThroughPlatform__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GoThroughPlatform__VTable vtable;
};
struct RigidbodyInertiaModifier__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RigidbodyInertiaModifier__StaticFields {
};
struct RigidbodyInertiaModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RigidbodyInertiaModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RigidbodyInertiaModifier__VTable vtable;
};
struct RigidbodyState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
};
struct RigidbodyState__StaticFields {
  bool CacheGoThroughComp;
};
struct RigidbodyState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RigidbodyState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RigidbodyState__VTable vtable;
};
struct JointState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
};
struct JointState__StaticFields {
};
struct JointState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JointState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JointState__VTable vtable;
};
struct PhysicalSystemState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PhysicalSystemState__StaticFields {
};
struct PhysicalSystemState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PhysicalSystemState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PhysicalSystemState__VTable vtable;
};
struct FrustumOptimizable__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnFrustumEnter;
  VirtualInvokeData OnFrustumExit;
  VirtualInvokeData get_InsideFrustum;
  VirtualInvokeData get_Bounds;
  VirtualInvokeData get_AllowCacheBounds;
};
struct FrustumOptimizable__StaticFields {
};
struct FrustumOptimizable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FrustumOptimizable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FrustumOptimizable__VTable vtable;
};
struct TimeSlicedCoroutineJob__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnUpdateBeat;
  VirtualInvokeData Pause;
  VirtualInvokeData Resume;
  VirtualInvokeData OnJobFinished;
  VirtualInvokeData get_IsFinished;
  VirtualInvokeData get_JobName;
  VirtualInvokeData get_TimesliceJobOwnerName;
  VirtualInvokeData get_CustomTimeBudget;
  VirtualInvokeData set_CustomTimeBudget;
  VirtualInvokeData get_ContextualDebugData;
  VirtualInvokeData get_EnqueuedTime;
  VirtualInvokeData set_EnqueuedTime;
  VirtualInvokeData get_AvailableBudget;
  VirtualInvokeData set_AvailableBudget;
  VirtualInvokeData Resume_1;
  VirtualInvokeData CancelJob;
  VirtualInvokeData Reset;
  VirtualInvokeData get_JobName_1;
  VirtualInvokeData get_TimesliceJobOwnerName_1;
  VirtualInvokeData get_ContextualDebugData_1;
};
struct TimeSlicedCoroutineJob__StaticFields {
};
struct TimeSlicedCoroutineJob__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimeSlicedCoroutineJob__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimeSlicedCoroutineJob__VTable vtable;
};
struct TimeSlicedRigidbodyTask__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnUpdateBeat;
  VirtualInvokeData Pause;
  VirtualInvokeData Resume;
  VirtualInvokeData OnJobFinished;
  VirtualInvokeData get_IsFinished;
  VirtualInvokeData get_JobName;
  VirtualInvokeData get_TimesliceJobOwnerName;
  VirtualInvokeData get_CustomTimeBudget;
  VirtualInvokeData set_CustomTimeBudget;
  VirtualInvokeData get_ContextualDebugData;
  VirtualInvokeData get_EnqueuedTime;
  VirtualInvokeData set_EnqueuedTime;
  VirtualInvokeData get_AvailableBudget;
  VirtualInvokeData set_AvailableBudget;
  VirtualInvokeData Resume_1;
  VirtualInvokeData CancelJob;
  VirtualInvokeData Reset;
  VirtualInvokeData get_JobName_1;
  VirtualInvokeData get_TimesliceJobOwnerName_1;
  VirtualInvokeData get_ContextualDebugData_1;
};
struct TimeSlicedRigidbodyTask__StaticFields {
};
struct TimeSlicedRigidbodyTask__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimeSlicedRigidbodyTask__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimeSlicedRigidbodyTask__VTable vtable;
};
struct SceneMetaData_SeinWorldStateWisp__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SceneMetaData_SeinWorldStateWisp__StaticFields {
};
struct SceneMetaData_SeinWorldStateWisp__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SceneMetaData_SeinWorldStateWisp__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SceneMetaData_SeinWorldStateWisp__VTable vtable;
};
struct SceneMetaData_SeinAbilitiesWotW__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SceneMetaData_SeinAbilitiesWotW__StaticFields {
};
struct SceneMetaData_SeinAbilitiesWotW__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SceneMetaData_SeinAbilitiesWotW__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SceneMetaData_SeinAbilitiesWotW__VTable vtable;
};
struct SceneMetaData_SeinEquipmentWotW__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SceneMetaData_SeinEquipmentWotW__StaticFields {
};
struct SceneMetaData_SeinEquipmentWotW__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SceneMetaData_SeinEquipmentWotW__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SceneMetaData_SeinEquipmentWotW__VTable vtable;
};
struct SceneMetaData_InitialShard__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SceneMetaData_InitialShard__StaticFields {
};
struct SceneMetaData_InitialShard__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SceneMetaData_InitialShard__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SceneMetaData_InitialShard__VTable vtable;
};
struct QuestReward__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct QuestReward__StaticFields {
};
struct QuestReward__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct QuestReward__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct QuestReward__VTable vtable;
};
struct Quest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Quest__StaticFields {
};
struct Quest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Quest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Quest__VTable vtable;
};
struct SceneMetaData_SeinInitialValuesWotW__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SceneMetaData_SeinInitialValuesWotW__StaticFields {
};
struct SceneMetaData_SeinInitialValuesWotW__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SceneMetaData_SeinInitialValuesWotW__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SceneMetaData_SeinInitialValuesWotW__VTable vtable;
};
struct SceneMetaData_SeinAbilities__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SceneMetaData_SeinAbilities__StaticFields {
};
struct SceneMetaData_SeinAbilities__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SceneMetaData_SeinAbilities__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SceneMetaData_SeinAbilities__VTable vtable;
};
struct SceneMetaData_SeinWorldState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SceneMetaData_SeinWorldState__StaticFields {
};
struct SceneMetaData_SeinWorldState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SceneMetaData_SeinWorldState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SceneMetaData_SeinWorldState__VTable vtable;
};
struct SceneMetaData_SeinInitialValuesBlindForest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SceneMetaData_SeinInitialValuesBlindForest__StaticFields {
};
struct SceneMetaData_SeinInitialValuesBlindForest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SceneMetaData_SeinInitialValuesBlindForest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SceneMetaData_SeinInitialValuesBlindForest__VTable vtable;
};
struct SavePedestalUberState_PedestalState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
};
struct SavePedestalUberState_PedestalState__StaticFields {
};
struct SavePedestalUberState_PedestalState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SavePedestalUberState_PedestalState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SavePedestalUberState_PedestalState__VTable vtable;
};
struct SavePedestalUberState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ID;
  VirtualInvokeData get_Size;
  VirtualInvokeData Save;
  VirtualInvokeData Load;
  VirtualInvokeData get_Type;
  VirtualInvokeData CreateDefaultUberState;
  VirtualInvokeData get_UberStateGroup;
  VirtualInvokeData get_GroupID;
  VirtualInvokeData get_StateID;
  VirtualInvokeData get_Name;
};}