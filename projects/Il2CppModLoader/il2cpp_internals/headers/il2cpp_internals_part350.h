namespace app {
struct GetCharacterDataResult_1__StaticFields {
};
struct GetCharacterDataResult_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetCharacterDataResult_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetCharacterDataResult_1__VTable vtable;
};
struct Action_1_PlayFab_ServerModels_GetCharacterDataResult___VTable {
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
struct Action_1_PlayFab_ServerModels_GetCharacterDataResult___StaticFields {
};
struct Action_1_PlayFab_ServerModels_GetCharacterDataResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ServerModels_GetCharacterDataResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ServerModels_GetCharacterDataResult___VTable vtable;
};

struct GetCharacterInventoryRequest_1__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * CatalogVersion;
  struct String * CharacterId;
  struct String * PlayFabId;
};
struct GetCharacterInventoryRequest_1 {
  struct GetCharacterInventoryRequest_1__Class *klass;
  struct MonitorData *monitor;
  struct GetCharacterInventoryRequest_1__Fields fields;
};
struct Action_1_PlayFab_ServerModels_GetCharacterInventoryResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ServerModels_GetCharacterInventoryResult_ {
  struct Action_1_PlayFab_ServerModels_GetCharacterInventoryResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ServerModels_GetCharacterInventoryResult___Fields fields;
};
struct GetCharacterInventoryResult_1__Fields {
  struct PlayFabResultCommon__Fields _;
  struct String * CharacterId;
  struct List_1_PlayFab_ServerModels_ItemInstance_ * Inventory;
  struct String * PlayFabId;
  struct Dictionary_2_System_String_System_Int32_ * VirtualCurrency;
  struct Dictionary_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime_ * VirtualCurrencyRechargeTimes;
};
struct GetCharacterInventoryResult_1 {
  struct GetCharacterInventoryResult_1__Class *klass;
  struct MonitorData *monitor;
  struct GetCharacterInventoryResult_1__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_ServerModels_ItemInstance___Fields {
  struct ItemInstance_2__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ServerModels_ItemInstance_ {
  struct List_1_PlayFab_ServerModels_ItemInstance___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ServerModels_ItemInstance___Fields fields;
};
struct __declspec(align(8)) ItemInstance_2__Fields {
  struct String * Annotation;
  struct List_1_System_String_ * BundleContents;
  struct String * BundleParent;
  struct String * CatalogVersion;
  struct Dictionary_2_System_String_System_String_ * CustomData;
  struct String * DisplayName;
  struct Nullable_1_DateTime_ Expiration;
  struct String * ItemClass;
  struct String * ItemId;
  struct String * ItemInstanceId;
  struct Nullable_1_DateTime_ PurchaseDate;
  struct Nullable_1_Int32_ RemainingUses;
  struct String * UnitCurrency;
  uint32_t UnitPrice;
  struct Nullable_1_Int32_ UsesIncrementedBy;
};
struct ItemInstance_2 {
  struct ItemInstance_2__Class *klass;
  struct MonitorData *monitor;
  struct ItemInstance_2__Fields fields;
};
struct ItemInstance_2__Array {
  struct ItemInstance_2__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ItemInstance_2 * vector[32];
};
struct IEnumerator_1_PlayFab_ServerModels_ItemInstance_ {
  struct IEnumerator_1_PlayFab_ServerModels_ItemInstance___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime_ {
  struct Dictionary_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct VirtualCurrencyRechargeTime_2 * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime_ vector[32];
};
struct __declspec(align(8)) VirtualCurrencyRechargeTime_2__Fields {
  int32_t RechargeMax;
  struct DateTime RechargeTime;
  int32_t SecondsToRecharge;
};
struct VirtualCurrencyRechargeTime_2 {
  struct VirtualCurrencyRechargeTime_2__Class *klass;
  struct MonitorData *monitor;
  struct VirtualCurrencyRechargeTime_2__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Fields {
  struct Dictionary_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Fields {
  struct Dictionary_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Fields fields;
};
struct VirtualCurrencyRechargeTime_2__Array {
  struct VirtualCurrencyRechargeTime_2__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct VirtualCurrencyRechargeTime_2 * vector[32];
};
struct IEnumerator_1_PlayFab_ServerModels_VirtualCurrencyRechargeTime_ {
  struct IEnumerator_1_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_PlayFab_ServerModels_VirtualCurrencyRechargeTime_ {
  struct ICollection_1_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime_ {
  struct String * key;
  struct VirtualCurrencyRechargeTime_2 * value;
};
struct KeyValuePair_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Boxed {
  struct KeyValuePair_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime_ fields;
};
struct KeyValuePair_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Array {
  struct KeyValuePair_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_PlayFab_ServerModels_VirtualCurrencyRechargeTime_ {
  struct IEnumerable_1_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Class *klass;
  struct MonitorData *monitor;
};
struct GetCharacterInventoryRequest_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetCharacterInventoryRequest_1__StaticFields {
};
struct GetCharacterInventoryRequest_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetCharacterInventoryRequest_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetCharacterInventoryRequest_1__VTable vtable;
};
struct ItemInstance_2__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ItemInstance_2__StaticFields {
};
struct ItemInstance_2__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ItemInstance_2__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ItemInstance_2__VTable vtable;
};
struct IEnumerator_1_PlayFab_ServerModels_ItemInstance___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ServerModels_ItemInstance___StaticFields {
};
struct IEnumerator_1_PlayFab_ServerModels_ItemInstance___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ServerModels_ItemInstance___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ServerModels_ItemInstance___VTable vtable;
};
struct List_1_PlayFab_ServerModels_ItemInstance___VTable {
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
struct List_1_PlayFab_ServerModels_ItemInstance___StaticFields {
  struct ItemInstance_2__Array * _emptyArray;
};
struct List_1_PlayFab_ServerModels_ItemInstance___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_ServerModels_ItemInstance___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_ServerModels_ItemInstance___VTable vtable;
};
struct VirtualCurrencyRechargeTime_2__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VirtualCurrencyRechargeTime_2__StaticFields {
};
struct VirtualCurrencyRechargeTime_2__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VirtualCurrencyRechargeTime_2__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VirtualCurrencyRechargeTime_2__VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___VTable vtable;
};
struct IEnumerator_1_PlayFab_ServerModels_VirtualCurrencyRechargeTime___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ServerModels_VirtualCurrencyRechargeTime___StaticFields {
};
struct IEnumerator_1_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ServerModels_VirtualCurrencyRechargeTime___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ServerModels_VirtualCurrencyRechargeTime___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___VTable vtable;
};
struct ICollection_1_PlayFab_ServerModels_VirtualCurrencyRechargeTime___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_PlayFab_ServerModels_VirtualCurrencyRechargeTime___StaticFields {
};
struct ICollection_1_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_PlayFab_ServerModels_VirtualCurrencyRechargeTime___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_PlayFab_ServerModels_VirtualCurrencyRechargeTime___VTable vtable;
};
struct KeyValuePair_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___StaticFields {
};
struct KeyValuePair_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___VTable vtable;
};
struct IEnumerable_1_PlayFab_ServerModels_VirtualCurrencyRechargeTime___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_PlayFab_ServerModels_VirtualCurrencyRechargeTime___StaticFields {
};
struct IEnumerable_1_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_PlayFab_ServerModels_VirtualCurrencyRechargeTime___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_PlayFab_ServerModels_VirtualCurrencyRechargeTime___VTable vtable;
};
struct Dictionary_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
  VirtualInvokeData ContainsKey;
  VirtualInvokeData Add;
  VirtualInvokeData Remove;
  VirtualInvokeData TryGetValue;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
  VirtualInvokeData Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IDictionary_get_Item;
  VirtualInvokeData System_Collections_IDictionary_set_Item;
  VirtualInvokeData System_Collections_IDictionary_get_Keys;
  VirtualInvokeData System_Collections_IDictionary_get_Values;
  VirtualInvokeData System_Collections_IDictionary_Contains;
  VirtualInvokeData System_Collections_IDictionary_Add;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
  VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
  VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
  VirtualInvokeData System_Collections_IDictionary_Remove;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData ContainsKey_1;
  VirtualInvokeData TryGetValue_1;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
  VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
  VirtualInvokeData get_Count_2;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData OnDeserialization;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData OnDeserialization_1;
};
struct Dictionary_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___StaticFields {
};
struct Dictionary_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___VTable vtable;
};
struct GetCharacterInventoryResult_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetCharacterInventoryResult_1__StaticFields {
};
struct GetCharacterInventoryResult_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetCharacterInventoryResult_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetCharacterInventoryResult_1__VTable vtable;
};
struct Action_1_PlayFab_ServerModels_GetCharacterInventoryResult___VTable {
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
struct Action_1_PlayFab_ServerModels_GetCharacterInventoryResult___StaticFields {
};
struct Action_1_PlayFab_ServerModels_GetCharacterInventoryResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ServerModels_GetCharacterInventoryResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ServerModels_GetCharacterInventoryResult___VTable vtable;
};

struct GetCharacterLeaderboardRequest_1__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * CharacterType;
  int32_t MaxResultsCount;
  int32_t StartPosition;
  struct String * StatisticName;
};
struct GetCharacterLeaderboardRequest_1 {
  struct GetCharacterLeaderboardRequest_1__Class *klass;
  struct MonitorData *monitor;
  struct GetCharacterLeaderboardRequest_1__Fields fields;
};
struct Action_1_PlayFab_ServerModels_GetCharacterLeaderboardResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ServerModels_GetCharacterLeaderboardResult_ {
  struct Action_1_PlayFab_ServerModels_GetCharacterLeaderboardResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ServerModels_GetCharacterLeaderboardResult___Fields fields;
};
struct GetCharacterLeaderboardResult_1__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ServerModels_CharacterLeaderboardEntry_ * Leaderboard;
};
struct GetCharacterLeaderboardResult_1 {
  struct GetCharacterLeaderboardResult_1__Class *klass;
  struct MonitorData *monitor;
  struct GetCharacterLeaderboardResult_1__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_ServerModels_CharacterLeaderboardEntry___Fields {
  struct CharacterLeaderboardEntry_1__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ServerModels_CharacterLeaderboardEntry_ {
  struct List_1_PlayFab_ServerModels_CharacterLeaderboardEntry___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ServerModels_CharacterLeaderboardEntry___Fields fields;
};
struct __declspec(align(8)) CharacterLeaderboardEntry_1__Fields {
  struct String * CharacterId;
  struct String * CharacterName;
  struct String * CharacterType;
  struct String * DisplayName;
  struct String * PlayFabId;
  int32_t Position;
  int32_t StatValue;
};
struct CharacterLeaderboardEntry_1 {
  struct CharacterLeaderboardEntry_1__Class *klass;
  struct MonitorData *monitor;
  struct CharacterLeaderboardEntry_1__Fields fields;
};
struct CharacterLeaderboardEntry_1__Array {
  struct CharacterLeaderboardEntry_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CharacterLeaderboardEntry_1 * vector[32];
};
struct IEnumerator_1_PlayFab_ServerModels_CharacterLeaderboardEntry_ {
  struct IEnumerator_1_PlayFab_ServerModels_CharacterLeaderboardEntry___Class *klass;
  struct MonitorData *monitor;
};
struct GetCharacterLeaderboardRequest_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetCharacterLeaderboardRequest_1__StaticFields {
};
struct GetCharacterLeaderboardRequest_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetCharacterLeaderboardRequest_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetCharacterLeaderboardRequest_1__VTable vtable;
};
struct CharacterLeaderboardEntry_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CharacterLeaderboardEntry_1__StaticFields {
};
struct CharacterLeaderboardEntry_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharacterLeaderboardEntry_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharacterLeaderboardEntry_1__VTable vtable;
};
struct IEnumerator_1_PlayFab_ServerModels_CharacterLeaderboardEntry___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ServerModels_CharacterLeaderboardEntry___StaticFields {
};
struct IEnumerator_1_PlayFab_ServerModels_CharacterLeaderboardEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ServerModels_CharacterLeaderboardEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ServerModels_CharacterLeaderboardEntry___VTable vtable;
};
struct List_1_PlayFab_ServerModels_CharacterLeaderboardEntry___VTable {
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
struct List_1_PlayFab_ServerModels_CharacterLeaderboardEntry___StaticFields {
  struct CharacterLeaderboardEntry_1__Array * _emptyArray;
};
struct List_1_PlayFab_ServerModels_CharacterLeaderboardEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_ServerModels_CharacterLeaderboardEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_ServerModels_CharacterLeaderboardEntry___VTable vtable;
};
struct GetCharacterLeaderboardResult_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetCharacterLeaderboardResult_1__StaticFields {
};
struct GetCharacterLeaderboardResult_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetCharacterLeaderboardResult_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetCharacterLeaderboardResult_1__VTable vtable;
};
struct Action_1_PlayFab_ServerModels_GetCharacterLeaderboardResult___VTable {
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
struct Action_1_PlayFab_ServerModels_GetCharacterLeaderboardResult___StaticFields {
};
struct Action_1_PlayFab_ServerModels_GetCharacterLeaderboardResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ServerModels_GetCharacterLeaderboardResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ServerModels_GetCharacterLeaderboardResult___VTable vtable;
};

struct GetCharacterStatisticsRequest_1__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * CharacterId;
  struct String * PlayFabId;
};
struct GetCharacterStatisticsRequest_1 {
  struct GetCharacterStatisticsRequest_1__Class *klass;
  struct MonitorData *monitor;
  struct GetCharacterStatisticsRequest_1__Fields fields;
};
struct Action_1_PlayFab_ServerModels_GetCharacterStatisticsResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ServerModels_GetCharacterStatisticsResult_ {
  struct Action_1_PlayFab_ServerModels_GetCharacterStatisticsResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ServerModels_GetCharacterStatisticsResult___Fields fields;
};
struct GetCharacterStatisticsResult_1__Fields {
  struct PlayFabResultCommon__Fields _;
  struct String * CharacterId;
  struct Dictionary_2_System_String_System_Int32_ * CharacterStatistics;
  struct String * PlayFabId;
};
struct GetCharacterStatisticsResult_1 {
  struct GetCharacterStatisticsResult_1__Class *klass;
  struct MonitorData *monitor;
  struct GetCharacterStatisticsResult_1__Fields fields;
};
struct GetCharacterStatisticsRequest_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetCharacterStatisticsRequest_1__StaticFields {
};
struct GetCharacterStatisticsRequest_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetCharacterStatisticsRequest_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetCharacterStatisticsRequest_1__VTable vtable;
};
struct GetCharacterStatisticsResult_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetCharacterStatisticsResult_1__StaticFields {
};
struct GetCharacterStatisticsResult_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetCharacterStatisticsResult_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetCharacterStatisticsResult_1__VTable vtable;
};
struct Action_1_PlayFab_ServerModels_GetCharacterStatisticsResult___VTable {
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
struct Action_1_PlayFab_ServerModels_GetCharacterStatisticsResult___StaticFields {
};
struct Action_1_PlayFab_ServerModels_GetCharacterStatisticsResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ServerModels_GetCharacterStatisticsResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ServerModels_GetCharacterStatisticsResult___VTable vtable;
};

struct GetContentDownloadUrlRequest_1__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * HttpMethod;
  struct String * Key;
  struct Nullable_1_Boolean_ ThruCDN;
};
struct GetContentDownloadUrlRequest_1 {
  struct GetContentDownloadUrlRequest_1__Class *klass;
  struct MonitorData *monitor;
  struct GetContentDownloadUrlRequest_1__Fields fields;
};
struct Action_1_PlayFab_ServerModels_GetContentDownloadUrlResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ServerModels_GetContentDownloadUrlResult_ {
  struct Action_1_PlayFab_ServerModels_GetContentDownloadUrlResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ServerModels_GetContentDownloadUrlResult___Fields fields;
};
struct GetContentDownloadUrlResult_1__Fields {
  struct PlayFabResultCommon__Fields _;
  struct String * URL;
};
struct GetContentDownloadUrlResult_1 {
  struct GetContentDownloadUrlResult_1__Class *klass;
  struct MonitorData *monitor;
  struct GetContentDownloadUrlResult_1__Fields fields;
};
struct GetContentDownloadUrlRequest_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetContentDownloadUrlRequest_1__StaticFields {
};
struct GetContentDownloadUrlRequest_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetContentDownloadUrlRequest_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetContentDownloadUrlRequest_1__VTable vtable;
};
struct GetContentDownloadUrlResult_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetContentDownloadUrlResult_1__StaticFields {
};
struct GetContentDownloadUrlResult_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetContentDownloadUrlResult_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetContentDownloadUrlResult_1__VTable vtable;
};
struct Action_1_PlayFab_ServerModels_GetContentDownloadUrlResult___VTable {
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
struct Action_1_PlayFab_ServerModels_GetContentDownloadUrlResult___StaticFields {
};
struct Action_1_PlayFab_ServerModels_GetContentDownloadUrlResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ServerModels_GetContentDownloadUrlResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ServerModels_GetContentDownloadUrlResult___VTable vtable;
};

struct GetFriendLeaderboardRequest_1__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct Nullable_1_Boolean_ IncludeFacebookFriends;
  struct Nullable_1_Boolean_ IncludeSteamFriends;
  int32_t MaxResultsCount;
  struct String * PlayFabId;
  struct PlayerProfileViewConstraints_1 * ProfileConstraints;
  int32_t StartPosition;
  struct String * StatisticName;
  struct Nullable_1_Int32_ Version;
  struct String * XboxToken;
};
struct GetFriendLeaderboardRequest_1 {
  struct GetFriendLeaderboardRequest_1__Class *klass;
  struct MonitorData *monitor;
  struct GetFriendLeaderboardRequest_1__Fields fields;
};
struct __declspec(align(8)) PlayerProfileViewConstraints_1__Fields {
  bool ShowAvatarUrl;
  bool ShowBannedUntil;
  bool ShowCampaignAttributions;
  bool ShowContactEmailAddresses;
  bool ShowCreated;
  bool ShowDisplayName;
  bool ShowLastLogin;
  bool ShowLinkedAccounts;
  bool ShowLocations;
  bool ShowMemberships;
  bool ShowOrigination;
  bool ShowPushNotificationRegistrations;
  bool ShowStatistics;
  bool ShowTags;
  bool ShowTotalValueToDateInUsd;
  bool ShowValuesToDate;
};
struct PlayerProfileViewConstraints_1 {
  struct PlayerProfileViewConstraints_1__Class *klass;
  struct MonitorData *monitor;
  struct PlayerProfileViewConstraints_1__Fields fields;
};
struct Action_1_PlayFab_ServerModels_GetLeaderboardResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ServerModels_GetLeaderboardResult_ {
  struct Action_1_PlayFab_ServerModels_GetLeaderboardResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ServerModels_GetLeaderboardResult___Fields fields;
};}