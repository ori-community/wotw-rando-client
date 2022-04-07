namespace app {
struct GetReplays__StaticFields {
};
struct GetReplays__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetReplays__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetReplays__VTable vtable;
};

struct WipeReplay__Fields {
  struct SwaggerRequest_1_StatusCallback___Fields _;
};
struct WipeReplay {
  struct WipeReplay__Class *klass;
  struct MonitorData *monitor;
  struct WipeReplay__Fields fields;
};
struct WipeReplay__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Path;
  VirtualInvokeData get_Method;
  VirtualInvokeData get_DataReader;
  VirtualInvokeData get_Headers;
  VirtualInvokeData CreateRequestCallbackObject;
  VirtualInvokeData Finish;
};
struct WipeReplay__StaticFields {
};
struct WipeReplay__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WipeReplay__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WipeReplay__VTable vtable;
};

enum WebImpl__Enum : int32_t {
  WebImpl__Enum_WebClient = 0,
  WebImpl__Enum_BestHTTP = 1,
};
struct WebImpl__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum WebImpl__Enum value;
};

struct MoonTelemetryWebConfig {
  struct MoonTelemetryWebConfig__Class *klass;
  struct MonitorData *monitor;
};
struct MoonTelemetryWebConfig__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonTelemetryWebConfig__StaticFields {
  bool s_isInited;
  enum WebImpl__Enum s_impl;
  struct String * _UNITY_VERSION_k__BackingField;
  struct Dictionary_2_System_String_System_String_ * _HEADERS_k__BackingField;
};
struct MoonTelemetryWebConfig__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetryWebConfig__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetryWebConfig__VTable vtable;
};

struct __declspec(align(8)) WebClientImpl__Fields {
  struct String * m_url;
  struct WebClient * m_client;
  struct Dictionary_2_System_String_System_String_ * m_requestParams;
  struct Byte__Array * m_requestData;
  struct Action_1_Moon_Network_Web_WebResponse_ * m_callback;
};
struct WebClientImpl {
  struct WebClientImpl__Class *klass;
  struct MonitorData *monitor;
  struct WebClientImpl__Fields fields;
};
struct Action_1_Moon_Network_Web_WebResponse___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_Moon_Network_Web_WebResponse_ {
  struct Action_1_Moon_Network_Web_WebResponse___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_Moon_Network_Web_WebResponse___Fields fields;
};
struct Action_1_Moon_Network_Web_WebResponse___VTable {
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
struct Action_1_Moon_Network_Web_WebResponse___StaticFields {
};
struct Action_1_Moon_Network_Web_WebResponse___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_Moon_Network_Web_WebResponse___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_Moon_Network_Web_WebResponse___VTable vtable;
};
struct WebClientImpl__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SetURL;
  VirtualInvokeData SetData;
  VirtualInvokeData AddParam;
  VirtualInvokeData AddHeader;
  VirtualInvokeData Send;
  VirtualInvokeData get_HasTimeout;
  VirtualInvokeData get_Timeout;
};
struct WebClientImpl__StaticFields {
  bool s_inited;
};
struct WebClientImpl__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WebClientImpl__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WebClientImpl__VTable vtable;
};

struct __declspec(align(8)) AttributesBasedDataReader__Fields {
  struct IRequest * m_request;
  struct Dictionary_2_System_String_System_Object_ * m_body;
  bool m_ignoreNullValues;
};
struct AttributesBasedDataReader {
  struct AttributesBasedDataReader__Class *klass;
  struct MonitorData *monitor;
  struct AttributesBasedDataReader__Fields fields;
};
struct JSONDataReader__Fields {
  struct AttributesBasedDataReader__Fields _;
};
struct JSONDataReader {
  struct JSONDataReader__Class *klass;
  struct MonitorData *monitor;
  struct JSONDataReader__Fields fields;
};
struct JSONDataReader__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SetRequest;
  VirtualInvokeData get_Data;
  VirtualInvokeData get_Body;
  VirtualInvokeData CreateBody;
  VirtualInvokeData get_Data_1;
};
struct JSONDataReader__StaticFields {
};
struct JSONDataReader__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JSONDataReader__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JSONDataReader__VTable vtable;
};
struct AttributesBasedDataReader__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SetRequest;
  VirtualInvokeData get_Data;
  VirtualInvokeData get_Body;
  VirtualInvokeData CreateBody;
  VirtualInvokeData __unknown;
};
struct AttributesBasedDataReader__StaticFields {
};
struct AttributesBasedDataReader__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AttributesBasedDataReader__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AttributesBasedDataReader__VTable vtable;
};

struct __declspec(align(8)) ParamAttribute__Fields {
  struct String * m_name;
};
struct ParamAttribute {
  struct ParamAttribute__Class *klass;
  struct MonitorData *monitor;
  struct ParamAttribute__Fields fields;
};
struct ParamAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ParamAttribute__StaticFields {
};
struct ParamAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ParamAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ParamAttribute__VTable vtable;
};

struct BytesDataReader {
  struct BytesDataReader__Class *klass;
  struct MonitorData *monitor;
};
struct BytesDataReader__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BytesDataReader__StaticFields {
};
struct BytesDataReader__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BytesDataReader__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BytesDataReader__VTable vtable;
};

struct KustoDataReader__Fields {
  struct AttributesBasedDataReader__Fields _;
  struct String * m_query;
};
struct KustoDataReader {
  struct KustoDataReader__Class *klass;
  struct MonitorData *monitor;
  struct KustoDataReader__Fields fields;
};
struct KustoDataReader__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SetRequest;
  VirtualInvokeData get_Data;
  VirtualInvokeData get_Body;
  VirtualInvokeData CreateBody;
  VirtualInvokeData get_Data_1;
};
struct KustoDataReader__StaticFields {
};
struct KustoDataReader__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KustoDataReader__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KustoDataReader__VTable vtable;
};

struct MoonJSONDataReader__Fields {
  struct AttributesBasedDataReader__Fields _;
  struct Byte__Array * m_data;
  int32_t m_dataLength;
};
struct MoonJSONDataReader {
  struct MoonJSONDataReader__Class *klass;
  struct MonitorData *monitor;
  struct MoonJSONDataReader__Fields fields;
};
struct MoonJSONDataReader__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SetRequest;
  VirtualInvokeData get_Data;
  VirtualInvokeData get_Body;
  VirtualInvokeData CreateBody;
  VirtualInvokeData get_Data_1;
};
struct MoonJSONDataReader__StaticFields {
};
struct MoonJSONDataReader__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonJSONDataReader__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonJSONDataReader__VTable vtable;
};

struct ServerCommunicator {
  struct ServerCommunicator__Class *klass;
  struct MonitorData *monitor;
};
struct ServerCommunicator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Send;
};
struct ServerCommunicator__StaticFields {
};
struct ServerCommunicator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerCommunicator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerCommunicator__VTable vtable;
};

struct ServerCommunicator_c {
  struct ServerCommunicator_c__Class *klass;
  struct MonitorData *monitor;
};
struct ServerCommunicator_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ServerCommunicator_c__StaticFields {
  struct ServerCommunicator_c * __9;
  struct Action_2_Moon_Network_Web_IRequest_Moon_Network_Web_IRequestCallback_ * __9__1_0;
};
struct ServerCommunicator_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerCommunicator_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerCommunicator_c__VTable vtable;
};

struct MoonTelemetryCommunicator {
  struct MoonTelemetryCommunicator__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_System_Threading_Thread___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Thread___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Threading_Thread_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Threading_Thread_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_System_Threading_Thread_ {
  struct Dictionary_2_System_Int32_System_Threading_Thread___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_System_Threading_Thread___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Thread_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct Thread * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Thread___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Thread___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Thread_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Thread___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Thread___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Thread_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Threading_Thread___Fields {
  struct Dictionary_2_System_Int32_System_Threading_Thread_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Threading_Thread_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Threading_Thread___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Threading_Thread___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Threading_Thread___Fields {
  struct Dictionary_2_System_Int32_System_Threading_Thread_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Threading_Thread_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Threading_Thread___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Threading_Thread___Fields fields;
};
struct KeyValuePair_2_System_Int32_System_Threading_Thread_ {
  int32_t key;
  struct Thread * value;
};
struct KeyValuePair_2_System_Int32_System_Threading_Thread___Boxed {
  struct KeyValuePair_2_System_Int32_System_Threading_Thread___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_System_Threading_Thread_ fields;
};
struct KeyValuePair_2_System_Int32_System_Threading_Thread___Array {
  struct KeyValuePair_2_System_Int32_System_Threading_Thread___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_System_Threading_Thread_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Threading_Thread_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Threading_Thread___Class *klass;
  struct MonitorData *monitor;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Thread___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Thread___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Thread___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Thread___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Thread___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Threading_Thread___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Threading_Thread___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Threading_Thread___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Threading_Thread___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Threading_Thread___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Threading_Thread___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Threading_Thread___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Threading_Thread___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Threading_Thread___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Threading_Thread___VTable vtable;
};
struct KeyValuePair_2_System_Int32_System_Threading_Thread___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_Int32_System_Threading_Thread___StaticFields {
};
struct KeyValuePair_2_System_Int32_System_Threading_Thread___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_Int32_System_Threading_Thread___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_Int32_System_Threading_Thread___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Threading_Thread___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Threading_Thread___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Threading_Thread___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Threading_Thread___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Threading_Thread___VTable vtable;
};
struct Dictionary_2_System_Int32_System_Threading_Thread___VTable {
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
struct Dictionary_2_System_Int32_System_Threading_Thread___StaticFields {
};
struct Dictionary_2_System_Int32_System_Threading_Thread___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_Int32_System_Threading_Thread___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_Int32_System_Threading_Thread___VTable vtable;
};
struct MoonTelemetryCommunicator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Send;
};
struct MoonTelemetryCommunicator__StaticFields {
  struct String * s_webServerUrl;
  struct MoonTelemetryCommunicator * s_instance;
  struct Dictionary_2_System_Int32_System_Threading_Thread_ * s_requestThreads;
};
struct MoonTelemetryCommunicator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetryCommunicator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetryCommunicator__VTable vtable;
};

struct MoonTelemetryCommunicator_c {
  struct MoonTelemetryCommunicator_c__Class *klass;
  struct MonitorData *monitor;
};
struct MoonTelemetryCommunicator_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonTelemetryCommunicator_c__StaticFields {
  struct MoonTelemetryCommunicator_c * __9;
  struct Action_2_Moon_Network_Web_IRequest_Moon_Network_Web_IRequestCallback_ * __9__5_0;
};
struct MoonTelemetryCommunicator_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetryCommunicator_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetryCommunicator_c__VTable vtable;
};

struct __declspec(align(8)) MainThreadDelegate__Fields {
  struct Timer_1 * timer;
  struct List_1_System_Action_ * m_actions;
};
struct MainThreadDelegate {
  struct MainThreadDelegate__Class *klass;
  struct MonitorData *monitor;
  struct MainThreadDelegate__Fields fields;
};
struct MainThreadDelegate__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MainThreadDelegate__StaticFields {
  struct MainThreadDelegate * s_instance;
};
struct MainThreadDelegate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MainThreadDelegate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MainThreadDelegate__VTable vtable;
};

struct MainThreadDispatcherPlaymode__Fields {
  struct MonoBehaviour__Fields _;
};
struct MainThreadDispatcherPlaymode {
  struct MainThreadDispatcherPlaymode__Class *klass;
  struct MonitorData *monitor;
  struct MainThreadDispatcherPlaymode__Fields fields;
};
struct __declspec(align(8)) Queue_1_System_Action___Fields {
  struct Action__Array * _array;
  int32_t _head;
  int32_t _tail;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Queue_1_System_Action_ {
  struct Queue_1_System_Action___Class *klass;
  struct MonitorData *monitor;
  struct Queue_1_System_Action___Fields fields;
};
struct Queue_1_System_Action___VTable {
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
struct Queue_1_System_Action___StaticFields {
};
struct Queue_1_System_Action___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Queue_1_System_Action___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Queue_1_System_Action___VTable vtable;
};
struct MainThreadDispatcherPlaymode__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MainThreadDispatcherPlaymode__StaticFields {
  struct Queue_1_System_Action_ * _executionQueue;
  struct MainThreadDispatcherPlaymode * s_instance;
};
struct MainThreadDispatcherPlaymode__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MainThreadDispatcherPlaymode__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MainThreadDispatcherPlaymode__VTable vtable;
};

struct __declspec(align(8)) Json_Parser__Fields {
  struct StringReader * json;
};
struct Json_Parser {
  struct Json_Parser__Class *klass;
  struct MonitorData *monitor;
  struct Json_Parser__Fields fields;
};
struct Json_Parser__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct Json_Parser__StaticFields {
};
struct Json_Parser__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Json_Parser__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Json_Parser__VTable vtable;
};

enum Json_Parser_TOKEN__Enum : int32_t {
  Json_Parser_TOKEN__Enum_NONE = 0,
  Json_Parser_TOKEN__Enum_CURLY_OPEN = 1,
  Json_Parser_TOKEN__Enum_CURLY_CLOSE = 2,
  Json_Parser_TOKEN__Enum_SQUARED_OPEN = 3,
  Json_Parser_TOKEN__Enum_SQUARED_CLOSE = 4,
  Json_Parser_TOKEN__Enum_COLON = 5,
  Json_Parser_TOKEN__Enum_COMMA = 6,
  Json_Parser_TOKEN__Enum_STRING = 7,
  Json_Parser_TOKEN__Enum_NUMBER = 8,
  Json_Parser_TOKEN__Enum_TRUE = 9,
  Json_Parser_TOKEN__Enum_FALSE = 10,
  Json_Parser_TOKEN__Enum_NULL = 11,
};
struct Json_Parser_TOKEN__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Json_Parser_TOKEN__Enum value;
};

struct __declspec(align(8)) Json_Serializer__Fields {
  struct StringBuilder * builder;
};
struct Json_Serializer {
  struct Json_Serializer__Class *klass;
  struct MonitorData *monitor;
  struct Json_Serializer__Fields fields;
};
struct Json_Serializer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Json_Serializer__StaticFields {
};
struct Json_Serializer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Json_Serializer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Json_Serializer__VTable vtable;
};

struct MakeScriptableObject {
  struct MakeScriptableObject__Class *klass;
  struct MonitorData *monitor;
};
struct MakeScriptableObject__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MakeScriptableObject__StaticFields {
};
struct MakeScriptableObject__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MakeScriptableObject__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MakeScriptableObject__VTable vtable;
};

enum WebRequestType__Enum : int32_t {
  WebRequestType__Enum_HttpWebRequest = 0,
  WebRequestType__Enum_UnityWebRequest = 1,
  WebRequestType__Enum_CustomHttp = 2,
};
struct WebRequestType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum WebRequestType__Enum value;
};
enum PlayFabLogLevel__Enum : int32_t {
  PlayFabLogLevel__Enum_None = 0,
  PlayFabLogLevel__Enum_Debug = 1,
  PlayFabLogLevel__Enum_Info = 2,
  PlayFabLogLevel__Enum_Warning = 4,
  PlayFabLogLevel__Enum_Error = 8,
  PlayFabLogLevel__Enum_All = 15,
};
struct PlayFabLogLevel__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PlayFabLogLevel__Enum value;
};
struct PlayFabSharedSettings__Fields {
  struct ScriptableObject__Fields _;
  struct String * TitleId;
  struct String * VerticalName;
  struct String * DeveloperSecretKey;
  struct String * ProductionEnvironmentUrl;
  enum WebRequestType__Enum RequestType;
  int32_t RequestTimeout;
  bool RequestKeepAlive;
  bool CompressApiData;
  enum PlayFabLogLevel__Enum LogLevel;
  struct String * LoggerHost;
  int32_t LoggerPort;
  bool EnableRealTimeLogging;
  int32_t LogCapLimit;
};
struct PlayFabSharedSettings {
  struct PlayFabSharedSettings__Class *klass;
  struct MonitorData *monitor;
  struct PlayFabSharedSettings__Fields fields;
};
struct PlayFabSharedSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayFabSharedSettings__StaticFields {
};
struct PlayFabSharedSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFabSharedSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayFabSharedSettings__VTable vtable;
};

struct __declspec(align(8)) CsEvent__Fields {
  struct String * _ver_k__BackingField;
  struct String * _name_k__BackingField;
  int64_t _time_k__BackingField;
  double _popSample_k__BackingField;
  struct String * _iKey_k__BackingField;
  int64_t _flags_k__BackingField;
  struct String * _cV_k__BackingField;
  struct List_1_Microsoft_Applications_Events_DataModels_Ingest_ * _extIngest_k__BackingField;
  struct List_1_Microsoft_Applications_Events_DataModels_Protocol_ * _extProtocol_k__BackingField;
  struct List_1_Microsoft_Applications_Events_DataModels_User_ * _extUser_k__BackingField;
  struct List_1_Microsoft_Applications_Events_DataModels_Device_ * _extDevice_k__BackingField;
  struct List_1_Microsoft_Applications_Events_DataModels_Os_ * _extOs_k__BackingField;
  struct List_1_Microsoft_Applications_Events_DataModels_App_ * _extApp_k__BackingField;
  struct List_1_Microsoft_Applications_Events_DataModels_Utc_ * _extUtc_k__BackingField;
  struct List_1_Microsoft_Applications_Events_DataModels_Xbl_ * _extXbl_k__BackingField;
  struct List_1_Microsoft_Applications_Events_DataModels_Javascript_ * _extJavascript_k__BackingField;
  struct List_1_Microsoft_Applications_Events_DataModels_Receipts_ * _extReceipts_k__BackingField;
  struct List_1_Microsoft_Applications_Events_DataModels_Net_ * _extNet_k__BackingField;
  struct List_1_Microsoft_Applications_Events_DataModels_Sdk_ * _extSdk_k__BackingField;
  struct List_1_Microsoft_Applications_Events_DataModels_Loc_ * _extLoc_k__BackingField;
  struct List_1_Microsoft_Applications_Events_DataModels_Cloud_ * _extCloud_k__BackingField;
  struct List_1_Microsoft_Applications_Events_DataModels_Data_ * _ext_k__BackingField;
  struct Dictionary_2_System_String_System_String_ * _tags_k__BackingField;
  struct String * _baseType_k__BackingField;
  struct List_1_Microsoft_Applications_Events_DataModels_Data_ * _baseData_k__BackingField;
  struct List_1_Microsoft_Applications_Events_DataModels_Data_ * _data_k__BackingField;
};
struct CsEvent {
  struct CsEvent__Class *klass;
  struct MonitorData *monitor;
  struct CsEvent__Fields fields;
};
struct __declspec(align(8)) List_1_Microsoft_Applications_Events_DataModels_Ingest___Fields {
  struct Ingest__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Microsoft_Applications_Events_DataModels_Ingest_ {
  struct List_1_Microsoft_Applications_Events_DataModels_Ingest___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Microsoft_Applications_Events_DataModels_Ingest___Fields fields;
};
struct __declspec(align(8)) Ingest__Fields {
  int64_t _time_k__BackingField;
  struct String * _clientIp_k__BackingField;
  int64_t _auth_k__BackingField;
  int64_t _quality_k__BackingField;
  int64_t _uploadTime_k__BackingField;
  struct String * _userAgent_k__BackingField;
  struct String * _client_k__BackingField;
};
struct Ingest {
  struct Ingest__Class *klass;
  struct MonitorData *monitor;
  struct Ingest__Fields fields;
};
struct Ingest__Array {
  struct Ingest__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Ingest * vector[32];
};
struct IEnumerator_1_Microsoft_Applications_Events_DataModels_Ingest_ {
  struct IEnumerator_1_Microsoft_Applications_Events_DataModels_Ingest___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Microsoft_Applications_Events_DataModels_Protocol___Fields {
  struct Protocol__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Microsoft_Applications_Events_DataModels_Protocol_ {
  struct List_1_Microsoft_Applications_Events_DataModels_Protocol___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Microsoft_Applications_Events_DataModels_Protocol___Fields fields;
};
struct __declspec(align(8)) Protocol__Fields {
  int32_t _metadataCrc_k__BackingField;
  struct List_1_List_1_System_String_ * _ticketKeys_k__BackingField;
};
struct Protocol {
  struct Protocol__Class *klass;
  struct MonitorData *monitor;
  struct Protocol__Fields fields;
};
struct Protocol__Array {
  struct Protocol__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Protocol * vector[32];
};
struct __declspec(align(8)) List_1_List_1_System_String___Fields {
  struct List_1_System_String___Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_List_1_System_String_ {
  struct List_1_List_1_System_String___Class *klass;
  struct MonitorData *monitor;
  struct List_1_List_1_System_String___Fields fields;
};
struct List_1_System_String___Array {
  struct List_1_System_String___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct List_1_System_String_ * vector[32];
};}