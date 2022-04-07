namespace app {
struct __declspec(align(8)) GetPlayerCombinedInfoResultPayload__Fields {
  struct UserAccountInfo * AccountInfo;
  struct List_1_PlayFab_ClientModels_CharacterInventory_ * CharacterInventories;
  struct List_1_PlayFab_ClientModels_CharacterResult_ * CharacterList;
  struct PlayerProfileModel * PlayerProfile;
  struct List_1_PlayFab_ClientModels_StatisticValue_ * PlayerStatistics;
  struct Dictionary_2_System_String_System_String_ * TitleData;
  struct Dictionary_2_System_String_PlayFab_ClientModels_UserDataRecord_ * UserData;
  uint32_t UserDataVersion;
  struct List_1_PlayFab_ClientModels_ItemInstance_ * UserInventory;
  struct Dictionary_2_System_String_PlayFab_ClientModels_UserDataRecord_ * UserReadOnlyData;
  uint32_t UserReadOnlyDataVersion;
  struct Dictionary_2_System_String_System_Int32_ * UserVirtualCurrency;
  struct Dictionary_2_System_String_PlayFab_ClientModels_VirtualCurrencyRechargeTime_ * UserVirtualCurrencyRechargeTimes;
};
struct GetPlayerCombinedInfoResultPayload {
  struct GetPlayerCombinedInfoResultPayload__Class *klass;
  struct MonitorData *monitor;
  struct GetPlayerCombinedInfoResultPayload__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_ClientModels_CharacterInventory___Fields {
  struct CharacterInventory__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ClientModels_CharacterInventory_ {
  struct List_1_PlayFab_ClientModels_CharacterInventory___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ClientModels_CharacterInventory___Fields fields;
};
struct __declspec(align(8)) CharacterInventory__Fields {
  struct String * CharacterId;
  struct List_1_PlayFab_ClientModels_ItemInstance_ * Inventory;
};
struct CharacterInventory {
  struct CharacterInventory__Class *klass;
  struct MonitorData *monitor;
  struct CharacterInventory__Fields fields;
};
struct CharacterInventory__Array {
  struct CharacterInventory__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CharacterInventory * vector[32];
};
struct IEnumerator_1_PlayFab_ClientModels_CharacterInventory_ {
  struct IEnumerator_1_PlayFab_ClientModels_CharacterInventory___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_PlayFab_ClientModels_StatisticValue___Fields {
  struct StatisticValue__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ClientModels_StatisticValue_ {
  struct List_1_PlayFab_ClientModels_StatisticValue___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ClientModels_StatisticValue___Fields fields;
};
struct __declspec(align(8)) StatisticValue__Fields {
  struct String * StatisticName;
  int32_t Value;
  uint32_t Version;
};
struct StatisticValue {
  struct StatisticValue__Class *klass;
  struct MonitorData *monitor;
  struct StatisticValue__Fields fields;
};
struct StatisticValue__Array {
  struct StatisticValue__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct StatisticValue * vector[32];
};
struct IEnumerator_1_PlayFab_ClientModels_StatisticValue_ {
  struct IEnumerator_1_PlayFab_ClientModels_StatisticValue___Class *klass;
  struct MonitorData *monitor;
};
struct GetPlayerCombinedInfoRequestParams__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetPlayerCombinedInfoRequestParams__StaticFields {
};
struct GetPlayerCombinedInfoRequestParams__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetPlayerCombinedInfoRequestParams__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetPlayerCombinedInfoRequestParams__VTable vtable;
};
struct GetPlayerCombinedInfoRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetPlayerCombinedInfoRequest__StaticFields {
};
struct GetPlayerCombinedInfoRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetPlayerCombinedInfoRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetPlayerCombinedInfoRequest__VTable vtable;
};
struct CharacterInventory__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CharacterInventory__StaticFields {
};
struct CharacterInventory__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharacterInventory__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharacterInventory__VTable vtable;
};
struct IEnumerator_1_PlayFab_ClientModels_CharacterInventory___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ClientModels_CharacterInventory___StaticFields {
};
struct IEnumerator_1_PlayFab_ClientModels_CharacterInventory___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ClientModels_CharacterInventory___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ClientModels_CharacterInventory___VTable vtable;
};
struct List_1_PlayFab_ClientModels_CharacterInventory___VTable {
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
struct List_1_PlayFab_ClientModels_CharacterInventory___StaticFields {
  struct CharacterInventory__Array * _emptyArray;
};
struct List_1_PlayFab_ClientModels_CharacterInventory___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_ClientModels_CharacterInventory___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_ClientModels_CharacterInventory___VTable vtable;
};
struct StatisticValue__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct StatisticValue__StaticFields {
};
struct StatisticValue__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StatisticValue__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StatisticValue__VTable vtable;
};
struct IEnumerator_1_PlayFab_ClientModels_StatisticValue___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ClientModels_StatisticValue___StaticFields {
};
struct IEnumerator_1_PlayFab_ClientModels_StatisticValue___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ClientModels_StatisticValue___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ClientModels_StatisticValue___VTable vtable;
};
struct List_1_PlayFab_ClientModels_StatisticValue___VTable {
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
struct List_1_PlayFab_ClientModels_StatisticValue___StaticFields {
  struct StatisticValue__Array * _emptyArray;
};
struct List_1_PlayFab_ClientModels_StatisticValue___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_ClientModels_StatisticValue___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_ClientModels_StatisticValue___VTable vtable;
};
struct GetPlayerCombinedInfoResultPayload__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetPlayerCombinedInfoResultPayload__StaticFields {
};
struct GetPlayerCombinedInfoResultPayload__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetPlayerCombinedInfoResultPayload__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetPlayerCombinedInfoResultPayload__VTable vtable;
};
struct GetPlayerCombinedInfoResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetPlayerCombinedInfoResult__StaticFields {
};
struct GetPlayerCombinedInfoResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetPlayerCombinedInfoResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetPlayerCombinedInfoResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_GetPlayerCombinedInfoResult___VTable {
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
struct Action_1_PlayFab_ClientModels_GetPlayerCombinedInfoResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_GetPlayerCombinedInfoResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_GetPlayerCombinedInfoResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_GetPlayerCombinedInfoResult___VTable vtable;
};

struct GetPlayerProfileRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * PlayFabId;
  struct PlayerProfileViewConstraints * ProfileConstraints;
};
struct GetPlayerProfileRequest {
  struct GetPlayerProfileRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetPlayerProfileRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_GetPlayerProfileResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_GetPlayerProfileResult_ {
  struct Action_1_PlayFab_ClientModels_GetPlayerProfileResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_GetPlayerProfileResult___Fields fields;
};
struct GetPlayerProfileResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct PlayerProfileModel * PlayerProfile;
};
struct GetPlayerProfileResult {
  struct GetPlayerProfileResult__Class *klass;
  struct MonitorData *monitor;
  struct GetPlayerProfileResult__Fields fields;
};
struct GetPlayerProfileRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetPlayerProfileRequest__StaticFields {
};
struct GetPlayerProfileRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetPlayerProfileRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetPlayerProfileRequest__VTable vtable;
};
struct GetPlayerProfileResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetPlayerProfileResult__StaticFields {
};
struct GetPlayerProfileResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetPlayerProfileResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetPlayerProfileResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_GetPlayerProfileResult___VTable {
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
struct Action_1_PlayFab_ClientModels_GetPlayerProfileResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_GetPlayerProfileResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_GetPlayerProfileResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_GetPlayerProfileResult___VTable vtable;
};

struct GetPlayerSegmentsRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
};
struct GetPlayerSegmentsRequest {
  struct GetPlayerSegmentsRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetPlayerSegmentsRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_GetPlayerSegmentsResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_GetPlayerSegmentsResult_ {
  struct Action_1_PlayFab_ClientModels_GetPlayerSegmentsResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_GetPlayerSegmentsResult___Fields fields;
};
struct GetPlayerSegmentsResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ClientModels_GetSegmentResult_ * Segments;
};
struct GetPlayerSegmentsResult {
  struct GetPlayerSegmentsResult__Class *klass;
  struct MonitorData *monitor;
  struct GetPlayerSegmentsResult__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_ClientModels_GetSegmentResult___Fields {
  struct GetSegmentResult__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ClientModels_GetSegmentResult_ {
  struct List_1_PlayFab_ClientModels_GetSegmentResult___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ClientModels_GetSegmentResult___Fields fields;
};
struct GetSegmentResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct String * ABTestParent;
  struct String * Id;
  struct String * Name;
};
struct GetSegmentResult {
  struct GetSegmentResult__Class *klass;
  struct MonitorData *monitor;
  struct GetSegmentResult__Fields fields;
};
struct GetSegmentResult__Array {
  struct GetSegmentResult__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct GetSegmentResult * vector[32];
};
struct IEnumerator_1_PlayFab_ClientModels_GetSegmentResult_ {
  struct IEnumerator_1_PlayFab_ClientModels_GetSegmentResult___Class *klass;
  struct MonitorData *monitor;
};
struct GetPlayerSegmentsRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetPlayerSegmentsRequest__StaticFields {
};
struct GetPlayerSegmentsRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetPlayerSegmentsRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetPlayerSegmentsRequest__VTable vtable;
};
struct GetSegmentResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetSegmentResult__StaticFields {
};
struct GetSegmentResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetSegmentResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetSegmentResult__VTable vtable;
};
struct IEnumerator_1_PlayFab_ClientModels_GetSegmentResult___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ClientModels_GetSegmentResult___StaticFields {
};
struct IEnumerator_1_PlayFab_ClientModels_GetSegmentResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ClientModels_GetSegmentResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ClientModels_GetSegmentResult___VTable vtable;
};
struct List_1_PlayFab_ClientModels_GetSegmentResult___VTable {
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
struct List_1_PlayFab_ClientModels_GetSegmentResult___StaticFields {
  struct GetSegmentResult__Array * _emptyArray;
};
struct List_1_PlayFab_ClientModels_GetSegmentResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_ClientModels_GetSegmentResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_ClientModels_GetSegmentResult___VTable vtable;
};
struct GetPlayerSegmentsResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetPlayerSegmentsResult__StaticFields {
};
struct GetPlayerSegmentsResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetPlayerSegmentsResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetPlayerSegmentsResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_GetPlayerSegmentsResult___VTable {
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
struct Action_1_PlayFab_ClientModels_GetPlayerSegmentsResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_GetPlayerSegmentsResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_GetPlayerSegmentsResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_GetPlayerSegmentsResult___VTable vtable;
};

struct GetPlayerStatisticsRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct List_1_System_String_ * StatisticNames;
  struct List_1_PlayFab_ClientModels_StatisticNameVersion_ * StatisticNameVersions;
};
struct GetPlayerStatisticsRequest {
  struct GetPlayerStatisticsRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetPlayerStatisticsRequest__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_ClientModels_StatisticNameVersion___Fields {
  struct StatisticNameVersion__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ClientModels_StatisticNameVersion_ {
  struct List_1_PlayFab_ClientModels_StatisticNameVersion___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ClientModels_StatisticNameVersion___Fields fields;
};
struct __declspec(align(8)) StatisticNameVersion__Fields {
  struct String * StatisticName;
  uint32_t Version;
};
struct StatisticNameVersion {
  struct StatisticNameVersion__Class *klass;
  struct MonitorData *monitor;
  struct StatisticNameVersion__Fields fields;
};
struct StatisticNameVersion__Array {
  struct StatisticNameVersion__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct StatisticNameVersion * vector[32];
};
struct IEnumerator_1_PlayFab_ClientModels_StatisticNameVersion_ {
  struct IEnumerator_1_PlayFab_ClientModels_StatisticNameVersion___Class *klass;
  struct MonitorData *monitor;
};
struct Action_1_PlayFab_ClientModels_GetPlayerStatisticsResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_GetPlayerStatisticsResult_ {
  struct Action_1_PlayFab_ClientModels_GetPlayerStatisticsResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_GetPlayerStatisticsResult___Fields fields;
};
struct GetPlayerStatisticsResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ClientModels_StatisticValue_ * Statistics;
};
struct GetPlayerStatisticsResult {
  struct GetPlayerStatisticsResult__Class *klass;
  struct MonitorData *monitor;
  struct GetPlayerStatisticsResult__Fields fields;
};
struct StatisticNameVersion__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct StatisticNameVersion__StaticFields {
};
struct StatisticNameVersion__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StatisticNameVersion__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StatisticNameVersion__VTable vtable;
};
struct IEnumerator_1_PlayFab_ClientModels_StatisticNameVersion___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ClientModels_StatisticNameVersion___StaticFields {
};
struct IEnumerator_1_PlayFab_ClientModels_StatisticNameVersion___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ClientModels_StatisticNameVersion___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ClientModels_StatisticNameVersion___VTable vtable;
};
struct List_1_PlayFab_ClientModels_StatisticNameVersion___VTable {
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
struct List_1_PlayFab_ClientModels_StatisticNameVersion___StaticFields {
  struct StatisticNameVersion__Array * _emptyArray;
};
struct List_1_PlayFab_ClientModels_StatisticNameVersion___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_ClientModels_StatisticNameVersion___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_ClientModels_StatisticNameVersion___VTable vtable;
};
struct GetPlayerStatisticsRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetPlayerStatisticsRequest__StaticFields {
};
struct GetPlayerStatisticsRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetPlayerStatisticsRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetPlayerStatisticsRequest__VTable vtable;
};
struct GetPlayerStatisticsResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetPlayerStatisticsResult__StaticFields {
};
struct GetPlayerStatisticsResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetPlayerStatisticsResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetPlayerStatisticsResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_GetPlayerStatisticsResult___VTable {
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
struct Action_1_PlayFab_ClientModels_GetPlayerStatisticsResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_GetPlayerStatisticsResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_GetPlayerStatisticsResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_GetPlayerStatisticsResult___VTable vtable;
};

struct GetPlayerStatisticVersionsRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * StatisticName;
};
struct GetPlayerStatisticVersionsRequest {
  struct GetPlayerStatisticVersionsRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetPlayerStatisticVersionsRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_GetPlayerStatisticVersionsResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_GetPlayerStatisticVersionsResult_ {
  struct Action_1_PlayFab_ClientModels_GetPlayerStatisticVersionsResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_GetPlayerStatisticVersionsResult___Fields fields;
};
struct GetPlayerStatisticVersionsResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ClientModels_PlayerStatisticVersion_ * StatisticVersions;
};
struct GetPlayerStatisticVersionsResult {
  struct GetPlayerStatisticVersionsResult__Class *klass;
  struct MonitorData *monitor;
  struct GetPlayerStatisticVersionsResult__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_ClientModels_PlayerStatisticVersion___Fields {
  struct PlayerStatisticVersion__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ClientModels_PlayerStatisticVersion_ {
  struct List_1_PlayFab_ClientModels_PlayerStatisticVersion___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ClientModels_PlayerStatisticVersion___Fields fields;
};
struct __declspec(align(8)) PlayerStatisticVersion__Fields {
  struct DateTime ActivationTime;
  struct Nullable_1_DateTime_ DeactivationTime;
  struct Nullable_1_DateTime_ ScheduledActivationTime;
  struct Nullable_1_DateTime_ ScheduledDeactivationTime;
  struct String * StatisticName;
  uint32_t Version;
};
struct PlayerStatisticVersion {
  struct PlayerStatisticVersion__Class *klass;
  struct MonitorData *monitor;
  struct PlayerStatisticVersion__Fields fields;
};
struct PlayerStatisticVersion__Array {
  struct PlayerStatisticVersion__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PlayerStatisticVersion * vector[32];
};
struct IEnumerator_1_PlayFab_ClientModels_PlayerStatisticVersion_ {
  struct IEnumerator_1_PlayFab_ClientModels_PlayerStatisticVersion___Class *klass;
  struct MonitorData *monitor;
};
struct GetPlayerStatisticVersionsRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetPlayerStatisticVersionsRequest__StaticFields {
};
struct GetPlayerStatisticVersionsRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetPlayerStatisticVersionsRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetPlayerStatisticVersionsRequest__VTable vtable;
};
struct PlayerStatisticVersion__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerStatisticVersion__StaticFields {
};
struct PlayerStatisticVersion__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerStatisticVersion__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerStatisticVersion__VTable vtable;
};
struct IEnumerator_1_PlayFab_ClientModels_PlayerStatisticVersion___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ClientModels_PlayerStatisticVersion___StaticFields {
};
struct IEnumerator_1_PlayFab_ClientModels_PlayerStatisticVersion___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ClientModels_PlayerStatisticVersion___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ClientModels_PlayerStatisticVersion___VTable vtable;
};
struct List_1_PlayFab_ClientModels_PlayerStatisticVersion___VTable {
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
struct List_1_PlayFab_ClientModels_PlayerStatisticVersion___StaticFields {
  struct PlayerStatisticVersion__Array * _emptyArray;
};
struct List_1_PlayFab_ClientModels_PlayerStatisticVersion___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_ClientModels_PlayerStatisticVersion___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_ClientModels_PlayerStatisticVersion___VTable vtable;
};
struct GetPlayerStatisticVersionsResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetPlayerStatisticVersionsResult__StaticFields {
};
struct GetPlayerStatisticVersionsResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetPlayerStatisticVersionsResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetPlayerStatisticVersionsResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_GetPlayerStatisticVersionsResult___VTable {
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
struct Action_1_PlayFab_ClientModels_GetPlayerStatisticVersionsResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_GetPlayerStatisticVersionsResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_GetPlayerStatisticVersionsResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_GetPlayerStatisticVersionsResult___VTable vtable;
};}