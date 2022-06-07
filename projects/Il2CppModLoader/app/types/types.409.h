namespace app {
struct RemoteAction_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RemoteAction_c__StaticFields {
    struct RemoteAction_c *__9;
    struct Action_1_ActionStatesCallback_ *__9__8_1;
    struct ThreadStart *__9__8_0;
};

struct RemoteAction_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RemoteAction_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RemoteAction_c__VTable vtable;
};

struct __declspec(align(8)) Request_1_ActionStatesCallback___Fields {
    struct Action_1_ActionStatesCallback_ *m_callback;
    Method__Enum m_method;
    
    struct String *m_path;
    struct IDataReader *m_dataReader;
    struct IServerCommunicator *m_communicator;
    struct Dictionary_2_System_String_System_String_ *m_headers;
};

struct Request_1_ActionStatesCallback_ {
    struct Request_1_ActionStatesCallback___Class *klass;
    MonitorData *monitor;
    struct Request_1_ActionStatesCallback___Fields fields;
};

struct SwaggerRequest_1_ActionStatesCallback___Fields {
    struct Request_1_ActionStatesCallback___Fields _;
};

struct SwaggerRequest_1_ActionStatesCallback_ {
    struct SwaggerRequest_1_ActionStatesCallback___Class *klass;
    MonitorData *monitor;
    struct SwaggerRequest_1_ActionStatesCallback___Fields fields;
};

struct RetriveActionStates__Fields {
    struct SwaggerRequest_1_ActionStatesCallback___Fields _;
};

struct RetriveActionStates {
    struct RetriveActionStates__Class *klass;
    MonitorData *monitor;
    struct RetriveActionStates__Fields fields;
};

struct Request_1_ActionStatesCallback___VTable {
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

struct Request_1_ActionStatesCallback___StaticFields {
};

struct Request_1_ActionStatesCallback___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Request_1_ActionStatesCallback___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Request_1_ActionStatesCallback___VTable vtable;
};

struct SwaggerRequest_1_ActionStatesCallback___VTable {
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

struct SwaggerRequest_1_ActionStatesCallback___StaticFields {
};

struct SwaggerRequest_1_ActionStatesCallback___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SwaggerRequest_1_ActionStatesCallback___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SwaggerRequest_1_ActionStatesCallback___VTable vtable;
};

struct RetriveActionStates__VTable {
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

struct RetriveActionStates__StaticFields {
};

struct RetriveActionStates__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RetriveActionStates__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RetriveActionStates__VTable vtable;
};

struct __declspec(align(8)) JSONDataWriter__Fields {
    struct IRequestCallback *m_result;
};

struct JSONDataWriter {
    struct JSONDataWriter__Class *klass;
    MonitorData *monitor;
    struct JSONDataWriter__Fields fields;
};

struct SwaggerJSONParser__Fields {
    struct JSONDataWriter__Fields _;
};

struct SwaggerJSONParser {
    struct SwaggerJSONParser__Class *klass;
    MonitorData *monitor;
    struct SwaggerJSONParser__Fields fields;
};

struct JSONDataWriter__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData SetResult;
    VirtualInvokeData Parse;
    VirtualInvokeData GetValue;
};

struct JSONDataWriter__StaticFields {
};

struct JSONDataWriter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JSONDataWriter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JSONDataWriter__VTable vtable;
};

struct SwaggerJSONParser__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData SetResult;
    VirtualInvokeData Parse;
    VirtualInvokeData GetValue;
};

struct SwaggerJSONParser__StaticFields {
};

struct SwaggerJSONParser__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SwaggerJSONParser__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SwaggerJSONParser__VTable vtable;
};

struct SwaggerComunicator {
    struct SwaggerComunicator__Class *klass;
    MonitorData *monitor;
};

struct SwaggerComunicator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Send;
};

struct SwaggerComunicator__StaticFields {
    struct String *s_webServerUrl;
    struct String *s_webServerUrlHttps;
    bool UseHttps;
    struct SwaggerComunicator *s_instance;
};

struct SwaggerComunicator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SwaggerComunicator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SwaggerComunicator__VTable vtable;
};

struct SwaggerComunicator_c {
    struct SwaggerComunicator_c__Class *klass;
    MonitorData *monitor;
};

struct Action_2_Moon_Network_Web_IRequest_Moon_Network_Web_IRequestCallback___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_2_Moon_Network_Web_IRequest_Moon_Network_Web_IRequestCallback_ {
    struct Action_2_Moon_Network_Web_IRequest_Moon_Network_Web_IRequestCallback___Class *klass;
    MonitorData *monitor;
    struct Action_2_Moon_Network_Web_IRequest_Moon_Network_Web_IRequestCallback___Fields fields;
};

struct Action_2_Moon_Network_Web_IRequest_Moon_Network_Web_IRequestCallback___VTable {
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

struct Action_2_Moon_Network_Web_IRequest_Moon_Network_Web_IRequestCallback___StaticFields {
};

struct Action_2_Moon_Network_Web_IRequest_Moon_Network_Web_IRequestCallback___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_2_Moon_Network_Web_IRequest_Moon_Network_Web_IRequestCallback___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_2_Moon_Network_Web_IRequest_Moon_Network_Web_IRequestCallback___VTable vtable;
};

struct SwaggerComunicator_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SwaggerComunicator_c__StaticFields {
    struct SwaggerComunicator_c *__9;
    struct Action_2_Moon_Network_Web_IRequest_Moon_Network_Web_IRequestCallback_ *__9__6_0;
};

struct SwaggerComunicator_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SwaggerComunicator_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SwaggerComunicator_c__VTable vtable;
};

struct __declspec(align(8)) ReplayModel__Fields {
    struct String *m_player;
    float m_duration;
    struct String *m_replay;
};

struct ReplayModel {
    struct ReplayModel__Class *klass;
    MonitorData *monitor;
    struct ReplayModel__Fields fields;
};

struct ReplayModel__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ReplayModel__StaticFields {
};

struct ReplayModel__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReplayModel__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReplayModel__VTable vtable;
};

struct __declspec(align(8)) Request_1_StatusCallback___Fields {
    struct Action_1_StatusCallback_ *m_callback;
    Method__Enum m_method;
    
    struct String *m_path;
    struct IDataReader *m_dataReader;
    struct IServerCommunicator *m_communicator;
    struct Dictionary_2_System_String_System_String_ *m_headers;
};

struct Request_1_StatusCallback_ {
    struct Request_1_StatusCallback___Class *klass;
    MonitorData *monitor;
    struct Request_1_StatusCallback___Fields fields;
};

struct SwaggerRequest_1_StatusCallback___Fields {
    struct Request_1_StatusCallback___Fields _;
};

struct SwaggerRequest_1_StatusCallback_ {
    struct SwaggerRequest_1_StatusCallback___Class *klass;
    MonitorData *monitor;
    struct SwaggerRequest_1_StatusCallback___Fields fields;
};

struct AddReplay__Fields {
    struct SwaggerRequest_1_StatusCallback___Fields _;
    struct String *m_player;
    float m_duration;
    struct String *m_replay;
};

struct AddReplay {
    struct AddReplay__Class *klass;
    MonitorData *monitor;
    struct AddReplay__Fields fields;
};

struct Action_1_StatusCallback___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_StatusCallback_ {
    struct Action_1_StatusCallback___Class *klass;
    MonitorData *monitor;
    struct Action_1_StatusCallback___Fields fields;
};

struct StatusCallback__Fields {
    struct SwaggerCallback__Fields _;
    struct String *Status;
};

struct StatusCallback {
    struct StatusCallback__Class *klass;
    MonitorData *monitor;
    struct StatusCallback__Fields fields;
};

struct StatusCallback__VTable {
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

struct StatusCallback__StaticFields {
};

struct StatusCallback__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StatusCallback__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StatusCallback__VTable vtable;
};

struct Action_1_StatusCallback___VTable {
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

struct Action_1_StatusCallback___StaticFields {
};

struct Action_1_StatusCallback___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_StatusCallback___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_StatusCallback___VTable vtable;
};

struct Request_1_StatusCallback___VTable {
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

struct Request_1_StatusCallback___StaticFields {
};

struct Request_1_StatusCallback___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Request_1_StatusCallback___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Request_1_StatusCallback___VTable vtable;
};

struct SwaggerRequest_1_StatusCallback___VTable {
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

struct SwaggerRequest_1_StatusCallback___StaticFields {
};

struct SwaggerRequest_1_StatusCallback___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SwaggerRequest_1_StatusCallback___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SwaggerRequest_1_StatusCallback___VTable vtable;
};

struct AddReplay__VTable {
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

struct AddReplay__StaticFields {
};

struct AddReplay__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AddReplay__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AddReplay__VTable vtable;
};

struct __declspec(align(8)) Request_1_GetReplayCallback___Fields {
    struct Action_1_GetReplayCallback_ *m_callback;
    Method__Enum m_method;
    
    struct String *m_path;
    struct IDataReader *m_dataReader;
    struct IServerCommunicator *m_communicator;
    struct Dictionary_2_System_String_System_String_ *m_headers;
};

struct Request_1_GetReplayCallback_ {
    struct Request_1_GetReplayCallback___Class *klass;
    MonitorData *monitor;
    struct Request_1_GetReplayCallback___Fields fields;
};

struct SwaggerRequest_1_GetReplayCallback___Fields {
    struct Request_1_GetReplayCallback___Fields _;
};

struct SwaggerRequest_1_GetReplayCallback_ {
    struct SwaggerRequest_1_GetReplayCallback___Class *klass;
    MonitorData *monitor;
    struct SwaggerRequest_1_GetReplayCallback___Fields fields;
};

struct GetReplay__Fields {
    struct SwaggerRequest_1_GetReplayCallback___Fields _;
};

struct GetReplay {
    struct GetReplay__Class *klass;
    MonitorData *monitor;
    struct GetReplay__Fields fields;
};

struct Action_1_GetReplayCallback___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_GetReplayCallback_ {
    struct Action_1_GetReplayCallback___Class *klass;
    MonitorData *monitor;
    struct Action_1_GetReplayCallback___Fields fields;
};

struct GetReplayCallback__Fields {
    struct SwaggerCallback__Fields _;
    struct ReplayModel *m_replay;
};

struct GetReplayCallback {
    struct GetReplayCallback__Class *klass;
    MonitorData *monitor;
    struct GetReplayCallback__Fields fields;
};

struct GetReplayCallback__VTable {
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

struct GetReplayCallback__StaticFields {
};

struct GetReplayCallback__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GetReplayCallback__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GetReplayCallback__VTable vtable;
};

struct Action_1_GetReplayCallback___VTable {
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

struct Action_1_GetReplayCallback___StaticFields {
};

struct Action_1_GetReplayCallback___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_GetReplayCallback___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_GetReplayCallback___VTable vtable;
};

struct Request_1_GetReplayCallback___VTable {
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

struct Request_1_GetReplayCallback___StaticFields {
};

struct Request_1_GetReplayCallback___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Request_1_GetReplayCallback___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Request_1_GetReplayCallback___VTable vtable;
};

struct SwaggerRequest_1_GetReplayCallback___VTable {
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

struct SwaggerRequest_1_GetReplayCallback___StaticFields {
};

struct SwaggerRequest_1_GetReplayCallback___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SwaggerRequest_1_GetReplayCallback___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SwaggerRequest_1_GetReplayCallback___VTable vtable;
};

struct GetReplay__VTable {
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

struct GetReplay__StaticFields {
};

struct GetReplay__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GetReplay__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GetReplay__VTable vtable;
};

struct __declspec(align(8)) Request_1_GetReplaysCallback___Fields {
    struct Action_1_GetReplaysCallback_ *m_callback;
    Method__Enum m_method;
    
    struct String *m_path;
    struct IDataReader *m_dataReader;
    struct IServerCommunicator *m_communicator;
    struct Dictionary_2_System_String_System_String_ *m_headers;
};

struct Request_1_GetReplaysCallback_ {
    struct Request_1_GetReplaysCallback___Class *klass;
    MonitorData *monitor;
    struct Request_1_GetReplaysCallback___Fields fields;
};

struct SwaggerRequest_1_GetReplaysCallback___Fields {
    struct Request_1_GetReplaysCallback___Fields _;
};

struct SwaggerRequest_1_GetReplaysCallback_ {
    struct SwaggerRequest_1_GetReplaysCallback___Class *klass;
    MonitorData *monitor;
    struct SwaggerRequest_1_GetReplaysCallback___Fields fields;
};

struct GetReplays__Fields {
    struct SwaggerRequest_1_GetReplaysCallback___Fields _;
};

struct GetReplays {
    struct GetReplays__Class *klass;
    MonitorData *monitor;
    struct GetReplays__Fields fields;
};

struct Action_1_GetReplaysCallback___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_GetReplaysCallback_ {
    struct Action_1_GetReplaysCallback___Class *klass;
    MonitorData *monitor;
    struct Action_1_GetReplaysCallback___Fields fields;
};

struct GetReplaysCallback__Fields {
    struct SwaggerCallback__Fields _;
    struct List_1_ReplayModel_ *m_replays;
};

struct GetReplaysCallback {
    struct GetReplaysCallback__Class *klass;
    MonitorData *monitor;
    struct GetReplaysCallback__Fields fields;
};

struct __declspec(align(8)) List_1_ReplayModel___Fields {
    struct ReplayModel__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_ReplayModel_ {
    struct List_1_ReplayModel___Class *klass;
    MonitorData *monitor;
    struct List_1_ReplayModel___Fields fields;
};

struct ReplayModel__Array {
    struct ReplayModel__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ReplayModel *vector[32];
};

struct IEnumerator_1_ReplayModel_ {
    struct IEnumerator_1_ReplayModel___Class *klass;
    MonitorData *monitor;
};

struct ReplayModel__Array__VTable {
};

struct ReplayModel__Array__StaticFields {
};

struct ReplayModel__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReplayModel__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReplayModel__Array__VTable vtable;
};

struct IEnumerator_1_ReplayModel___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_ReplayModel___StaticFields {
};

struct IEnumerator_1_ReplayModel___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_ReplayModel___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_ReplayModel___VTable vtable;
};

struct List_1_ReplayModel___VTable {
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

struct List_1_ReplayModel___StaticFields {
    struct ReplayModel__Array *_emptyArray;
};

struct List_1_ReplayModel___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_ReplayModel___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_ReplayModel___VTable vtable;
};

struct GetReplaysCallback__VTable {
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

struct GetReplaysCallback__StaticFields {
};

struct GetReplaysCallback__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GetReplaysCallback__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GetReplaysCallback__VTable vtable;
};

struct Action_1_GetReplaysCallback___VTable {
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

struct Action_1_GetReplaysCallback___StaticFields {
};

struct Action_1_GetReplaysCallback___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_GetReplaysCallback___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_GetReplaysCallback___VTable vtable;
};

struct Request_1_GetReplaysCallback___VTable {
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

struct Request_1_GetReplaysCallback___StaticFields {
};

struct Request_1_GetReplaysCallback___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Request_1_GetReplaysCallback___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Request_1_GetReplaysCallback___VTable vtable;
};

struct SwaggerRequest_1_GetReplaysCallback___VTable {
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

struct SwaggerRequest_1_GetReplaysCallback___StaticFields {
};

struct SwaggerRequest_1_GetReplaysCallback___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SwaggerRequest_1_GetReplaysCallback___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SwaggerRequest_1_GetReplaysCallback___VTable vtable;
};

struct GetReplays__VTable {
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

struct GetReplays__StaticFields {
};

struct GetReplays__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GetReplays__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GetReplays__VTable vtable;
};

struct WipeReplay__Fields {
    struct SwaggerRequest_1_StatusCallback___Fields _;
};

struct WipeReplay {
    struct WipeReplay__Class *klass;
    MonitorData *monitor;
    struct WipeReplay__Fields fields;
};

}
