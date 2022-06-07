namespace app {
struct IsMemberResponse {
    struct IsMemberResponse__Class *klass;
    MonitorData *monitor;
    struct IsMemberResponse__Fields fields;
};

struct IsMemberRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct IsMemberRequest__StaticFields {
};

struct IsMemberRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IsMemberRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IsMemberRequest__VTable vtable;
};

struct IsMemberResponse__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct IsMemberResponse__StaticFields {
};

struct IsMemberResponse__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IsMemberResponse__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IsMemberResponse__VTable vtable;
};

struct Action_1_PlayFab_GroupsModels_IsMemberResponse___VTable {
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

struct Action_1_PlayFab_GroupsModels_IsMemberResponse___StaticFields {
};

struct Action_1_PlayFab_GroupsModels_IsMemberResponse___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_GroupsModels_IsMemberResponse___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_GroupsModels_IsMemberResponse___VTable vtable;
};

struct ListGroupApplicationsRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct EntityKey_5 *Group;
};

struct ListGroupApplicationsRequest {
    struct ListGroupApplicationsRequest__Class *klass;
    MonitorData *monitor;
    struct ListGroupApplicationsRequest__Fields fields;
};

struct Action_1_PlayFab_GroupsModels_ListGroupApplicationsResponse___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_GroupsModels_ListGroupApplicationsResponse_ {
    struct Action_1_PlayFab_GroupsModels_ListGroupApplicationsResponse___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_GroupsModels_ListGroupApplicationsResponse___Fields fields;
};

struct ListGroupApplicationsResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    struct List_1_PlayFab_GroupsModels_GroupApplication_ *Applications;
};

struct ListGroupApplicationsResponse {
    struct ListGroupApplicationsResponse__Class *klass;
    MonitorData *monitor;
    struct ListGroupApplicationsResponse__Fields fields;
};

struct __declspec(align(8)) List_1_PlayFab_GroupsModels_GroupApplication___Fields {
    struct GroupApplication__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_GroupsModels_GroupApplication_ {
    struct List_1_PlayFab_GroupsModels_GroupApplication___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_GroupsModels_GroupApplication___Fields fields;
};

struct __declspec(align(8)) GroupApplication__Fields {
    struct EntityWithLineage *Entity;
    struct DateTime Expires;
    struct EntityKey_5 *Group;
};

struct GroupApplication {
    struct GroupApplication__Class *klass;
    MonitorData *monitor;
    struct GroupApplication__Fields fields;
};

struct GroupApplication__Array {
    struct GroupApplication__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct GroupApplication *vector[32];
};

struct IEnumerator_1_PlayFab_GroupsModels_GroupApplication_ {
    struct IEnumerator_1_PlayFab_GroupsModels_GroupApplication___Class *klass;
    MonitorData *monitor;
};

struct ListGroupApplicationsRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ListGroupApplicationsRequest__StaticFields {
};

struct ListGroupApplicationsRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListGroupApplicationsRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListGroupApplicationsRequest__VTable vtable;
};

struct GroupApplication__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GroupApplication__StaticFields {
};

struct GroupApplication__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GroupApplication__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GroupApplication__VTable vtable;
};

struct GroupApplication__Array__VTable {
};

struct GroupApplication__Array__StaticFields {
};

struct GroupApplication__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GroupApplication__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GroupApplication__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_GroupsModels_GroupApplication___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_GroupsModels_GroupApplication___StaticFields {
};

struct IEnumerator_1_PlayFab_GroupsModels_GroupApplication___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_GroupsModels_GroupApplication___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_GroupsModels_GroupApplication___VTable vtable;
};

struct List_1_PlayFab_GroupsModels_GroupApplication___VTable {
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

struct List_1_PlayFab_GroupsModels_GroupApplication___StaticFields {
    struct GroupApplication__Array *_emptyArray;
};

struct List_1_PlayFab_GroupsModels_GroupApplication___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_GroupsModels_GroupApplication___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayFab_GroupsModels_GroupApplication___VTable vtable;
};

struct ListGroupApplicationsResponse__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ListGroupApplicationsResponse__StaticFields {
};

struct ListGroupApplicationsResponse__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListGroupApplicationsResponse__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListGroupApplicationsResponse__VTable vtable;
};

struct Action_1_PlayFab_GroupsModels_ListGroupApplicationsResponse___VTable {
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

struct Action_1_PlayFab_GroupsModels_ListGroupApplicationsResponse___StaticFields {
};

struct Action_1_PlayFab_GroupsModels_ListGroupApplicationsResponse___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_GroupsModels_ListGroupApplicationsResponse___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_GroupsModels_ListGroupApplicationsResponse___VTable vtable;
};

struct ListGroupBlocksRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct EntityKey_5 *Group;
};

struct ListGroupBlocksRequest {
    struct ListGroupBlocksRequest__Class *klass;
    MonitorData *monitor;
    struct ListGroupBlocksRequest__Fields fields;
};

struct Action_1_PlayFab_GroupsModels_ListGroupBlocksResponse___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_GroupsModels_ListGroupBlocksResponse_ {
    struct Action_1_PlayFab_GroupsModels_ListGroupBlocksResponse___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_GroupsModels_ListGroupBlocksResponse___Fields fields;
};

struct ListGroupBlocksResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    struct List_1_PlayFab_GroupsModels_GroupBlock_ *BlockedEntities;
};

struct ListGroupBlocksResponse {
    struct ListGroupBlocksResponse__Class *klass;
    MonitorData *monitor;
    struct ListGroupBlocksResponse__Fields fields;
};

struct __declspec(align(8)) List_1_PlayFab_GroupsModels_GroupBlock___Fields {
    struct GroupBlock__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_GroupsModels_GroupBlock_ {
    struct List_1_PlayFab_GroupsModels_GroupBlock___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_GroupsModels_GroupBlock___Fields fields;
};

struct __declspec(align(8)) GroupBlock__Fields {
    struct EntityWithLineage *Entity;
    struct EntityKey_5 *Group;
};

struct GroupBlock {
    struct GroupBlock__Class *klass;
    MonitorData *monitor;
    struct GroupBlock__Fields fields;
};

struct GroupBlock__Array {
    struct GroupBlock__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct GroupBlock *vector[32];
};

struct IEnumerator_1_PlayFab_GroupsModels_GroupBlock_ {
    struct IEnumerator_1_PlayFab_GroupsModels_GroupBlock___Class *klass;
    MonitorData *monitor;
};

struct ListGroupBlocksRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ListGroupBlocksRequest__StaticFields {
};

struct ListGroupBlocksRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListGroupBlocksRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListGroupBlocksRequest__VTable vtable;
};

struct GroupBlock__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GroupBlock__StaticFields {
};

struct GroupBlock__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GroupBlock__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GroupBlock__VTable vtable;
};

struct GroupBlock__Array__VTable {
};

struct GroupBlock__Array__StaticFields {
};

struct GroupBlock__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GroupBlock__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GroupBlock__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_GroupsModels_GroupBlock___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_GroupsModels_GroupBlock___StaticFields {
};

struct IEnumerator_1_PlayFab_GroupsModels_GroupBlock___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_GroupsModels_GroupBlock___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_GroupsModels_GroupBlock___VTable vtable;
};

struct List_1_PlayFab_GroupsModels_GroupBlock___VTable {
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

struct List_1_PlayFab_GroupsModels_GroupBlock___StaticFields {
    struct GroupBlock__Array *_emptyArray;
};

struct List_1_PlayFab_GroupsModels_GroupBlock___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_GroupsModels_GroupBlock___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayFab_GroupsModels_GroupBlock___VTable vtable;
};

struct ListGroupBlocksResponse__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ListGroupBlocksResponse__StaticFields {
};

struct ListGroupBlocksResponse__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListGroupBlocksResponse__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListGroupBlocksResponse__VTable vtable;
};

struct Action_1_PlayFab_GroupsModels_ListGroupBlocksResponse___VTable {
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

struct Action_1_PlayFab_GroupsModels_ListGroupBlocksResponse___StaticFields {
};

struct Action_1_PlayFab_GroupsModels_ListGroupBlocksResponse___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_GroupsModels_ListGroupBlocksResponse___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_GroupsModels_ListGroupBlocksResponse___VTable vtable;
};

struct ListGroupInvitationsRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct EntityKey_5 *Group;
};

struct ListGroupInvitationsRequest {
    struct ListGroupInvitationsRequest__Class *klass;
    MonitorData *monitor;
    struct ListGroupInvitationsRequest__Fields fields;
};

struct Action_1_PlayFab_GroupsModels_ListGroupInvitationsResponse___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_GroupsModels_ListGroupInvitationsResponse_ {
    struct Action_1_PlayFab_GroupsModels_ListGroupInvitationsResponse___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_GroupsModels_ListGroupInvitationsResponse___Fields fields;
};

struct ListGroupInvitationsResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    struct List_1_PlayFab_GroupsModels_GroupInvitation_ *Invitations;
};

struct ListGroupInvitationsResponse {
    struct ListGroupInvitationsResponse__Class *klass;
    MonitorData *monitor;
    struct ListGroupInvitationsResponse__Fields fields;
};

struct __declspec(align(8)) List_1_PlayFab_GroupsModels_GroupInvitation___Fields {
    struct GroupInvitation__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_GroupsModels_GroupInvitation_ {
    struct List_1_PlayFab_GroupsModels_GroupInvitation___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_GroupsModels_GroupInvitation___Fields fields;
};

struct __declspec(align(8)) GroupInvitation__Fields {
    struct DateTime Expires;
    struct EntityKey_5 *Group;
    struct EntityWithLineage *InvitedByEntity;
    struct EntityWithLineage *InvitedEntity;
    struct String *RoleId;
};

struct GroupInvitation {
    struct GroupInvitation__Class *klass;
    MonitorData *monitor;
    struct GroupInvitation__Fields fields;
};

struct GroupInvitation__Array {
    struct GroupInvitation__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct GroupInvitation *vector[32];
};

struct IEnumerator_1_PlayFab_GroupsModels_GroupInvitation_ {
    struct IEnumerator_1_PlayFab_GroupsModels_GroupInvitation___Class *klass;
    MonitorData *monitor;
};

struct ListGroupInvitationsRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ListGroupInvitationsRequest__StaticFields {
};

struct ListGroupInvitationsRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListGroupInvitationsRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListGroupInvitationsRequest__VTable vtable;
};

struct GroupInvitation__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GroupInvitation__StaticFields {
};

struct GroupInvitation__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GroupInvitation__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GroupInvitation__VTable vtable;
};

struct GroupInvitation__Array__VTable {
};

struct GroupInvitation__Array__StaticFields {
};

struct GroupInvitation__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GroupInvitation__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GroupInvitation__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_GroupsModels_GroupInvitation___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_GroupsModels_GroupInvitation___StaticFields {
};

struct IEnumerator_1_PlayFab_GroupsModels_GroupInvitation___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_GroupsModels_GroupInvitation___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_GroupsModels_GroupInvitation___VTable vtable;
};

struct List_1_PlayFab_GroupsModels_GroupInvitation___VTable {
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

struct List_1_PlayFab_GroupsModels_GroupInvitation___StaticFields {
    struct GroupInvitation__Array *_emptyArray;
};

struct List_1_PlayFab_GroupsModels_GroupInvitation___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_GroupsModels_GroupInvitation___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayFab_GroupsModels_GroupInvitation___VTable vtable;
};

struct ListGroupInvitationsResponse__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ListGroupInvitationsResponse__StaticFields {
};

struct ListGroupInvitationsResponse__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListGroupInvitationsResponse__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListGroupInvitationsResponse__VTable vtable;
};

struct Action_1_PlayFab_GroupsModels_ListGroupInvitationsResponse___VTable {
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

struct Action_1_PlayFab_GroupsModels_ListGroupInvitationsResponse___StaticFields {
};

struct Action_1_PlayFab_GroupsModels_ListGroupInvitationsResponse___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_GroupsModels_ListGroupInvitationsResponse___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_GroupsModels_ListGroupInvitationsResponse___VTable vtable;
};

struct ListGroupMembersRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct EntityKey_5 *Group;
};

struct ListGroupMembersRequest {
    struct ListGroupMembersRequest__Class *klass;
    MonitorData *monitor;
    struct ListGroupMembersRequest__Fields fields;
};

struct Action_1_PlayFab_GroupsModels_ListGroupMembersResponse___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_GroupsModels_ListGroupMembersResponse_ {
    struct Action_1_PlayFab_GroupsModels_ListGroupMembersResponse___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_GroupsModels_ListGroupMembersResponse___Fields fields;
};

struct ListGroupMembersResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    struct List_1_PlayFab_GroupsModels_EntityMemberRole_ *Members;
};

struct ListGroupMembersResponse {
    struct ListGroupMembersResponse__Class *klass;
    MonitorData *monitor;
    struct ListGroupMembersResponse__Fields fields;
};

struct __declspec(align(8)) List_1_PlayFab_GroupsModels_EntityMemberRole___Fields {
    struct EntityMemberRole__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_GroupsModels_EntityMemberRole_ {
    struct List_1_PlayFab_GroupsModels_EntityMemberRole___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_GroupsModels_EntityMemberRole___Fields fields;
};

struct __declspec(align(8)) EntityMemberRole__Fields {
    struct List_1_PlayFab_GroupsModels_EntityWithLineage_ *Members;
    struct String *RoleId;
    struct String *RoleName;
};

struct EntityMemberRole {
    struct EntityMemberRole__Class *klass;
    MonitorData *monitor;
    struct EntityMemberRole__Fields fields;
};

struct __declspec(align(8)) List_1_PlayFab_GroupsModels_EntityWithLineage___Fields {
    struct EntityWithLineage__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_GroupsModels_EntityWithLineage_ {
    struct List_1_PlayFab_GroupsModels_EntityWithLineage___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_GroupsModels_EntityWithLineage___Fields fields;
};

struct EntityWithLineage__Array {
    struct EntityWithLineage__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct EntityWithLineage *vector[32];
};

struct IEnumerator_1_PlayFab_GroupsModels_EntityWithLineage_ {
    struct IEnumerator_1_PlayFab_GroupsModels_EntityWithLineage___Class *klass;
    MonitorData *monitor;
};

struct EntityMemberRole__Array {
    struct EntityMemberRole__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct EntityMemberRole *vector[32];
};

struct IEnumerator_1_PlayFab_GroupsModels_EntityMemberRole_ {
    struct IEnumerator_1_PlayFab_GroupsModels_EntityMemberRole___Class *klass;
    MonitorData *monitor;
};

struct ListGroupMembersRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ListGroupMembersRequest__StaticFields {
};

struct ListGroupMembersRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListGroupMembersRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListGroupMembersRequest__VTable vtable;
};

struct EntityWithLineage__Array__VTable {
};

struct EntityWithLineage__Array__StaticFields {
};

struct EntityWithLineage__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EntityWithLineage__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EntityWithLineage__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_GroupsModels_EntityWithLineage___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_GroupsModels_EntityWithLineage___StaticFields {
};

struct IEnumerator_1_PlayFab_GroupsModels_EntityWithLineage___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_GroupsModels_EntityWithLineage___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_GroupsModels_EntityWithLineage___VTable vtable;
};

struct List_1_PlayFab_GroupsModels_EntityWithLineage___VTable {
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

struct List_1_PlayFab_GroupsModels_EntityWithLineage___StaticFields {
    struct EntityWithLineage__Array *_emptyArray;
};

struct List_1_PlayFab_GroupsModels_EntityWithLineage___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_GroupsModels_EntityWithLineage___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayFab_GroupsModels_EntityWithLineage___VTable vtable;
};

struct EntityMemberRole__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct EntityMemberRole__StaticFields {
};

struct EntityMemberRole__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EntityMemberRole__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EntityMemberRole__VTable vtable;
};

}
