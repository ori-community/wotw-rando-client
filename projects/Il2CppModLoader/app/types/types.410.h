namespace app {
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WipeReplay__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WipeReplay__VTable vtable;
};

enum class WebImpl__Enum : int32_t {
    WebClient = 0x00000000,
    BestHTTP = 0x00000001,
};

struct WebImpl__Enum__Boxed {
    struct WebImpl__Enum__Class *klass;
    MonitorData *monitor;
    WebImpl__Enum value;
    
};

struct WebImpl__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct WebImpl__Enum__StaticFields {
};

struct WebImpl__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WebImpl__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WebImpl__Enum__VTable vtable;
};

struct MoonTelemetryWebConfig {
    struct MoonTelemetryWebConfig__Class *klass;
    MonitorData *monitor;
};

struct MoonTelemetryWebConfig__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MoonTelemetryWebConfig__StaticFields {
    bool s_isInited;
    WebImpl__Enum s_impl;
    
    struct String *_UNITY_VERSION_k__BackingField;
    struct Dictionary_2_System_String_System_String_ *_HEADERS_k__BackingField;
};

struct MoonTelemetryWebConfig__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonTelemetryWebConfig__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonTelemetryWebConfig__VTable vtable;
};

struct __declspec(align(8)) WebClientImpl__Fields {
    struct String *m_url;
    struct WebClient *m_client;
    struct Dictionary_2_System_String_System_String_ *m_requestParams;
    struct Byte__Array *m_requestData;
    struct Action_1_Moon_Network_Web_WebResponse_ *m_callback;
};

struct WebClientImpl {
    struct WebClientImpl__Class *klass;
    MonitorData *monitor;
    struct WebClientImpl__Fields fields;
};

struct Action_1_Moon_Network_Web_WebResponse___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_Moon_Network_Web_WebResponse_ {
    struct Action_1_Moon_Network_Web_WebResponse___Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_Moon_Network_Web_WebResponse___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WebClientImpl__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WebClientImpl__VTable vtable;
};

struct __declspec(align(8)) AttributesBasedDataReader__Fields {
    struct IRequest *m_request;
    struct Dictionary_2_System_String_System_Object_ *m_body;
    bool m_ignoreNullValues;
};

struct AttributesBasedDataReader {
    struct AttributesBasedDataReader__Class *klass;
    MonitorData *monitor;
    struct AttributesBasedDataReader__Fields fields;
};

struct JSONDataReader__Fields {
    struct AttributesBasedDataReader__Fields _;
};

struct JSONDataReader {
    struct JSONDataReader__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JSONDataReader__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AttributesBasedDataReader__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AttributesBasedDataReader__VTable vtable;
};

struct __declspec(align(8)) ParamAttribute__Fields {
    struct String *m_name;
};

struct ParamAttribute {
    struct ParamAttribute__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ParamAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ParamAttribute__VTable vtable;
};

struct BytesDataReader {
    struct BytesDataReader__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BytesDataReader__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BytesDataReader__VTable vtable;
};

struct KustoDataReader__Fields {
    struct AttributesBasedDataReader__Fields _;
    struct String *m_query;
};

struct KustoDataReader {
    struct KustoDataReader__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KustoDataReader__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KustoDataReader__VTable vtable;
};

struct MoonJSONDataReader__Fields {
    struct AttributesBasedDataReader__Fields _;
    struct Byte__Array *m_data;
    int32_t m_dataLength;
};

struct MoonJSONDataReader {
    struct MoonJSONDataReader__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonJSONDataReader__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonJSONDataReader__VTable vtable;
};

struct ServerCommunicator {
    struct ServerCommunicator__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerCommunicator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerCommunicator__VTable vtable;
};

struct ServerCommunicator_c {
    struct ServerCommunicator_c__Class *klass;
    MonitorData *monitor;
};

struct ServerCommunicator_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ServerCommunicator_c__StaticFields {
    struct ServerCommunicator_c *__9;
    struct Action_2_Moon_Network_Web_IRequest_Moon_Network_Web_IRequestCallback_ *__9__1_0;
};

struct ServerCommunicator_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerCommunicator_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerCommunicator_c__VTable vtable;
};

struct MoonTelemetryCommunicator {
    struct MoonTelemetryCommunicator__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_System_Int32_System_Threading_Thread___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Thread___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Int32_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Threading_Thread_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Threading_Thread_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Int32_System_Threading_Thread_ {
    struct Dictionary_2_System_Int32_System_Threading_Thread___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Int32_System_Threading_Thread___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Thread_ {
    int32_t hashCode;
    int32_t next;
    int32_t key;
    struct Thread *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Thread___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Thread___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Thread_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Thread___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Thread___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Thread_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Threading_Thread___Fields {
    struct Dictionary_2_System_Int32_System_Threading_Thread_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Threading_Thread_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Threading_Thread___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Threading_Thread___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Threading_Thread___Fields {
    struct Dictionary_2_System_Int32_System_Threading_Thread_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Threading_Thread_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Threading_Thread___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Threading_Thread___Fields fields;
};

struct KeyValuePair_2_System_Int32_System_Threading_Thread_ {
    int32_t key;
    struct Thread *value;
};

struct KeyValuePair_2_System_Int32_System_Threading_Thread___Boxed {
    struct KeyValuePair_2_System_Int32_System_Threading_Thread___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Int32_System_Threading_Thread_ fields;
};

struct KeyValuePair_2_System_Int32_System_Threading_Thread___Array {
    struct KeyValuePair_2_System_Int32_System_Threading_Thread___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Int32_System_Threading_Thread_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Threading_Thread_ {
    struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Threading_Thread___Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Thread___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Thread___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Thread___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Thread___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Thread___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Thread___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Thread___Array__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Threading_Thread___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Threading_Thread___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Threading_Thread___VTable vtable;
};

struct Thread___VTable {
};

struct Thread___StaticFields {
};

struct Thread___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Thread___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Thread___VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Int32_System_Threading_Thread___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Int32_System_Threading_Thread___VTable vtable;
};

struct KeyValuePair_2_System_Int32_System_Threading_Thread___Array__VTable {
};

struct KeyValuePair_2_System_Int32_System_Threading_Thread___Array__StaticFields {
};

struct KeyValuePair_2_System_Int32_System_Threading_Thread___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Int32_System_Threading_Thread___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Int32_System_Threading_Thread___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Threading_Thread___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Threading_Thread___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Threading_Thread___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Threading_Thread___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_System_Int32_System_Threading_Thread___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct String *s_webServerUrl;
    struct MoonTelemetryCommunicator *s_instance;
    struct Dictionary_2_System_Int32_System_Threading_Thread_ *s_requestThreads;
};

struct MoonTelemetryCommunicator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonTelemetryCommunicator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonTelemetryCommunicator__VTable vtable;
};

struct MoonTelemetryCommunicator_c {
    struct MoonTelemetryCommunicator_c__Class *klass;
    MonitorData *monitor;
};

struct MoonTelemetryCommunicator_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MoonTelemetryCommunicator_c__StaticFields {
    struct MoonTelemetryCommunicator_c *__9;
    struct Action_2_Moon_Network_Web_IRequest_Moon_Network_Web_IRequestCallback_ *__9__5_0;
};

struct MoonTelemetryCommunicator_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonTelemetryCommunicator_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonTelemetryCommunicator_c__VTable vtable;
};

struct __declspec(align(8)) MainThreadDelegate__Fields {
    struct Timer_1 *timer;
    struct List_1_System_Action_ *m_actions;
};

struct MainThreadDelegate {
    struct MainThreadDelegate__Class *klass;
    MonitorData *monitor;
    struct MainThreadDelegate__Fields fields;
};

struct MainThreadDelegate__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MainThreadDelegate__StaticFields {
    struct MainThreadDelegate *s_instance;
};

struct MainThreadDelegate__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MainThreadDelegate__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MainThreadDelegate__VTable vtable;
};

struct MainThreadDispatcherPlaymode__Fields {
    struct MonoBehaviour__Fields _;
};

struct MainThreadDispatcherPlaymode {
    struct MainThreadDispatcherPlaymode__Class *klass;
    MonitorData *monitor;
    struct MainThreadDispatcherPlaymode__Fields fields;
};

struct __declspec(align(8)) Queue_1_System_Action___Fields {
    struct Action__Array *_array;
    int32_t _head;
    int32_t _tail;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct Queue_1_System_Action_ {
    struct Queue_1_System_Action___Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Queue_1_System_Action___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Queue_1_System_Action___VTable vtable;
};

struct MainThreadDispatcherPlaymode__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MainThreadDispatcherPlaymode__StaticFields {
    struct Queue_1_System_Action_ *_executionQueue;
    struct MainThreadDispatcherPlaymode *s_instance;
};

struct MainThreadDispatcherPlaymode__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MainThreadDispatcherPlaymode__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MainThreadDispatcherPlaymode__VTable vtable;
};

struct __declspec(align(8)) Json_Parser__Fields {
    struct StringReader *json;
};

struct Json_Parser {
    struct Json_Parser__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Json_Parser__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Json_Parser__VTable vtable;
};

enum class Json_Parser_TOKEN__Enum : int32_t {
    NONE = 0x00000000,
    CURLY_OPEN = 0x00000001,
    CURLY_CLOSE = 0x00000002,
    SQUARED_OPEN = 0x00000003,
    SQUARED_CLOSE = 0x00000004,
    COLON = 0x00000005,
    COMMA = 0x00000006,
    STRING = 0x00000007,
    NUMBER = 0x00000008,
    TRUE = 0x00000009,
    FALSE = 0x0000000a,
    NULL_1 = 0x0000000b,
};

struct Json_Parser_TOKEN__Enum__Boxed {
    struct Json_Parser_TOKEN__Enum__Class *klass;
    MonitorData *monitor;
    Json_Parser_TOKEN__Enum value;
    
};

struct Json_Parser_TOKEN__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct Json_Parser_TOKEN__Enum__StaticFields {
};

struct Json_Parser_TOKEN__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Json_Parser_TOKEN__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Json_Parser_TOKEN__Enum__VTable vtable;
};

struct __declspec(align(8)) Json_Serializer__Fields {
    struct StringBuilder *builder;
};

struct Json_Serializer {
    struct Json_Serializer__Class *klass;
    MonitorData *monitor;
    struct Json_Serializer__Fields fields;
};

struct Json_Serializer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

}
