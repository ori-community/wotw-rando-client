namespace app {
struct ListContainerImagesRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct Nullable_1_Int32_ PageSize;
    struct String *SkipToken;
};

struct ListContainerImagesRequest {
    struct ListContainerImagesRequest__Class *klass;
    MonitorData *monitor;
    struct ListContainerImagesRequest__Fields fields;
};

struct Action_1_PlayFab_MultiplayerModels_ListContainerImagesResponse___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_MultiplayerModels_ListContainerImagesResponse_ {
    struct Action_1_PlayFab_MultiplayerModels_ListContainerImagesResponse___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_MultiplayerModels_ListContainerImagesResponse___Fields fields;
};

struct ListContainerImagesResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    struct List_1_System_String_ *Images;
    int32_t PageSize;
    struct String *SkipToken;
};

struct ListContainerImagesResponse {
    struct ListContainerImagesResponse__Class *klass;
    MonitorData *monitor;
    struct ListContainerImagesResponse__Fields fields;
};

struct ListContainerImagesRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ListContainerImagesRequest__StaticFields {
};

struct ListContainerImagesRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListContainerImagesRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListContainerImagesRequest__VTable vtable;
};

struct ListContainerImagesResponse__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ListContainerImagesResponse__StaticFields {
};

struct ListContainerImagesResponse__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListContainerImagesResponse__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListContainerImagesResponse__VTable vtable;
};

struct Action_1_PlayFab_MultiplayerModels_ListContainerImagesResponse___VTable {
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

struct Action_1_PlayFab_MultiplayerModels_ListContainerImagesResponse___StaticFields {
};

struct Action_1_PlayFab_MultiplayerModels_ListContainerImagesResponse___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_MultiplayerModels_ListContainerImagesResponse___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_MultiplayerModels_ListContainerImagesResponse___VTable vtable;
};

struct ListContainerImageTagsRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String *ImageName;
};

struct ListContainerImageTagsRequest {
    struct ListContainerImageTagsRequest__Class *klass;
    MonitorData *monitor;
    struct ListContainerImageTagsRequest__Fields fields;
};

struct Action_1_PlayFab_MultiplayerModels_ListContainerImageTagsResponse___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_MultiplayerModels_ListContainerImageTagsResponse_ {
    struct Action_1_PlayFab_MultiplayerModels_ListContainerImageTagsResponse___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_MultiplayerModels_ListContainerImageTagsResponse___Fields fields;
};

struct ListContainerImageTagsResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    struct List_1_System_String_ *Tags;
};

struct ListContainerImageTagsResponse {
    struct ListContainerImageTagsResponse__Class *klass;
    MonitorData *monitor;
    struct ListContainerImageTagsResponse__Fields fields;
};

struct ListContainerImageTagsRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ListContainerImageTagsRequest__StaticFields {
};

struct ListContainerImageTagsRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListContainerImageTagsRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListContainerImageTagsRequest__VTable vtable;
};

struct ListContainerImageTagsResponse__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ListContainerImageTagsResponse__StaticFields {
};

struct ListContainerImageTagsResponse__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListContainerImageTagsResponse__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListContainerImageTagsResponse__VTable vtable;
};

struct Action_1_PlayFab_MultiplayerModels_ListContainerImageTagsResponse___VTable {
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

struct Action_1_PlayFab_MultiplayerModels_ListContainerImageTagsResponse___StaticFields {
};

struct Action_1_PlayFab_MultiplayerModels_ListContainerImageTagsResponse___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_MultiplayerModels_ListContainerImageTagsResponse___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_MultiplayerModels_ListContainerImageTagsResponse___VTable vtable;
};

struct ListMatchmakingQueuesRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
};

struct ListMatchmakingQueuesRequest {
    struct ListMatchmakingQueuesRequest__Class *klass;
    MonitorData *monitor;
    struct ListMatchmakingQueuesRequest__Fields fields;
};

struct Action_1_PlayFab_MultiplayerModels_ListMatchmakingQueuesResult___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_MultiplayerModels_ListMatchmakingQueuesResult_ {
    struct Action_1_PlayFab_MultiplayerModels_ListMatchmakingQueuesResult___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_MultiplayerModels_ListMatchmakingQueuesResult___Fields fields;
};

struct ListMatchmakingQueuesResult__Fields {
    struct PlayFabResultCommon__Fields _;
    struct List_1_PlayFab_MultiplayerModels_MatchmakingQueueConfig_ *MatchMakingQueues;
};

struct ListMatchmakingQueuesResult {
    struct ListMatchmakingQueuesResult__Class *klass;
    MonitorData *monitor;
    struct ListMatchmakingQueuesResult__Fields fields;
};

struct __declspec(align(8)) List_1_PlayFab_MultiplayerModels_MatchmakingQueueConfig___Fields {
    struct MatchmakingQueueConfig__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_MultiplayerModels_MatchmakingQueueConfig_ {
    struct List_1_PlayFab_MultiplayerModels_MatchmakingQueueConfig___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_MultiplayerModels_MatchmakingQueueConfig___Fields fields;
};

struct MatchmakingQueueConfig__Array {
    struct MatchmakingQueueConfig__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MatchmakingQueueConfig *vector[32];
};

struct IEnumerator_1_PlayFab_MultiplayerModels_MatchmakingQueueConfig_ {
    struct IEnumerator_1_PlayFab_MultiplayerModels_MatchmakingQueueConfig___Class *klass;
    MonitorData *monitor;
};

struct ListMatchmakingQueuesRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ListMatchmakingQueuesRequest__StaticFields {
};

struct ListMatchmakingQueuesRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListMatchmakingQueuesRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListMatchmakingQueuesRequest__VTable vtable;
};

struct MatchmakingQueueConfig__Array__VTable {
};

struct MatchmakingQueueConfig__Array__StaticFields {
};

struct MatchmakingQueueConfig__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MatchmakingQueueConfig__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MatchmakingQueueConfig__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_MultiplayerModels_MatchmakingQueueConfig___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_MultiplayerModels_MatchmakingQueueConfig___StaticFields {
};

struct IEnumerator_1_PlayFab_MultiplayerModels_MatchmakingQueueConfig___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_MultiplayerModels_MatchmakingQueueConfig___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_MultiplayerModels_MatchmakingQueueConfig___VTable vtable;
};

struct List_1_PlayFab_MultiplayerModels_MatchmakingQueueConfig___VTable {
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

struct List_1_PlayFab_MultiplayerModels_MatchmakingQueueConfig___StaticFields {
    struct MatchmakingQueueConfig__Array *_emptyArray;
};

struct List_1_PlayFab_MultiplayerModels_MatchmakingQueueConfig___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_MultiplayerModels_MatchmakingQueueConfig___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayFab_MultiplayerModels_MatchmakingQueueConfig___VTable vtable;
};

struct ListMatchmakingQueuesResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ListMatchmakingQueuesResult__StaticFields {
};

struct ListMatchmakingQueuesResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListMatchmakingQueuesResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListMatchmakingQueuesResult__VTable vtable;
};

struct Action_1_PlayFab_MultiplayerModels_ListMatchmakingQueuesResult___VTable {
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

struct Action_1_PlayFab_MultiplayerModels_ListMatchmakingQueuesResult___StaticFields {
};

struct Action_1_PlayFab_MultiplayerModels_ListMatchmakingQueuesResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_MultiplayerModels_ListMatchmakingQueuesResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_MultiplayerModels_ListMatchmakingQueuesResult___VTable vtable;
};

struct ListMatchmakingTicketsForPlayerRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct EntityKey_6 *Entity;
    struct String *QueueName;
};

struct ListMatchmakingTicketsForPlayerRequest {
    struct ListMatchmakingTicketsForPlayerRequest__Class *klass;
    MonitorData *monitor;
    struct ListMatchmakingTicketsForPlayerRequest__Fields fields;
};

struct Action_1_PlayFab_MultiplayerModels_ListMatchmakingTicketsForPlayerResult___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_MultiplayerModels_ListMatchmakingTicketsForPlayerResult_ {
    struct Action_1_PlayFab_MultiplayerModels_ListMatchmakingTicketsForPlayerResult___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_MultiplayerModels_ListMatchmakingTicketsForPlayerResult___Fields fields;
};

struct ListMatchmakingTicketsForPlayerResult__Fields {
    struct PlayFabResultCommon__Fields _;
    struct List_1_System_String_ *TicketIds;
};

struct ListMatchmakingTicketsForPlayerResult {
    struct ListMatchmakingTicketsForPlayerResult__Class *klass;
    MonitorData *monitor;
    struct ListMatchmakingTicketsForPlayerResult__Fields fields;
};

struct ListMatchmakingTicketsForPlayerRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ListMatchmakingTicketsForPlayerRequest__StaticFields {
};

struct ListMatchmakingTicketsForPlayerRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListMatchmakingTicketsForPlayerRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListMatchmakingTicketsForPlayerRequest__VTable vtable;
};

struct ListMatchmakingTicketsForPlayerResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ListMatchmakingTicketsForPlayerResult__StaticFields {
};

struct ListMatchmakingTicketsForPlayerResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListMatchmakingTicketsForPlayerResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListMatchmakingTicketsForPlayerResult__VTable vtable;
};

struct Action_1_PlayFab_MultiplayerModels_ListMatchmakingTicketsForPlayerResult___VTable {
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

struct Action_1_PlayFab_MultiplayerModels_ListMatchmakingTicketsForPlayerResult___StaticFields {
};

struct Action_1_PlayFab_MultiplayerModels_ListMatchmakingTicketsForPlayerResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_MultiplayerModels_ListMatchmakingTicketsForPlayerResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_MultiplayerModels_ListMatchmakingTicketsForPlayerResult___VTable vtable;
};

struct ListQosServersRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
};

struct ListQosServersRequest {
    struct ListQosServersRequest__Class *klass;
    MonitorData *monitor;
    struct ListQosServersRequest__Fields fields;
};

struct Action_1_PlayFab_MultiplayerModels_ListQosServersResponse___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_MultiplayerModels_ListQosServersResponse_ {
    struct Action_1_PlayFab_MultiplayerModels_ListQosServersResponse___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_MultiplayerModels_ListQosServersResponse___Fields fields;
};

struct ListQosServersResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    int32_t PageSize;
    struct List_1_PlayFab_MultiplayerModels_QosServer_ *QosServers;
    struct String *SkipToken;
};

struct ListQosServersResponse {
    struct ListQosServersResponse__Class *klass;
    MonitorData *monitor;
    struct ListQosServersResponse__Fields fields;
};

struct __declspec(align(8)) List_1_PlayFab_MultiplayerModels_QosServer___Fields {
    struct QosServer__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_MultiplayerModels_QosServer_ {
    struct List_1_PlayFab_MultiplayerModels_QosServer___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_MultiplayerModels_QosServer___Fields fields;
};

struct __declspec(align(8)) QosServer__Fields {
    struct Nullable_1_PlayFab_MultiplayerModels_AzureRegion_ Region_1;
    struct String *ServerUrl;
};

struct QosServer {
    struct QosServer__Class *klass;
    MonitorData *monitor;
    struct QosServer__Fields fields;
};

struct QosServer__Array {
    struct QosServer__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct QosServer *vector[32];
};

struct IEnumerator_1_PlayFab_MultiplayerModels_QosServer_ {
    struct IEnumerator_1_PlayFab_MultiplayerModels_QosServer___Class *klass;
    MonitorData *monitor;
};

struct ListQosServersRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ListQosServersRequest__StaticFields {
};

struct ListQosServersRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListQosServersRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListQosServersRequest__VTable vtable;
};

struct QosServer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct QosServer__StaticFields {
};

struct QosServer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct QosServer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct QosServer__VTable vtable;
};

struct QosServer__Array__VTable {
};

struct QosServer__Array__StaticFields {
};

struct QosServer__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct QosServer__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct QosServer__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_MultiplayerModels_QosServer___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_MultiplayerModels_QosServer___StaticFields {
};

struct IEnumerator_1_PlayFab_MultiplayerModels_QosServer___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_MultiplayerModels_QosServer___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_MultiplayerModels_QosServer___VTable vtable;
};

struct List_1_PlayFab_MultiplayerModels_QosServer___VTable {
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

struct List_1_PlayFab_MultiplayerModels_QosServer___StaticFields {
    struct QosServer__Array *_emptyArray;
};

struct List_1_PlayFab_MultiplayerModels_QosServer___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_MultiplayerModels_QosServer___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayFab_MultiplayerModels_QosServer___VTable vtable;
};

struct ListQosServersResponse__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ListQosServersResponse__StaticFields {
};

struct ListQosServersResponse__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListQosServersResponse__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListQosServersResponse__VTable vtable;
};

struct Action_1_PlayFab_MultiplayerModels_ListQosServersResponse___VTable {
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

struct Action_1_PlayFab_MultiplayerModels_ListQosServersResponse___StaticFields {
};

struct Action_1_PlayFab_MultiplayerModels_ListQosServersResponse___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_MultiplayerModels_ListQosServersResponse___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_MultiplayerModels_ListQosServersResponse___VTable vtable;
};

struct ListVirtualMachineSummariesRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String *BuildId;
    struct Nullable_1_Int32_ PageSize;
    AzureRegion__Enum Region_1;
    
    struct String *SkipToken;
};

struct ListVirtualMachineSummariesRequest {
    struct ListVirtualMachineSummariesRequest__Class *klass;
    MonitorData *monitor;
    struct ListVirtualMachineSummariesRequest__Fields fields;
};

struct Action_1_PlayFab_MultiplayerModels_ListVirtualMachineSummariesResponse___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_MultiplayerModels_ListVirtualMachineSummariesResponse_ {
    struct Action_1_PlayFab_MultiplayerModels_ListVirtualMachineSummariesResponse___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_MultiplayerModels_ListVirtualMachineSummariesResponse___Fields fields;
};

struct ListVirtualMachineSummariesResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    int32_t PageSize;
    struct String *SkipToken;
    struct List_1_PlayFab_MultiplayerModels_VirtualMachineSummary_ *VirtualMachines;
};

struct ListVirtualMachineSummariesResponse {
    struct ListVirtualMachineSummariesResponse__Class *klass;
    MonitorData *monitor;
    struct ListVirtualMachineSummariesResponse__Fields fields;
};

struct __declspec(align(8)) List_1_PlayFab_MultiplayerModels_VirtualMachineSummary___Fields {
    struct VirtualMachineSummary__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_MultiplayerModels_VirtualMachineSummary_ {
    struct List_1_PlayFab_MultiplayerModels_VirtualMachineSummary___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_MultiplayerModels_VirtualMachineSummary___Fields fields;
};

struct __declspec(align(8)) VirtualMachineSummary__Fields {
    struct String *HealthStatus;
    struct String *State;
    struct String *VmId;
};

struct VirtualMachineSummary {
    struct VirtualMachineSummary__Class *klass;
    MonitorData *monitor;
    struct VirtualMachineSummary__Fields fields;
};

struct VirtualMachineSummary__Array {
    struct VirtualMachineSummary__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct VirtualMachineSummary *vector[32];
};

struct IEnumerator_1_PlayFab_MultiplayerModels_VirtualMachineSummary_ {
    struct IEnumerator_1_PlayFab_MultiplayerModels_VirtualMachineSummary___Class *klass;
    MonitorData *monitor;
};

struct ListVirtualMachineSummariesRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ListVirtualMachineSummariesRequest__StaticFields {
};

struct ListVirtualMachineSummariesRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListVirtualMachineSummariesRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListVirtualMachineSummariesRequest__VTable vtable;
};

struct VirtualMachineSummary__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct VirtualMachineSummary__StaticFields {
};

struct VirtualMachineSummary__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VirtualMachineSummary__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VirtualMachineSummary__VTable vtable;
};

struct VirtualMachineSummary__Array__VTable {
};

struct VirtualMachineSummary__Array__StaticFields {
};

struct VirtualMachineSummary__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VirtualMachineSummary__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VirtualMachineSummary__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_MultiplayerModels_VirtualMachineSummary___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_MultiplayerModels_VirtualMachineSummary___StaticFields {
};

struct IEnumerator_1_PlayFab_MultiplayerModels_VirtualMachineSummary___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_MultiplayerModels_VirtualMachineSummary___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_MultiplayerModels_VirtualMachineSummary___VTable vtable;
};

struct List_1_PlayFab_MultiplayerModels_VirtualMachineSummary___VTable {
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

struct List_1_PlayFab_MultiplayerModels_VirtualMachineSummary___StaticFields {
    struct VirtualMachineSummary__Array *_emptyArray;
};

struct List_1_PlayFab_MultiplayerModels_VirtualMachineSummary___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_MultiplayerModels_VirtualMachineSummary___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayFab_MultiplayerModels_VirtualMachineSummary___VTable vtable;
};

struct ListVirtualMachineSummariesResponse__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ListVirtualMachineSummariesResponse__StaticFields {
};

struct ListVirtualMachineSummariesResponse__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListVirtualMachineSummariesResponse__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListVirtualMachineSummariesResponse__VTable vtable;
};

struct Action_1_PlayFab_MultiplayerModels_ListVirtualMachineSummariesResponse___VTable {
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

struct Action_1_PlayFab_MultiplayerModels_ListVirtualMachineSummariesResponse___StaticFields {
};

struct Action_1_PlayFab_MultiplayerModels_ListVirtualMachineSummariesResponse___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_MultiplayerModels_ListVirtualMachineSummariesResponse___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_MultiplayerModels_ListVirtualMachineSummariesResponse___VTable vtable;
};

struct RemoveMatchmakingQueueRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String *QueueName;
};

struct RemoveMatchmakingQueueRequest {
    struct RemoveMatchmakingQueueRequest__Class *klass;
    MonitorData *monitor;
    struct RemoveMatchmakingQueueRequest__Fields fields;
};

}
