namespace app {
struct EntityPlugin__StaticFields {
};
struct EntityPlugin__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityPlugin__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityPlugin__VTable vtable;
};

struct __declspec(align(8)) FPSData__Fields {
  int32_t FPS;
};
struct FPSData {
  struct FPSData__Class *klass;
  struct MonitorData *monitor;
  struct FPSData__Fields fields;
};
struct FPSData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Initialize;
  VirtualInvokeData Save;
  VirtualInvokeData Load;
  VirtualInvokeData FrameType;
};
struct FPSData__StaticFields {
};
struct FPSData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FPSData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FPSData__VTable vtable;
};

struct FPSPlugin__Fields {
  struct MonoBehaviour__Fields _;
  int32_t m_accumulatingFPS;
  int32_t m_lastFPS;
  struct StreamWriter * m_streamWriter;
  float m_timeInterval;
};
struct FPSPlugin {
  struct FPSPlugin__Class *klass;
  struct MonitorData *monitor;
  struct FPSPlugin__Fields fields;
};
struct FPSPlugin__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData PlayCycle;
  VirtualInvokeData RecordCycle;
  VirtualInvokeData Exit;
};
struct FPSPlugin__StaticFields {
};
struct FPSPlugin__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FPSPlugin__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FPSPlugin__VTable vtable;
};

struct __declspec(align(8)) RecorderMessageData__Fields {
  struct String * Text;
};
struct RecorderMessageData {
  struct RecorderMessageData__Class *klass;
  struct MonitorData *monitor;
  struct RecorderMessageData__Fields fields;
};
struct RecorderMessageData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Initialize;
  VirtualInvokeData Save;
  VirtualInvokeData Load;
  VirtualInvokeData FrameType;
};
struct RecorderMessageData__StaticFields {
};
struct RecorderMessageData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RecorderMessageData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RecorderMessageData__VTable vtable;
};

enum RecorderMessageInputUI_ExitType__Enum : int32_t {
  RecorderMessageInputUI_ExitType__Enum_OK = 0,
  RecorderMessageInputUI_ExitType__Enum_Cancel = 1,
};
struct RecorderMessageInputUI_ExitType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RecorderMessageInputUI_ExitType__Enum value;
};
struct RecorderMessageInputUI__Fields {
  struct MonoBehaviour__Fields _;
  struct String * Text;
  struct ActionMethod * OnEnterAction;
  struct ActionMethod * OnExitAction;
  struct Action * OnExit;
  bool m_exitStarted;
  bool m_shouldFocusOnInputText;
  struct HashSet_1_Moon_ISuspendable_ * m_suspendables;
  enum RecorderMessageInputUI_ExitType__Enum ExitReason;
};
struct RecorderMessageInputUI {
  struct RecorderMessageInputUI__Class *klass;
  struct MonitorData *monitor;
  struct RecorderMessageInputUI__Fields fields;
};
struct RecorderMessageInputUI__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RecorderMessageInputUI__StaticFields {
};
struct RecorderMessageInputUI__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RecorderMessageInputUI__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RecorderMessageInputUI__VTable vtable;
};

struct RecorderMessageInputUI_c {
  struct RecorderMessageInputUI_c__Class *klass;
  struct MonitorData *monitor;
};
struct RecorderMessageInputUI_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RecorderMessageInputUI_c__StaticFields {
  struct RecorderMessageInputUI_c * __9;
  struct Action * __9__15_0;
};
struct RecorderMessageInputUI_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RecorderMessageInputUI_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RecorderMessageInputUI_c__VTable vtable;
};

struct RecorderMessagePlugin__Fields {
  struct MonoBehaviour__Fields _;
  struct RecorderMessageInputUI * m_recorderMessageInputUI;
  struct GameObject * m_recorderMessageInuptUIPrefab;
  struct Dictionary_2_RecorderMessageData_System_Int32_ * m_recorderMessageData;
  bool m_showMessages;
  bool m_shouldOpenMessageInputUI;
  struct Vector2 m_scrollPosition;
  struct Vector2 m_tooltipScrollPosition;
  struct String * m_lastMessageText;
  float m_offset;
};
struct RecorderMessagePlugin {
  struct RecorderMessagePlugin__Class *klass;
  struct MonitorData *monitor;
  struct RecorderMessagePlugin__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_RecorderMessageData_System_Int32___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_RecorderMessageData_System_Int32___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_RecorderMessageData_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_RecorderMessageData_System_Int32_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_RecorderMessageData_System_Int32_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_RecorderMessageData_System_Int32_ {
  struct Dictionary_2_RecorderMessageData_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_RecorderMessageData_System_Int32___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_RecorderMessageData_System_Int32_ {
  int32_t hashCode;
  int32_t next;
  struct RecorderMessageData * key;
  int32_t value;
};
struct Dictionary_2_TKey_TValue_Entry_RecorderMessageData_System_Int32___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_RecorderMessageData_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_RecorderMessageData_System_Int32_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_RecorderMessageData_System_Int32___Array {
  struct Dictionary_2_TKey_TValue_Entry_RecorderMessageData_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_RecorderMessageData_System_Int32_ vector[32];
};
struct IEqualityComparer_1_RecorderMessageData_ {
  struct IEqualityComparer_1_RecorderMessageData___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_RecorderMessageData_System_Int32___Fields {
  struct Dictionary_2_RecorderMessageData_System_Int32_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_RecorderMessageData_System_Int32_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_RecorderMessageData_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_RecorderMessageData_System_Int32___Fields fields;
};
struct RecorderMessageData__Array {
  struct RecorderMessageData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RecorderMessageData * vector[32];
};
struct IEnumerator_1_RecorderMessageData_ {
  struct IEnumerator_1_RecorderMessageData___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_RecorderMessageData_System_Int32___Fields {
  struct Dictionary_2_RecorderMessageData_System_Int32_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_RecorderMessageData_System_Int32_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_RecorderMessageData_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_RecorderMessageData_System_Int32___Fields fields;
};
struct ICollection_1_RecorderMessageData_ {
  struct ICollection_1_RecorderMessageData___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_RecorderMessageData_System_Int32_ {
  struct RecorderMessageData * key;
  int32_t value;
};
struct KeyValuePair_2_RecorderMessageData_System_Int32___Boxed {
  struct KeyValuePair_2_RecorderMessageData_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_RecorderMessageData_System_Int32_ fields;
};
struct KeyValuePair_2_RecorderMessageData_System_Int32___Array {
  struct KeyValuePair_2_RecorderMessageData_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_RecorderMessageData_System_Int32_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_RecorderMessageData_System_Int32_ {
  struct IEnumerator_1_KeyValuePair_2_RecorderMessageData_System_Int32___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_RecorderMessageData_ {
  struct IEnumerable_1_RecorderMessageData___Class *klass;
  struct MonitorData *monitor;
};
struct Dictionary_2_TKey_TValue_Entry_RecorderMessageData_System_Int32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_RecorderMessageData_System_Int32___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_RecorderMessageData_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_RecorderMessageData_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_RecorderMessageData_System_Int32___VTable vtable;
};
struct IEqualityComparer_1_RecorderMessageData___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_RecorderMessageData___StaticFields {
};
struct IEqualityComparer_1_RecorderMessageData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_RecorderMessageData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_RecorderMessageData___VTable vtable;
};
struct IEnumerator_1_RecorderMessageData___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_RecorderMessageData___StaticFields {
};
struct IEnumerator_1_RecorderMessageData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_RecorderMessageData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_RecorderMessageData___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_RecorderMessageData_System_Int32___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_RecorderMessageData_System_Int32___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_RecorderMessageData_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_RecorderMessageData_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_RecorderMessageData_System_Int32___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_RecorderMessageData_System_Int32___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_RecorderMessageData_System_Int32___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_RecorderMessageData_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_RecorderMessageData_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_RecorderMessageData_System_Int32___VTable vtable;
};
struct ICollection_1_RecorderMessageData___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_RecorderMessageData___StaticFields {
};
struct ICollection_1_RecorderMessageData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_RecorderMessageData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_RecorderMessageData___VTable vtable;
};
struct KeyValuePair_2_RecorderMessageData_System_Int32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_RecorderMessageData_System_Int32___StaticFields {
};
struct KeyValuePair_2_RecorderMessageData_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_RecorderMessageData_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_RecorderMessageData_System_Int32___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_RecorderMessageData_System_Int32___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_RecorderMessageData_System_Int32___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_RecorderMessageData_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_RecorderMessageData_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_RecorderMessageData_System_Int32___VTable vtable;
};
struct IEnumerable_1_RecorderMessageData___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_RecorderMessageData___StaticFields {
};
struct IEnumerable_1_RecorderMessageData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_RecorderMessageData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_RecorderMessageData___VTable vtable;
};
struct Dictionary_2_RecorderMessageData_System_Int32___VTable {
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
struct Dictionary_2_RecorderMessageData_System_Int32___StaticFields {
};
struct Dictionary_2_RecorderMessageData_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_RecorderMessageData_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_RecorderMessageData_System_Int32___VTable vtable;
};
struct RecorderMessagePlugin__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData PlayCycle;
  VirtualInvokeData RecordCycle;
  VirtualInvokeData Exit;
};
struct RecorderMessagePlugin__StaticFields {
};
struct RecorderMessagePlugin__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RecorderMessagePlugin__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RecorderMessagePlugin__VTable vtable;
};

struct PositionCheckerPlugin__Fields {
  struct MonoBehaviour__Fields _;
  int32_t m_autoFixFrameCount;
  struct Vector2 m_scroll;
  struct List_1_System_Int32_ * m_frameErrors;
};
struct PositionCheckerPlugin {
  struct PositionCheckerPlugin__Class *klass;
  struct MonitorData *monitor;
  struct PositionCheckerPlugin__Fields fields;
};
struct PositionCheckerPlugin__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData PlayCycle;
  VirtualInvokeData RecordCycle;
  VirtualInvokeData Exit;
};
struct PositionCheckerPlugin__StaticFields {
};
struct PositionCheckerPlugin__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PositionCheckerPlugin__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PositionCheckerPlugin__VTable vtable;
};

struct RecordTransformPlugin__Fields {
  struct MonoBehaviour__Fields _;
};
struct RecordTransformPlugin {
  struct RecordTransformPlugin__Class *klass;
  struct MonitorData *monitor;
  struct RecordTransformPlugin__Fields fields;
};
struct RecordTransformPlugin__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData PlayCycle;
  VirtualInvokeData RecordCycle;
  VirtualInvokeData Exit;
};
struct RecordTransformPlugin__StaticFields {
};
struct RecordTransformPlugin__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RecordTransformPlugin__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RecordTransformPlugin__VTable vtable;
};

struct TesterPlugin__Fields {
  struct MonoBehaviour__Fields _;
};
struct TesterPlugin {
  struct TesterPlugin__Class *klass;
  struct MonitorData *monitor;
  struct TesterPlugin__Fields fields;
};
struct TesterPlugin__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData PlayCycle;
  VirtualInvokeData RecordCycle;
  VirtualInvokeData Exit;
};
struct TesterPlugin__StaticFields {
};
struct TesterPlugin__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TesterPlugin__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TesterPlugin__VTable vtable;
};

struct TransformRecordable__Fields {
  struct MonoBehaviour__Fields _;
  struct String * UniqueID;
};
struct TransformRecordable {
  struct TransformRecordable__Class *klass;
  struct MonitorData *monitor;
  struct TransformRecordable__Fields fields;
};
struct __declspec(align(8)) AllContainer_1_TransformRecordable___Fields {
  struct List_1_TransformRecordable_ * m_objects;
};
struct AllContainer_1_TransformRecordable_ {
  struct AllContainer_1_TransformRecordable___Class *klass;
  struct MonitorData *monitor;
  struct AllContainer_1_TransformRecordable___Fields fields;
};
struct __declspec(align(8)) List_1_TransformRecordable___Fields {
  struct TransformRecordable__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_TransformRecordable_ {
  struct List_1_TransformRecordable___Class *klass;
  struct MonitorData *monitor;
  struct List_1_TransformRecordable___Fields fields;
};
struct TransformRecordable__Array {
  struct TransformRecordable__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TransformRecordable * vector[32];
};
struct IEnumerator_1_TransformRecordable_ {
  struct IEnumerator_1_TransformRecordable___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_TransformRecordable___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_TransformRecordable___StaticFields {
};
struct IEnumerator_1_TransformRecordable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_TransformRecordable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_TransformRecordable___VTable vtable;
};
struct List_1_TransformRecordable___VTable {
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
struct List_1_TransformRecordable___StaticFields {
  struct TransformRecordable__Array * _emptyArray;
};
struct List_1_TransformRecordable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_TransformRecordable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_TransformRecordable___VTable vtable;
};
struct AllContainer_1_TransformRecordable___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AllContainer_1_TransformRecordable___StaticFields {
};
struct AllContainer_1_TransformRecordable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AllContainer_1_TransformRecordable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AllContainer_1_TransformRecordable___VTable vtable;
};
struct TransformRecordable__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TransformRecordable__StaticFields {
  struct AllContainer_1_TransformRecordable_ * All;
};
struct TransformRecordable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TransformRecordable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TransformRecordable__VTable vtable;
};

struct __declspec(align(8)) TransformRecorderData__Fields {
  struct List_1_TransformRecorderData_Data_ * RecorderData;
};
struct TransformRecorderData {
  struct TransformRecorderData__Class *klass;
  struct MonitorData *monitor;
  struct TransformRecorderData__Fields fields;
};
struct __declspec(align(8)) List_1_TransformRecorderData_Data___Fields {
  struct TransformRecorderData_Data__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_TransformRecorderData_Data_ {
  struct List_1_TransformRecorderData_Data___Class *klass;
  struct MonitorData *monitor;
  struct List_1_TransformRecorderData_Data___Fields fields;
};
struct __declspec(align(8)) TransformRecorderData_Data__Fields {
  struct String * UniqueID;
  struct Vector3 Position;
  struct Quaternion Rotation;
  struct Vector3 Velocity;
  struct Vector3 AngularVelocity;
};
struct TransformRecorderData_Data {
  struct TransformRecorderData_Data__Class *klass;
  struct MonitorData *monitor;
  struct TransformRecorderData_Data__Fields fields;
};
struct TransformRecorderData_Data__Array {
  struct TransformRecorderData_Data__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TransformRecorderData_Data * vector[32];
};
struct IEnumerator_1_TransformRecorderData_Data_ {
  struct IEnumerator_1_TransformRecorderData_Data___Class *klass;
  struct MonitorData *monitor;
};
struct TransformRecorderData_Data__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TransformRecorderData_Data__StaticFields {
};
struct TransformRecorderData_Data__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TransformRecorderData_Data__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TransformRecorderData_Data__VTable vtable;
};
struct IEnumerator_1_TransformRecorderData_Data___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_TransformRecorderData_Data___StaticFields {
};
struct IEnumerator_1_TransformRecorderData_Data___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_TransformRecorderData_Data___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_TransformRecorderData_Data___VTable vtable;
};
struct List_1_TransformRecorderData_Data___VTable {
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
struct List_1_TransformRecorderData_Data___StaticFields {
  struct TransformRecorderData_Data__Array * _emptyArray;
};
struct List_1_TransformRecorderData_Data___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_TransformRecorderData_Data___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_TransformRecorderData_Data___VTable vtable;
};
struct TransformRecorderData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Initialize;
  VirtualInvokeData Save;
  VirtualInvokeData Load;
  VirtualInvokeData FrameType;
};
struct TransformRecorderData__StaticFields {
};
struct TransformRecorderData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TransformRecorderData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TransformRecorderData__VTable vtable;
};

struct RecorderAsset__Fields {
  struct ScriptableObject__Fields _;
  struct RecorderData * Data;
};
struct RecorderAsset {
  struct RecorderAsset__Class *klass;
  struct MonitorData *monitor;
  struct RecorderAsset__Fields fields;
};
struct RecorderAsset__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RecorderAsset__StaticFields {
};
struct RecorderAsset__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RecorderAsset__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RecorderAsset__VTable vtable;
};

struct Recorder_c {
  struct Recorder_c__Class *klass;
  struct MonitorData *monitor;
};
struct Recorder_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Recorder_c__StaticFields {
  struct Recorder_c * __9;
  struct Action * __9__24_0;
  struct Action * __9__24_1;
  struct Action * __9__24_2;
  struct Action * __9__24_3;
  struct Action * __9__24_4;
};
struct Recorder_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Recorder_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Recorder_c__VTable vtable;
};

struct __declspec(align(8)) Recorder_ResetRecorderAndComponents_d_59__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct Recorder_1 * __4__this;
};
struct Recorder_ResetRecorderAndComponents_d_59 {
  struct Recorder_ResetRecorderAndComponents_d_59__Class *klass;
  struct MonitorData *monitor;
  struct Recorder_ResetRecorderAndComponents_d_59__Fields fields;
};
struct Recorder_ResetRecorderAndComponents_d_59__VTable {
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
struct Recorder_ResetRecorderAndComponents_d_59__StaticFields {
};
struct Recorder_ResetRecorderAndComponents_d_59__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Recorder_ResetRecorderAndComponents_d_59__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Recorder_ResetRecorderAndComponents_d_59__VTable vtable;
};

struct RecorderInput {
  struct RecorderInput__Class *klass;
  struct MonitorData *monitor;
};
struct RecorderInput__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RecorderInput__StaticFields {
  struct String * ReplayPath;
};
struct RecorderInput__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RecorderInput__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RecorderInput__VTable vtable;
};

struct RecorderPlaybackUI__Fields {
  struct MonoBehaviour__Fields _;
  float BlastTimeScale;
  int32_t FrameToStopAt;
  bool ShouldStopAfterFrameToStopAt;
  struct RecorderPlaybackUITimeline * Timeline;
  bool IsJumpingToFrame;
  struct GameObject * HelpTexture;
  struct GameObject * XboxControllerTexture;
  struct GameObject * InspectorUI;
  bool m_hideTimeline;
  bool m_isBlast;
  bool m_isStopped;
  bool m_shouldExit;
  int32_t m_speed;
  struct IButtonInput * m_togglePlayPauseButtonInput;
  struct IButtonInput * m_blastButtonInput;
  struct IButtonInput * m_breakButtonInput;
  struct IButtonInput * m_toggleVisibilityButtonInput;
  struct IButtonInput * m_leftTrigger;
  struct IButtonInput * m_rightTrigger;
  struct Input_InputButtonProcessor * PlayPauseButton;
  struct Input_InputButtonProcessor * BlastButton;
  struct Input_InputButtonProcessor * BreakButton;
  struct Input_InputButtonProcessor * VisibilityButton;
};}