namespace app {

struct __declspec(align(8)) EntityDataCaptureAgent__Fields {
  struct String__Array * m_frameData;
};
struct EntityDataCaptureAgent {
  struct EntityDataCaptureAgent__Class *klass;
  struct MonitorData *monitor;
  struct EntityDataCaptureAgent__Fields fields;
};
struct EntityDataCaptureAgent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_IsCaptureAgentValid;
  VirtualInvokeData OnInitialize;
  VirtualInvokeData OnTestEnd;
  VirtualInvokeData GetFrameData;
  VirtualInvokeData GetDataHeaderNames;
};
struct EntityDataCaptureAgent__StaticFields {
};
struct EntityDataCaptureAgent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityDataCaptureAgent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityDataCaptureAgent__VTable vtable;
};

struct __declspec(align(8)) ExceptionCaptureAgent__Fields {
  struct String__Array * m_frameData;
  struct String * m_currentException;
  struct String * m_previousException;
};
struct ExceptionCaptureAgent {
  struct ExceptionCaptureAgent__Class *klass;
  struct MonitorData *monitor;
  struct ExceptionCaptureAgent__Fields fields;
};
struct ExceptionCaptureAgent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetFrameData;
  VirtualInvokeData get_IsCaptureAgentValid;
  VirtualInvokeData OnInitialize;
  VirtualInvokeData OnTestEnd;
  VirtualInvokeData GetFrameData_1;
  VirtualInvokeData GetDataHeaderNames;
};
struct ExceptionCaptureAgent__StaticFields {
  bool ExplicitStackTraces;
};
struct ExceptionCaptureAgent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExceptionCaptureAgent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExceptionCaptureAgent__VTable vtable;
};

struct FrameCaptureTester_StringBuilderScope {
  struct FrameCaptureTester * self;
};
struct FrameCaptureTester_StringBuilderScope__Boxed {
  struct FrameCaptureTester_StringBuilderScope__Class *klass;
  struct MonitorData *monitor;
  struct FrameCaptureTester_StringBuilderScope fields;
};
struct FrameCaptureTester_StringBuilderScope__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct FrameCaptureTester_StringBuilderScope__StaticFields {
};
struct FrameCaptureTester_StringBuilderScope__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FrameCaptureTester_StringBuilderScope__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FrameCaptureTester_StringBuilderScope__VTable vtable;
};

struct FrameTimeCaptureAgent {
  struct FrameTimeCaptureAgent__Class *klass;
  struct MonitorData *monitor;
};
struct FrameTimeCaptureAgent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetFrameData;
  VirtualInvokeData get_IsCaptureAgentValid;
  VirtualInvokeData OnInitialize;
  VirtualInvokeData OnTestEnd;
  VirtualInvokeData GetFrameData_1;
  VirtualInvokeData GetDataHeaderNames;
};
struct FrameTimeCaptureAgent__StaticFields {
};
struct FrameTimeCaptureAgent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FrameTimeCaptureAgent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FrameTimeCaptureAgent__VTable vtable;
};

struct LightCaptureAgent {
  struct LightCaptureAgent__Class *klass;
  struct MonitorData *monitor;
};
struct LightCaptureAgent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetFrameData;
  VirtualInvokeData get_IsCaptureAgentValid;
  VirtualInvokeData OnInitialize;
  VirtualInvokeData OnTestEnd;
  VirtualInvokeData GetFrameData_1;
  VirtualInvokeData GetDataHeaderNames;
};
struct LightCaptureAgent__StaticFields {
};
struct LightCaptureAgent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LightCaptureAgent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LightCaptureAgent__VTable vtable;
};

struct __declspec(align(8)) MemoryCaptureAgent__Fields {
  struct Int32__Array * m_lastValues;
  struct Int32__Array * m_currentValues;
  float m_lastKnownNvnWastage;
  uint64_t m_executableSize;
  float m_lastMemoryUpdateTime;
};
struct MemoryCaptureAgent {
  struct MemoryCaptureAgent__Class *klass;
  struct MonitorData *monitor;
  struct MemoryCaptureAgent__Fields fields;
};
struct MemoryCaptureAgent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetFrameData;
  VirtualInvokeData get_IsCaptureAgentValid;
  VirtualInvokeData OnInitialize;
  VirtualInvokeData OnTestEnd;
  VirtualInvokeData GetFrameData_1;
  VirtualInvokeData GetDataHeaderNames;
};
struct MemoryCaptureAgent__StaticFields {
};
struct MemoryCaptureAgent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MemoryCaptureAgent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MemoryCaptureAgent__VTable vtable;
};

struct __declspec(align(8)) MemoryLabelCaptureAgent__Fields {
  struct Int32__Array * m_lastValues;
  struct Int32__Array * m_currentValues;
  struct Int32__Array * m_labelIndices;
  struct String__Array * m_labelsToTrack;
};
struct MemoryLabelCaptureAgent {
  struct MemoryLabelCaptureAgent__Class *klass;
  struct MonitorData *monitor;
  struct MemoryLabelCaptureAgent__Fields fields;
};
struct MemoryLabelCaptureAgent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetFrameData;
  VirtualInvokeData get_IsCaptureAgentValid;
  VirtualInvokeData OnInitialize;
  VirtualInvokeData OnTestEnd;
  VirtualInvokeData GetFrameData_1;
  VirtualInvokeData GetDataHeaderNames;
};
struct MemoryLabelCaptureAgent__StaticFields {
};
struct MemoryLabelCaptureAgent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MemoryLabelCaptureAgent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MemoryLabelCaptureAgent__VTable vtable;
};

struct __declspec(align(8)) MemoryManagerCaptureAgent__Fields {
  struct Int32__Array * m_lastValues;
  struct Int32__Array * m_currentValues;
};
struct MemoryManagerCaptureAgent {
  struct MemoryManagerCaptureAgent__Class *klass;
  struct MonitorData *monitor;
  struct MemoryManagerCaptureAgent__Fields fields;
};
struct MemoryManagerCaptureAgent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetFrameData;
  VirtualInvokeData get_IsCaptureAgentValid;
  VirtualInvokeData OnInitialize;
  VirtualInvokeData OnTestEnd;
  VirtualInvokeData GetFrameData_1;
  VirtualInvokeData GetDataHeaderNames;
};
struct MemoryManagerCaptureAgent__StaticFields {
};
struct MemoryManagerCaptureAgent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MemoryManagerCaptureAgent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MemoryManagerCaptureAgent__VTable vtable;
};

struct __declspec(align(8)) NvnMemoryCaptureAgent__Fields {
  struct Int32__Array * m_lastValues;
  struct Int32__Array * m_currentValues;
};
struct NvnMemoryCaptureAgent {
  struct NvnMemoryCaptureAgent__Class *klass;
  struct MonitorData *monitor;
  struct NvnMemoryCaptureAgent__Fields fields;
};
struct NvnMemoryCaptureAgent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_IsCaptureAgentValid;
  VirtualInvokeData OnInitialize;
  VirtualInvokeData OnTestEnd;
  VirtualInvokeData GetFrameData;
  VirtualInvokeData GetDataHeaderNames;
  VirtualInvokeData GetFrameData_1;
};
struct NvnMemoryCaptureAgent__StaticFields {
};
struct NvnMemoryCaptureAgent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NvnMemoryCaptureAgent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NvnMemoryCaptureAgent__VTable vtable;
};

struct __declspec(align(8)) ObjectInstantiationCaptureAgent__Fields {
  struct String__Array * m_frameData;
  int32_t m_lastIndex;
  int32_t m_lastDeinstantiationIndex;
};
struct ObjectInstantiationCaptureAgent {
  struct ObjectInstantiationCaptureAgent__Class *klass;
  struct MonitorData *monitor;
  struct ObjectInstantiationCaptureAgent__Fields fields;
};
struct ObjectInstantiationCaptureAgent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_IsCaptureAgentValid;
  VirtualInvokeData OnInitialize;
  VirtualInvokeData OnTestEnd;
  VirtualInvokeData GetFrameData;
  VirtualInvokeData GetDataHeaderNames;
};
struct ObjectInstantiationCaptureAgent__StaticFields {
};
struct ObjectInstantiationCaptureAgent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ObjectInstantiationCaptureAgent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ObjectInstantiationCaptureAgent__VTable vtable;
};

struct __declspec(align(8)) ObjectProfilingCaptureAgent__Fields {
  struct String__Array * m_frameData;
  bool m_isProfiling;
  struct List_1_System_Int32_ * m_idCache;
  struct List_1_System_Int32_ * m_callCountCache;
  struct List_1_System_UInt64_ * m_valueCache;
  struct Dictionary_2_System_Int32_System_String_ * m_nameCache;
  int32_t m_frameCount;
  int32_t m_sampleInterval;
};
struct ObjectProfilingCaptureAgent {
  struct ObjectProfilingCaptureAgent__Class *klass;
  struct MonitorData *monitor;
  struct ObjectProfilingCaptureAgent__Fields fields;
};
struct __declspec(align(8)) List_1_System_UInt64___Fields {
  struct UInt64__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_UInt64_ {
  struct List_1_System_UInt64___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_UInt64___Fields fields;
};
struct List_1_System_UInt64___VTable {
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
struct List_1_System_UInt64___StaticFields {
  struct UInt64__Array * _emptyArray;
};
struct List_1_System_UInt64___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_UInt64___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_UInt64___VTable vtable;
};
struct ObjectProfilingCaptureAgent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_IsCaptureAgentValid;
  VirtualInvokeData OnInitialize;
  VirtualInvokeData OnTestEnd;
  VirtualInvokeData GetFrameData;
  VirtualInvokeData GetDataHeaderNames;
};
struct ObjectProfilingCaptureAgent__StaticFields {
};
struct ObjectProfilingCaptureAgent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ObjectProfilingCaptureAgent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ObjectProfilingCaptureAgent__VTable vtable;
};

struct __declspec(align(8)) PlayerDataCaptureAgent__Fields {
  struct Vector2 m_position;
};
struct PlayerDataCaptureAgent {
  struct PlayerDataCaptureAgent__Class *klass;
  struct MonitorData *monitor;
  struct PlayerDataCaptureAgent__Fields fields;
};
struct PlayerDataCaptureAgent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetFrameData;
  VirtualInvokeData get_IsCaptureAgentValid;
  VirtualInvokeData OnInitialize;
  VirtualInvokeData OnTestEnd;
  VirtualInvokeData GetFrameData_1;
  VirtualInvokeData GetDataHeaderNames;
};
struct PlayerDataCaptureAgent__StaticFields {
};
struct PlayerDataCaptureAgent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerDataCaptureAgent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerDataCaptureAgent__VTable vtable;
};

struct PoolCaptureAgent {
  struct PoolCaptureAgent__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_System_ValueTuple_4___Fields {
  struct ValueTuple_4_String_Int32_Int32_Single___Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_ValueTuple_4_ {
  struct List_1_System_ValueTuple_4___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_ValueTuple_4___Fields fields;
};
struct ValueTuple_4_String_Int32_Int32_Single_ {
  struct String * Item1;
  int32_t Item2;
  int32_t Item3;
  float Item4;
};
struct ValueTuple_4_String_Int32_Int32_Single___Boxed {
  struct ValueTuple_4_String_Int32_Int32_Single___Class *klass;
  struct MonitorData *monitor;
  struct ValueTuple_4_String_Int32_Int32_Single_ fields;
};
struct ValueTuple_4_String_Int32_Int32_Single___Array {
  struct ValueTuple_4_String_Int32_Int32_Single___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ValueTuple_4_String_Int32_Int32_Single_ vector[32];
};
struct IEnumerator_1_System_ValueTuple_4_ {
  struct IEnumerator_1_System_ValueTuple_4___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_System_ValueTuple_2__1__Fields {
  struct ValueTuple_2_String_Single___Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_ValueTuple_2__1 {
  struct List_1_System_ValueTuple_2__1__Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_ValueTuple_2__1__Fields fields;
};
struct ValueTuple_2_String_Single_ {
  struct String * Item1;
  float Item2;
};
struct ValueTuple_2_String_Single___Boxed {
  struct ValueTuple_2_String_Single___Class *klass;
  struct MonitorData *monitor;
  struct ValueTuple_2_String_Single_ fields;
};
struct ValueTuple_2_String_Single___Array {
  struct ValueTuple_2_String_Single___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ValueTuple_2_String_Single_ vector[32];
};
struct IEnumerator_1_System_ValueTuple_2__4 {
  struct IEnumerator_1_System_ValueTuple_2__4__Class *klass;
  struct MonitorData *monitor;
};
struct ValueTuple_4_String_Int32_Int32_Single___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData System_Collections_IStructuralEquatable_Equals;
  VirtualInvokeData System_Collections_IStructuralEquatable_GetHashCode;
  VirtualInvokeData System_Collections_IStructuralComparable_CompareTo;
  VirtualInvokeData System_IComparable_CompareTo;
  VirtualInvokeData CompareTo;
};
struct ValueTuple_4_String_Int32_Int32_Single___StaticFields {
};
struct ValueTuple_4_String_Int32_Int32_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ValueTuple_4_String_Int32_Int32_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ValueTuple_4_String_Int32_Int32_Single___VTable vtable;
};
struct IEnumerator_1_System_ValueTuple_4___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_ValueTuple_4___StaticFields {
};
struct IEnumerator_1_System_ValueTuple_4___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_ValueTuple_4___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_ValueTuple_4___VTable vtable;
};
struct List_1_System_ValueTuple_4___VTable {
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
struct List_1_System_ValueTuple_4___StaticFields {
  struct ValueTuple_4_String_Int32_Int32_Single___Array * _emptyArray;
};
struct List_1_System_ValueTuple_4___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_ValueTuple_4___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_ValueTuple_4___VTable vtable;
};
struct ValueTuple_2_String_Single___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData System_Collections_IStructuralEquatable_Equals;
  VirtualInvokeData System_Collections_IStructuralEquatable_GetHashCode;
  VirtualInvokeData System_Collections_IStructuralComparable_CompareTo;
  VirtualInvokeData System_IComparable_CompareTo;
  VirtualInvokeData CompareTo;
};
struct ValueTuple_2_String_Single___StaticFields {
};
struct ValueTuple_2_String_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ValueTuple_2_String_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ValueTuple_2_String_Single___VTable vtable;
};
struct IEnumerator_1_System_ValueTuple_2__4__VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_ValueTuple_2__4__StaticFields {
};
struct IEnumerator_1_System_ValueTuple_2__4__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_ValueTuple_2__4__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_ValueTuple_2__4__VTable vtable;
};
struct List_1_System_ValueTuple_2__1__VTable {
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
struct List_1_System_ValueTuple_2__1__StaticFields {
  struct ValueTuple_2_String_Single___Array * _emptyArray;
};
struct List_1_System_ValueTuple_2__1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_ValueTuple_2__1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_ValueTuple_2__1__VTable vtable;
};
struct PoolCaptureAgent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetFrameData;
  VirtualInvokeData get_IsCaptureAgentValid;
  VirtualInvokeData OnInitialize;
  VirtualInvokeData OnTestEnd;
  VirtualInvokeData GetFrameData_1;
  VirtualInvokeData GetDataHeaderNames;
};
struct PoolCaptureAgent__StaticFields {
  struct List_1_System_ValueTuple_4_ * ExhaustedInstantiations;
  int32_t PooledInstantiationCount;
  float PoolLoadFromScene;
  float PoolPrewarmFromScene;
  float PoolDestructionQueue;
  struct List_1_System_ValueTuple_2__1 * UnpooledInstantiations;
  float FrameInstantiationCost;
};
struct PoolCaptureAgent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PoolCaptureAgent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PoolCaptureAgent__VTable vtable;
};

struct ProfilingDataCaptureAgent {
  struct ProfilingDataCaptureAgent__Class *klass;
  struct MonitorData *monitor;
};
struct ProfilingDataCaptureAgent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetFrameData;
  VirtualInvokeData get_IsCaptureAgentValid;
  VirtualInvokeData OnInitialize;
  VirtualInvokeData OnTestEnd;
  VirtualInvokeData GetFrameData_1;
  VirtualInvokeData GetDataHeaderNames;
};
struct ProfilingDataCaptureAgent__StaticFields {
};
struct ProfilingDataCaptureAgent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ProfilingDataCaptureAgent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ProfilingDataCaptureAgent__VTable vtable;
};

struct __declspec(align(8)) SampleOffsetCaptureAgent__Fields {
  struct String__Array * m_frameData;
};
struct SampleOffsetCaptureAgent {
  struct SampleOffsetCaptureAgent__Class *klass;
  struct MonitorData *monitor;
  struct SampleOffsetCaptureAgent__Fields fields;
};
struct SampleOffsetCaptureAgent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_IsCaptureAgentValid;
  VirtualInvokeData OnInitialize;
  VirtualInvokeData OnTestEnd;
  VirtualInvokeData GetFrameData;
  VirtualInvokeData GetDataHeaderNames;
};
struct SampleOffsetCaptureAgent__StaticFields {
};
struct SampleOffsetCaptureAgent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SampleOffsetCaptureAgent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SampleOffsetCaptureAgent__VTable vtable;
};

struct __declspec(align(8)) SceneDataCaptureAgent__Fields {
  struct Int32__Array * m_sceneCounts;
  struct MoonGuid * m_lastSceneGuid;
};
struct SceneDataCaptureAgent {
  struct SceneDataCaptureAgent__Class *klass;
  struct MonitorData *monitor;
  struct SceneDataCaptureAgent__Fields fields;
};
struct SceneDataCaptureAgent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetFrameData;
  VirtualInvokeData get_IsCaptureAgentValid;
  VirtualInvokeData OnInitialize;
  VirtualInvokeData OnTestEnd;
  VirtualInvokeData GetFrameData_1;
  VirtualInvokeData GetDataHeaderNames;
};
struct SceneDataCaptureAgent__StaticFields {
};
struct SceneDataCaptureAgent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SceneDataCaptureAgent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SceneDataCaptureAgent__VTable vtable;
};

struct __declspec(align(8)) SceneLoadingCaptureAgent__Fields {
  struct StringBuilder * m_sb;
  struct String__Array * m_output;
};
struct SceneLoadingCaptureAgent {
  struct SceneLoadingCaptureAgent__Class *klass;
  struct MonitorData *monitor;
  struct SceneLoadingCaptureAgent__Fields fields;
};
struct SceneLoadingCaptureAgent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetFrameData;
  VirtualInvokeData get_IsCaptureAgentValid;
  VirtualInvokeData OnInitialize;
  VirtualInvokeData OnTestEnd;
  VirtualInvokeData GetFrameData_1;
  VirtualInvokeData GetDataHeaderNames;
};
struct SceneLoadingCaptureAgent__StaticFields {
};
struct SceneLoadingCaptureAgent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SceneLoadingCaptureAgent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SceneLoadingCaptureAgent__VTable vtable;
};

struct StressTestActionHandler__Fields {
  struct MonoBehaviour__Fields _;
  struct ActionSequence__Array * ActionsToRunOnStressTestStart;
  bool m_registered;
};
struct StressTestActionHandler {
  struct StressTestActionHandler__Class *klass;
  struct MonitorData *monitor;
  struct StressTestActionHandler__Fields fields;
};
struct ActionSequence__Array {
  struct ActionSequence__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ActionSequence * vector[32];
};
struct StressTestActionHandler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct StressTestActionHandler__StaticFields {
};
struct StressTestActionHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StressTestActionHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StressTestActionHandler__VTable vtable;
};

struct StressTestDataCaptureAgent {
  struct StressTestDataCaptureAgent__Class *klass;
  struct MonitorData *monitor;
};
struct StressTestDataCaptureAgent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetFrameData;
  VirtualInvokeData get_IsCaptureAgentValid;
  VirtualInvokeData OnInitialize;
  VirtualInvokeData OnTestEnd;
  VirtualInvokeData GetFrameData_1;
  VirtualInvokeData GetDataHeaderNames;
};
struct StressTestDataCaptureAgent__StaticFields {
};
struct StressTestDataCaptureAgent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StressTestDataCaptureAgent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StressTestDataCaptureAgent__VTable vtable;
};

enum StressTester_TesterState__Enum : int32_t {
  StressTester_TesterState__Enum_Resting = 0,
  StressTester_TesterState__Enum_GettingReady = 1,
  StressTester_TesterState__Enum_Moving = 2,
  StressTester_TesterState__Enum_Done = 3,
  StressTester_TesterState__Enum_LoadingNextPath = 4,
  StressTester_TesterState__Enum_TakingScreenshot = 5,
  StressTester_TesterState__Enum_RunningConfigTests = 6,
};
struct StressTester_TesterState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum StressTester_TesterState__Enum value;
};
enum StressTester_ScreenshotState__Enum : int32_t {
  StressTester_ScreenshotState__Enum_Normal = 0,
  StressTester_ScreenshotState__Enum_Overlay = 1,
  StressTester_ScreenshotState__Enum_Togglebot = 2,
  StressTester_ScreenshotState__Enum_Lighting = 3,
  StressTester_ScreenshotState__Enum_Done = 4,
};
struct StressTester_ScreenshotState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum StressTester_ScreenshotState__Enum value;
};
struct StressTester__Fields {
  struct MonoBehaviour__Fields _;
  struct StressTester * NextPath;
  bool ConsecutivePath;
  bool InvertPath;
  bool m_screenshotReady;
  float Speed;
  float m_defaultSpeed;
  float StressTestCooldown;
  struct AbilitySetAsset * AbilitiesToEnable;
  bool StartTestOnAwake;
  bool DrawDebugInfo;
  bool SetSingleFixUpdate;
  bool VSyncOff;
  bool SkipStressTests;
  bool GiveSpells;
  float m_loadNextPathStartTime;
  int32_t m_isolatedTestSceneIdx;
  struct CageStructureTool * m_cageStructure;
  struct List_1_StressTester_StressTestPoint_ * m_orderedPoints;
  struct List_1_StressTester_SceneIdentifier_ * m_overlapingScenes;
  struct Dictionary_2_SceneMetaData_System_Int32_ * m_metaToSceneIdentifierIdx;
  struct Rect m_pathBounds;
  enum StressTester_TesterState__Enum m_currentState;
  enum StressTester_ScreenshotState__Enum m_currentScreenshotState;
  struct String * m_testID;
  float m_testCoolDown;
  float m_timer;
  int32_t m_waypointIndex;
  float m_timeBetweenWaypoints;
  int32_t m_lastWaypointIndex;
  int32_t m_lastWaypointScreenshot;
  struct String * m_lastScreenshotScene;
  float m_screenshotTimer;
  float m_screenshotPauseDuration;
  struct Vector2 m_targetPosition;
  struct Action * m_onTestSetupBegin;
  struct Action * m_onTestStarted;
  struct Action * m_onTestFinished;
  int32_t m_currentTestIndx;
  struct XboxRecorder * m_recorder;
  struct IStressTest * m_currentInteractionTest;
  int32_t m_originalVSyncCount;
  float m_originalDelta;
  struct String * _Message_k__BackingField;
  struct String * _ScreenshotFilename_k__BackingField;
  struct String * _ScreenshotFilenameTemplate_k__BackingField;
  float m_currentWaypointTime;
  float m_currentConfigTestTime;
  bool MashX;
  bool KeepKu;
  struct DebugTeleportSettings * Teleport;
  struct List_1_UnityEngine_ScriptableObject_ * UberStates;
  struct String * SavePath;
  bool m_terminateEarly;
  bool m_resumeMoving;
  float m_waitTime;
  struct Vector3 m_throwVector;
  float m_roundFactor;
  bool m_wasPaused;
  float m_lockTime;
  float m_keepaliveCountdown;
};
struct StressTester {
  struct StressTester__Class *klass;
  struct MonitorData *monitor;
  struct StressTester__Fields fields;
};
enum StressTester_DoStressTestsOverrideMode__Enum : int32_t {
  StressTester_DoStressTestsOverrideMode__Enum_None = 0,
  StressTester_DoStressTestsOverrideMode__Enum_ForceEnable = 1,
  StressTester_DoStressTestsOverrideMode__Enum_ForceDisable = 2,
};
struct StressTester_DoStressTestsOverrideMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum StressTester_DoStressTestsOverrideMode__Enum value;
};
struct __declspec(align(8)) List_1_StressTester_StressTestPoint___Fields {
  struct StressTester_StressTestPoint__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_StressTester_StressTestPoint_ {
  struct List_1_StressTester_StressTestPoint___Class *klass;
  struct MonitorData *monitor;
  struct List_1_StressTester_StressTestPoint___Fields fields;
};
struct __declspec(align(8)) StressTester_StressTestPoint__Fields {
  struct StressTester_SceneIdentifier * SceneIdentifier;
  struct Vector2 Position;
  bool Skip;
  struct String * PauseMovementUntilSceneIsReached;
  bool SkipAfterLock;
  bool TakeScreenshot;
  bool SetUberState;
  int32_t UberStateIndex;
  float UberStateValue;
  float ForceSpeed;
  float ThrowAndWait;
};}