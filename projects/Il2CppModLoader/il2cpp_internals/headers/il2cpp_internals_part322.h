namespace app {

struct GetPlayerTagsRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * Namespace;
  struct String * PlayFabId;
};
struct GetPlayerTagsRequest {
  struct GetPlayerTagsRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetPlayerTagsRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_GetPlayerTagsResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_GetPlayerTagsResult_ {
  struct Action_1_PlayFab_ClientModels_GetPlayerTagsResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_GetPlayerTagsResult___Fields fields;
};
struct GetPlayerTagsResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct String * PlayFabId;
  struct List_1_System_String_ * Tags;
};
struct GetPlayerTagsResult {
  struct GetPlayerTagsResult__Class *klass;
  struct MonitorData *monitor;
  struct GetPlayerTagsResult__Fields fields;
};
struct GetPlayerTagsRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetPlayerTagsRequest__StaticFields {
};
struct GetPlayerTagsRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetPlayerTagsRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetPlayerTagsRequest__VTable vtable;
};
struct GetPlayerTagsResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetPlayerTagsResult__StaticFields {
};
struct GetPlayerTagsResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetPlayerTagsResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetPlayerTagsResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_GetPlayerTagsResult___VTable {
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
struct Action_1_PlayFab_ClientModels_GetPlayerTagsResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_GetPlayerTagsResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_GetPlayerTagsResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_GetPlayerTagsResult___VTable vtable;
};

struct GetPlayerTradesRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct Nullable_1_PlayFab_ClientModels_TradeStatus_ StatusFilter;
};
struct GetPlayerTradesRequest {
  struct GetPlayerTradesRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetPlayerTradesRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_GetPlayerTradesResponse___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_GetPlayerTradesResponse_ {
  struct Action_1_PlayFab_ClientModels_GetPlayerTradesResponse___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_GetPlayerTradesResponse___Fields fields;
};
struct GetPlayerTradesResponse__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ClientModels_TradeInfo_ * AcceptedTrades;
  struct List_1_PlayFab_ClientModels_TradeInfo_ * OpenedTrades;
};
struct GetPlayerTradesResponse {
  struct GetPlayerTradesResponse__Class *klass;
  struct MonitorData *monitor;
  struct GetPlayerTradesResponse__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_ClientModels_TradeInfo___Fields {
  struct TradeInfo__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ClientModels_TradeInfo_ {
  struct List_1_PlayFab_ClientModels_TradeInfo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ClientModels_TradeInfo___Fields fields;
};
struct TradeInfo__Array {
  struct TradeInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TradeInfo * vector[32];
};
struct IEnumerator_1_PlayFab_ClientModels_TradeInfo_ {
  struct IEnumerator_1_PlayFab_ClientModels_TradeInfo___Class *klass;
  struct MonitorData *monitor;
};
struct GetPlayerTradesRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetPlayerTradesRequest__StaticFields {
};
struct GetPlayerTradesRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetPlayerTradesRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetPlayerTradesRequest__VTable vtable;
};
struct IEnumerator_1_PlayFab_ClientModels_TradeInfo___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ClientModels_TradeInfo___StaticFields {
};
struct IEnumerator_1_PlayFab_ClientModels_TradeInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ClientModels_TradeInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ClientModels_TradeInfo___VTable vtable;
};
struct List_1_PlayFab_ClientModels_TradeInfo___VTable {
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
struct List_1_PlayFab_ClientModels_TradeInfo___StaticFields {
  struct TradeInfo__Array * _emptyArray;
};
struct List_1_PlayFab_ClientModels_TradeInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_ClientModels_TradeInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_ClientModels_TradeInfo___VTable vtable;
};
struct GetPlayerTradesResponse__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetPlayerTradesResponse__StaticFields {
};
struct GetPlayerTradesResponse__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetPlayerTradesResponse__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetPlayerTradesResponse__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_GetPlayerTradesResponse___VTable {
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
struct Action_1_PlayFab_ClientModels_GetPlayerTradesResponse___StaticFields {
};
struct Action_1_PlayFab_ClientModels_GetPlayerTradesResponse___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_GetPlayerTradesResponse___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_GetPlayerTradesResponse___VTable vtable;
};

struct GetPlayFabIDsFromFacebookIDsRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct List_1_System_String_ * FacebookIDs;
};
struct GetPlayFabIDsFromFacebookIDsRequest {
  struct GetPlayFabIDsFromFacebookIDsRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetPlayFabIDsFromFacebookIDsRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookIDsResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookIDsResult_ {
  struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookIDsResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookIDsResult___Fields fields;
};
struct GetPlayFabIDsFromFacebookIDsResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ClientModels_FacebookPlayFabIdPair_ * Data;
};
struct GetPlayFabIDsFromFacebookIDsResult {
  struct GetPlayFabIDsFromFacebookIDsResult__Class *klass;
  struct MonitorData *monitor;
  struct GetPlayFabIDsFromFacebookIDsResult__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_ClientModels_FacebookPlayFabIdPair___Fields {
  struct FacebookPlayFabIdPair__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ClientModels_FacebookPlayFabIdPair_ {
  struct List_1_PlayFab_ClientModels_FacebookPlayFabIdPair___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ClientModels_FacebookPlayFabIdPair___Fields fields;
};
struct __declspec(align(8)) FacebookPlayFabIdPair__Fields {
  struct String * FacebookId;
  struct String * PlayFabId;
};
struct FacebookPlayFabIdPair {
  struct FacebookPlayFabIdPair__Class *klass;
  struct MonitorData *monitor;
  struct FacebookPlayFabIdPair__Fields fields;
};
struct FacebookPlayFabIdPair__Array {
  struct FacebookPlayFabIdPair__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct FacebookPlayFabIdPair * vector[32];
};
struct IEnumerator_1_PlayFab_ClientModels_FacebookPlayFabIdPair_ {
  struct IEnumerator_1_PlayFab_ClientModels_FacebookPlayFabIdPair___Class *klass;
  struct MonitorData *monitor;
};
struct GetPlayFabIDsFromFacebookIDsRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetPlayFabIDsFromFacebookIDsRequest__StaticFields {
};
struct GetPlayFabIDsFromFacebookIDsRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetPlayFabIDsFromFacebookIDsRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetPlayFabIDsFromFacebookIDsRequest__VTable vtable;
};
struct FacebookPlayFabIdPair__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FacebookPlayFabIdPair__StaticFields {
};
struct FacebookPlayFabIdPair__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FacebookPlayFabIdPair__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FacebookPlayFabIdPair__VTable vtable;
};
struct IEnumerator_1_PlayFab_ClientModels_FacebookPlayFabIdPair___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ClientModels_FacebookPlayFabIdPair___StaticFields {
};
struct IEnumerator_1_PlayFab_ClientModels_FacebookPlayFabIdPair___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ClientModels_FacebookPlayFabIdPair___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ClientModels_FacebookPlayFabIdPair___VTable vtable;
};
struct List_1_PlayFab_ClientModels_FacebookPlayFabIdPair___VTable {
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
struct List_1_PlayFab_ClientModels_FacebookPlayFabIdPair___StaticFields {
  struct FacebookPlayFabIdPair__Array * _emptyArray;
};
struct List_1_PlayFab_ClientModels_FacebookPlayFabIdPair___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_ClientModels_FacebookPlayFabIdPair___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_ClientModels_FacebookPlayFabIdPair___VTable vtable;
};
struct GetPlayFabIDsFromFacebookIDsResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetPlayFabIDsFromFacebookIDsResult__StaticFields {
};
struct GetPlayFabIDsFromFacebookIDsResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetPlayFabIDsFromFacebookIDsResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetPlayFabIDsFromFacebookIDsResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookIDsResult___VTable {
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
struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookIDsResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookIDsResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookIDsResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookIDsResult___VTable vtable;
};

struct GetPlayFabIDsFromFacebookInstantGamesIdsRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct List_1_System_String_ * FacebookInstantGamesIds;
};
struct GetPlayFabIDsFromFacebookInstantGamesIdsRequest {
  struct GetPlayFabIDsFromFacebookInstantGamesIdsRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetPlayFabIDsFromFacebookInstantGamesIdsRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookInstantGamesIdsResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookInstantGamesIdsResult_ {
  struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookInstantGamesIdsResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookInstantGamesIdsResult___Fields fields;
};
struct GetPlayFabIDsFromFacebookInstantGamesIdsResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ClientModels_FacebookInstantGamesPlayFabIdPair_ * Data;
};
struct GetPlayFabIDsFromFacebookInstantGamesIdsResult {
  struct GetPlayFabIDsFromFacebookInstantGamesIdsResult__Class *klass;
  struct MonitorData *monitor;
  struct GetPlayFabIDsFromFacebookInstantGamesIdsResult__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_ClientModels_FacebookInstantGamesPlayFabIdPair___Fields {
  struct FacebookInstantGamesPlayFabIdPair__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ClientModels_FacebookInstantGamesPlayFabIdPair_ {
  struct List_1_PlayFab_ClientModels_FacebookInstantGamesPlayFabIdPair___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ClientModels_FacebookInstantGamesPlayFabIdPair___Fields fields;
};
struct __declspec(align(8)) FacebookInstantGamesPlayFabIdPair__Fields {
  struct String * FacebookInstantGamesId;
  struct String * PlayFabId;
};
struct FacebookInstantGamesPlayFabIdPair {
  struct FacebookInstantGamesPlayFabIdPair__Class *klass;
  struct MonitorData *monitor;
  struct FacebookInstantGamesPlayFabIdPair__Fields fields;
};
struct FacebookInstantGamesPlayFabIdPair__Array {
  struct FacebookInstantGamesPlayFabIdPair__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct FacebookInstantGamesPlayFabIdPair * vector[32];
};
struct IEnumerator_1_PlayFab_ClientModels_FacebookInstantGamesPlayFabIdPair_ {
  struct IEnumerator_1_PlayFab_ClientModels_FacebookInstantGamesPlayFabIdPair___Class *klass;
  struct MonitorData *monitor;
};
struct GetPlayFabIDsFromFacebookInstantGamesIdsRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetPlayFabIDsFromFacebookInstantGamesIdsRequest__StaticFields {
};
struct GetPlayFabIDsFromFacebookInstantGamesIdsRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetPlayFabIDsFromFacebookInstantGamesIdsRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetPlayFabIDsFromFacebookInstantGamesIdsRequest__VTable vtable;
};
struct FacebookInstantGamesPlayFabIdPair__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FacebookInstantGamesPlayFabIdPair__StaticFields {
};
struct FacebookInstantGamesPlayFabIdPair__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FacebookInstantGamesPlayFabIdPair__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FacebookInstantGamesPlayFabIdPair__VTable vtable;
};
struct IEnumerator_1_PlayFab_ClientModels_FacebookInstantGamesPlayFabIdPair___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ClientModels_FacebookInstantGamesPlayFabIdPair___StaticFields {
};
struct IEnumerator_1_PlayFab_ClientModels_FacebookInstantGamesPlayFabIdPair___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ClientModels_FacebookInstantGamesPlayFabIdPair___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ClientModels_FacebookInstantGamesPlayFabIdPair___VTable vtable;
};
struct List_1_PlayFab_ClientModels_FacebookInstantGamesPlayFabIdPair___VTable {
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
struct List_1_PlayFab_ClientModels_FacebookInstantGamesPlayFabIdPair___StaticFields {
  struct FacebookInstantGamesPlayFabIdPair__Array * _emptyArray;
};
struct List_1_PlayFab_ClientModels_FacebookInstantGamesPlayFabIdPair___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_ClientModels_FacebookInstantGamesPlayFabIdPair___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_ClientModels_FacebookInstantGamesPlayFabIdPair___VTable vtable;
};
struct GetPlayFabIDsFromFacebookInstantGamesIdsResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetPlayFabIDsFromFacebookInstantGamesIdsResult__StaticFields {
};
struct GetPlayFabIDsFromFacebookInstantGamesIdsResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetPlayFabIDsFromFacebookInstantGamesIdsResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetPlayFabIDsFromFacebookInstantGamesIdsResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookInstantGamesIdsResult___VTable {
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
struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookInstantGamesIdsResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookInstantGamesIdsResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookInstantGamesIdsResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookInstantGamesIdsResult___VTable vtable;
};

struct GetPlayFabIDsFromGameCenterIDsRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct List_1_System_String_ * GameCenterIDs;
};
struct GetPlayFabIDsFromGameCenterIDsRequest {
  struct GetPlayFabIDsFromGameCenterIDsRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetPlayFabIDsFromGameCenterIDsRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGameCenterIDsResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGameCenterIDsResult_ {
  struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGameCenterIDsResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGameCenterIDsResult___Fields fields;
};
struct GetPlayFabIDsFromGameCenterIDsResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ClientModels_GameCenterPlayFabIdPair_ * Data;
};
struct GetPlayFabIDsFromGameCenterIDsResult {
  struct GetPlayFabIDsFromGameCenterIDsResult__Class *klass;
  struct MonitorData *monitor;
  struct GetPlayFabIDsFromGameCenterIDsResult__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_ClientModels_GameCenterPlayFabIdPair___Fields {
  struct GameCenterPlayFabIdPair__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ClientModels_GameCenterPlayFabIdPair_ {
  struct List_1_PlayFab_ClientModels_GameCenterPlayFabIdPair___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ClientModels_GameCenterPlayFabIdPair___Fields fields;
};
struct __declspec(align(8)) GameCenterPlayFabIdPair__Fields {
  struct String * GameCenterId;
  struct String * PlayFabId;
};
struct GameCenterPlayFabIdPair {
  struct GameCenterPlayFabIdPair__Class *klass;
  struct MonitorData *monitor;
  struct GameCenterPlayFabIdPair__Fields fields;
};
struct GameCenterPlayFabIdPair__Array {
  struct GameCenterPlayFabIdPair__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct GameCenterPlayFabIdPair * vector[32];
};
struct IEnumerator_1_PlayFab_ClientModels_GameCenterPlayFabIdPair_ {
  struct IEnumerator_1_PlayFab_ClientModels_GameCenterPlayFabIdPair___Class *klass;
  struct MonitorData *monitor;
};
struct GetPlayFabIDsFromGameCenterIDsRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetPlayFabIDsFromGameCenterIDsRequest__StaticFields {
};
struct GetPlayFabIDsFromGameCenterIDsRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetPlayFabIDsFromGameCenterIDsRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetPlayFabIDsFromGameCenterIDsRequest__VTable vtable;
};
struct GameCenterPlayFabIdPair__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GameCenterPlayFabIdPair__StaticFields {
};
struct GameCenterPlayFabIdPair__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GameCenterPlayFabIdPair__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GameCenterPlayFabIdPair__VTable vtable;
};
struct IEnumerator_1_PlayFab_ClientModels_GameCenterPlayFabIdPair___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ClientModels_GameCenterPlayFabIdPair___StaticFields {
};
struct IEnumerator_1_PlayFab_ClientModels_GameCenterPlayFabIdPair___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ClientModels_GameCenterPlayFabIdPair___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ClientModels_GameCenterPlayFabIdPair___VTable vtable;
};
struct List_1_PlayFab_ClientModels_GameCenterPlayFabIdPair___VTable {
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
struct List_1_PlayFab_ClientModels_GameCenterPlayFabIdPair___StaticFields {
  struct GameCenterPlayFabIdPair__Array * _emptyArray;
};
struct List_1_PlayFab_ClientModels_GameCenterPlayFabIdPair___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_ClientModels_GameCenterPlayFabIdPair___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_ClientModels_GameCenterPlayFabIdPair___VTable vtable;
};
struct GetPlayFabIDsFromGameCenterIDsResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetPlayFabIDsFromGameCenterIDsResult__StaticFields {
};
struct GetPlayFabIDsFromGameCenterIDsResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetPlayFabIDsFromGameCenterIDsResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetPlayFabIDsFromGameCenterIDsResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGameCenterIDsResult___VTable {
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
struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGameCenterIDsResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGameCenterIDsResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGameCenterIDsResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGameCenterIDsResult___VTable vtable;
};

struct GetPlayFabIDsFromGenericIDsRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct List_1_PlayFab_ClientModels_GenericServiceId_ * GenericIDs;
};
struct GetPlayFabIDsFromGenericIDsRequest {
  struct GetPlayFabIDsFromGenericIDsRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetPlayFabIDsFromGenericIDsRequest__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_ClientModels_GenericServiceId___Fields {
  struct GenericServiceId__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ClientModels_GenericServiceId_ {
  struct List_1_PlayFab_ClientModels_GenericServiceId___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ClientModels_GenericServiceId___Fields fields;
};
struct GenericServiceId__Array {
  struct GenericServiceId__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct GenericServiceId * vector[32];
};
struct IEnumerator_1_PlayFab_ClientModels_GenericServiceId_ {
  struct IEnumerator_1_PlayFab_ClientModels_GenericServiceId___Class *klass;
  struct MonitorData *monitor;
};
struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGenericIDsResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGenericIDsResult_ {
  struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGenericIDsResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGenericIDsResult___Fields fields;
};
struct GetPlayFabIDsFromGenericIDsResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ClientModels_GenericPlayFabIdPair_ * Data;
};
struct GetPlayFabIDsFromGenericIDsResult {
  struct GetPlayFabIDsFromGenericIDsResult__Class *klass;
  struct MonitorData *monitor;
  struct GetPlayFabIDsFromGenericIDsResult__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_ClientModels_GenericPlayFabIdPair___Fields {
  struct GenericPlayFabIdPair__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ClientModels_GenericPlayFabIdPair_ {
  struct List_1_PlayFab_ClientModels_GenericPlayFabIdPair___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ClientModels_GenericPlayFabIdPair___Fields fields;
};
struct __declspec(align(8)) GenericPlayFabIdPair__Fields {
  struct GenericServiceId * GenericId;
  struct String * PlayFabId;
};
struct GenericPlayFabIdPair {
  struct GenericPlayFabIdPair__Class *klass;
  struct MonitorData *monitor;
  struct GenericPlayFabIdPair__Fields fields;
};
struct GenericPlayFabIdPair__Array {
  struct GenericPlayFabIdPair__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct GenericPlayFabIdPair * vector[32];
};
struct IEnumerator_1_PlayFab_ClientModels_GenericPlayFabIdPair_ {
  struct IEnumerator_1_PlayFab_ClientModels_GenericPlayFabIdPair___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_PlayFab_ClientModels_GenericServiceId___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ClientModels_GenericServiceId___StaticFields {
};
struct IEnumerator_1_PlayFab_ClientModels_GenericServiceId___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ClientModels_GenericServiceId___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ClientModels_GenericServiceId___VTable vtable;
};
struct List_1_PlayFab_ClientModels_GenericServiceId___VTable {
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
struct List_1_PlayFab_ClientModels_GenericServiceId___StaticFields {
  struct GenericServiceId__Array * _emptyArray;
};
struct List_1_PlayFab_ClientModels_GenericServiceId___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_ClientModels_GenericServiceId___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_ClientModels_GenericServiceId___VTable vtable;
};
struct GetPlayFabIDsFromGenericIDsRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetPlayFabIDsFromGenericIDsRequest__StaticFields {
};
struct GetPlayFabIDsFromGenericIDsRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetPlayFabIDsFromGenericIDsRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetPlayFabIDsFromGenericIDsRequest__VTable vtable;
};
struct GenericPlayFabIdPair__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};}