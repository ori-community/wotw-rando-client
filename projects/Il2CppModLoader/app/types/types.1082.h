namespace app {
struct ELobbyDistanceFilter__Enum__StaticFields {
};

struct ELobbyDistanceFilter__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ELobbyDistanceFilter__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ELobbyDistanceFilter__Enum__VTable vtable;
};

enum class ELobbyType__Enum : int32_t {
    k_ELobbyTypePrivate = 0x00000000,
    k_ELobbyTypeFriendsOnly = 0x00000001,
    k_ELobbyTypePublic = 0x00000002,
    k_ELobbyTypeInvisible = 0x00000003,
    k_ELobbyTypePrivateUnique = 0x00000004,
};

struct ELobbyType__Enum__Boxed {
    struct ELobbyType__Enum__Class *klass;
    MonitorData *monitor;
    ELobbyType__Enum value;
    
};

struct ELobbyType__Enum__VTable {
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

struct ELobbyType__Enum__StaticFields {
};

struct ELobbyType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ELobbyType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ELobbyType__Enum__VTable vtable;
};

struct HServerListRequest {
    void *m_HServerListRequest;
};

struct HServerListRequest__Boxed {
    struct HServerListRequest__Class *klass;
    MonitorData *monitor;
    struct HServerListRequest fields;
};

struct MatchMakingKeyValuePair_t {
    struct String *m_szKey;
    struct String *m_szValue;
};

struct MatchMakingKeyValuePair_t__Boxed {
    struct MatchMakingKeyValuePair_t__Class *klass;
    MonitorData *monitor;
    struct MatchMakingKeyValuePair_t fields;
};

struct MatchMakingKeyValuePair_t__Array {
    struct MatchMakingKeyValuePair_t__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MatchMakingKeyValuePair_t vector[32];
};

struct __declspec(align(8)) ISteamMatchmakingServerListResponse__Fields {
    struct ISteamMatchmakingServerListResponse_VTable *m_VTable;
    void *m_pVTable;
    struct GCHandle m_pGCHandle;
    struct ISteamMatchmakingServerListResponse_ServerResponded *m_ServerResponded;
    struct ISteamMatchmakingServerListResponse_ServerFailedToRespond *m_ServerFailedToRespond;
    struct ISteamMatchmakingServerListResponse_RefreshComplete *m_RefreshComplete;
};

struct ISteamMatchmakingServerListResponse {
    struct ISteamMatchmakingServerListResponse__Class *klass;
    MonitorData *monitor;
    struct ISteamMatchmakingServerListResponse__Fields fields;
};

struct __declspec(align(8)) ISteamMatchmakingServerListResponse_VTable__Fields {
    struct ISteamMatchmakingServerListResponse_InternalServerResponded *m_VTServerResponded;
    struct ISteamMatchmakingServerListResponse_InternalServerFailedToRespond *m_VTServerFailedToRespond;
    struct ISteamMatchmakingServerListResponse_InternalRefreshComplete *m_VTRefreshComplete;
};

struct ISteamMatchmakingServerListResponse_VTable {
    struct ISteamMatchmakingServerListResponse_VTable__Class *klass;
    MonitorData *monitor;
    struct ISteamMatchmakingServerListResponse_VTable__Fields fields;
};

struct ISteamMatchmakingServerListResponse_InternalServerResponded__Fields {
    struct MulticastDelegate__Fields _;
};

struct ISteamMatchmakingServerListResponse_InternalServerResponded {
    struct ISteamMatchmakingServerListResponse_InternalServerResponded__Class *klass;
    MonitorData *monitor;
    struct ISteamMatchmakingServerListResponse_InternalServerResponded__Fields fields;
};

struct ISteamMatchmakingServerListResponse_InternalServerFailedToRespond__Fields {
    struct MulticastDelegate__Fields _;
};

struct ISteamMatchmakingServerListResponse_InternalServerFailedToRespond {
    struct ISteamMatchmakingServerListResponse_InternalServerFailedToRespond__Class *klass;
    MonitorData *monitor;
    struct ISteamMatchmakingServerListResponse_InternalServerFailedToRespond__Fields fields;
};

struct ISteamMatchmakingServerListResponse_InternalRefreshComplete__Fields {
    struct MulticastDelegate__Fields _;
};

struct ISteamMatchmakingServerListResponse_InternalRefreshComplete {
    struct ISteamMatchmakingServerListResponse_InternalRefreshComplete__Class *klass;
    MonitorData *monitor;
    struct ISteamMatchmakingServerListResponse_InternalRefreshComplete__Fields fields;
};

enum class EMatchMakingServerResponse__Enum : int32_t {
    eServerResponded = 0x00000000,
    eServerFailedToRespond = 0x00000001,
    eNoServersListedOnMasterServer = 0x00000002,
};

struct EMatchMakingServerResponse__Enum__Boxed {
    struct EMatchMakingServerResponse__Enum__Class *klass;
    MonitorData *monitor;
    EMatchMakingServerResponse__Enum value;
    
};

struct ISteamMatchmakingServerListResponse_ServerResponded__Fields {
    struct MulticastDelegate__Fields _;
};

struct ISteamMatchmakingServerListResponse_ServerResponded {
    struct ISteamMatchmakingServerListResponse_ServerResponded__Class *klass;
    MonitorData *monitor;
    struct ISteamMatchmakingServerListResponse_ServerResponded__Fields fields;
};

struct ISteamMatchmakingServerListResponse_ServerFailedToRespond__Fields {
    struct MulticastDelegate__Fields _;
};

struct ISteamMatchmakingServerListResponse_ServerFailedToRespond {
    struct ISteamMatchmakingServerListResponse_ServerFailedToRespond__Class *klass;
    MonitorData *monitor;
    struct ISteamMatchmakingServerListResponse_ServerFailedToRespond__Fields fields;
};

struct ISteamMatchmakingServerListResponse_RefreshComplete__Fields {
    struct MulticastDelegate__Fields _;
};

struct ISteamMatchmakingServerListResponse_RefreshComplete {
    struct ISteamMatchmakingServerListResponse_RefreshComplete__Class *klass;
    MonitorData *monitor;
    struct ISteamMatchmakingServerListResponse_RefreshComplete__Fields fields;
};

struct HServerListRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Equals_1;
};

struct HServerListRequest__StaticFields {
    struct HServerListRequest Invalid;
};

struct HServerListRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HServerListRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HServerListRequest__VTable vtable;
};

struct MatchMakingKeyValuePair_t__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MatchMakingKeyValuePair_t__StaticFields {
};

struct MatchMakingKeyValuePair_t__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MatchMakingKeyValuePair_t__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MatchMakingKeyValuePair_t__VTable vtable;
};

struct MatchMakingKeyValuePair_t__Array__VTable {
};

struct MatchMakingKeyValuePair_t__Array__StaticFields {
};

struct MatchMakingKeyValuePair_t__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MatchMakingKeyValuePair_t__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MatchMakingKeyValuePair_t__Array__VTable vtable;
};

struct ISteamMatchmakingServerListResponse_InternalServerResponded__VTable {
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

struct ISteamMatchmakingServerListResponse_InternalServerResponded__StaticFields {
};

struct ISteamMatchmakingServerListResponse_InternalServerResponded__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ISteamMatchmakingServerListResponse_InternalServerResponded__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ISteamMatchmakingServerListResponse_InternalServerResponded__VTable vtable;
};

struct ISteamMatchmakingServerListResponse_InternalServerFailedToRespond__VTable {
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

struct ISteamMatchmakingServerListResponse_InternalServerFailedToRespond__StaticFields {
};

struct ISteamMatchmakingServerListResponse_InternalServerFailedToRespond__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ISteamMatchmakingServerListResponse_InternalServerFailedToRespond__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ISteamMatchmakingServerListResponse_InternalServerFailedToRespond__VTable vtable;
};

struct EMatchMakingServerResponse__Enum__VTable {
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

struct EMatchMakingServerResponse__Enum__StaticFields {
};

struct EMatchMakingServerResponse__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EMatchMakingServerResponse__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EMatchMakingServerResponse__Enum__VTable vtable;
};

struct ISteamMatchmakingServerListResponse_InternalRefreshComplete__VTable {
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

struct ISteamMatchmakingServerListResponse_InternalRefreshComplete__StaticFields {
};

struct ISteamMatchmakingServerListResponse_InternalRefreshComplete__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ISteamMatchmakingServerListResponse_InternalRefreshComplete__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ISteamMatchmakingServerListResponse_InternalRefreshComplete__VTable vtable;
};

struct ISteamMatchmakingServerListResponse_VTable__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ISteamMatchmakingServerListResponse_VTable__StaticFields {
};

struct ISteamMatchmakingServerListResponse_VTable__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ISteamMatchmakingServerListResponse_VTable__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ISteamMatchmakingServerListResponse_VTable__VTable vtable;
};

struct ISteamMatchmakingServerListResponse_ServerResponded__VTable {
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

struct ISteamMatchmakingServerListResponse_ServerResponded__StaticFields {
};

struct ISteamMatchmakingServerListResponse_ServerResponded__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ISteamMatchmakingServerListResponse_ServerResponded__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ISteamMatchmakingServerListResponse_ServerResponded__VTable vtable;
};

struct ISteamMatchmakingServerListResponse_ServerFailedToRespond__VTable {
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

struct ISteamMatchmakingServerListResponse_ServerFailedToRespond__StaticFields {
};

struct ISteamMatchmakingServerListResponse_ServerFailedToRespond__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ISteamMatchmakingServerListResponse_ServerFailedToRespond__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ISteamMatchmakingServerListResponse_ServerFailedToRespond__VTable vtable;
};

struct ISteamMatchmakingServerListResponse_RefreshComplete__VTable {
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

struct ISteamMatchmakingServerListResponse_RefreshComplete__StaticFields {
};

struct ISteamMatchmakingServerListResponse_RefreshComplete__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ISteamMatchmakingServerListResponse_RefreshComplete__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ISteamMatchmakingServerListResponse_RefreshComplete__VTable vtable;
};

struct ISteamMatchmakingServerListResponse__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ISteamMatchmakingServerListResponse__StaticFields {
};

struct ISteamMatchmakingServerListResponse__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ISteamMatchmakingServerListResponse__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ISteamMatchmakingServerListResponse__VTable vtable;
};

struct servernetadr_t {
    uint16_t m_usConnectionPort;
    uint16_t m_usQueryPort;
    uint32_t m_unIP;
};

struct servernetadr_t__Boxed {
    struct servernetadr_t__Class *klass;
    MonitorData *monitor;
    struct servernetadr_t fields;
};

struct __declspec(align(8)) gameserveritem_t__Fields {
    struct servernetadr_t m_NetAdr;
    int32_t m_nPing;
    bool m_bHadSuccessfulResponse;
    bool m_bDoNotRefresh;
    struct Byte__Array *m_szGameDir;
    struct Byte__Array *m_szMap;
    struct Byte__Array *m_szGameDescription;
    uint32_t m_nAppID;
    int32_t m_nPlayers;
    int32_t m_nMaxPlayers;
    int32_t m_nBotPlayers;
    bool m_bPassword;
    bool m_bSecure;
    uint32_t m_ulTimeLastPlayed;
    int32_t m_nServerVersion;
    struct Byte__Array *m_szServerName;
    struct Byte__Array *m_szGameTags;
    struct CSteamID m_steamID;
};

struct gameserveritem_t {
    struct gameserveritem_t__Class *klass;
    MonitorData *monitor;
    struct gameserveritem_t__Fields fields;
};

struct servernetadr_t__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct servernetadr_t__StaticFields {
};

struct servernetadr_t__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct servernetadr_t__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct servernetadr_t__VTable vtable;
};

struct gameserveritem_t__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct gameserveritem_t__StaticFields {
};

struct gameserveritem_t__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct gameserveritem_t__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct gameserveritem_t__VTable vtable;
};

struct HServerQuery {
    int32_t m_HServerQuery;
};

struct HServerQuery__Boxed {
    struct HServerQuery__Class *klass;
    MonitorData *monitor;
    struct HServerQuery fields;
};

struct __declspec(align(8)) ISteamMatchmakingPingResponse__Fields {
    struct ISteamMatchmakingPingResponse_VTable *m_VTable;
    void *m_pVTable;
    struct GCHandle m_pGCHandle;
    struct ISteamMatchmakingPingResponse_ServerResponded *m_ServerResponded;
    struct ISteamMatchmakingPingResponse_ServerFailedToRespond *m_ServerFailedToRespond;
};

struct ISteamMatchmakingPingResponse {
    struct ISteamMatchmakingPingResponse__Class *klass;
    MonitorData *monitor;
    struct ISteamMatchmakingPingResponse__Fields fields;
};

struct __declspec(align(8)) ISteamMatchmakingPingResponse_VTable__Fields {
    struct ISteamMatchmakingPingResponse_InternalServerResponded *m_VTServerResponded;
    struct ISteamMatchmakingPingResponse_InternalServerFailedToRespond *m_VTServerFailedToRespond;
};

struct ISteamMatchmakingPingResponse_VTable {
    struct ISteamMatchmakingPingResponse_VTable__Class *klass;
    MonitorData *monitor;
    struct ISteamMatchmakingPingResponse_VTable__Fields fields;
};

struct ISteamMatchmakingPingResponse_InternalServerResponded__Fields {
    struct MulticastDelegate__Fields _;
};

struct ISteamMatchmakingPingResponse_InternalServerResponded {
    struct ISteamMatchmakingPingResponse_InternalServerResponded__Class *klass;
    MonitorData *monitor;
    struct ISteamMatchmakingPingResponse_InternalServerResponded__Fields fields;
};

struct ISteamMatchmakingPingResponse_InternalServerFailedToRespond__Fields {
    struct MulticastDelegate__Fields _;
};

struct ISteamMatchmakingPingResponse_InternalServerFailedToRespond {
    struct ISteamMatchmakingPingResponse_InternalServerFailedToRespond__Class *klass;
    MonitorData *monitor;
    struct ISteamMatchmakingPingResponse_InternalServerFailedToRespond__Fields fields;
};

struct ISteamMatchmakingPingResponse_ServerResponded__Fields {
    struct MulticastDelegate__Fields _;
};

struct ISteamMatchmakingPingResponse_ServerResponded {
    struct ISteamMatchmakingPingResponse_ServerResponded__Class *klass;
    MonitorData *monitor;
    struct ISteamMatchmakingPingResponse_ServerResponded__Fields fields;
};

struct ISteamMatchmakingPingResponse_ServerFailedToRespond__Fields {
    struct MulticastDelegate__Fields _;
};

struct ISteamMatchmakingPingResponse_ServerFailedToRespond {
    struct ISteamMatchmakingPingResponse_ServerFailedToRespond__Class *klass;
    MonitorData *monitor;
    struct ISteamMatchmakingPingResponse_ServerFailedToRespond__Fields fields;
};

struct HServerQuery__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Equals_1;
    VirtualInvokeData CompareTo;
};

struct HServerQuery__StaticFields {
    struct HServerQuery Invalid;
};

struct HServerQuery__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HServerQuery__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HServerQuery__VTable vtable;
};

struct ISteamMatchmakingPingResponse_InternalServerResponded__VTable {
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

struct ISteamMatchmakingPingResponse_InternalServerResponded__StaticFields {
};

struct ISteamMatchmakingPingResponse_InternalServerResponded__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ISteamMatchmakingPingResponse_InternalServerResponded__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ISteamMatchmakingPingResponse_InternalServerResponded__VTable vtable;
};

struct ISteamMatchmakingPingResponse_InternalServerFailedToRespond__VTable {
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

struct ISteamMatchmakingPingResponse_InternalServerFailedToRespond__StaticFields {
};

struct ISteamMatchmakingPingResponse_InternalServerFailedToRespond__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ISteamMatchmakingPingResponse_InternalServerFailedToRespond__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ISteamMatchmakingPingResponse_InternalServerFailedToRespond__VTable vtable;
};

struct ISteamMatchmakingPingResponse_VTable__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ISteamMatchmakingPingResponse_VTable__StaticFields {
};

struct ISteamMatchmakingPingResponse_VTable__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ISteamMatchmakingPingResponse_VTable__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ISteamMatchmakingPingResponse_VTable__VTable vtable;
};

struct ISteamMatchmakingPingResponse_ServerResponded__VTable {
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

struct ISteamMatchmakingPingResponse_ServerResponded__StaticFields {
};

struct ISteamMatchmakingPingResponse_ServerResponded__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ISteamMatchmakingPingResponse_ServerResponded__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ISteamMatchmakingPingResponse_ServerResponded__VTable vtable;
};

struct ISteamMatchmakingPingResponse_ServerFailedToRespond__VTable {
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

struct ISteamMatchmakingPingResponse_ServerFailedToRespond__StaticFields {
};

struct ISteamMatchmakingPingResponse_ServerFailedToRespond__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ISteamMatchmakingPingResponse_ServerFailedToRespond__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ISteamMatchmakingPingResponse_ServerFailedToRespond__VTable vtable;
};

struct ISteamMatchmakingPingResponse__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ISteamMatchmakingPingResponse__StaticFields {
};

struct ISteamMatchmakingPingResponse__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ISteamMatchmakingPingResponse__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ISteamMatchmakingPingResponse__VTable vtable;
};

struct __declspec(align(8)) ISteamMatchmakingPlayersResponse__Fields {
    struct ISteamMatchmakingPlayersResponse_VTable *m_VTable;
    void *m_pVTable;
    struct GCHandle m_pGCHandle;
    struct ISteamMatchmakingPlayersResponse_AddPlayerToList *m_AddPlayerToList;
    struct ISteamMatchmakingPlayersResponse_PlayersFailedToRespond *m_PlayersFailedToRespond;
    struct ISteamMatchmakingPlayersResponse_PlayersRefreshComplete *m_PlayersRefreshComplete;
};

struct ISteamMatchmakingPlayersResponse {
    struct ISteamMatchmakingPlayersResponse__Class *klass;
    MonitorData *monitor;
    struct ISteamMatchmakingPlayersResponse__Fields fields;
};

struct __declspec(align(8)) ISteamMatchmakingPlayersResponse_VTable__Fields {
    struct ISteamMatchmakingPlayersResponse_InternalAddPlayerToList *m_VTAddPlayerToList;
    struct ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond *m_VTPlayersFailedToRespond;
    struct ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete *m_VTPlayersRefreshComplete;
};

struct ISteamMatchmakingPlayersResponse_VTable {
    struct ISteamMatchmakingPlayersResponse_VTable__Class *klass;
    MonitorData *monitor;
    struct ISteamMatchmakingPlayersResponse_VTable__Fields fields;
};

struct ISteamMatchmakingPlayersResponse_InternalAddPlayerToList__Fields {
    struct MulticastDelegate__Fields _;
};

struct ISteamMatchmakingPlayersResponse_InternalAddPlayerToList {
    struct ISteamMatchmakingPlayersResponse_InternalAddPlayerToList__Class *klass;
    MonitorData *monitor;
    struct ISteamMatchmakingPlayersResponse_InternalAddPlayerToList__Fields fields;
};

struct ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond__Fields {
    struct MulticastDelegate__Fields _;
};

struct ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond {
    struct ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond__Class *klass;
    MonitorData *monitor;
    struct ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond__Fields fields;
};

struct ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete__Fields {
    struct MulticastDelegate__Fields _;
};

struct ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete {
    struct ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete__Class *klass;
    MonitorData *monitor;
    struct ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete__Fields fields;
};

struct ISteamMatchmakingPlayersResponse_AddPlayerToList__Fields {
    struct MulticastDelegate__Fields _;
};

struct ISteamMatchmakingPlayersResponse_AddPlayerToList {
    struct ISteamMatchmakingPlayersResponse_AddPlayerToList__Class *klass;
    MonitorData *monitor;
    struct ISteamMatchmakingPlayersResponse_AddPlayerToList__Fields fields;
};

struct ISteamMatchmakingPlayersResponse_PlayersFailedToRespond__Fields {
    struct MulticastDelegate__Fields _;
};

struct ISteamMatchmakingPlayersResponse_PlayersFailedToRespond {
    struct ISteamMatchmakingPlayersResponse_PlayersFailedToRespond__Class *klass;
    MonitorData *monitor;
    struct ISteamMatchmakingPlayersResponse_PlayersFailedToRespond__Fields fields;
};

struct ISteamMatchmakingPlayersResponse_PlayersRefreshComplete__Fields {
    struct MulticastDelegate__Fields _;
};

struct ISteamMatchmakingPlayersResponse_PlayersRefreshComplete {
    struct ISteamMatchmakingPlayersResponse_PlayersRefreshComplete__Class *klass;
    MonitorData *monitor;
    struct ISteamMatchmakingPlayersResponse_PlayersRefreshComplete__Fields fields;
};

struct ISteamMatchmakingPlayersResponse_InternalAddPlayerToList__VTable {
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

struct ISteamMatchmakingPlayersResponse_InternalAddPlayerToList__StaticFields {
};

struct ISteamMatchmakingPlayersResponse_InternalAddPlayerToList__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ISteamMatchmakingPlayersResponse_InternalAddPlayerToList__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ISteamMatchmakingPlayersResponse_InternalAddPlayerToList__VTable vtable;
};

struct ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond__VTable {
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

struct ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond__StaticFields {
};

struct ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond__VTable vtable;
};

struct ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete__VTable {
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

}
