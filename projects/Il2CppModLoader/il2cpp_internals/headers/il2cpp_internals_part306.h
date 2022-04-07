namespace app {
struct MoonTelemetry_SendRequestData {
  struct MoonTelemetry_SendRequestData__Class *klass;
  struct MonitorData *monitor;
  struct MoonTelemetry_SendRequestData__Fields fields;
};
struct MoonTelemetry_SendRequestData__Array {
  struct MoonTelemetry_SendRequestData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonTelemetry_SendRequestData * vector[32];
};
enum Method__Enum : int32_t {
  Method__Enum_GET = 0,
  Method__Enum_POST = 1,
  Method__Enum_PUT = 2,
  Method__Enum_DELETE = 3,
  Method__Enum_UNDEFINED = 4,
};
struct Method__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Method__Enum value;
};
struct __declspec(align(8)) Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback___Fields {
  struct Action_1_Moon_Telemetry_Web_MoonTelemetrySendCallback_ * m_callback;
  enum Method__Enum m_method;
  struct String * m_path;
  struct IDataReader * m_dataReader;
  struct IServerCommunicator * m_communicator;
  struct Dictionary_2_System_String_System_String_ * m_headers;
};
struct Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback_ {
  struct Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback___Class *klass;
  struct MonitorData *monitor;
  struct Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback___Fields fields;
};
struct MoonTelemetryRequest_1_MoonTelemetrySendCallback___Fields {
  struct Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback___Fields _;
};
struct MoonTelemetryRequest_1_MoonTelemetrySendCallback_ {
  struct MoonTelemetryRequest_1_MoonTelemetrySendCallback___Class *klass;
  struct MonitorData *monitor;
  struct MoonTelemetryRequest_1_MoonTelemetrySendCallback___Fields fields;
};
struct MoonTelemetrySendRequest__Fields {
  struct MoonTelemetryRequest_1_MoonTelemetrySendCallback___Fields _;
  struct String * PATH;
  struct Byte__Array * m_events;
};
struct MoonTelemetrySendRequest {
  struct MoonTelemetrySendRequest__Class *klass;
  struct MonitorData *monitor;
  struct MoonTelemetrySendRequest__Fields fields;
};
struct Action_1_Moon_Telemetry_Web_MoonTelemetrySendCallback___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_Moon_Telemetry_Web_MoonTelemetrySendCallback_ {
  struct Action_1_Moon_Telemetry_Web_MoonTelemetrySendCallback___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_Moon_Telemetry_Web_MoonTelemetrySendCallback___Fields fields;
};
struct __declspec(align(8)) RequestCallback__Fields {
  struct IRequest * m_request;
  struct IDataWriter * m_dataWriter;
  struct WebResponse_1 * MResponse;
};
struct RequestCallback {
  struct RequestCallback__Class *klass;
  struct MonitorData *monitor;
  struct RequestCallback__Fields fields;
};
struct MoonTelemetryCallback__Fields {
  struct RequestCallback__Fields _;
};
struct MoonTelemetryCallback {
  struct MoonTelemetryCallback__Class *klass;
  struct MonitorData *monitor;
  struct MoonTelemetryCallback__Fields fields;
};
struct MoonTelemetrySendCallback__Fields {
  struct MoonTelemetryCallback__Fields _;
  struct String * Status;
};
struct MoonTelemetrySendCallback {
  struct MoonTelemetrySendCallback__Class *klass;
  struct MonitorData *monitor;
  struct MoonTelemetrySendCallback__Fields fields;
};
struct IRequest {
  struct IRequest__Class *klass;
  struct MonitorData *monitor;
};
struct IDataWriter {
  struct IDataWriter__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) WebResponse_1__Fields {
  struct Byte__Array * m_byteData;
  struct String * m_stringData;
  int32_t m_statusCode;
  struct Exception * m_error;
};
struct WebResponse_1 {
  struct WebResponse_1__Class *klass;
  struct MonitorData *monitor;
  struct WebResponse_1__Fields fields;
};
struct SwaggerCallback__Fields {
  struct RequestCallback__Fields _;
};
struct SwaggerCallback {
  struct SwaggerCallback__Class *klass;
  struct MonitorData *monitor;
  struct SwaggerCallback__Fields fields;
};
struct ActionStatesCallback__Fields {
  struct SwaggerCallback__Fields _;
  struct List_1_ServerTriggeredActionData_ * m_actions;
};
struct ActionStatesCallback {
  struct ActionStatesCallback__Class *klass;
  struct MonitorData *monitor;
  struct ActionStatesCallback__Fields fields;
};
struct __declspec(align(8)) List_1_ServerTriggeredActionData___Fields {
  struct ServerTriggeredActionData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ServerTriggeredActionData_ {
  struct List_1_ServerTriggeredActionData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ServerTriggeredActionData___Fields fields;
};
struct __declspec(align(8)) ServerTriggeredActionData__Fields {
  struct String * m_id;
  bool m_active;
};
struct ServerTriggeredActionData {
  struct ServerTriggeredActionData__Class *klass;
  struct MonitorData *monitor;
  struct ServerTriggeredActionData__Fields fields;
};
struct ServerTriggeredActionData__Array {
  struct ServerTriggeredActionData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ServerTriggeredActionData * vector[32];
};
struct IEnumerator_1_ServerTriggeredActionData_ {
  struct IEnumerator_1_ServerTriggeredActionData___Class *klass;
  struct MonitorData *monitor;
};
struct IDataReader {
  struct IDataReader__Class *klass;
  struct MonitorData *monitor;
};
struct IServerCommunicator {
  struct IServerCommunicator__Class *klass;
  struct MonitorData *monitor;
};
struct IRequestCallback {
  struct IRequestCallback__Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_MoonTelemetry_SendRequestData_ {
  struct IEnumerator_1_MoonTelemetry_SendRequestData___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_System_Int32___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Int32___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Int32_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Int32_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_System_Int32_ {
  struct Dictionary_2_System_Int32_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_System_Int32___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Int32_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  int32_t value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Int32___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Int32_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Int32___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Int32_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Int32___Fields {
  struct Dictionary_2_System_Int32_System_Int32_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Int32_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Int32___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Int32___Fields {
  struct Dictionary_2_System_Int32_System_Int32_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Int32_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Int32___Fields fields;
};
struct KeyValuePair_2_System_Int32_System_Int32___Array {
  struct KeyValuePair_2_System_Int32_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_System_Int32_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Int32_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Int32___Class *klass;
  struct MonitorData *monitor;
};
struct Queue_1_System_Object___VTable {
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
struct Queue_1_System_Object___StaticFields {
};
struct Queue_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Queue_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Queue_1_System_Object___VTable vtable;
};
struct MoonTelemetry_EndPointSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonTelemetry_EndPointSettings__StaticFields {
};
struct MoonTelemetry_EndPointSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetry_EndPointSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetry_EndPointSettings__VTable vtable;
};
struct MoonTelemetry_MaelstromEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonTelemetry_MaelstromEvent__StaticFields {
};
struct MoonTelemetry_MaelstromEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetry_MaelstromEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetry_MaelstromEvent__VTable vtable;
};
struct IEnumerator_1_MoonTelemetry_MaelstromEvent___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_MoonTelemetry_MaelstromEvent___StaticFields {
};
struct IEnumerator_1_MoonTelemetry_MaelstromEvent___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_MoonTelemetry_MaelstromEvent___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_MoonTelemetry_MaelstromEvent___VTable vtable;
};
struct Queue_1_MoonTelemetry_MaelstromEvent___VTable {
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
struct Queue_1_MoonTelemetry_MaelstromEvent___StaticFields {
};
struct Queue_1_MoonTelemetry_MaelstromEvent___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Queue_1_MoonTelemetry_MaelstromEvent___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Queue_1_MoonTelemetry_MaelstromEvent___VTable vtable;
};
struct IRequest__VTable {
  VirtualInvokeData get_Path;
  VirtualInvokeData get_Method;
  VirtualInvokeData get_DataReader;
  VirtualInvokeData get_Headers;
  VirtualInvokeData CreateRequestCallbackObject;
  VirtualInvokeData Finish;
};
struct IRequest__StaticFields {
};
struct IRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IRequest__VTable vtable;
};
struct IDataWriter__VTable {
  VirtualInvokeData SetResult;
  VirtualInvokeData Parse;
};
struct IDataWriter__StaticFields {
};
struct IDataWriter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDataWriter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDataWriter__VTable vtable;
};
struct WebResponse_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WebResponse_1__StaticFields {
};
struct WebResponse_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WebResponse_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WebResponse_1__VTable vtable;
};
struct SwaggerCallback__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SetResponse;
  VirtualInvokeData get_Request;
  VirtualInvokeData set_Request;
  VirtualInvokeData SetResponse_1;
  VirtualInvokeData OnResult;
  VirtualInvokeData OnError;
};
struct SwaggerCallback__StaticFields {
};
struct SwaggerCallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SwaggerCallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SwaggerCallback__VTable vtable;
};
struct ServerTriggeredActionData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ServerTriggeredActionData__StaticFields {
};
struct ServerTriggeredActionData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerTriggeredActionData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerTriggeredActionData__VTable vtable;
};
struct IEnumerator_1_ServerTriggeredActionData___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_ServerTriggeredActionData___StaticFields {
};
struct IEnumerator_1_ServerTriggeredActionData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_ServerTriggeredActionData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_ServerTriggeredActionData___VTable vtable;
};
struct List_1_ServerTriggeredActionData___VTable {
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
struct List_1_ServerTriggeredActionData___StaticFields {
  struct ServerTriggeredActionData__Array * _emptyArray;
};
struct List_1_ServerTriggeredActionData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_ServerTriggeredActionData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_ServerTriggeredActionData___VTable vtable;
};
struct ActionStatesCallback__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SetResponse;
  VirtualInvokeData get_Request;
  VirtualInvokeData set_Request;
  VirtualInvokeData SetResponse_1;
  VirtualInvokeData OnResult;
  VirtualInvokeData OnError;
};
struct ActionStatesCallback__StaticFields {
};
struct ActionStatesCallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ActionStatesCallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ActionStatesCallback__VTable vtable;
};
struct RequestCallback__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SetResponse;
  VirtualInvokeData get_Request;
  VirtualInvokeData set_Request;
  VirtualInvokeData SetResponse_1;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
};
struct RequestCallback__StaticFields {
};
struct RequestCallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RequestCallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RequestCallback__VTable vtable;
};
struct MoonTelemetryCallback__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SetResponse;
  VirtualInvokeData get_Request;
  VirtualInvokeData set_Request;
  VirtualInvokeData SetResponse_1;
  VirtualInvokeData OnResult;
  VirtualInvokeData OnError;
};
struct MoonTelemetryCallback__StaticFields {
};
struct MoonTelemetryCallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetryCallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetryCallback__VTable vtable;
};
struct MoonTelemetrySendCallback__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SetResponse;
  VirtualInvokeData get_Request;
  VirtualInvokeData set_Request;
  VirtualInvokeData SetResponse_1;
  VirtualInvokeData OnResult;
  VirtualInvokeData OnError;
};
struct MoonTelemetrySendCallback__StaticFields {
};
struct MoonTelemetrySendCallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetrySendCallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetrySendCallback__VTable vtable;
};
struct Action_1_Moon_Telemetry_Web_MoonTelemetrySendCallback___VTable {
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
struct Action_1_Moon_Telemetry_Web_MoonTelemetrySendCallback___StaticFields {
};
struct Action_1_Moon_Telemetry_Web_MoonTelemetrySendCallback___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_Moon_Telemetry_Web_MoonTelemetrySendCallback___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_Moon_Telemetry_Web_MoonTelemetrySendCallback___VTable vtable;
};
struct IDataReader__VTable {
  VirtualInvokeData SetRequest;
  VirtualInvokeData get_Data;
  VirtualInvokeData get_Body;
};
struct IDataReader__StaticFields {
};
struct IDataReader__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDataReader__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDataReader__VTable vtable;
};
struct IServerCommunicator__VTable {
  VirtualInvokeData Send;
};
struct IServerCommunicator__StaticFields {
};
struct IServerCommunicator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IServerCommunicator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IServerCommunicator__VTable vtable;
};
struct IRequestCallback__VTable {
  VirtualInvokeData SetResponse;
  VirtualInvokeData get_Request;
  VirtualInvokeData set_Request;
};
struct IRequestCallback__StaticFields {
};
struct IRequestCallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IRequestCallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IRequestCallback__VTable vtable;
};
struct Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback___VTable {
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
struct Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback___StaticFields {
};
struct Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback___VTable vtable;
};
struct MoonTelemetryRequest_1_MoonTelemetrySendCallback___VTable {
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
struct MoonTelemetryRequest_1_MoonTelemetrySendCallback___StaticFields {
};
struct MoonTelemetryRequest_1_MoonTelemetrySendCallback___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetryRequest_1_MoonTelemetrySendCallback___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetryRequest_1_MoonTelemetrySendCallback___VTable vtable;
};
struct MoonTelemetrySendRequest__VTable {
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
struct MoonTelemetrySendRequest__StaticFields {
};
struct MoonTelemetrySendRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetrySendRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetrySendRequest__VTable vtable;
};
struct MoonTelemetry_SendRequestData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonTelemetry_SendRequestData__StaticFields {
};
struct MoonTelemetry_SendRequestData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetry_SendRequestData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetry_SendRequestData__VTable vtable;
};
struct IEnumerator_1_MoonTelemetry_SendRequestData___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_MoonTelemetry_SendRequestData___StaticFields {
};
struct IEnumerator_1_MoonTelemetry_SendRequestData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_MoonTelemetry_SendRequestData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_MoonTelemetry_SendRequestData___VTable vtable;
};
struct List_1_MoonTelemetry_SendRequestData___VTable {
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
struct List_1_MoonTelemetry_SendRequestData___StaticFields {
  struct MoonTelemetry_SendRequestData__Array * _emptyArray;
};
struct List_1_MoonTelemetry_SendRequestData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_MoonTelemetry_SendRequestData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_MoonTelemetry_SendRequestData___VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Int32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Int32___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Int32___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Int32___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Int32___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Int32___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Int32___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Int32___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Int32___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Int32___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Int32___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Int32___VTable vtable;
};
struct Dictionary_2_System_Int32_System_Int32___VTable {
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
struct Dictionary_2_System_Int32_System_Int32___StaticFields {
};
struct Dictionary_2_System_Int32_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_Int32_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_Int32_System_Int32___VTable vtable;
};
struct MoonTelemetry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonTelemetry__StaticFields {
  int32_t DEBUG_RESPONSE_CODE;
  bool DEBUG;
  int32_t SLEEP_INTERVAL_SECONDS;
  struct Queue_1_System_Object_ * postDataQueue;
  struct Dictionary_2_System_Type_System_Int32_ * typeIDTable;
  int32_t sequenceID;
  struct MoonTelemetry_EndPointSettings * maelstromSettings;
  struct Queue_1_MoonTelemetry_MaelstromEvent_ * pendingEvents;
  struct Queue_1_System_Object_ * bufferDataQueue;
  struct List_1_MoonTelemetry_SendRequestData_ * requests;
  struct StringBuilder * eventBatchBuilder;
  struct StringBuilder * errorMessageBuilder;
  bool useAuth;
  enum MoonTelemetry_State__Enum s_currentState;
  bool s_isInited;
  struct Thread * m_moonTelemetryMainThread;
  bool s_isThreadStarted;
  bool s_doThread;
  bool m_allowTelemetry;
  struct TimeSpan m_standard_delay;
  struct TimeSpan m_fail_delay;
  struct TimeSpan m_delay;
  struct Stopwatch * m_stopWatch;
  int32_t s_eventsInBatch;
  int32_t s_successfulRequests;
  int32_t s_failedRequests;
  struct Action * OnStartThread;
  struct Action * OnStopThread;
  int32_t m_totalSends;
  int32_t m_pendingEventsMaxCount;
  int32_t m_postDataQueueMaxCount;
  struct List_1_System_String_ * m_exceptions;
  struct Dictionary_2_System_Int32_System_Int32_ * m_responseCodesCount;
};
struct MoonTelemetry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetry__VTable vtable;
};

struct __declspec(align(8)) MoonTelemetry_SendRequestData_c_DisplayClass11_0__Fields {
  struct MoonTelemetry_SendRequestData * __4__this;
  struct Action_1_Moon_Telemetry_Web_MoonTelemetrySendCallback_ * callback;
};
struct MoonTelemetry_SendRequestData_c_DisplayClass11_0 {
  struct MoonTelemetry_SendRequestData_c_DisplayClass11_0__Class *klass;
  struct MonitorData *monitor;
  struct MoonTelemetry_SendRequestData_c_DisplayClass11_0__Fields fields;
};
struct MoonTelemetry_SendRequestData_c_DisplayClass11_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonTelemetry_SendRequestData_c_DisplayClass11_0__StaticFields {
};
struct MoonTelemetry_SendRequestData_c_DisplayClass11_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetry_SendRequestData_c_DisplayClass11_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetry_SendRequestData_c_DisplayClass11_0__VTable vtable;
};

struct __declspec(align(8)) MoonTelemetry_c_DisplayClass48_0__Fields {
  struct MoonTelemetry_SendRequestData * request;
};}