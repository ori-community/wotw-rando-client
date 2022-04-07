namespace app {
struct GetTitleNewsResult_1__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ServerModels_TitleNewsItem_ * News;
};
struct GetTitleNewsResult_1 {
  struct GetTitleNewsResult_1__Class *klass;
  struct MonitorData *monitor;
  struct GetTitleNewsResult_1__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_ServerModels_TitleNewsItem___Fields {
  struct TitleNewsItem_1__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ServerModels_TitleNewsItem_ {
  struct List_1_PlayFab_ServerModels_TitleNewsItem___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ServerModels_TitleNewsItem___Fields fields;
};
struct __declspec(align(8)) TitleNewsItem_1__Fields {
  struct String * Body;
  struct String * NewsId;
  struct DateTime Timestamp;
  struct String * Title;
};
struct TitleNewsItem_1 {
  struct TitleNewsItem_1__Class *klass;
  struct MonitorData *monitor;
  struct TitleNewsItem_1__Fields fields;
};
struct TitleNewsItem_1__Array {
  struct TitleNewsItem_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TitleNewsItem_1 * vector[32];
};
struct IEnumerator_1_PlayFab_ServerModels_TitleNewsItem_ {
  struct IEnumerator_1_PlayFab_ServerModels_TitleNewsItem___Class *klass;
  struct MonitorData *monitor;
};
struct GetTitleNewsRequest_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetTitleNewsRequest_1__StaticFields {
};
struct GetTitleNewsRequest_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetTitleNewsRequest_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetTitleNewsRequest_1__VTable vtable;
};
struct TitleNewsItem_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TitleNewsItem_1__StaticFields {
};
struct TitleNewsItem_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TitleNewsItem_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TitleNewsItem_1__VTable vtable;
};
struct IEnumerator_1_PlayFab_ServerModels_TitleNewsItem___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ServerModels_TitleNewsItem___StaticFields {
};
struct IEnumerator_1_PlayFab_ServerModels_TitleNewsItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ServerModels_TitleNewsItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ServerModels_TitleNewsItem___VTable vtable;
};
struct List_1_PlayFab_ServerModels_TitleNewsItem___VTable {
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
struct List_1_PlayFab_ServerModels_TitleNewsItem___StaticFields {
  struct TitleNewsItem_1__Array * _emptyArray;
};
struct List_1_PlayFab_ServerModels_TitleNewsItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_ServerModels_TitleNewsItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_ServerModels_TitleNewsItem___VTable vtable;
};
struct GetTitleNewsResult_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetTitleNewsResult_1__StaticFields {
};
struct GetTitleNewsResult_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetTitleNewsResult_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetTitleNewsResult_1__VTable vtable;
};
struct Action_1_PlayFab_ServerModels_GetTitleNewsResult___VTable {
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
struct Action_1_PlayFab_ServerModels_GetTitleNewsResult___StaticFields {
};
struct Action_1_PlayFab_ServerModels_GetTitleNewsResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ServerModels_GetTitleNewsResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ServerModels_GetTitleNewsResult___VTable vtable;
};

struct GetUserAccountInfoRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * PlayFabId;
};
struct GetUserAccountInfoRequest {
  struct GetUserAccountInfoRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetUserAccountInfoRequest__Fields fields;
};
struct Action_1_PlayFab_ServerModels_GetUserAccountInfoResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ServerModels_GetUserAccountInfoResult_ {
  struct Action_1_PlayFab_ServerModels_GetUserAccountInfoResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ServerModels_GetUserAccountInfoResult___Fields fields;
};
struct GetUserAccountInfoResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct UserAccountInfo_1 * UserInfo;
};
struct GetUserAccountInfoResult {
  struct GetUserAccountInfoResult__Class *klass;
  struct MonitorData *monitor;
  struct GetUserAccountInfoResult__Fields fields;
};
struct GetUserAccountInfoRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetUserAccountInfoRequest__StaticFields {
};
struct GetUserAccountInfoRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetUserAccountInfoRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetUserAccountInfoRequest__VTable vtable;
};
struct GetUserAccountInfoResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetUserAccountInfoResult__StaticFields {
};
struct GetUserAccountInfoResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetUserAccountInfoResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetUserAccountInfoResult__VTable vtable;
};
struct Action_1_PlayFab_ServerModels_GetUserAccountInfoResult___VTable {
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
struct Action_1_PlayFab_ServerModels_GetUserAccountInfoResult___StaticFields {
};
struct Action_1_PlayFab_ServerModels_GetUserAccountInfoResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ServerModels_GetUserAccountInfoResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ServerModels_GetUserAccountInfoResult___VTable vtable;
};

struct GetUserBansRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * PlayFabId;
};
struct GetUserBansRequest {
  struct GetUserBansRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetUserBansRequest__Fields fields;
};
struct Action_1_PlayFab_ServerModels_GetUserBansResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ServerModels_GetUserBansResult_ {
  struct Action_1_PlayFab_ServerModels_GetUserBansResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ServerModels_GetUserBansResult___Fields fields;
};
struct GetUserBansResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ServerModels_BanInfo_ * BanData;
};
struct GetUserBansResult {
  struct GetUserBansResult__Class *klass;
  struct MonitorData *monitor;
  struct GetUserBansResult__Fields fields;
};
struct GetUserBansRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetUserBansRequest__StaticFields {
};
struct GetUserBansRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetUserBansRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetUserBansRequest__VTable vtable;
};
struct GetUserBansResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetUserBansResult__StaticFields {
};
struct GetUserBansResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetUserBansResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetUserBansResult__VTable vtable;
};
struct Action_1_PlayFab_ServerModels_GetUserBansResult___VTable {
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
struct Action_1_PlayFab_ServerModels_GetUserBansResult___StaticFields {
};
struct Action_1_PlayFab_ServerModels_GetUserBansResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ServerModels_GetUserBansResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ServerModels_GetUserBansResult___VTable vtable;
};

struct GetUserDataRequest_1__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct Nullable_1_UInt32_ IfChangedFromDataVersion;
  struct List_1_System_String_ * Keys;
  struct String * PlayFabId;
};
struct GetUserDataRequest_1 {
  struct GetUserDataRequest_1__Class *klass;
  struct MonitorData *monitor;
  struct GetUserDataRequest_1__Fields fields;
};
struct Action_1_PlayFab_ServerModels_GetUserDataResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ServerModels_GetUserDataResult_ {
  struct Action_1_PlayFab_ServerModels_GetUserDataResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ServerModels_GetUserDataResult___Fields fields;
};
struct GetUserDataResult_1__Fields {
  struct PlayFabResultCommon__Fields _;
  struct Dictionary_2_System_String_PlayFab_ServerModels_UserDataRecord_ * Data;
  uint32_t DataVersion;
  struct String * PlayFabId;
};
struct GetUserDataResult_1 {
  struct GetUserDataResult_1__Class *klass;
  struct MonitorData *monitor;
  struct GetUserDataResult_1__Fields fields;
};
struct GetUserDataRequest_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetUserDataRequest_1__StaticFields {
};
struct GetUserDataRequest_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetUserDataRequest_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetUserDataRequest_1__VTable vtable;
};
struct GetUserDataResult_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetUserDataResult_1__StaticFields {
};
struct GetUserDataResult_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetUserDataResult_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetUserDataResult_1__VTable vtable;
};
struct Action_1_PlayFab_ServerModels_GetUserDataResult___VTable {
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
struct Action_1_PlayFab_ServerModels_GetUserDataResult___StaticFields {
};
struct Action_1_PlayFab_ServerModels_GetUserDataResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ServerModels_GetUserDataResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ServerModels_GetUserDataResult___VTable vtable;
};

struct GetUserInventoryRequest_1__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * PlayFabId;
};
struct GetUserInventoryRequest_1 {
  struct GetUserInventoryRequest_1__Class *klass;
  struct MonitorData *monitor;
  struct GetUserInventoryRequest_1__Fields fields;
};
struct Action_1_PlayFab_ServerModels_GetUserInventoryResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ServerModels_GetUserInventoryResult_ {
  struct Action_1_PlayFab_ServerModels_GetUserInventoryResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ServerModels_GetUserInventoryResult___Fields fields;
};
struct GetUserInventoryResult_1__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ServerModels_ItemInstance_ * Inventory;
  struct String * PlayFabId;
  struct Dictionary_2_System_String_System_Int32_ * VirtualCurrency;
  struct Dictionary_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime_ * VirtualCurrencyRechargeTimes;
};
struct GetUserInventoryResult_1 {
  struct GetUserInventoryResult_1__Class *klass;
  struct MonitorData *monitor;
  struct GetUserInventoryResult_1__Fields fields;
};
struct GetUserInventoryRequest_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetUserInventoryRequest_1__StaticFields {
};
struct GetUserInventoryRequest_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetUserInventoryRequest_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetUserInventoryRequest_1__VTable vtable;
};
struct GetUserInventoryResult_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetUserInventoryResult_1__StaticFields {
};
struct GetUserInventoryResult_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetUserInventoryResult_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetUserInventoryResult_1__VTable vtable;
};
struct Action_1_PlayFab_ServerModels_GetUserInventoryResult___VTable {
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
struct Action_1_PlayFab_ServerModels_GetUserInventoryResult___StaticFields {
};
struct Action_1_PlayFab_ServerModels_GetUserInventoryResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ServerModels_GetUserInventoryResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ServerModels_GetUserInventoryResult___VTable vtable;
};

struct GrantCharacterToUserRequest_1__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * CharacterName;
  struct String * CharacterType;
  struct String * PlayFabId;
};
struct GrantCharacterToUserRequest_1 {
  struct GrantCharacterToUserRequest_1__Class *klass;
  struct MonitorData *monitor;
  struct GrantCharacterToUserRequest_1__Fields fields;
};
struct Action_1_PlayFab_ServerModels_GrantCharacterToUserResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ServerModels_GrantCharacterToUserResult_ {
  struct Action_1_PlayFab_ServerModels_GrantCharacterToUserResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ServerModels_GrantCharacterToUserResult___Fields fields;
};
struct GrantCharacterToUserResult_1__Fields {
  struct PlayFabResultCommon__Fields _;
  struct String * CharacterId;
};
struct GrantCharacterToUserResult_1 {
  struct GrantCharacterToUserResult_1__Class *klass;
  struct MonitorData *monitor;
  struct GrantCharacterToUserResult_1__Fields fields;
};
struct GrantCharacterToUserRequest_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GrantCharacterToUserRequest_1__StaticFields {
};
struct GrantCharacterToUserRequest_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GrantCharacterToUserRequest_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GrantCharacterToUserResult_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ServerModels_GrantCharacterToUserResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ServerModels_GrantCharacterToUserResult___VTable vtable;
};

struct GrantItemsToCharacterRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * Annotation;
  struct String * CatalogVersion;
  struct String * CharacterId;
  struct List_1_System_String_ * ItemIds;
  struct String * PlayFabId;
};
struct GrantItemsToCharacterRequest {
  struct GrantItemsToCharacterRequest__Class *klass;
  struct MonitorData *monitor;
  struct GrantItemsToCharacterRequest__Fields fields;
};
struct Action_1_PlayFab_ServerModels_GrantItemsToCharacterResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ServerModels_GrantItemsToCharacterResult_ {
  struct Action_1_PlayFab_ServerModels_GrantItemsToCharacterResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ServerModels_GrantItemsToCharacterResult___Fields fields;
};
struct GrantItemsToCharacterResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ServerModels_GrantedItemInstance_ * ItemGrantResults;
};
struct GrantItemsToCharacterResult {
  struct GrantItemsToCharacterResult__Class *klass;
  struct MonitorData *monitor;
  struct GrantItemsToCharacterResult__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_ServerModels_GrantedItemInstance___Fields {
  struct GrantedItemInstance__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ServerModels_GrantedItemInstance_ {
  struct List_1_PlayFab_ServerModels_GrantedItemInstance___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ServerModels_GrantedItemInstance___Fields fields;
};
struct __declspec(align(8)) GrantedItemInstance__Fields {
  struct String * Annotation;
  struct List_1_System_String_ * BundleContents;
  struct String * BundleParent;
  struct String * CatalogVersion;
  struct String * CharacterId;
  struct Dictionary_2_System_String_System_String_ * CustomData;
  struct String * DisplayName;
  struct Nullable_1_DateTime_ Expiration;
  struct String * ItemClass;
  struct String * ItemId;
  struct String * ItemInstanceId;
  struct String * PlayFabId;
  struct Nullable_1_DateTime_ PurchaseDate;
  struct Nullable_1_Int32_ RemainingUses;
  bool Result;
  struct String * UnitCurrency;
  uint32_t UnitPrice;
  struct Nullable_1_Int32_ UsesIncrementedBy;
};
struct GrantedItemInstance {
  struct GrantedItemInstance__Class *klass;
  struct MonitorData *monitor;
  struct GrantedItemInstance__Fields fields;
};
struct GrantedItemInstance__Array {
  struct GrantedItemInstance__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct GrantedItemInstance * vector[32];
};
struct IEnumerator_1_PlayFab_ServerModels_GrantedItemInstance_ {
  struct IEnumerator_1_PlayFab_ServerModels_GrantedItemInstance___Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GrantItemsToCharacterRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GrantedItemInstance__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GrantedItemInstance__VTable vtable;
};
struct IEnumerator_1_PlayFab_ServerModels_GrantedItemInstance___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ServerModels_GrantedItemInstance___StaticFields {
};
struct IEnumerator_1_PlayFab_ServerModels_GrantedItemInstance___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ServerModels_GrantedItemInstance___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct GrantedItemInstance__Array * _emptyArray;
};
struct List_1_PlayFab_ServerModels_GrantedItemInstance___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_ServerModels_GrantedItemInstance___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GrantItemsToCharacterResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ServerModels_GrantItemsToCharacterResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ServerModels_GrantItemsToCharacterResult___VTable vtable;
};

struct GrantItemsToUserRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * Annotation;
  struct String * CatalogVersion;
  struct List_1_System_String_ * ItemIds;
  struct String * PlayFabId;
};
struct GrantItemsToUserRequest {
  struct GrantItemsToUserRequest__Class *klass;
  struct MonitorData *monitor;
  struct GrantItemsToUserRequest__Fields fields;
};
struct Action_1_PlayFab_ServerModels_GrantItemsToUserResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ServerModels_GrantItemsToUserResult_ {
  struct Action_1_PlayFab_ServerModels_GrantItemsToUserResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ServerModels_GrantItemsToUserResult___Fields fields;
};
struct GrantItemsToUserResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ServerModels_GrantedItemInstance_ * ItemGrantResults;
};
struct GrantItemsToUserResult {
  struct GrantItemsToUserResult__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GrantItemsToUserRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GrantItemsToUserResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ServerModels_GrantItemsToUserResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ServerModels_GrantItemsToUserResult___VTable vtable;
};

struct GrantItemsToUsersRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * CatalogVersion;
  struct List_1_PlayFab_ServerModels_ItemGrant_ * ItemGrants;
};
struct GrantItemsToUsersRequest {
  struct GrantItemsToUsersRequest__Class *klass;
  struct MonitorData *monitor;
  struct GrantItemsToUsersRequest__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_ServerModels_ItemGrant___Fields {
  struct ItemGrant__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ServerModels_ItemGrant_ {
  struct List_1_PlayFab_ServerModels_ItemGrant___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ServerModels_ItemGrant___Fields fields;
};
struct __declspec(align(8)) ItemGrant__Fields {
  struct String * Annotation;
  struct String * CharacterId;
  struct Dictionary_2_System_String_System_String_ * Data;
  struct String * ItemId;
  struct List_1_System_String_ * KeysToRemove;
  struct String * PlayFabId;
};
struct ItemGrant {
  struct ItemGrant__Class *klass;
  struct MonitorData *monitor;
  struct ItemGrant__Fields fields;
};
struct ItemGrant__Array {
  struct ItemGrant__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ItemGrant * vector[32];
};
struct IEnumerator_1_PlayFab_ServerModels_ItemGrant_ {
  struct IEnumerator_1_PlayFab_ServerModels_ItemGrant___Class *klass;
  struct MonitorData *monitor;
};
struct Action_1_PlayFab_ServerModels_GrantItemsToUsersResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ServerModels_GrantItemsToUsersResult_ {
  struct Action_1_PlayFab_ServerModels_GrantItemsToUsersResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ServerModels_GrantItemsToUsersResult___Fields fields;
};
struct GrantItemsToUsersResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ServerModels_GrantedItemInstance_ * ItemGrantResults;
};
struct GrantItemsToUsersResult {
  struct GrantItemsToUsersResult__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ItemGrant__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ItemGrant__VTable vtable;
};
struct IEnumerator_1_PlayFab_ServerModels_ItemGrant___VTable {
  VirtualInvokeData get_Current;
};}