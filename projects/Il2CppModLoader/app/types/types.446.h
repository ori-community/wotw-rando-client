namespace app {
struct EntityMemberRole__Array__VTable {
};

struct EntityMemberRole__Array__StaticFields {
};

struct EntityMemberRole__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EntityMemberRole__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EntityMemberRole__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_GroupsModels_EntityMemberRole___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_GroupsModels_EntityMemberRole___StaticFields {
};

struct IEnumerator_1_PlayFab_GroupsModels_EntityMemberRole___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_GroupsModels_EntityMemberRole___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_GroupsModels_EntityMemberRole___VTable vtable;
};

struct List_1_PlayFab_GroupsModels_EntityMemberRole___VTable {
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

struct List_1_PlayFab_GroupsModels_EntityMemberRole___StaticFields {
    struct EntityMemberRole__Array *_emptyArray;
};

struct List_1_PlayFab_GroupsModels_EntityMemberRole___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_GroupsModels_EntityMemberRole___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayFab_GroupsModels_EntityMemberRole___VTable vtable;
};

struct ListGroupMembersResponse__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ListGroupMembersResponse__StaticFields {
};

struct ListGroupMembersResponse__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListGroupMembersResponse__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListGroupMembersResponse__VTable vtable;
};

struct Action_1_PlayFab_GroupsModels_ListGroupMembersResponse___VTable {
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

struct Action_1_PlayFab_GroupsModels_ListGroupMembersResponse___StaticFields {
};

struct Action_1_PlayFab_GroupsModels_ListGroupMembersResponse___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_GroupsModels_ListGroupMembersResponse___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_GroupsModels_ListGroupMembersResponse___VTable vtable;
};

struct ListMembershipRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct EntityKey_5 *Entity;
};

struct ListMembershipRequest {
    struct ListMembershipRequest__Class *klass;
    MonitorData *monitor;
    struct ListMembershipRequest__Fields fields;
};

struct Action_1_PlayFab_GroupsModels_ListMembershipResponse___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_GroupsModels_ListMembershipResponse_ {
    struct Action_1_PlayFab_GroupsModels_ListMembershipResponse___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_GroupsModels_ListMembershipResponse___Fields fields;
};

struct ListMembershipResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    struct List_1_PlayFab_GroupsModels_GroupWithRoles_ *Groups;
};

struct ListMembershipResponse {
    struct ListMembershipResponse__Class *klass;
    MonitorData *monitor;
    struct ListMembershipResponse__Fields fields;
};

struct __declspec(align(8)) List_1_PlayFab_GroupsModels_GroupWithRoles___Fields {
    struct GroupWithRoles__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_GroupsModels_GroupWithRoles_ {
    struct List_1_PlayFab_GroupsModels_GroupWithRoles___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_GroupsModels_GroupWithRoles___Fields fields;
};

struct __declspec(align(8)) GroupWithRoles__Fields {
    struct EntityKey_5 *Group;
    struct String *GroupName;
    int32_t ProfileVersion;
    struct List_1_PlayFab_GroupsModels_GroupRole_ *Roles;
};

struct GroupWithRoles {
    struct GroupWithRoles__Class *klass;
    MonitorData *monitor;
    struct GroupWithRoles__Fields fields;
};

struct __declspec(align(8)) List_1_PlayFab_GroupsModels_GroupRole___Fields {
    struct GroupRole__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_GroupsModels_GroupRole_ {
    struct List_1_PlayFab_GroupsModels_GroupRole___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_GroupsModels_GroupRole___Fields fields;
};

struct __declspec(align(8)) GroupRole__Fields {
    struct String *RoleId;
    struct String *RoleName;
};

struct GroupRole {
    struct GroupRole__Class *klass;
    MonitorData *monitor;
    struct GroupRole__Fields fields;
};

struct GroupRole__Array {
    struct GroupRole__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct GroupRole *vector[32];
};

struct IEnumerator_1_PlayFab_GroupsModels_GroupRole_ {
    struct IEnumerator_1_PlayFab_GroupsModels_GroupRole___Class *klass;
    MonitorData *monitor;
};

struct GroupWithRoles__Array {
    struct GroupWithRoles__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct GroupWithRoles *vector[32];
};

struct IEnumerator_1_PlayFab_GroupsModels_GroupWithRoles_ {
    struct IEnumerator_1_PlayFab_GroupsModels_GroupWithRoles___Class *klass;
    MonitorData *monitor;
};

struct ListMembershipRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ListMembershipRequest__StaticFields {
};

struct ListMembershipRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListMembershipRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListMembershipRequest__VTable vtable;
};

struct GroupRole__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GroupRole__StaticFields {
};

struct GroupRole__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GroupRole__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GroupRole__VTable vtable;
};

struct GroupRole__Array__VTable {
};

struct GroupRole__Array__StaticFields {
};

struct GroupRole__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GroupRole__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GroupRole__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_GroupsModels_GroupRole___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_GroupsModels_GroupRole___StaticFields {
};

struct IEnumerator_1_PlayFab_GroupsModels_GroupRole___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_GroupsModels_GroupRole___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_GroupsModels_GroupRole___VTable vtable;
};

struct List_1_PlayFab_GroupsModels_GroupRole___VTable {
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

struct List_1_PlayFab_GroupsModels_GroupRole___StaticFields {
    struct GroupRole__Array *_emptyArray;
};

struct List_1_PlayFab_GroupsModels_GroupRole___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_GroupsModels_GroupRole___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayFab_GroupsModels_GroupRole___VTable vtable;
};

struct GroupWithRoles__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GroupWithRoles__StaticFields {
};

struct GroupWithRoles__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GroupWithRoles__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GroupWithRoles__VTable vtable;
};

struct GroupWithRoles__Array__VTable {
};

struct GroupWithRoles__Array__StaticFields {
};

struct GroupWithRoles__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GroupWithRoles__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GroupWithRoles__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_GroupsModels_GroupWithRoles___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_GroupsModels_GroupWithRoles___StaticFields {
};

struct IEnumerator_1_PlayFab_GroupsModels_GroupWithRoles___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_GroupsModels_GroupWithRoles___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_GroupsModels_GroupWithRoles___VTable vtable;
};

struct List_1_PlayFab_GroupsModels_GroupWithRoles___VTable {
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

struct List_1_PlayFab_GroupsModels_GroupWithRoles___StaticFields {
    struct GroupWithRoles__Array *_emptyArray;
};

struct List_1_PlayFab_GroupsModels_GroupWithRoles___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_GroupsModels_GroupWithRoles___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayFab_GroupsModels_GroupWithRoles___VTable vtable;
};

struct ListMembershipResponse__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ListMembershipResponse__StaticFields {
};

struct ListMembershipResponse__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListMembershipResponse__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListMembershipResponse__VTable vtable;
};

struct Action_1_PlayFab_GroupsModels_ListMembershipResponse___VTable {
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

struct Action_1_PlayFab_GroupsModels_ListMembershipResponse___StaticFields {
};

struct Action_1_PlayFab_GroupsModels_ListMembershipResponse___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_GroupsModels_ListMembershipResponse___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_GroupsModels_ListMembershipResponse___VTable vtable;
};

struct ListMembershipOpportunitiesRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct EntityKey_5 *Entity;
};

struct ListMembershipOpportunitiesRequest {
    struct ListMembershipOpportunitiesRequest__Class *klass;
    MonitorData *monitor;
    struct ListMembershipOpportunitiesRequest__Fields fields;
};

struct Action_1_PlayFab_GroupsModels_ListMembershipOpportunitiesResponse___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_GroupsModels_ListMembershipOpportunitiesResponse_ {
    struct Action_1_PlayFab_GroupsModels_ListMembershipOpportunitiesResponse___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_GroupsModels_ListMembershipOpportunitiesResponse___Fields fields;
};

struct ListMembershipOpportunitiesResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    struct List_1_PlayFab_GroupsModels_GroupApplication_ *Applications;
    struct List_1_PlayFab_GroupsModels_GroupInvitation_ *Invitations;
};

struct ListMembershipOpportunitiesResponse {
    struct ListMembershipOpportunitiesResponse__Class *klass;
    MonitorData *monitor;
    struct ListMembershipOpportunitiesResponse__Fields fields;
};

struct ListMembershipOpportunitiesRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ListMembershipOpportunitiesRequest__StaticFields {
};

struct ListMembershipOpportunitiesRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListMembershipOpportunitiesRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListMembershipOpportunitiesRequest__VTable vtable;
};

struct ListMembershipOpportunitiesResponse__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ListMembershipOpportunitiesResponse__StaticFields {
};

struct ListMembershipOpportunitiesResponse__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListMembershipOpportunitiesResponse__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListMembershipOpportunitiesResponse__VTable vtable;
};

struct Action_1_PlayFab_GroupsModels_ListMembershipOpportunitiesResponse___VTable {
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

struct Action_1_PlayFab_GroupsModels_ListMembershipOpportunitiesResponse___StaticFields {
};

struct Action_1_PlayFab_GroupsModels_ListMembershipOpportunitiesResponse___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_GroupsModels_ListMembershipOpportunitiesResponse___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_GroupsModels_ListMembershipOpportunitiesResponse___VTable vtable;
};

struct RemoveGroupApplicationRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct EntityKey_5 *Entity;
    struct EntityKey_5 *Group;
};

struct RemoveGroupApplicationRequest {
    struct RemoveGroupApplicationRequest__Class *klass;
    MonitorData *monitor;
    struct RemoveGroupApplicationRequest__Fields fields;
};

struct RemoveGroupApplicationRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RemoveGroupApplicationRequest__StaticFields {
};

struct RemoveGroupApplicationRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RemoveGroupApplicationRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RemoveGroupApplicationRequest__VTable vtable;
};

struct RemoveGroupInvitationRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct EntityKey_5 *Entity;
    struct EntityKey_5 *Group;
};

struct RemoveGroupInvitationRequest {
    struct RemoveGroupInvitationRequest__Class *klass;
    MonitorData *monitor;
    struct RemoveGroupInvitationRequest__Fields fields;
};

struct RemoveGroupInvitationRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RemoveGroupInvitationRequest__StaticFields {
};

struct RemoveGroupInvitationRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RemoveGroupInvitationRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RemoveGroupInvitationRequest__VTable vtable;
};

struct RemoveMembersRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct EntityKey_5 *Group;
    struct List_1_PlayFab_GroupsModels_EntityKey_ *Members;
    struct String *RoleId;
};

struct RemoveMembersRequest {
    struct RemoveMembersRequest__Class *klass;
    MonitorData *monitor;
    struct RemoveMembersRequest__Fields fields;
};

struct RemoveMembersRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RemoveMembersRequest__StaticFields {
};

struct RemoveMembersRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RemoveMembersRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RemoveMembersRequest__VTable vtable;
};

struct UnblockEntityRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct EntityKey_5 *Entity;
    struct EntityKey_5 *Group;
};

struct UnblockEntityRequest {
    struct UnblockEntityRequest__Class *klass;
    MonitorData *monitor;
    struct UnblockEntityRequest__Fields fields;
};

struct UnblockEntityRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UnblockEntityRequest__StaticFields {
};

struct UnblockEntityRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UnblockEntityRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UnblockEntityRequest__VTable vtable;
};

struct UpdateGroupRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String *AdminRoleId;
    struct Nullable_1_Int32_ ExpectedProfileVersion;
    struct EntityKey_5 *Group;
    struct String *GroupName;
    struct String *MemberRoleId;
};

struct UpdateGroupRequest {
    struct UpdateGroupRequest__Class *klass;
    MonitorData *monitor;
    struct UpdateGroupRequest__Fields fields;
};

struct Action_1_PlayFab_GroupsModels_UpdateGroupResponse___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_GroupsModels_UpdateGroupResponse_ {
    struct Action_1_PlayFab_GroupsModels_UpdateGroupResponse___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_GroupsModels_UpdateGroupResponse___Fields fields;
};

enum class OperationTypes__Enum_1 : int32_t {
    Created = 0x00000000,
    Updated = 0x00000001,
    Deleted = 0x00000002,
    None = 0x00000003,
};

struct OperationTypes__Enum_1__Boxed {
    struct OperationTypes__Enum_1__Class *klass;
    MonitorData *monitor;
    OperationTypes__Enum_1 value;
    
};

struct Nullable_1_PlayFab_GroupsModels_OperationTypes_ {
    OperationTypes__Enum_1 value;
    
    bool has_value;
};

struct Nullable_1_PlayFab_GroupsModels_OperationTypes___Boxed {
    struct Nullable_1_PlayFab_GroupsModels_OperationTypes___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_PlayFab_GroupsModels_OperationTypes_ fields;
};

struct UpdateGroupResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    struct String *OperationReason;
    int32_t ProfileVersion;
    struct Nullable_1_PlayFab_GroupsModels_OperationTypes_ SetResult;
};

struct UpdateGroupResponse {
    struct UpdateGroupResponse__Class *klass;
    MonitorData *monitor;
    struct UpdateGroupResponse__Fields fields;
};

struct UpdateGroupRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UpdateGroupRequest__StaticFields {
};

struct UpdateGroupRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UpdateGroupRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UpdateGroupRequest__VTable vtable;
};

struct OperationTypes__Enum_1__VTable {
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

struct OperationTypes__Enum_1__StaticFields {
};

struct OperationTypes__Enum_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OperationTypes__Enum_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OperationTypes__Enum_1__VTable vtable;
};

struct Nullable_1_PlayFab_GroupsModels_OperationTypes___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_PlayFab_GroupsModels_OperationTypes___StaticFields {
};

struct Nullable_1_PlayFab_GroupsModels_OperationTypes___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_PlayFab_GroupsModels_OperationTypes___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_PlayFab_GroupsModels_OperationTypes___VTable vtable;
};

struct UpdateGroupResponse__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UpdateGroupResponse__StaticFields {
};

struct UpdateGroupResponse__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UpdateGroupResponse__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UpdateGroupResponse__VTable vtable;
};

struct Action_1_PlayFab_GroupsModels_UpdateGroupResponse___VTable {
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

struct Action_1_PlayFab_GroupsModels_UpdateGroupResponse___StaticFields {
};

struct Action_1_PlayFab_GroupsModels_UpdateGroupResponse___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_GroupsModels_UpdateGroupResponse___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_GroupsModels_UpdateGroupResponse___VTable vtable;
};

struct UpdateGroupRoleRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct Nullable_1_Int32_ ExpectedProfileVersion;
    struct EntityKey_5 *Group;
    struct String *RoleId;
    struct String *RoleName;
};

struct UpdateGroupRoleRequest {
    struct UpdateGroupRoleRequest__Class *klass;
    MonitorData *monitor;
    struct UpdateGroupRoleRequest__Fields fields;
};

struct Action_1_PlayFab_GroupsModels_UpdateGroupRoleResponse___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_GroupsModels_UpdateGroupRoleResponse_ {
    struct Action_1_PlayFab_GroupsModels_UpdateGroupRoleResponse___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_GroupsModels_UpdateGroupRoleResponse___Fields fields;
};

struct UpdateGroupRoleResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    struct String *OperationReason;
    int32_t ProfileVersion;
    struct Nullable_1_PlayFab_GroupsModels_OperationTypes_ SetResult;
};

struct UpdateGroupRoleResponse {
    struct UpdateGroupRoleResponse__Class *klass;
    MonitorData *monitor;
    struct UpdateGroupRoleResponse__Fields fields;
};

struct UpdateGroupRoleRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UpdateGroupRoleRequest__StaticFields {
};

struct UpdateGroupRoleRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UpdateGroupRoleRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UpdateGroupRoleRequest__VTable vtable;
};

struct UpdateGroupRoleResponse__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UpdateGroupRoleResponse__StaticFields {
};

struct UpdateGroupRoleResponse__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UpdateGroupRoleResponse__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UpdateGroupRoleResponse__VTable vtable;
};

struct Action_1_PlayFab_GroupsModels_UpdateGroupRoleResponse___VTable {
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
