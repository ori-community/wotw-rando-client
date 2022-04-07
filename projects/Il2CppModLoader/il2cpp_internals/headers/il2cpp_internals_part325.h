namespace app {
struct Action_1_PlayFab_ClientModels_GetSharedGroupDataResult___VTable {
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
struct Action_1_PlayFab_ClientModels_GetSharedGroupDataResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_GetSharedGroupDataResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_GetSharedGroupDataResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_GetSharedGroupDataResult___VTable vtable;
};

struct GetStoreItemsRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * CatalogVersion;
  struct String * StoreId;
};
struct GetStoreItemsRequest {
  struct GetStoreItemsRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetStoreItemsRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_GetStoreItemsResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_GetStoreItemsResult_ {
  struct Action_1_PlayFab_ClientModels_GetStoreItemsResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_GetStoreItemsResult___Fields fields;
};
enum SourceType__Enum : int32_t {
  SourceType__Enum_Admin = 0,
  SourceType__Enum_BackEnd = 1,
  SourceType__Enum_GameClient = 2,
  SourceType__Enum_GameServer = 3,
  SourceType__Enum_Partner = 4,
  SourceType__Enum_Custom = 5,
  SourceType__Enum_API = 6,
};
struct SourceType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SourceType__Enum value;
};
struct Nullable_1_PlayFab_ClientModels_SourceType_ {
  enum SourceType__Enum value;
  bool has_value;
};
struct Nullable_1_PlayFab_ClientModels_SourceType___Boxed {
  struct Nullable_1_PlayFab_ClientModels_SourceType___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_ClientModels_SourceType_ fields;
};
struct GetStoreItemsResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct String * CatalogVersion;
  struct StoreMarketingModel * MarketingData;
  struct Nullable_1_PlayFab_ClientModels_SourceType_ Source;
  struct List_1_PlayFab_ClientModels_StoreItem_ * Store;
  struct String * StoreId;
};
struct GetStoreItemsResult {
  struct GetStoreItemsResult__Class *klass;
  struct MonitorData *monitor;
  struct GetStoreItemsResult__Fields fields;
};
struct __declspec(align(8)) StoreMarketingModel__Fields {
  struct String * Description;
  struct String * DisplayName;
  struct Object * Metadata;
};
struct StoreMarketingModel {
  struct StoreMarketingModel__Class *klass;
  struct MonitorData *monitor;
  struct StoreMarketingModel__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_ClientModels_StoreItem___Fields {
  struct StoreItem__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ClientModels_StoreItem_ {
  struct List_1_PlayFab_ClientModels_StoreItem___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ClientModels_StoreItem___Fields fields;
};
struct __declspec(align(8)) StoreItem__Fields {
  struct Object * CustomData;
  struct Nullable_1_UInt32_ DisplayPosition;
  struct String * ItemId;
  struct Dictionary_2_System_String_System_UInt32_ * RealCurrencyPrices;
  struct Dictionary_2_System_String_System_UInt32_ * VirtualCurrencyPrices;
};
struct StoreItem {
  struct StoreItem__Class *klass;
  struct MonitorData *monitor;
  struct StoreItem__Fields fields;
};
struct StoreItem__Array {
  struct StoreItem__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct StoreItem * vector[32];
};
struct IEnumerator_1_PlayFab_ClientModels_StoreItem_ {
  struct IEnumerator_1_PlayFab_ClientModels_StoreItem___Class *klass;
  struct MonitorData *monitor;
};
struct GetStoreItemsRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetStoreItemsRequest__StaticFields {
};
struct GetStoreItemsRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetStoreItemsRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetStoreItemsRequest__VTable vtable;
};
struct StoreMarketingModel__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct StoreMarketingModel__StaticFields {
};
struct StoreMarketingModel__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StoreMarketingModel__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StoreMarketingModel__VTable vtable;
};
struct Nullable_1_PlayFab_ClientModels_SourceType___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_PlayFab_ClientModels_SourceType___StaticFields {
};
struct Nullable_1_PlayFab_ClientModels_SourceType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_PlayFab_ClientModels_SourceType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_PlayFab_ClientModels_SourceType___VTable vtable;
};
struct StoreItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct StoreItem__StaticFields {
};
struct StoreItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StoreItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StoreItem__VTable vtable;
};
struct IEnumerator_1_PlayFab_ClientModels_StoreItem___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ClientModels_StoreItem___StaticFields {
};
struct IEnumerator_1_PlayFab_ClientModels_StoreItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ClientModels_StoreItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ClientModels_StoreItem___VTable vtable;
};
struct List_1_PlayFab_ClientModels_StoreItem___VTable {
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
struct List_1_PlayFab_ClientModels_StoreItem___StaticFields {
  struct StoreItem__Array * _emptyArray;
};
struct List_1_PlayFab_ClientModels_StoreItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_ClientModels_StoreItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_ClientModels_StoreItem___VTable vtable;
};
struct GetStoreItemsResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetStoreItemsResult__StaticFields {
};
struct GetStoreItemsResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetStoreItemsResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetStoreItemsResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_GetStoreItemsResult___VTable {
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
struct Action_1_PlayFab_ClientModels_GetStoreItemsResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_GetStoreItemsResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_GetStoreItemsResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_GetStoreItemsResult___VTable vtable;
};

struct GetTimeRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
};
struct GetTimeRequest {
  struct GetTimeRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetTimeRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_GetTimeResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_GetTimeResult_ {
  struct Action_1_PlayFab_ClientModels_GetTimeResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_GetTimeResult___Fields fields;
};
struct GetTimeResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct DateTime Time;
};
struct GetTimeResult {
  struct GetTimeResult__Class *klass;
  struct MonitorData *monitor;
  struct GetTimeResult__Fields fields;
};
struct GetTimeRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetTimeRequest__StaticFields {
};
struct GetTimeRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetTimeRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetTimeRequest__VTable vtable;
};
struct GetTimeResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetTimeResult__StaticFields {
};
struct GetTimeResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetTimeResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetTimeResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_GetTimeResult___VTable {
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
struct Action_1_PlayFab_ClientModels_GetTimeResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_GetTimeResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_GetTimeResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_GetTimeResult___VTable vtable;
};

struct GetTitleDataRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct List_1_System_String_ * Keys;
};
struct GetTitleDataRequest {
  struct GetTitleDataRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetTitleDataRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_GetTitleDataResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_GetTitleDataResult_ {
  struct Action_1_PlayFab_ClientModels_GetTitleDataResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_GetTitleDataResult___Fields fields;
};
struct GetTitleDataResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct Dictionary_2_System_String_System_String_ * Data;
};
struct GetTitleDataResult {
  struct GetTitleDataResult__Class *klass;
  struct MonitorData *monitor;
  struct GetTitleDataResult__Fields fields;
};
struct GetTitleDataRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetTitleDataRequest__StaticFields {
};
struct GetTitleDataRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetTitleDataRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetTitleDataRequest__VTable vtable;
};
struct GetTitleDataResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetTitleDataResult__StaticFields {
};
struct GetTitleDataResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetTitleDataResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetTitleDataResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_GetTitleDataResult___VTable {
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
struct Action_1_PlayFab_ClientModels_GetTitleDataResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_GetTitleDataResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_GetTitleDataResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_GetTitleDataResult___VTable vtable;
};

struct GetTitleNewsRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct Nullable_1_Int32_ Count;
};
struct GetTitleNewsRequest {
  struct GetTitleNewsRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetTitleNewsRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_GetTitleNewsResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_GetTitleNewsResult_ {
  struct Action_1_PlayFab_ClientModels_GetTitleNewsResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_GetTitleNewsResult___Fields fields;
};
struct GetTitleNewsResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ClientModels_TitleNewsItem_ * News;
};
struct GetTitleNewsResult {
  struct GetTitleNewsResult__Class *klass;
  struct MonitorData *monitor;
  struct GetTitleNewsResult__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_ClientModels_TitleNewsItem___Fields {
  struct TitleNewsItem__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ClientModels_TitleNewsItem_ {
  struct List_1_PlayFab_ClientModels_TitleNewsItem___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ClientModels_TitleNewsItem___Fields fields;
};
struct __declspec(align(8)) TitleNewsItem__Fields {
  struct String * Body;
  struct String * NewsId;
  struct DateTime Timestamp;
  struct String * Title;
};
struct TitleNewsItem {
  struct TitleNewsItem__Class *klass;
  struct MonitorData *monitor;
  struct TitleNewsItem__Fields fields;
};
struct TitleNewsItem__Array {
  struct TitleNewsItem__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TitleNewsItem * vector[32];
};
struct IEnumerator_1_PlayFab_ClientModels_TitleNewsItem_ {
  struct IEnumerator_1_PlayFab_ClientModels_TitleNewsItem___Class *klass;
  struct MonitorData *monitor;
};
struct GetTitleNewsRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetTitleNewsRequest__StaticFields {
};
struct GetTitleNewsRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetTitleNewsRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetTitleNewsRequest__VTable vtable;
};
struct TitleNewsItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TitleNewsItem__StaticFields {
};
struct TitleNewsItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TitleNewsItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TitleNewsItem__VTable vtable;
};
struct IEnumerator_1_PlayFab_ClientModels_TitleNewsItem___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ClientModels_TitleNewsItem___StaticFields {
};
struct IEnumerator_1_PlayFab_ClientModels_TitleNewsItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ClientModels_TitleNewsItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ClientModels_TitleNewsItem___VTable vtable;
};
struct List_1_PlayFab_ClientModels_TitleNewsItem___VTable {
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
struct List_1_PlayFab_ClientModels_TitleNewsItem___StaticFields {
  struct TitleNewsItem__Array * _emptyArray;
};
struct List_1_PlayFab_ClientModels_TitleNewsItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_ClientModels_TitleNewsItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_ClientModels_TitleNewsItem___VTable vtable;
};
struct GetTitleNewsResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetTitleNewsResult__StaticFields {
};
struct GetTitleNewsResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetTitleNewsResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetTitleNewsResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_GetTitleNewsResult___VTable {
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
struct Action_1_PlayFab_ClientModels_GetTitleNewsResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_GetTitleNewsResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_GetTitleNewsResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_GetTitleNewsResult___VTable vtable;
};

struct GetTitlePublicKeyRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * TitleId;
  struct String * TitleSharedSecret;
};
struct GetTitlePublicKeyRequest {
  struct GetTitlePublicKeyRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetTitlePublicKeyRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_GetTitlePublicKeyResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_GetTitlePublicKeyResult_ {
  struct Action_1_PlayFab_ClientModels_GetTitlePublicKeyResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_GetTitlePublicKeyResult___Fields fields;
};
struct GetTitlePublicKeyResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct String * RSAPublicKey;
};
struct GetTitlePublicKeyResult {
  struct GetTitlePublicKeyResult__Class *klass;
  struct MonitorData *monitor;
  struct GetTitlePublicKeyResult__Fields fields;
};
struct GetTitlePublicKeyRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetTitlePublicKeyRequest__StaticFields {
};
struct GetTitlePublicKeyRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetTitlePublicKeyRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetTitlePublicKeyRequest__VTable vtable;
};
struct GetTitlePublicKeyResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetTitlePublicKeyResult__StaticFields {
};
struct GetTitlePublicKeyResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetTitlePublicKeyResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetTitlePublicKeyResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_GetTitlePublicKeyResult___VTable {
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
struct Action_1_PlayFab_ClientModels_GetTitlePublicKeyResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_GetTitlePublicKeyResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_GetTitlePublicKeyResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_GetTitlePublicKeyResult___VTable vtable;
};

struct GetTradeStatusRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * OfferingPlayerId;
  struct String * TradeId;
};
struct GetTradeStatusRequest {
  struct GetTradeStatusRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetTradeStatusRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_GetTradeStatusResponse___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_GetTradeStatusResponse_ {
  struct Action_1_PlayFab_ClientModels_GetTradeStatusResponse___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_GetTradeStatusResponse___Fields fields;
};
struct GetTradeStatusResponse__Fields {
  struct PlayFabResultCommon__Fields _;
  struct TradeInfo * Trade;
};
struct GetTradeStatusResponse {
  struct GetTradeStatusResponse__Class *klass;
  struct MonitorData *monitor;
  struct GetTradeStatusResponse__Fields fields;
};
struct GetTradeStatusRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetTradeStatusRequest__StaticFields {
};
struct GetTradeStatusRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetTradeStatusRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetTradeStatusRequest__VTable vtable;
};
struct GetTradeStatusResponse__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetTradeStatusResponse__StaticFields {
};
struct GetTradeStatusResponse__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetTradeStatusResponse__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetTradeStatusResponse__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_GetTradeStatusResponse___VTable {
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
struct Action_1_PlayFab_ClientModels_GetTradeStatusResponse___StaticFields {
};
struct Action_1_PlayFab_ClientModels_GetTradeStatusResponse___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_GetTradeStatusResponse___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_GetTradeStatusResponse___VTable vtable;
};

struct GetUserDataRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct Nullable_1_UInt32_ IfChangedFromDataVersion;
  struct List_1_System_String_ * Keys;
  struct String * PlayFabId;
};
struct GetUserDataRequest {
  struct GetUserDataRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetUserDataRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_GetUserDataResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_GetUserDataResult_ {
  struct Action_1_PlayFab_ClientModels_GetUserDataResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_GetUserDataResult___Fields fields;
};
struct GetUserDataResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct Dictionary_2_System_String_PlayFab_ClientModels_UserDataRecord_ * Data;
  uint32_t DataVersion;
};
struct GetUserDataResult {
  struct GetUserDataResult__Class *klass;
  struct MonitorData *monitor;
  struct GetUserDataResult__Fields fields;
};
struct GetUserDataRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetUserDataRequest__StaticFields {
};
struct GetUserDataRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetUserDataRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetUserDataRequest__VTable vtable;
};
struct GetUserDataResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetUserDataResult__StaticFields {
};
struct GetUserDataResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetUserDataResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetUserDataResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_GetUserDataResult___VTable {
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
struct Action_1_PlayFab_ClientModels_GetUserDataResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_GetUserDataResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_GetUserDataResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_GetUserDataResult___VTable vtable;
};

struct GetUserInventoryRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
};
struct GetUserInventoryRequest {
  struct GetUserInventoryRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetUserInventoryRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_GetUserInventoryResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_GetUserInventoryResult_ {
  struct Action_1_PlayFab_ClientModels_GetUserInventoryResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_GetUserInventoryResult___Fields fields;
};
struct GetUserInventoryResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ClientModels_ItemInstance_ * Inventory;
  struct Dictionary_2_System_String_System_Int32_ * VirtualCurrency;
  struct Dictionary_2_System_String_PlayFab_ClientModels_VirtualCurrencyRechargeTime_ * VirtualCurrencyRechargeTimes;
};
struct GetUserInventoryResult {
  struct GetUserInventoryResult__Class *klass;
  struct MonitorData *monitor;
  struct GetUserInventoryResult__Fields fields;
};
struct GetUserInventoryRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetUserInventoryRequest__StaticFields {
};
struct GetUserInventoryRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetUserInventoryRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetUserInventoryRequest__VTable vtable;
};
struct GetUserInventoryResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetUserInventoryResult__StaticFields {
};
struct GetUserInventoryResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetUserInventoryResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetUserInventoryResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_GetUserInventoryResult___VTable {
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
};}