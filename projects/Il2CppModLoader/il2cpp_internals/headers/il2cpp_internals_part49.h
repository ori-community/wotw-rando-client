namespace app {
struct ActivityTracker__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ActivityTracker__StaticFields {
  struct ActivityTracker * s_activityTrackerInstance;
  int64_t m_nextId;
};
struct ActivityTracker__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ActivityTracker__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ActivityTracker__VTable vtable;
};
struct EventSource__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData OnEventCommand;
  VirtualInvokeData Dispose_1;
};
struct EventSource__StaticFields {
  uint32_t s_currentPid;
  uint8_t m_EventSourceExceptionRecurenceCount;
  struct Action_1_Guid_ * s_activityDying;
  struct Byte__Array * namespaceBytes;
  struct Guid AspNetEventSourceGuid;
};
struct EventSource__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EventSource__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EventSource__VTable vtable;
};
struct CDSCollectionETWBCLProvider__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData OnEventCommand;
  VirtualInvokeData Dispose_1;
};
struct CDSCollectionETWBCLProvider__StaticFields {
  struct CDSCollectionETWBCLProvider * Log;
};
struct CDSCollectionETWBCLProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CDSCollectionETWBCLProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CDSCollectionETWBCLProvider__VTable vtable;
};

struct EqualityComparer_1_System_String_ {
  struct EqualityComparer_1_System_String___Class *klass;
  struct MonitorData *monitor;
};
struct NonRandomizedStringEqualityComparer {
  struct NonRandomizedStringEqualityComparer__Class *klass;
  struct MonitorData *monitor;
};
struct EqualityComparer_1_System_String___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_IEqualityComparer_Equals;
  VirtualInvokeData System_Collections_IEqualityComparer_GetHashCode;
  VirtualInvokeData Equals_1;
  VirtualInvokeData GetHashCode_1;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData IndexOf;
  VirtualInvokeData LastIndexOf;
};
struct EqualityComparer_1_System_String___StaticFields {
  struct EqualityComparer_1_System_String_ * defaultComparer;
};
struct EqualityComparer_1_System_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EqualityComparer_1_System_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EqualityComparer_1_System_String___VTable vtable;
};
struct NonRandomizedStringEqualityComparer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_IEqualityComparer_Equals;
  VirtualInvokeData System_Collections_IEqualityComparer_GetHashCode;
  VirtualInvokeData Equals_1;
  VirtualInvokeData GetHashCode_1;
  VirtualInvokeData Equals_2;
  VirtualInvokeData GetHashCode_2;
  VirtualInvokeData IndexOf;
  VirtualInvokeData LastIndexOf;
};
struct NonRandomizedStringEqualityComparer__StaticFields {
};
struct NonRandomizedStringEqualityComparer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NonRandomizedStringEqualityComparer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NonRandomizedStringEqualityComparer__VTable vtable;
};

struct ObjectEqualityComparer {
  struct ObjectEqualityComparer__Class *klass;
  struct MonitorData *monitor;
};
struct ObjectEqualityComparer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_IEqualityComparer_Equals;
  VirtualInvokeData System_Collections_IEqualityComparer_GetHashCode;
};
struct ObjectEqualityComparer__StaticFields {
  struct ObjectEqualityComparer * Default;
};
struct ObjectEqualityComparer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ObjectEqualityComparer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ObjectEqualityComparer__VTable vtable;
};

struct EqualityComparer_1_System_Byte_ {
  struct EqualityComparer_1_System_Byte___Class *klass;
  struct MonitorData *monitor;
};
struct ByteEqualityComparer {
  struct ByteEqualityComparer__Class *klass;
  struct MonitorData *monitor;
};
struct EqualityComparer_1_System_Byte___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_IEqualityComparer_Equals;
  VirtualInvokeData System_Collections_IEqualityComparer_GetHashCode;
  VirtualInvokeData Equals_1;
  VirtualInvokeData GetHashCode_1;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData IndexOf;
  VirtualInvokeData LastIndexOf;
};
struct EqualityComparer_1_System_Byte___StaticFields {
  struct EqualityComparer_1_System_Byte_ * defaultComparer;
};
struct EqualityComparer_1_System_Byte___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EqualityComparer_1_System_Byte___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EqualityComparer_1_System_Byte___VTable vtable;
};
struct ByteEqualityComparer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_IEqualityComparer_Equals;
  VirtualInvokeData System_Collections_IEqualityComparer_GetHashCode;
  VirtualInvokeData Equals_1;
  VirtualInvokeData GetHashCode_1;
  VirtualInvokeData Equals_2;
  VirtualInvokeData GetHashCode_2;
  VirtualInvokeData IndexOf;
  VirtualInvokeData LastIndexOf;
};
struct ByteEqualityComparer__StaticFields {
};
struct ByteEqualityComparer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ByteEqualityComparer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ByteEqualityComparer__VTable vtable;
};

struct InternalStringComparer {
  struct InternalStringComparer__Class *klass;
  struct MonitorData *monitor;
};
struct InternalStringComparer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_IEqualityComparer_Equals;
  VirtualInvokeData System_Collections_IEqualityComparer_GetHashCode;
  VirtualInvokeData Equals_1;
  VirtualInvokeData GetHashCode_1;
  VirtualInvokeData Equals_2;
  VirtualInvokeData GetHashCode_2;
  VirtualInvokeData IndexOf;
  VirtualInvokeData LastIndexOf;
};
struct InternalStringComparer__StaticFields {
};
struct InternalStringComparer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InternalStringComparer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InternalStringComparer__VTable vtable;
};

struct KeyNotFoundException__Fields {
  struct SystemException__Fields _;
};
struct KeyNotFoundException {
  struct KeyNotFoundException__Class *klass;
  struct MonitorData *monitor;
  struct KeyNotFoundException__Fields fields;
};
struct KeyNotFoundException__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData get_Message;
  VirtualInvokeData get_Data;
  VirtualInvokeData get_InnerException;
  VirtualInvokeData get_StackTrace;
  VirtualInvokeData get_Source;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetType;
};
struct KeyNotFoundException__StaticFields {
};
struct KeyNotFoundException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyNotFoundException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyNotFoundException__VTable vtable;
};

struct __declspec(align(8)) ConditionalAttribute__Fields {
  struct String * m_conditionString;
};
struct ConditionalAttribute {
  struct ConditionalAttribute__Class *klass;
  struct MonitorData *monitor;
  struct ConditionalAttribute__Fields fields;
};
struct ConditionalAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ConditionalAttribute__StaticFields {
};
struct ConditionalAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConditionalAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConditionalAttribute__VTable vtable;
};

struct DebuggerStepThroughAttribute {
  struct DebuggerStepThroughAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct DebuggerStepThroughAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DebuggerStepThroughAttribute__StaticFields {
};
struct DebuggerStepThroughAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DebuggerStepThroughAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DebuggerStepThroughAttribute__VTable vtable;
};

struct DebuggerHiddenAttribute {
  struct DebuggerHiddenAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct DebuggerHiddenAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DebuggerHiddenAttribute__StaticFields {
};
struct DebuggerHiddenAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DebuggerHiddenAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DebuggerHiddenAttribute__VTable vtable;
};

struct DebuggerNonUserCodeAttribute {
  struct DebuggerNonUserCodeAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct DebuggerNonUserCodeAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DebuggerNonUserCodeAttribute__StaticFields {
};
struct DebuggerNonUserCodeAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DebuggerNonUserCodeAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DebuggerNonUserCodeAttribute__VTable vtable;
};

enum DebuggableAttribute_DebuggingModes__Enum : int32_t {
  DebuggableAttribute_DebuggingModes__Enum_None = 0,
  DebuggableAttribute_DebuggingModes__Enum_Default = 1,
  DebuggableAttribute_DebuggingModes__Enum_DisableOptimizations = 256,
  DebuggableAttribute_DebuggingModes__Enum_IgnoreSymbolStoreSequencePoints = 2,
  DebuggableAttribute_DebuggingModes__Enum_EnableEditAndContinue = 4,
};
struct DebuggableAttribute_DebuggingModes__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DebuggableAttribute_DebuggingModes__Enum value;
};
struct __declspec(align(8)) DebuggableAttribute__Fields {
  enum DebuggableAttribute_DebuggingModes__Enum m_debuggingModes;
};
struct DebuggableAttribute {
  struct DebuggableAttribute__Class *klass;
  struct MonitorData *monitor;
  struct DebuggableAttribute__Fields fields;
};
struct DebuggableAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DebuggableAttribute__StaticFields {
};
struct DebuggableAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DebuggableAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DebuggableAttribute__VTable vtable;
};

enum DebuggerBrowsableState__Enum : int32_t {
  DebuggerBrowsableState__Enum_Never = 0,
  DebuggerBrowsableState__Enum_Collapsed = 2,
  DebuggerBrowsableState__Enum_RootHidden = 3,
};
struct DebuggerBrowsableState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DebuggerBrowsableState__Enum value;
};
struct __declspec(align(8)) DebuggerBrowsableAttribute__Fields {
  enum DebuggerBrowsableState__Enum state;
};
struct DebuggerBrowsableAttribute {
  struct DebuggerBrowsableAttribute__Class *klass;
  struct MonitorData *monitor;
  struct DebuggerBrowsableAttribute__Fields fields;
};
struct DebuggerBrowsableAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DebuggerBrowsableAttribute__StaticFields {
};
struct DebuggerBrowsableAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DebuggerBrowsableAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DebuggerBrowsableAttribute__VTable vtable;
};

struct __declspec(align(8)) DebuggerTypeProxyAttribute__Fields {
  struct String * typeName;
};
struct DebuggerTypeProxyAttribute {
  struct DebuggerTypeProxyAttribute__Class *klass;
  struct MonitorData *monitor;
  struct DebuggerTypeProxyAttribute__Fields fields;
};
struct DebuggerTypeProxyAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DebuggerTypeProxyAttribute__StaticFields {
};
struct DebuggerTypeProxyAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DebuggerTypeProxyAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DebuggerTypeProxyAttribute__VTable vtable;
};

struct __declspec(align(8)) DebuggerDisplayAttribute__Fields {
  struct String * name;
  struct String * value;
  struct String * type;
};
struct DebuggerDisplayAttribute {
  struct DebuggerDisplayAttribute__Class *klass;
  struct MonitorData *monitor;
  struct DebuggerDisplayAttribute__Fields fields;
};
struct DebuggerDisplayAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DebuggerDisplayAttribute__StaticFields {
};
struct DebuggerDisplayAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DebuggerDisplayAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DebuggerDisplayAttribute__VTable vtable;
};

enum StackTrace_TraceFormat__Enum : int32_t {
  StackTrace_TraceFormat__Enum_Normal = 0,
  StackTrace_TraceFormat__Enum_TrailingNewLine = 1,
  StackTrace_TraceFormat__Enum_NoResourceLookup = 2,
};
struct StackTrace_TraceFormat__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum StackTrace_TraceFormat__Enum value;
};

struct DataCollector {
  uint8_t * scratchEnd;
  struct EventSource_EventData * datasEnd;
  struct GCHandle * pinsEnd;
  struct EventSource_EventData * datasStart;
  uint8_t * scratch;
  struct EventSource_EventData * datas;
  struct GCHandle * pins;
  struct Byte__Array * buffer;
  int32_t bufferPos;
  int32_t bufferNesting;
  bool writingScalars;
};
struct DataCollector__Boxed {
  struct DataCollector__Class *klass;
  struct MonitorData *monitor;
  struct DataCollector fields;
};
struct EventSource_EventData {
  int64_t m_Ptr;
  int32_t m_Size;
  int32_t m_Reserved;
};
struct EventSource_EventData__Boxed {
  struct EventSource_EventData__Class *klass;
  struct MonitorData *monitor;
  struct EventSource_EventData fields;
};
struct EventSource_EventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EventSource_EventData__StaticFields {
};
struct EventSource_EventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EventSource_EventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EventSource_EventData__VTable vtable;
};
struct DataCollector__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DataCollector__StaticFields {
  struct DataCollector ThreadInstance;
};
struct DataCollector__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DataCollector__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DataCollector__VTable vtable;
};

struct __declspec(align(8)) EventDataAttribute__Fields {
  enum EventLevel__Enum level;
  enum EventOpcode__Enum opcode;
  struct String * _Name_k__BackingField;
  enum EventKeywords__Enum _Keywords_k__BackingField;
  enum EventTags__Enum _Tags_k__BackingField;
};
struct EventDataAttribute {
  struct EventDataAttribute__Class *klass;
  struct MonitorData *monitor;
  struct EventDataAttribute__Fields fields;
};
struct EventDataAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct EventDataAttribute__StaticFields {
};
struct EventDataAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EventDataAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EventDataAttribute__VTable vtable;
};

enum EventFieldTags__Enum : int32_t {
  EventFieldTags__Enum_None = 0,
};
struct EventFieldTags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EventFieldTags__Enum value;
};
enum EventFieldFormat__Enum : int32_t {
  EventFieldFormat__Enum_Default = 0,
  EventFieldFormat__Enum_String = 2,
  EventFieldFormat__Enum_Boolean = 3,
  EventFieldFormat__Enum_Hexadecimal = 4,
  EventFieldFormat__Enum_Xml = 11,
  EventFieldFormat__Enum_Json = 12,
  EventFieldFormat__Enum_HResult = 15,
};
struct EventFieldFormat__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EventFieldFormat__Enum value;
};
struct __declspec(align(8)) EventFieldAttribute__Fields {
  enum EventFieldTags__Enum _Tags_k__BackingField;
  struct String * _Name_k__BackingField;
  enum EventFieldFormat__Enum _Format_k__BackingField;
};
struct EventFieldAttribute {
  struct EventFieldAttribute__Class *klass;
  struct MonitorData *monitor;
  struct EventFieldAttribute__Fields fields;
};
struct EventFieldAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct EventFieldAttribute__StaticFields {
};
struct EventFieldAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EventFieldAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EventFieldAttribute__VTable vtable;
};

struct __declspec(align(8)) EventPayload__Fields {
  struct List_1_System_String_ * m_names;
  struct List_1_System_Object_ * m_values;
};
struct EventPayload {
  struct EventPayload__Class *klass;
  struct MonitorData *monitor;
  struct EventPayload__Fields fields;
};
struct EventPayload__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData get_Keys;
  VirtualInvokeData get_Values;
  VirtualInvokeData ContainsKey;
  VirtualInvokeData Add;
  VirtualInvokeData Remove;
  VirtualInvokeData TryGetValue;
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add_1;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove_1;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
};
struct EventPayload__StaticFields {
};
struct EventPayload__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EventPayload__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EventPayload__VTable vtable;
};

struct __declspec(align(8)) EventPayload_GetEnumerator_d_17__Fields {
  int32_t __1__state;
  struct KeyValuePair_2_System_String_System_Object_ __2__current;
  struct EventPayload * __4__this;
  int32_t _i_5__1;
};
struct EventPayload_GetEnumerator_d_17 {
  struct EventPayload_GetEnumerator_d_17__Class *klass;
  struct MonitorData *monitor;
  struct EventPayload_GetEnumerator_d_17__Fields fields;
};
struct EventPayload_GetEnumerator_d_17__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Object___get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct EventPayload_GetEnumerator_d_17__StaticFields {
};
struct EventPayload_GetEnumerator_d_17__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EventPayload_GetEnumerator_d_17__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EventPayload_GetEnumerator_d_17__VTable vtable;
};

struct EventSourceOptions {
  enum EventKeywords__Enum keywords;
  enum EventTags__Enum tags;
  enum EventActivityOptions__Enum activityOptions;
  uint8_t level;
  uint8_t opcode;
  uint8_t valuesSet;
};
struct EventSourceOptions__Boxed {
  struct EventSourceOptions__Class *klass;
  struct MonitorData *monitor;
  struct EventSourceOptions fields;
};
struct EventSourceOptions__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EventSourceOptions__StaticFields {
};
struct EventSourceOptions__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EventSourceOptions__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EventSourceOptions__VTable vtable;
};

struct __declspec(align(8)) FieldMetadata__Fields {
  struct String * name;
  int32_t nameSize;
  enum EventFieldTags__Enum tags;
  struct Byte__Array * custom;
  uint16_t fixedCount;
  uint8_t inType;
  uint8_t outType;
};
struct FieldMetadata {
  struct FieldMetadata__Class *klass;
  struct MonitorData *monitor;
  struct FieldMetadata__Fields fields;
};
enum TraceLoggingDataType__Enum : int32_t {
  TraceLoggingDataType__Enum_Nil = 0,
  TraceLoggingDataType__Enum_Utf16String = 1,
  TraceLoggingDataType__Enum_MbcsString = 2,
  TraceLoggingDataType__Enum_Int8 = 3,
  TraceLoggingDataType__Enum_UInt8 = 4,
  TraceLoggingDataType__Enum_Int16 = 5,
  TraceLoggingDataType__Enum_UInt16 = 6,
  TraceLoggingDataType__Enum_Int32 = 7,
  TraceLoggingDataType__Enum_UInt32 = 8,
  TraceLoggingDataType__Enum_Int64 = 9,
  TraceLoggingDataType__Enum_UInt64 = 10,
  TraceLoggingDataType__Enum_Float = 11,
  TraceLoggingDataType__Enum_Double = 12,
  TraceLoggingDataType__Enum_Boolean32 = 13,
  TraceLoggingDataType__Enum_Binary = 14,
  TraceLoggingDataType__Enum_Guid = 15,
  TraceLoggingDataType__Enum_FileTime = 17,
  TraceLoggingDataType__Enum_SystemTime = 18,
  TraceLoggingDataType__Enum_HexInt32 = 20,
  TraceLoggingDataType__Enum_HexInt64 = 21,
  TraceLoggingDataType__Enum_CountedUtf16String = 22,
  TraceLoggingDataType__Enum_CountedMbcsString = 23,
  TraceLoggingDataType__Enum_Struct = 24,
  TraceLoggingDataType__Enum_Char16 = 518,
  TraceLoggingDataType__Enum_Char8 = 516,
  TraceLoggingDataType__Enum_Boolean8 = 772,
  TraceLoggingDataType__Enum_HexInt8 = 1028,
  TraceLoggingDataType__Enum_HexInt16 = 1030,
  TraceLoggingDataType__Enum_Utf16Xml = 2817,
  TraceLoggingDataType__Enum_MbcsXml = 2818,
  TraceLoggingDataType__Enum_CountedUtf16Xml = 2838,
  TraceLoggingDataType__Enum_CountedMbcsXml = 2839,
  TraceLoggingDataType__Enum_Utf16Json = 3073,
  TraceLoggingDataType__Enum_MbcsJson = 3074,
  TraceLoggingDataType__Enum_CountedUtf16Json = 3094,
  TraceLoggingDataType__Enum_CountedMbcsJson = 3095,
  TraceLoggingDataType__Enum_HResult = 3847,
};
struct TraceLoggingDataType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TraceLoggingDataType__Enum value;
};
struct FieldMetadata__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FieldMetadata__StaticFields {
};
struct FieldMetadata__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FieldMetadata__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FieldMetadata__VTable vtable;
};

struct __declspec(align(8)) PropertyAnalysis__Fields {
  struct String * name;
  struct MethodInfo_1 * getterInfo;
  struct TraceLoggingTypeInfo * typeInfo;
  struct EventFieldAttribute * fieldAttribute;
};
struct PropertyAnalysis {
  struct PropertyAnalysis__Class *klass;
  struct MonitorData *monitor;
  struct PropertyAnalysis__Fields fields;
};
struct PropertyAnalysis__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PropertyAnalysis__StaticFields {
};
struct PropertyAnalysis__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PropertyAnalysis__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PropertyAnalysis__VTable vtable;
};

struct TraceLoggingTypeInfo_1_System_Boolean___Fields {
  struct TraceLoggingTypeInfo__Fields _;
};
struct TraceLoggingTypeInfo_1_System_Boolean_ {
  struct TraceLoggingTypeInfo_1_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct TraceLoggingTypeInfo_1_System_Boolean___Fields fields;
};
struct BooleanTypeInfo__Fields {
  struct TraceLoggingTypeInfo_1_System_Boolean___Fields _;
};
struct BooleanTypeInfo {
  struct BooleanTypeInfo__Class *klass;
  struct MonitorData *monitor;
  struct BooleanTypeInfo__Fields fields;
};
struct __declspec(align(8)) TraceLoggingMetadataCollector__Fields {
  struct TraceLoggingMetadataCollector_Impl * impl;
  struct FieldMetadata * currentGroup;
  int32_t bufferedArrayFieldCount;
  enum EventFieldTags__Enum _Tags_k__BackingField;
};
struct TraceLoggingMetadataCollector {
  struct TraceLoggingMetadataCollector__Class *klass;
  struct MonitorData *monitor;
  struct TraceLoggingMetadataCollector__Fields fields;
};
struct __declspec(align(8)) TraceLoggingMetadataCollector_Impl__Fields {
  struct List_1_System_Diagnostics_Tracing_FieldMetadata_ * fields;
  int16_t scratchSize;
  int8_t dataCount;
  int8_t pinCount;
  int32_t bufferNesting;
  bool scalar;
};
struct TraceLoggingMetadataCollector_Impl {
  struct TraceLoggingMetadataCollector_Impl__Class *klass;
  struct MonitorData *monitor;
  struct TraceLoggingMetadataCollector_Impl__Fields fields;
};
struct __declspec(align(8)) List_1_System_Diagnostics_Tracing_FieldMetadata___Fields {
  struct FieldMetadata__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Diagnostics_Tracing_FieldMetadata_ {
  struct List_1_System_Diagnostics_Tracing_FieldMetadata___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Diagnostics_Tracing_FieldMetadata___Fields fields;
};
struct FieldMetadata__Array {
  struct FieldMetadata__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct FieldMetadata * vector[32];
};
struct IEnumerator_1_System_Diagnostics_Tracing_FieldMetadata_ {
  struct IEnumerator_1_System_Diagnostics_Tracing_FieldMetadata___Class *klass;
  struct MonitorData *monitor;
};
struct TraceLoggingDataCollector {
  struct TraceLoggingDataCollector__Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_System_Diagnostics_Tracing_FieldMetadata___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Diagnostics_Tracing_FieldMetadata___StaticFields {
};
struct IEnumerator_1_System_Diagnostics_Tracing_FieldMetadata___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Diagnostics_Tracing_FieldMetadata___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Diagnostics_Tracing_FieldMetadata___VTable vtable;
};
struct List_1_System_Diagnostics_Tracing_FieldMetadata___VTable {
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
struct List_1_System_Diagnostics_Tracing_FieldMetadata___StaticFields {
  struct FieldMetadata__Array * _emptyArray;
};
struct List_1_System_Diagnostics_Tracing_FieldMetadata___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_Diagnostics_Tracing_FieldMetadata___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_Diagnostics_Tracing_FieldMetadata___VTable vtable;
};
struct TraceLoggingMetadataCollector_Impl__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};}