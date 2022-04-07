namespace app {
struct List_1_InputData___StaticFields {
  struct InputData__Array * _emptyArray;
};
struct List_1_InputData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_InputData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_InputData___VTable vtable;
};

struct __declspec(align(8)) HashSet_1_SaveSerialize___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_SaveSerialize___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_SaveSerialize_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_SaveSerialize_ {
  struct HashSet_1_SaveSerialize___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_SaveSerialize___Fields fields;
};
struct HashSet_1_T_Slot_SaveSerialize_ {
  int32_t hashCode;
  int32_t next;
  struct SaveSerialize * value;
};
struct HashSet_1_T_Slot_SaveSerialize___Boxed {
  struct HashSet_1_T_Slot_SaveSerialize___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_SaveSerialize_ fields;
};
struct HashSet_1_T_Slot_SaveSerialize___Array {
  struct HashSet_1_T_Slot_SaveSerialize___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_SaveSerialize_ vector[32];
};
struct IEqualityComparer_1_SaveSerialize_ {
  struct IEqualityComparer_1_SaveSerialize___Class *klass;
  struct MonitorData *monitor;
};
struct SaveSerialize__Array {
  struct SaveSerialize__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SaveSerialize * vector[32];
};
struct IEnumerator_1_SaveSerialize_ {
  struct IEnumerator_1_SaveSerialize___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_SaveSerialize_ {
  struct IEnumerable_1_SaveSerialize___Class *klass;
  struct MonitorData *monitor;
};
struct HashSet_1_T_Slot_SaveSerialize___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HashSet_1_T_Slot_SaveSerialize___StaticFields {
};
struct HashSet_1_T_Slot_SaveSerialize___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_T_Slot_SaveSerialize___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_T_Slot_SaveSerialize___VTable vtable;
};
struct IEqualityComparer_1_SaveSerialize___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_SaveSerialize___StaticFields {
};
struct IEqualityComparer_1_SaveSerialize___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_SaveSerialize___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_SaveSerialize___VTable vtable;
};
struct IEnumerator_1_SaveSerialize___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_SaveSerialize___StaticFields {
};
struct IEnumerator_1_SaveSerialize___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_SaveSerialize___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_SaveSerialize___VTable vtable;
};
struct IEnumerable_1_SaveSerialize___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_SaveSerialize___StaticFields {
};
struct IEnumerable_1_SaveSerialize___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_SaveSerialize___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_SaveSerialize___VTable vtable;
};
struct HashSet_1_SaveSerialize___VTable {
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
struct HashSet_1_SaveSerialize___StaticFields {
};
struct HashSet_1_SaveSerialize___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_SaveSerialize___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_SaveSerialize___VTable vtable;
};

struct List_1_T_Enumerator_SavePedestal_ {
  struct List_1_SavePedestal_ * list;
  int32_t index;
  int32_t version;
  struct SavePedestal * current;
};
struct List_1_T_Enumerator_SavePedestal___Boxed {
  struct List_1_T_Enumerator_SavePedestal___Class *klass;
  struct MonitorData *monitor;
  struct List_1_T_Enumerator_SavePedestal_ fields;
};
struct List_1_T_Enumerator_SavePedestal___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Current;
  VirtualInvokeData Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct List_1_T_Enumerator_SavePedestal___StaticFields {
};
struct List_1_T_Enumerator_SavePedestal___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_T_Enumerator_SavePedestal___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_T_Enumerator_SavePedestal___VTable vtable;
};

struct List_1_T_Enumerator_SaveSlotBackupsManager_BackupParseQueue_ {
  struct List_1_SaveSlotBackupsManager_BackupParseQueue_ * list;
  int32_t index;
  int32_t version;
  struct SaveSlotBackupsManager_BackupParseQueue current;
};
struct List_1_T_Enumerator_SaveSlotBackupsManager_BackupParseQueue___Boxed {
  struct List_1_T_Enumerator_SaveSlotBackupsManager_BackupParseQueue___Class *klass;
  struct MonitorData *monitor;
  struct List_1_T_Enumerator_SaveSlotBackupsManager_BackupParseQueue_ fields;
};
struct List_1_T_Enumerator_SaveSlotBackupsManager_BackupParseQueue___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Current;
  VirtualInvokeData Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct List_1_T_Enumerator_SaveSlotBackupsManager_BackupParseQueue___StaticFields {
};
struct List_1_T_Enumerator_SaveSlotBackupsManager_BackupParseQueue___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_T_Enumerator_SaveSlotBackupsManager_BackupParseQueue___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_T_Enumerator_SaveSlotBackupsManager_BackupParseQueue___VTable vtable;
};

struct List_1_T_Enumerator_BackupSaveSlotUI_ {
  struct List_1_BackupSaveSlotUI_ * list;
  int32_t index;
  int32_t version;
  struct BackupSaveSlotUI * current;
};
struct List_1_T_Enumerator_BackupSaveSlotUI___Boxed {
  struct List_1_T_Enumerator_BackupSaveSlotUI___Class *klass;
  struct MonitorData *monitor;
  struct List_1_T_Enumerator_BackupSaveSlotUI_ fields;
};
struct List_1_T_Enumerator_BackupSaveSlotUI___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Current;
  VirtualInvokeData Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct List_1_T_Enumerator_BackupSaveSlotUI___StaticFields {
};
struct List_1_T_Enumerator_BackupSaveSlotUI___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_T_Enumerator_BackupSaveSlotUI___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_T_Enumerator_BackupSaveSlotUI___VTable vtable;
};

struct List_1_T_Enumerator_SaveSlotUI_ {
  struct List_1_SaveSlotUI_ * list;
  int32_t index;
  int32_t version;
  struct SaveSlotUI * current;
};
struct List_1_T_Enumerator_SaveSlotUI___Boxed {
  struct List_1_T_Enumerator_SaveSlotUI___Class *klass;
  struct MonitorData *monitor;
  struct List_1_T_Enumerator_SaveSlotUI_ fields;
};
struct List_1_T_Enumerator_SaveSlotUI___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Current;
  VirtualInvokeData Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct List_1_T_Enumerator_SaveSlotUI___StaticFields {
};
struct List_1_T_Enumerator_SaveSlotUI___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_T_Enumerator_SaveSlotUI___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_T_Enumerator_SaveSlotUI___VTable vtable;
};

struct IEnumerable_1_SaveSlotInfo_ {
  struct IEnumerable_1_SaveSlotInfo___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_SaveSlotInfo___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_SaveSlotInfo___StaticFields {
};
struct IEnumerable_1_SaveSlotInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_SaveSlotInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_SaveSlotInfo___VTable vtable;
};

struct List_1_T_Enumerator_SaveSlotsScreenshotManager_ScreenshotPair_ {
  struct List_1_SaveSlotsScreenshotManager_ScreenshotPair_ * list;
  int32_t index;
  int32_t version;
  struct SaveSlotsScreenshotManager_ScreenshotPair * current;
};
struct List_1_T_Enumerator_SaveSlotsScreenshotManager_ScreenshotPair___Boxed {
  struct List_1_T_Enumerator_SaveSlotsScreenshotManager_ScreenshotPair___Class *klass;
  struct MonitorData *monitor;
  struct List_1_T_Enumerator_SaveSlotsScreenshotManager_ScreenshotPair_ fields;
};
struct List_1_T_Enumerator_SaveSlotsScreenshotManager_ScreenshotPair___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Current;
  VirtualInvokeData Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct List_1_T_Enumerator_SaveSlotsScreenshotManager_ScreenshotPair___StaticFields {
};
struct List_1_T_Enumerator_SaveSlotsScreenshotManager_ScreenshotPair___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_T_Enumerator_SaveSlotsScreenshotManager_ScreenshotPair___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_T_Enumerator_SaveSlotsScreenshotManager_ScreenshotPair___VTable vtable;
};

struct Predicate_1_SaveSlotUI___Fields {
  struct MulticastDelegate__Fields _;
};
struct Predicate_1_SaveSlotUI_ {
  struct Predicate_1_SaveSlotUI___Class *klass;
  struct MonitorData *monitor;
  struct Predicate_1_SaveSlotUI___Fields fields;
};
struct Predicate_1_SaveSlotUI___VTable {
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
struct Predicate_1_SaveSlotUI___StaticFields {
};
struct Predicate_1_SaveSlotUI___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Predicate_1_SaveSlotUI___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Predicate_1_SaveSlotUI___VTable vtable;
};

struct __declspec(align(8)) Tuple_3_Single_SceneFPSTest_State_Boolean___Fields {
  float m_Item1;
  enum SceneFPSTest_State__Enum m_Item2;
  bool m_Item3;
};
struct Tuple_3_Single_SceneFPSTest_State_Boolean_ {
  struct Tuple_3_Single_SceneFPSTest_State_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Tuple_3_Single_SceneFPSTest_State_Boolean___Fields fields;
};
struct Tuple_3_Single_SceneFPSTest_State_Boolean___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_IStructuralEquatable_Equals;
  VirtualInvokeData System_Collections_IStructuralEquatable_GetHashCode;
  VirtualInvokeData System_Collections_IStructuralComparable_CompareTo;
  VirtualInvokeData System_IComparable_CompareTo;
  VirtualInvokeData System_ITupleInternal_ToString;
};
struct Tuple_3_Single_SceneFPSTest_State_Boolean___StaticFields {
};
struct Tuple_3_Single_SceneFPSTest_State_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Tuple_3_Single_SceneFPSTest_State_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Tuple_3_Single_SceneFPSTest_State_Boolean___VTable vtable;
};

struct HashSet_1_T_Enumerator_RuntimeSceneMetaData_ {
  struct HashSet_1_RuntimeSceneMetaData_ * _set;
  int32_t _index;
  int32_t _version;
  struct RuntimeSceneMetaData * _current;
};
struct HashSet_1_T_Enumerator_RuntimeSceneMetaData___Boxed {
  struct HashSet_1_T_Enumerator_RuntimeSceneMetaData___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Enumerator_RuntimeSceneMetaData_ fields;
};
struct HashSet_1_T_Enumerator_RuntimeSceneMetaData___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Current;
  VirtualInvokeData Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct HashSet_1_T_Enumerator_RuntimeSceneMetaData___StaticFields {
};
struct HashSet_1_T_Enumerator_RuntimeSceneMetaData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_T_Enumerator_RuntimeSceneMetaData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_T_Enumerator_RuntimeSceneMetaData___VTable vtable;
};

struct Func_2_SceneLoadingQueue_QueueSceneToLoad_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_SceneLoadingQueue_QueueSceneToLoad_Boolean_ {
  struct Func_2_SceneLoadingQueue_QueueSceneToLoad_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_SceneLoadingQueue_QueueSceneToLoad_Boolean___Fields fields;
};
struct Func_2_SceneLoadingQueue_QueueSceneToLoad_Boolean___VTable {
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
struct Func_2_SceneLoadingQueue_QueueSceneToLoad_Boolean___StaticFields {
};
struct Func_2_SceneLoadingQueue_QueueSceneToLoad_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_SceneLoadingQueue_QueueSceneToLoad_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_SceneLoadingQueue_QueueSceneToLoad_Boolean___VTable vtable;
};

struct IEnumerable_1_SceneLoadingQueue_QueueSceneToLoad_ {
  struct IEnumerable_1_SceneLoadingQueue_QueueSceneToLoad___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_SceneLoadingQueue_QueueSceneToLoad___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_SceneLoadingQueue_QueueSceneToLoad___StaticFields {
};
struct IEnumerable_1_SceneLoadingQueue_QueueSceneToLoad___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_SceneLoadingQueue_QueueSceneToLoad___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_SceneLoadingQueue_QueueSceneToLoad___VTable vtable;
};

struct IComparer_1_SceneLoadingQueue_QueueSceneToLoad_ {
  struct IComparer_1_SceneLoadingQueue_QueueSceneToLoad___Class *klass;
  struct MonitorData *monitor;
};
struct IComparer_1_SceneLoadingQueue_QueueSceneToLoad___VTable {
  VirtualInvokeData Compare;
};
struct IComparer_1_SceneLoadingQueue_QueueSceneToLoad___StaticFields {
};
struct IComparer_1_SceneLoadingQueue_QueueSceneToLoad___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IComparer_1_SceneLoadingQueue_QueueSceneToLoad___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IComparer_1_SceneLoadingQueue_QueueSceneToLoad___VTable vtable;
};

struct List_1_T_Enumerator_CameraSettingOverrides_ {
  struct List_1_CameraSettingOverrides_ * list;
  int32_t index;
  int32_t version;
  struct CameraSettingOverrides * current;
};
struct List_1_T_Enumerator_CameraSettingOverrides___Boxed {
  struct List_1_T_Enumerator_CameraSettingOverrides___Class *klass;
  struct MonitorData *monitor;
  struct List_1_T_Enumerator_CameraSettingOverrides_ fields;
};
struct List_1_T_Enumerator_CameraSettingOverrides___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Current;
  VirtualInvokeData Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct List_1_T_Enumerator_CameraSettingOverrides___StaticFields {
};
struct List_1_T_Enumerator_CameraSettingOverrides___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_T_Enumerator_CameraSettingOverrides___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_T_Enumerator_CameraSettingOverrides___VTable vtable;
};

struct List_1_T_Enumerator_MoonGuid_ {
  struct List_1_MoonGuid_ * list;
  int32_t index;
  int32_t version;
  struct MoonGuid * current;
};
struct List_1_T_Enumerator_MoonGuid___Boxed {
  struct List_1_T_Enumerator_MoonGuid___Class *klass;
  struct MonitorData *monitor;
  struct List_1_T_Enumerator_MoonGuid_ fields;
};
struct List_1_T_Enumerator_MoonGuid___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Current;
  VirtualInvokeData Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct List_1_T_Enumerator_MoonGuid___StaticFields {
};
struct List_1_T_Enumerator_MoonGuid___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_T_Enumerator_MoonGuid___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_T_Enumerator_MoonGuid___VTable vtable;
};

struct List_1_T_Enumerator_SceneOperation_ {
  struct List_1_SceneOperation_ * list;
  int32_t index;
  int32_t version;
  struct SceneOperation current;
};
struct List_1_T_Enumerator_SceneOperation___Boxed {
  struct List_1_T_Enumerator_SceneOperation___Class *klass;
  struct MonitorData *monitor;
  struct List_1_T_Enumerator_SceneOperation_ fields;
};
struct List_1_T_Enumerator_SceneOperation___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Current;
  VirtualInvokeData Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct List_1_T_Enumerator_SceneOperation___StaticFields {
};
struct List_1_T_Enumerator_SceneOperation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_T_Enumerator_SceneOperation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_T_Enumerator_SceneOperation___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Enumerator_MoonGuid_NearbySceneData_ {
  struct Dictionary_2_MoonGuid_NearbySceneData_ * dictionary;
  int32_t version;
  int32_t index;
  struct KeyValuePair_2_MoonGuid_NearbySceneData_ current;
  int32_t getEnumeratorRetType;
};
struct Dictionary_2_TKey_TValue_Enumerator_MoonGuid_NearbySceneData___Boxed {
  struct Dictionary_2_TKey_TValue_Enumerator_MoonGuid_NearbySceneData___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Enumerator_MoonGuid_NearbySceneData_ fields;
};
struct Dictionary_2_TKey_TValue_Enumerator_MoonGuid_NearbySceneData___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Current;
  VirtualInvokeData Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
  VirtualInvokeData System_Collections_IDictionaryEnumerator_get_Key;
  VirtualInvokeData System_Collections_IDictionaryEnumerator_get_Value;
  VirtualInvokeData System_Collections_IDictionaryEnumerator_get_Entry;
};
struct Dictionary_2_TKey_TValue_Enumerator_MoonGuid_NearbySceneData___StaticFields {
};
struct Dictionary_2_TKey_TValue_Enumerator_MoonGuid_NearbySceneData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Enumerator_MoonGuid_NearbySceneData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Enumerator_MoonGuid_NearbySceneData___VTable vtable;
};

struct List_1_T_Enumerator_IDebugMenuItem_ {
  struct List_1_IDebugMenuItem_ * list;
  int32_t index;
  int32_t version;
  struct IDebugMenuItem * current;
};
struct List_1_T_Enumerator_IDebugMenuItem___Boxed {
  struct List_1_T_Enumerator_IDebugMenuItem___Class *klass;
  struct MonitorData *monitor;
  struct List_1_T_Enumerator_IDebugMenuItem_ fields;
};
struct List_1_T_Enumerator_IDebugMenuItem___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Current;
  VirtualInvokeData Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct List_1_T_Enumerator_IDebugMenuItem___StaticFields {
};
struct List_1_T_Enumerator_IDebugMenuItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_T_Enumerator_IDebugMenuItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_T_Enumerator_IDebugMenuItem___VTable vtable;
};

enum SeinBashAttackPuppet_Event__Enum : int32_t {
  SeinBashAttackPuppet_Event__Enum_BashFailed = 0,
};
struct SeinBashAttackPuppet_Event__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinBashAttackPuppet_Event__Enum value;
};

struct __declspec(align(8)) Dictionary_2_Moon_Entity_Damage___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_Moon_Entity_Damage___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_Moon_Entity_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Entity_Damage_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Entity_Damage_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_Moon_Entity_Damage_ {
  struct Dictionary_2_Moon_Entity_Damage___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_Moon_Entity_Damage___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_Entity_Damage_ {
  int32_t hashCode;
  int32_t next;
  struct Entity * key;
  struct Damage * value;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_Entity_Damage___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_Moon_Entity_Damage___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_Moon_Entity_Damage_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_Entity_Damage___Array {
  struct Dictionary_2_TKey_TValue_Entry_Moon_Entity_Damage___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_Moon_Entity_Damage_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Moon_Entity_Damage___Fields {
  struct Dictionary_2_Moon_Entity_Damage_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Entity_Damage_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Entity_Damage___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Entity_Damage___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Moon_Entity_Damage___Fields {
  struct Dictionary_2_Moon_Entity_Damage_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Entity_Damage_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Entity_Damage___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Entity_Damage___Fields fields;
};
struct ICollection_1_Moon_Entity_ {
  struct ICollection_1_Moon_Entity___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_Damage_ {
  struct ICollection_1_Damage___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_Moon_Entity_Damage_ {
  struct Entity * key;
  struct Damage * value;
};
struct KeyValuePair_2_Moon_Entity_Damage___Boxed {
  struct KeyValuePair_2_Moon_Entity_Damage___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_Moon_Entity_Damage_ fields;
};
struct KeyValuePair_2_Moon_Entity_Damage___Array {
  struct KeyValuePair_2_Moon_Entity_Damage___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_Moon_Entity_Damage_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_Moon_Entity_Damage_ {
  struct IEnumerator_1_KeyValuePair_2_Moon_Entity_Damage___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Damage_ {
  struct IEnumerable_1_Damage___Class *klass;
  struct MonitorData *monitor;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_Entity_Damage___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_Entity_Damage___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_Moon_Entity_Damage___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_Moon_Entity_Damage___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_Moon_Entity_Damage___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Entity_Damage___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Entity_Damage___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Entity_Damage___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Entity_Damage___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Entity_Damage___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Entity_Damage___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Entity_Damage___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Entity_Damage___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Entity_Damage___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Entity_Damage___VTable vtable;
};
struct ICollection_1_Moon_Entity___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_Moon_Entity___StaticFields {
};
struct ICollection_1_Moon_Entity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_Moon_Entity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_Moon_Entity___VTable vtable;
};
struct ICollection_1_Damage___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_Damage___StaticFields {
};
struct ICollection_1_Damage___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_Damage___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_Damage___VTable vtable;
};
struct KeyValuePair_2_Moon_Entity_Damage___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_Moon_Entity_Damage___StaticFields {
};
struct KeyValuePair_2_Moon_Entity_Damage___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_Moon_Entity_Damage___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_Moon_Entity_Damage___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_Moon_Entity_Damage___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_Moon_Entity_Damage___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_Moon_Entity_Damage___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_Moon_Entity_Damage___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_Moon_Entity_Damage___VTable vtable;
};
struct IEnumerable_1_Damage___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_Damage___StaticFields {
};
struct IEnumerable_1_Damage___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_Damage___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_Damage___VTable vtable;
};
struct Dictionary_2_Moon_Entity_Damage___VTable {
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
struct Dictionary_2_Moon_Entity_Damage___StaticFields {
};
struct Dictionary_2_Moon_Entity_Damage___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_Moon_Entity_Damage___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_Moon_Entity_Damage___VTable vtable;
};

struct List_1_T_Enumerator_UnityEngine_ParticleSystem_ {
  struct List_1_UnityEngine_ParticleSystem_ * list;
  int32_t index;
  int32_t version;
  struct ParticleSystem * current;
};
struct List_1_T_Enumerator_UnityEngine_ParticleSystem___Boxed {
  struct List_1_T_Enumerator_UnityEngine_ParticleSystem___Class *klass;
  struct MonitorData *monitor;
  struct List_1_T_Enumerator_UnityEngine_ParticleSystem_ fields;
};
struct List_1_T_Enumerator_UnityEngine_ParticleSystem___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Current;
  VirtualInvokeData Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};}