namespace app {
struct GrantCharacterToUserRequest_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GrantCharacterToUserRequest_1__StaticFields {
};

struct GrantCharacterToUserRequest_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GrantCharacterToUserRequest_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GrantCharacterToUserRequest_1__VTable vtable;
};

struct GrantCharacterToUserResult_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GrantCharacterToUserResult_1__StaticFields {
};

struct GrantCharacterToUserResult_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GrantCharacterToUserResult_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GrantCharacterToUserResult_1__VTable vtable;
};

struct Action_1_PlayFab_ServerModels_GrantCharacterToUserResult___VTable {
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

struct Action_1_PlayFab_ServerModels_GrantCharacterToUserResult___StaticFields {
};

struct Action_1_PlayFab_ServerModels_GrantCharacterToUserResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_ServerModels_GrantCharacterToUserResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_ServerModels_GrantCharacterToUserResult___VTable vtable;
};

struct GrantItemsToCharacterRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String *Annotation;
    struct String *CatalogVersion;
    struct String *CharacterId;
    struct List_1_System_String_ *ItemIds;
    struct String *PlayFabId;
};

struct GrantItemsToCharacterRequest {
    struct GrantItemsToCharacterRequest__Class *klass;
    MonitorData *monitor;
    struct GrantItemsToCharacterRequest__Fields fields;
};

struct Action_1_PlayFab_ServerModels_GrantItemsToCharacterResult___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_ServerModels_GrantItemsToCharacterResult_ {
    struct Action_1_PlayFab_ServerModels_GrantItemsToCharacterResult___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_ServerModels_GrantItemsToCharacterResult___Fields fields;
};

struct GrantItemsToCharacterResult__Fields {
    struct PlayFabResultCommon__Fields _;
    struct List_1_PlayFab_ServerModels_GrantedItemInstance_ *ItemGrantResults;
};

struct GrantItemsToCharacterResult {
    struct GrantItemsToCharacterResult__Class *klass;
    MonitorData *monitor;
    struct GrantItemsToCharacterResult__Fields fields;
};

struct __declspec(align(8)) List_1_PlayFab_ServerModels_GrantedItemInstance___Fields {
    struct GrantedItemInstance__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_ServerModels_GrantedItemInstance_ {
    struct List_1_PlayFab_ServerModels_GrantedItemInstance___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_ServerModels_GrantedItemInstance___Fields fields;
};

struct __declspec(align(8)) GrantedItemInstance__Fields {
    struct String *Annotation;
    struct List_1_System_String_ *BundleContents;
    struct String *BundleParent;
    struct String *CatalogVersion;
    struct String *CharacterId;
    struct Dictionary_2_System_String_System_String_ *CustomData;
    struct String *DisplayName;
    struct Nullable_1_DateTime_ Expiration;
    struct String *ItemClass;
    struct String *ItemId;
    struct String *ItemInstanceId;
    struct String *PlayFabId;
    struct Nullable_1_DateTime_ PurchaseDate;
    struct Nullable_1_Int32_ RemainingUses;
    bool Result;
    struct String *UnitCurrency;
    uint32_t UnitPrice;
    struct Nullable_1_Int32_ UsesIncrementedBy;
};

struct GrantedItemInstance {
    struct GrantedItemInstance__Class *klass;
    MonitorData *monitor;
    struct GrantedItemInstance__Fields fields;
};

struct GrantedItemInstance__Array {
    struct GrantedItemInstance__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct GrantedItemInstance *vector[32];
};

struct IEnumerator_1_PlayFab_ServerModels_GrantedItemInstance_ {
    struct IEnumerator_1_PlayFab_ServerModels_GrantedItemInstance___Class *klass;
    MonitorData *monitor;
};

struct GrantItemsToCharacterRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GrantItemsToCharacterRequest__StaticFields {
};

struct GrantItemsToCharacterRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GrantItemsToCharacterRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GrantItemsToCharacterRequest__VTable vtable;
};

struct GrantedItemInstance__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GrantedItemInstance__StaticFields {
};

struct GrantedItemInstance__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GrantedItemInstance__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GrantedItemInstance__VTable vtable;
};

struct GrantedItemInstance__Array__VTable {
};

struct GrantedItemInstance__Array__StaticFields {
};

struct GrantedItemInstance__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GrantedItemInstance__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GrantedItemInstance__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_ServerModels_GrantedItemInstance___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_ServerModels_GrantedItemInstance___StaticFields {
};

struct IEnumerator_1_PlayFab_ServerModels_GrantedItemInstance___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_ServerModels_GrantedItemInstance___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_ServerModels_GrantedItemInstance___VTable vtable;
};

struct List_1_PlayFab_ServerModels_GrantedItemInstance___VTable {
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

struct List_1_PlayFab_ServerModels_GrantedItemInstance___StaticFields {
    struct GrantedItemInstance__Array *_emptyArray;
};

struct List_1_PlayFab_ServerModels_GrantedItemInstance___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_ServerModels_GrantedItemInstance___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayFab_ServerModels_GrantedItemInstance___VTable vtable;
};

struct GrantItemsToCharacterResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GrantItemsToCharacterResult__StaticFields {
};

struct GrantItemsToCharacterResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GrantItemsToCharacterResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GrantItemsToCharacterResult__VTable vtable;
};

struct Action_1_PlayFab_ServerModels_GrantItemsToCharacterResult___VTable {
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

struct Action_1_PlayFab_ServerModels_GrantItemsToCharacterResult___StaticFields {
};

struct Action_1_PlayFab_ServerModels_GrantItemsToCharacterResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_ServerModels_GrantItemsToCharacterResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_ServerModels_GrantItemsToCharacterResult___VTable vtable;
};

struct GrantItemsToUserRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String *Annotation;
    struct String *CatalogVersion;
    struct List_1_System_String_ *ItemIds;
    struct String *PlayFabId;
};

struct GrantItemsToUserRequest {
    struct GrantItemsToUserRequest__Class *klass;
    MonitorData *monitor;
    struct GrantItemsToUserRequest__Fields fields;
};

struct Action_1_PlayFab_ServerModels_GrantItemsToUserResult___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_ServerModels_GrantItemsToUserResult_ {
    struct Action_1_PlayFab_ServerModels_GrantItemsToUserResult___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_ServerModels_GrantItemsToUserResult___Fields fields;
};

struct GrantItemsToUserResult__Fields {
    struct PlayFabResultCommon__Fields _;
    struct List_1_PlayFab_ServerModels_GrantedItemInstance_ *ItemGrantResults;
};

struct GrantItemsToUserResult {
    struct GrantItemsToUserResult__Class *klass;
    MonitorData *monitor;
    struct GrantItemsToUserResult__Fields fields;
};

struct GrantItemsToUserRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GrantItemsToUserRequest__StaticFields {
};

struct GrantItemsToUserRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GrantItemsToUserRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GrantItemsToUserRequest__VTable vtable;
};

struct GrantItemsToUserResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GrantItemsToUserResult__StaticFields {
};

struct GrantItemsToUserResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GrantItemsToUserResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GrantItemsToUserResult__VTable vtable;
};

struct Action_1_PlayFab_ServerModels_GrantItemsToUserResult___VTable {
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

struct Action_1_PlayFab_ServerModels_GrantItemsToUserResult___StaticFields {
};

struct Action_1_PlayFab_ServerModels_GrantItemsToUserResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_ServerModels_GrantItemsToUserResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_ServerModels_GrantItemsToUserResult___VTable vtable;
};

struct GrantItemsToUsersRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String *CatalogVersion;
    struct List_1_PlayFab_ServerModels_ItemGrant_ *ItemGrants;
};

struct GrantItemsToUsersRequest {
    struct GrantItemsToUsersRequest__Class *klass;
    MonitorData *monitor;
    struct GrantItemsToUsersRequest__Fields fields;
};

struct __declspec(align(8)) List_1_PlayFab_ServerModels_ItemGrant___Fields {
    struct ItemGrant__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_ServerModels_ItemGrant_ {
    struct List_1_PlayFab_ServerModels_ItemGrant___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_ServerModels_ItemGrant___Fields fields;
};

struct __declspec(align(8)) ItemGrant__Fields {
    struct String *Annotation;
    struct String *CharacterId;
    struct Dictionary_2_System_String_System_String_ *Data;
    struct String *ItemId;
    struct List_1_System_String_ *KeysToRemove;
    struct String *PlayFabId;
};

struct ItemGrant {
    struct ItemGrant__Class *klass;
    MonitorData *monitor;
    struct ItemGrant__Fields fields;
};

struct ItemGrant__Array {
    struct ItemGrant__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ItemGrant *vector[32];
};

struct IEnumerator_1_PlayFab_ServerModels_ItemGrant_ {
    struct IEnumerator_1_PlayFab_ServerModels_ItemGrant___Class *klass;
    MonitorData *monitor;
};

struct Action_1_PlayFab_ServerModels_GrantItemsToUsersResult___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_ServerModels_GrantItemsToUsersResult_ {
    struct Action_1_PlayFab_ServerModels_GrantItemsToUsersResult___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_ServerModels_GrantItemsToUsersResult___Fields fields;
};

struct GrantItemsToUsersResult__Fields {
    struct PlayFabResultCommon__Fields _;
    struct List_1_PlayFab_ServerModels_GrantedItemInstance_ *ItemGrantResults;
};

struct GrantItemsToUsersResult {
    struct GrantItemsToUsersResult__Class *klass;
    MonitorData *monitor;
    struct GrantItemsToUsersResult__Fields fields;
};

struct ItemGrant__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ItemGrant__StaticFields {
};

struct ItemGrant__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ItemGrant__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ItemGrant__VTable vtable;
};

struct ItemGrant__Array__VTable {
};

struct ItemGrant__Array__StaticFields {
};

struct ItemGrant__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ItemGrant__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ItemGrant__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_ServerModels_ItemGrant___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_ServerModels_ItemGrant___StaticFields {
};

struct IEnumerator_1_PlayFab_ServerModels_ItemGrant___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_ServerModels_ItemGrant___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_ServerModels_ItemGrant___VTable vtable;
};

struct List_1_PlayFab_ServerModels_ItemGrant___VTable {
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

struct List_1_PlayFab_ServerModels_ItemGrant___StaticFields {
    struct ItemGrant__Array *_emptyArray;
};

struct List_1_PlayFab_ServerModels_ItemGrant___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_ServerModels_ItemGrant___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayFab_ServerModels_ItemGrant___VTable vtable;
};

struct GrantItemsToUsersRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GrantItemsToUsersRequest__StaticFields {
};

struct GrantItemsToUsersRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GrantItemsToUsersRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GrantItemsToUsersRequest__VTable vtable;
};

struct GrantItemsToUsersResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GrantItemsToUsersResult__StaticFields {
};

struct GrantItemsToUsersResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GrantItemsToUsersResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GrantItemsToUsersResult__VTable vtable;
};

struct Action_1_PlayFab_ServerModels_GrantItemsToUsersResult___VTable {
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

struct Action_1_PlayFab_ServerModels_GrantItemsToUsersResult___StaticFields {
};

struct Action_1_PlayFab_ServerModels_GrantItemsToUsersResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_ServerModels_GrantItemsToUsersResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_ServerModels_GrantItemsToUsersResult___VTable vtable;
};

struct LinkXboxAccountRequest_1__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct Nullable_1_Boolean_ ForceLink;
    struct String *PlayFabId;
    struct String *XboxToken;
};

struct LinkXboxAccountRequest_1 {
    struct LinkXboxAccountRequest_1__Class *klass;
    MonitorData *monitor;
    struct LinkXboxAccountRequest_1__Fields fields;
};

struct Action_1_PlayFab_ServerModels_LinkXboxAccountResult___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_ServerModels_LinkXboxAccountResult_ {
    struct Action_1_PlayFab_ServerModels_LinkXboxAccountResult___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_ServerModels_LinkXboxAccountResult___Fields fields;
};

struct LinkXboxAccountResult_1__Fields {
    struct PlayFabResultCommon__Fields _;
};

struct LinkXboxAccountResult_1 {
    struct LinkXboxAccountResult_1__Class *klass;
    MonitorData *monitor;
    struct LinkXboxAccountResult_1__Fields fields;
};

struct LinkXboxAccountRequest_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct LinkXboxAccountRequest_1__StaticFields {
};

struct LinkXboxAccountRequest_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LinkXboxAccountRequest_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LinkXboxAccountRequest_1__VTable vtable;
};

struct LinkXboxAccountResult_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct LinkXboxAccountResult_1__StaticFields {
};

struct LinkXboxAccountResult_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LinkXboxAccountResult_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LinkXboxAccountResult_1__VTable vtable;
};

struct Action_1_PlayFab_ServerModels_LinkXboxAccountResult___VTable {
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

struct Action_1_PlayFab_ServerModels_LinkXboxAccountResult___StaticFields {
};

struct Action_1_PlayFab_ServerModels_LinkXboxAccountResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_ServerModels_LinkXboxAccountResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_ServerModels_LinkXboxAccountResult___VTable vtable;
};

struct LoginWithServerCustomIdRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct Nullable_1_Boolean_ CreateAccount;
    struct GetPlayerCombinedInfoRequestParams_1 *InfoRequestParameters;
    struct String *PlayerSecret;
    struct String *ServerCustomId;
};

struct LoginWithServerCustomIdRequest {
    struct LoginWithServerCustomIdRequest__Class *klass;
    MonitorData *monitor;
    struct LoginWithServerCustomIdRequest__Fields fields;
};

struct Action_1_PlayFab_ServerModels_ServerLoginResult___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_ServerModels_ServerLoginResult_ {
    struct Action_1_PlayFab_ServerModels_ServerLoginResult___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_ServerModels_ServerLoginResult___Fields fields;
};

struct ServerLoginResult__Fields {
    struct PlayFabResultCommon__Fields _;
    struct EntityTokenResponse_1 *EntityToken;
    struct GetPlayerCombinedInfoResultPayload_1 *InfoResultPayload;
    struct Nullable_1_DateTime_ LastLoginTime;
    bool NewlyCreated;
    struct String *PlayFabId;
    struct String *SessionTicket;
    struct UserSettings_1 *SettingsForUser;
};

struct ServerLoginResult {
    struct ServerLoginResult__Class *klass;
    MonitorData *monitor;
    struct ServerLoginResult__Fields fields;
};

struct EntityTokenResponse_1__Fields {
    struct PlayFabResultCommon__Fields _;
    struct EntityKey_8 *Entity;
    struct String *EntityToken;
    struct Nullable_1_DateTime_ TokenExpiration;
};

struct EntityTokenResponse_1 {
    struct EntityTokenResponse_1__Class *klass;
    MonitorData *monitor;
    struct EntityTokenResponse_1__Fields fields;
};

struct __declspec(align(8)) UserSettings_1__Fields {
    bool GatherDeviceInfo;
    bool GatherFocusInfo;
    bool NeedsAttribution;
};

struct UserSettings_1 {
    struct UserSettings_1__Class *klass;
    MonitorData *monitor;
    struct UserSettings_1__Fields fields;
};

struct LoginWithServerCustomIdRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct LoginWithServerCustomIdRequest__StaticFields {
};

struct LoginWithServerCustomIdRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LoginWithServerCustomIdRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LoginWithServerCustomIdRequest__VTable vtable;
};

struct EntityTokenResponse_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct EntityTokenResponse_1__StaticFields {
};

struct EntityTokenResponse_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EntityTokenResponse_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EntityTokenResponse_1__VTable vtable;
};

struct UserSettings_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UserSettings_1__StaticFields {
};

struct UserSettings_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UserSettings_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UserSettings_1__VTable vtable;
};

struct ServerLoginResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ServerLoginResult__StaticFields {
};

struct ServerLoginResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerLoginResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerLoginResult__VTable vtable;
};

struct Action_1_PlayFab_ServerModels_ServerLoginResult___VTable {
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

struct Action_1_PlayFab_ServerModels_ServerLoginResult___StaticFields {
};

struct Action_1_PlayFab_ServerModels_ServerLoginResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_ServerModels_ServerLoginResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_ServerModels_ServerLoginResult___VTable vtable;
};

struct LoginWithXboxRequest_1__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct Nullable_1_Boolean_ CreateAccount;
    struct GetPlayerCombinedInfoRequestParams_1 *InfoRequestParameters;
    struct String *XboxToken;
};

struct LoginWithXboxRequest_1 {
    struct LoginWithXboxRequest_1__Class *klass;
    MonitorData *monitor;
    struct LoginWithXboxRequest_1__Fields fields;
};

struct LoginWithXboxRequest_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct LoginWithXboxRequest_1__StaticFields {
};

struct LoginWithXboxRequest_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LoginWithXboxRequest_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LoginWithXboxRequest_1__VTable vtable;
};

struct ModifyItemUsesRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String *ItemInstanceId;
    struct String *PlayFabId;
    int32_t UsesToAdd;
};

struct ModifyItemUsesRequest {
    struct ModifyItemUsesRequest__Class *klass;
    MonitorData *monitor;
    struct ModifyItemUsesRequest__Fields fields;
};

struct Action_1_PlayFab_ServerModels_ModifyItemUsesResult___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_ServerModels_ModifyItemUsesResult_ {
    struct Action_1_PlayFab_ServerModels_ModifyItemUsesResult___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_ServerModels_ModifyItemUsesResult___Fields fields;
};

struct ModifyItemUsesResult__Fields {
    struct PlayFabResultCommon__Fields _;
    struct String *ItemInstanceId;
    int32_t RemainingUses;
};

}
