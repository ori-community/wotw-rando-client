namespace app {
struct Action_1_PlayFab_MultiplayerModels_RemoveMatchmakingQueueResult___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_MultiplayerModels_RemoveMatchmakingQueueResult_ {
    struct Action_1_PlayFab_MultiplayerModels_RemoveMatchmakingQueueResult___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_MultiplayerModels_RemoveMatchmakingQueueResult___Fields fields;
};

struct RemoveMatchmakingQueueResult__Fields {
    struct PlayFabResultCommon__Fields _;
};

struct RemoveMatchmakingQueueResult {
    struct RemoveMatchmakingQueueResult__Class *klass;
    MonitorData *monitor;
    struct RemoveMatchmakingQueueResult__Fields fields;
};

struct RemoveMatchmakingQueueRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RemoveMatchmakingQueueRequest__StaticFields {
};

struct RemoveMatchmakingQueueRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RemoveMatchmakingQueueRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RemoveMatchmakingQueueRequest__VTable vtable;
};

struct RemoveMatchmakingQueueResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RemoveMatchmakingQueueResult__StaticFields {
};

struct RemoveMatchmakingQueueResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RemoveMatchmakingQueueResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RemoveMatchmakingQueueResult__VTable vtable;
};

struct Action_1_PlayFab_MultiplayerModels_RemoveMatchmakingQueueResult___VTable {
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

struct Action_1_PlayFab_MultiplayerModels_RemoveMatchmakingQueueResult___StaticFields {
};

struct Action_1_PlayFab_MultiplayerModels_RemoveMatchmakingQueueResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_MultiplayerModels_RemoveMatchmakingQueueResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_MultiplayerModels_RemoveMatchmakingQueueResult___VTable vtable;
};

struct RequestMultiplayerServerRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String *BuildId;
    struct List_1_System_String_ *InitialPlayers;
    struct List_1_PlayFab_MultiplayerModels_AzureRegion_ *PreferredRegions;
    struct String *SessionCookie;
    struct String *SessionId;
};

struct RequestMultiplayerServerRequest {
    struct RequestMultiplayerServerRequest__Class *klass;
    MonitorData *monitor;
    struct RequestMultiplayerServerRequest__Fields fields;
};

struct __declspec(align(8)) List_1_PlayFab_MultiplayerModels_AzureRegion___Fields {
    struct AzureRegion__Enum__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_MultiplayerModels_AzureRegion_ {
    struct List_1_PlayFab_MultiplayerModels_AzureRegion___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_MultiplayerModels_AzureRegion___Fields fields;
};

struct AzureRegion__Enum__Array {
    struct AzureRegion__Enum__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    AzureRegion__Enum vector[32];
};

struct IEnumerator_1_PlayFab_MultiplayerModels_AzureRegion_ {
    struct IEnumerator_1_PlayFab_MultiplayerModels_AzureRegion___Class *klass;
    MonitorData *monitor;
};

struct Action_1_PlayFab_MultiplayerModels_RequestMultiplayerServerResponse___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_MultiplayerModels_RequestMultiplayerServerResponse_ {
    struct Action_1_PlayFab_MultiplayerModels_RequestMultiplayerServerResponse___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_MultiplayerModels_RequestMultiplayerServerResponse___Fields fields;
};

struct RequestMultiplayerServerResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    struct List_1_PlayFab_MultiplayerModels_ConnectedPlayer_ *ConnectedPlayers;
    struct String *FQDN;
    struct String *IPV4Address;
    struct Nullable_1_DateTime_ LastStateTransitionTime;
    struct List_1_PlayFab_MultiplayerModels_Port_ *Ports;
    struct Nullable_1_PlayFab_MultiplayerModels_AzureRegion_ Region_1;
    struct String *ServerId;
    struct String *SessionId;
    struct String *State;
    struct String *VmId;
};

struct RequestMultiplayerServerResponse {
    struct RequestMultiplayerServerResponse__Class *klass;
    MonitorData *monitor;
    struct RequestMultiplayerServerResponse__Fields fields;
};

struct AzureRegion__Enum__Array__VTable {
};

struct AzureRegion__Enum__Array__StaticFields {
};

struct AzureRegion__Enum__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AzureRegion__Enum__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AzureRegion__Enum__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_MultiplayerModels_AzureRegion___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_MultiplayerModels_AzureRegion___StaticFields {
};

struct IEnumerator_1_PlayFab_MultiplayerModels_AzureRegion___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_MultiplayerModels_AzureRegion___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_MultiplayerModels_AzureRegion___VTable vtable;
};

struct List_1_PlayFab_MultiplayerModels_AzureRegion___VTable {
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

struct List_1_PlayFab_MultiplayerModels_AzureRegion___StaticFields {
    struct AzureRegion__Enum__Array *_emptyArray;
};

struct List_1_PlayFab_MultiplayerModels_AzureRegion___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_MultiplayerModels_AzureRegion___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayFab_MultiplayerModels_AzureRegion___VTable vtable;
};

struct RequestMultiplayerServerRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RequestMultiplayerServerRequest__StaticFields {
};

struct RequestMultiplayerServerRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RequestMultiplayerServerRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RequestMultiplayerServerRequest__VTable vtable;
};

struct RequestMultiplayerServerResponse__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RequestMultiplayerServerResponse__StaticFields {
};

struct RequestMultiplayerServerResponse__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RequestMultiplayerServerResponse__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RequestMultiplayerServerResponse__VTable vtable;
};

struct Action_1_PlayFab_MultiplayerModels_RequestMultiplayerServerResponse___VTable {
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

struct Action_1_PlayFab_MultiplayerModels_RequestMultiplayerServerResponse___StaticFields {
};

struct Action_1_PlayFab_MultiplayerModels_RequestMultiplayerServerResponse___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_MultiplayerModels_RequestMultiplayerServerResponse___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_MultiplayerModels_RequestMultiplayerServerResponse___VTable vtable;
};

struct RolloverContainerRegistryCredentialsRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
};

struct RolloverContainerRegistryCredentialsRequest {
    struct RolloverContainerRegistryCredentialsRequest__Class *klass;
    MonitorData *monitor;
    struct RolloverContainerRegistryCredentialsRequest__Fields fields;
};

struct Action_1_PlayFab_MultiplayerModels_RolloverContainerRegistryCredentialsResponse___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_MultiplayerModels_RolloverContainerRegistryCredentialsResponse_ {
    struct Action_1_PlayFab_MultiplayerModels_RolloverContainerRegistryCredentialsResponse___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_MultiplayerModels_RolloverContainerRegistryCredentialsResponse___Fields fields;
};

struct RolloverContainerRegistryCredentialsResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    struct String *DnsName;
    struct String *Password;
    struct String *Username;
};

struct RolloverContainerRegistryCredentialsResponse {
    struct RolloverContainerRegistryCredentialsResponse__Class *klass;
    MonitorData *monitor;
    struct RolloverContainerRegistryCredentialsResponse__Fields fields;
};

struct RolloverContainerRegistryCredentialsRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RolloverContainerRegistryCredentialsRequest__StaticFields {
};

struct RolloverContainerRegistryCredentialsRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RolloverContainerRegistryCredentialsRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RolloverContainerRegistryCredentialsRequest__VTable vtable;
};

struct RolloverContainerRegistryCredentialsResponse__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RolloverContainerRegistryCredentialsResponse__StaticFields {
};

struct RolloverContainerRegistryCredentialsResponse__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RolloverContainerRegistryCredentialsResponse__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RolloverContainerRegistryCredentialsResponse__VTable vtable;
};

struct Action_1_PlayFab_MultiplayerModels_RolloverContainerRegistryCredentialsResponse___VTable {
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

struct Action_1_PlayFab_MultiplayerModels_RolloverContainerRegistryCredentialsResponse___StaticFields {
};

struct Action_1_PlayFab_MultiplayerModels_RolloverContainerRegistryCredentialsResponse___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_MultiplayerModels_RolloverContainerRegistryCredentialsResponse___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_MultiplayerModels_RolloverContainerRegistryCredentialsResponse___VTable vtable;
};

struct SetMatchmakingQueueRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct MatchmakingQueueConfig *MatchmakingQueue;
};

struct SetMatchmakingQueueRequest {
    struct SetMatchmakingQueueRequest__Class *klass;
    MonitorData *monitor;
    struct SetMatchmakingQueueRequest__Fields fields;
};

struct Action_1_PlayFab_MultiplayerModels_SetMatchmakingQueueResult___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_MultiplayerModels_SetMatchmakingQueueResult_ {
    struct Action_1_PlayFab_MultiplayerModels_SetMatchmakingQueueResult___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_MultiplayerModels_SetMatchmakingQueueResult___Fields fields;
};

struct SetMatchmakingQueueResult__Fields {
    struct PlayFabResultCommon__Fields _;
};

struct SetMatchmakingQueueResult {
    struct SetMatchmakingQueueResult__Class *klass;
    MonitorData *monitor;
    struct SetMatchmakingQueueResult__Fields fields;
};

struct SetMatchmakingQueueRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SetMatchmakingQueueRequest__StaticFields {
};

struct SetMatchmakingQueueRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SetMatchmakingQueueRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SetMatchmakingQueueRequest__VTable vtable;
};

struct SetMatchmakingQueueResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SetMatchmakingQueueResult__StaticFields {
};

struct SetMatchmakingQueueResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SetMatchmakingQueueResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SetMatchmakingQueueResult__VTable vtable;
};

struct Action_1_PlayFab_MultiplayerModels_SetMatchmakingQueueResult___VTable {
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

struct Action_1_PlayFab_MultiplayerModels_SetMatchmakingQueueResult___StaticFields {
};

struct Action_1_PlayFab_MultiplayerModels_SetMatchmakingQueueResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_MultiplayerModels_SetMatchmakingQueueResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_MultiplayerModels_SetMatchmakingQueueResult___VTable vtable;
};

struct ShutdownMultiplayerServerRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String *BuildId;
    AzureRegion__Enum Region_1;
    
    struct String *SessionId;
};

struct ShutdownMultiplayerServerRequest {
    struct ShutdownMultiplayerServerRequest__Class *klass;
    MonitorData *monitor;
    struct ShutdownMultiplayerServerRequest__Fields fields;
};

struct ShutdownMultiplayerServerRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ShutdownMultiplayerServerRequest__StaticFields {
};

struct ShutdownMultiplayerServerRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShutdownMultiplayerServerRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShutdownMultiplayerServerRequest__VTable vtable;
};

struct UpdateBuildRegionsRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String *BuildId;
    struct List_1_PlayFab_MultiplayerModels_BuildRegionParams_ *BuildRegions;
};

struct UpdateBuildRegionsRequest {
    struct UpdateBuildRegionsRequest__Class *klass;
    MonitorData *monitor;
    struct UpdateBuildRegionsRequest__Fields fields;
};

struct UpdateBuildRegionsRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UpdateBuildRegionsRequest__StaticFields {
};

struct UpdateBuildRegionsRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UpdateBuildRegionsRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UpdateBuildRegionsRequest__VTable vtable;
};

struct UploadCertificateRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct Certificate *GameCertificate;
};

struct UploadCertificateRequest {
    struct UploadCertificateRequest__Class *klass;
    MonitorData *monitor;
    struct UploadCertificateRequest__Fields fields;
};

struct __declspec(align(8)) Certificate__Fields {
    struct String *Base64EncodedValue;
    struct String *Name;
    struct String *Password;
};

struct Certificate {
    struct Certificate__Class *klass;
    MonitorData *monitor;
    struct Certificate__Fields fields;
};

struct Certificate__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Certificate__StaticFields {
};

struct Certificate__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Certificate__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Certificate__VTable vtable;
};

struct UploadCertificateRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UploadCertificateRequest__StaticFields {
};

struct UploadCertificateRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UploadCertificateRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UploadCertificateRequest__VTable vtable;
};

struct __declspec(align(8)) PlayFabMultiplayerInstanceAPI__Fields {
    struct PlayFabApiSettings *ApiSettings;
    struct PlayFabAuthenticationContext *authenticationContext;
};

struct PlayFabMultiplayerInstanceAPI {
    struct PlayFabMultiplayerInstanceAPI__Class *klass;
    MonitorData *monitor;
    struct PlayFabMultiplayerInstanceAPI__Fields fields;
};

struct PlayFabMultiplayerInstanceAPI__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PlayFabMultiplayerInstanceAPI__StaticFields {
};

struct PlayFabMultiplayerInstanceAPI__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayFabMultiplayerInstanceAPI__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayFabMultiplayerInstanceAPI__VTable vtable;
};

struct GetGlobalPolicyRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
};

struct GetGlobalPolicyRequest {
    struct GetGlobalPolicyRequest__Class *klass;
    MonitorData *monitor;
    struct GetGlobalPolicyRequest__Fields fields;
};

struct Action_1_PlayFab_ProfilesModels_GetGlobalPolicyResponse___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_ProfilesModels_GetGlobalPolicyResponse_ {
    struct Action_1_PlayFab_ProfilesModels_GetGlobalPolicyResponse___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_ProfilesModels_GetGlobalPolicyResponse___Fields fields;
};

struct GetGlobalPolicyResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    struct List_1_PlayFab_ProfilesModels_EntityPermissionStatement_ *Permissions;
};

struct GetGlobalPolicyResponse {
    struct GetGlobalPolicyResponse__Class *klass;
    MonitorData *monitor;
    struct GetGlobalPolicyResponse__Fields fields;
};

struct __declspec(align(8)) List_1_PlayFab_ProfilesModels_EntityPermissionStatement___Fields {
    struct EntityPermissionStatement__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_ProfilesModels_EntityPermissionStatement_ {
    struct List_1_PlayFab_ProfilesModels_EntityPermissionStatement___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_ProfilesModels_EntityPermissionStatement___Fields fields;
};

enum class EffectType__Enum : int32_t {
    Allow = 0x00000000,
    Deny = 0x00000001,
};

struct EffectType__Enum__Boxed {
    struct EffectType__Enum__Class *klass;
    MonitorData *monitor;
    EffectType__Enum value;
    
};

struct __declspec(align(8)) EntityPermissionStatement__Fields {
    struct String *Action;
    struct String *Comment;
    struct Object *Condition;
    EffectType__Enum Effect;
    
    struct Object *Principal;
    struct String *Resource;
};

struct EntityPermissionStatement {
    struct EntityPermissionStatement__Class *klass;
    MonitorData *monitor;
    struct EntityPermissionStatement__Fields fields;
};

struct EntityPermissionStatement__Array {
    struct EntityPermissionStatement__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct EntityPermissionStatement *vector[32];
};

struct IEnumerator_1_PlayFab_ProfilesModels_EntityPermissionStatement_ {
    struct IEnumerator_1_PlayFab_ProfilesModels_EntityPermissionStatement___Class *klass;
    MonitorData *monitor;
};

struct GetGlobalPolicyRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GetGlobalPolicyRequest__StaticFields {
};

struct GetGlobalPolicyRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GetGlobalPolicyRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GetGlobalPolicyRequest__VTable vtable;
};

struct EffectType__Enum__VTable {
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

struct EffectType__Enum__StaticFields {
};

struct EffectType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EffectType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EffectType__Enum__VTable vtable;
};

struct EntityPermissionStatement__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct EntityPermissionStatement__StaticFields {
};

struct EntityPermissionStatement__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EntityPermissionStatement__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EntityPermissionStatement__VTable vtable;
};

struct EntityPermissionStatement__Array__VTable {
};

struct EntityPermissionStatement__Array__StaticFields {
};

struct EntityPermissionStatement__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EntityPermissionStatement__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EntityPermissionStatement__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_ProfilesModels_EntityPermissionStatement___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_ProfilesModels_EntityPermissionStatement___StaticFields {
};

struct IEnumerator_1_PlayFab_ProfilesModels_EntityPermissionStatement___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_ProfilesModels_EntityPermissionStatement___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_ProfilesModels_EntityPermissionStatement___VTable vtable;
};

struct List_1_PlayFab_ProfilesModels_EntityPermissionStatement___VTable {
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

struct List_1_PlayFab_ProfilesModels_EntityPermissionStatement___StaticFields {
    struct EntityPermissionStatement__Array *_emptyArray;
};

struct List_1_PlayFab_ProfilesModels_EntityPermissionStatement___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_ProfilesModels_EntityPermissionStatement___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayFab_ProfilesModels_EntityPermissionStatement___VTable vtable;
};

struct GetGlobalPolicyResponse__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GetGlobalPolicyResponse__StaticFields {
};

struct GetGlobalPolicyResponse__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GetGlobalPolicyResponse__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GetGlobalPolicyResponse__VTable vtable;
};

struct Action_1_PlayFab_ProfilesModels_GetGlobalPolicyResponse___VTable {
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

struct Action_1_PlayFab_ProfilesModels_GetGlobalPolicyResponse___StaticFields {
};

struct Action_1_PlayFab_ProfilesModels_GetGlobalPolicyResponse___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_ProfilesModels_GetGlobalPolicyResponse___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_ProfilesModels_GetGlobalPolicyResponse___VTable vtable;
};

struct GetEntityProfileRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct Nullable_1_Boolean_ DataAsObject;
    struct EntityKey_7 *Entity;
};

struct GetEntityProfileRequest {
    struct GetEntityProfileRequest__Class *klass;
    MonitorData *monitor;
    struct GetEntityProfileRequest__Fields fields;
};

struct __declspec(align(8)) EntityKey_7__Fields {
    struct String *Id;
    struct String *Type;
};

struct EntityKey_7 {
    struct EntityKey_7__Class *klass;
    MonitorData *monitor;
    struct EntityKey_7__Fields fields;
};

struct Action_1_PlayFab_ProfilesModels_GetEntityProfileResponse___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_ProfilesModels_GetEntityProfileResponse_ {
    struct Action_1_PlayFab_ProfilesModels_GetEntityProfileResponse___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_ProfilesModels_GetEntityProfileResponse___Fields fields;
};

struct GetEntityProfileResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    struct EntityProfileBody *Profile;
};

struct GetEntityProfileResponse {
    struct GetEntityProfileResponse__Class *klass;
    MonitorData *monitor;
    struct GetEntityProfileResponse__Fields fields;
};

struct __declspec(align(8)) EntityProfileBody__Fields {
    struct DateTime Created;
    struct String *DisplayName;
    struct EntityKey_7 *Entity;
    struct String *EntityChain;
    struct Dictionary_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata_ *Files;
    struct String *Language;
    struct EntityLineage *Lineage;
    struct Dictionary_2_System_String_PlayFab_ProfilesModels_EntityDataObject_ *Objects;
    struct List_1_PlayFab_ProfilesModels_EntityPermissionStatement_ *Permissions;
    int32_t VersionNumber;
};

}
