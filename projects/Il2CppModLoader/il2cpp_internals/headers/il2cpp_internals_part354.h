namespace app {
struct __declspec(align(8)) List_1_PlayFab_ServerModels_PlayerLinkedAccount___Fields {
  struct PlayerLinkedAccount__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ServerModels_PlayerLinkedAccount_ {
  struct List_1_PlayFab_ServerModels_PlayerLinkedAccount___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ServerModels_PlayerLinkedAccount___Fields fields;
};
struct __declspec(align(8)) PlayerLinkedAccount__Fields {
  struct String * Email;
  struct Nullable_1_PlayFab_ServerModels_LoginIdentityProvider_ Platform;
  struct String * PlatformUserId;
  struct String * Username;
};
struct PlayerLinkedAccount {
  struct PlayerLinkedAccount__Class *klass;
  struct MonitorData *monitor;
  struct PlayerLinkedAccount__Fields fields;
};
struct PlayerLinkedAccount__Array {
  struct PlayerLinkedAccount__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PlayerLinkedAccount * vector[32];
};
struct IEnumerator_1_PlayFab_ServerModels_PlayerLinkedAccount_ {
  struct IEnumerator_1_PlayFab_ServerModels_PlayerLinkedAccount___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_String_PlayFab_ServerModels_PlayerLocation___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ServerModels_PlayerLocation___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ServerModels_PlayerLocation_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ServerModels_PlayerLocation_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_PlayFab_ServerModels_PlayerLocation_ {
  struct Dictionary_2_System_String_PlayFab_ServerModels_PlayerLocation___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_PlayFab_ServerModels_PlayerLocation___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ServerModels_PlayerLocation_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct PlayerLocation * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ServerModels_PlayerLocation___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ServerModels_PlayerLocation___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ServerModels_PlayerLocation_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ServerModels_PlayerLocation___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ServerModels_PlayerLocation___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ServerModels_PlayerLocation_ vector[32];
};
struct __declspec(align(8)) PlayerLocation__Fields {
  struct String * City;
  enum ContinentCode__Enum_1 ContinentCode;
  enum CountryCode__Enum_1 CountryCode;
  struct Nullable_1_Double_ Latitude;
  struct Nullable_1_Double_ Longitude;
};
struct PlayerLocation {
  struct PlayerLocation__Class *klass;
  struct MonitorData *monitor;
  struct PlayerLocation__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ServerModels_PlayerLocation___Fields {
  struct Dictionary_2_System_String_PlayFab_ServerModels_PlayerLocation_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ServerModels_PlayerLocation_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ServerModels_PlayerLocation___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ServerModels_PlayerLocation___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ServerModels_PlayerLocation___Fields {
  struct Dictionary_2_System_String_PlayFab_ServerModels_PlayerLocation_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ServerModels_PlayerLocation_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ServerModels_PlayerLocation___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ServerModels_PlayerLocation___Fields fields;
};
struct PlayerLocation__Array {
  struct PlayerLocation__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PlayerLocation * vector[32];
};
struct IEnumerator_1_PlayFab_ServerModels_PlayerLocation_ {
  struct IEnumerator_1_PlayFab_ServerModels_PlayerLocation___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_PlayFab_ServerModels_PlayerLocation_ {
  struct ICollection_1_PlayFab_ServerModels_PlayerLocation___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_PlayFab_ServerModels_PlayerLocation_ {
  struct String * key;
  struct PlayerLocation * value;
};
struct KeyValuePair_2_System_String_PlayFab_ServerModels_PlayerLocation___Boxed {
  struct KeyValuePair_2_System_String_PlayFab_ServerModels_PlayerLocation___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_PlayFab_ServerModels_PlayerLocation_ fields;
};
struct KeyValuePair_2_System_String_PlayFab_ServerModels_PlayerLocation___Array {
  struct KeyValuePair_2_System_String_PlayFab_ServerModels_PlayerLocation___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_PlayFab_ServerModels_PlayerLocation_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ServerModels_PlayerLocation_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ServerModels_PlayerLocation___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_PlayFab_ServerModels_PlayerLocation_ {
  struct IEnumerable_1_PlayFab_ServerModels_PlayerLocation___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_PlayFab_ServerModels_PlayerStatistic___Fields {
  struct PlayerStatistic__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ServerModels_PlayerStatistic_ {
  struct List_1_PlayFab_ServerModels_PlayerStatistic___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ServerModels_PlayerStatistic___Fields fields;
};
struct __declspec(align(8)) PlayerStatistic__Fields {
  struct String * Id;
  struct String * Name;
  int32_t StatisticValue;
  int32_t StatisticVersion;
};
struct PlayerStatistic {
  struct PlayerStatistic__Class *klass;
  struct MonitorData *monitor;
  struct PlayerStatistic__Fields fields;
};
struct PlayerStatistic__Array {
  struct PlayerStatistic__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PlayerStatistic * vector[32];
};
struct IEnumerator_1_PlayFab_ServerModels_PlayerStatistic_ {
  struct IEnumerator_1_PlayFab_ServerModels_PlayerStatistic___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_PlayFab_ServerModels_PushNotificationRegistration___Fields {
  struct PushNotificationRegistration__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ServerModels_PushNotificationRegistration_ {
  struct List_1_PlayFab_ServerModels_PushNotificationRegistration___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ServerModels_PushNotificationRegistration___Fields fields;
};
struct __declspec(align(8)) PushNotificationRegistration__Fields {
  struct String * NotificationEndpointARN;
  struct Nullable_1_PlayFab_ServerModels_PushNotificationPlatform_ Platform;
};
struct PushNotificationRegistration {
  struct PushNotificationRegistration__Class *klass;
  struct MonitorData *monitor;
  struct PushNotificationRegistration__Fields fields;
};
struct PushNotificationRegistration__Array {
  struct PushNotificationRegistration__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PushNotificationRegistration * vector[32];
};
struct IEnumerator_1_PlayFab_ServerModels_PushNotificationRegistration_ {
  struct IEnumerator_1_PlayFab_ServerModels_PushNotificationRegistration___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_PlayFab_ServerModels_PlayerProfile_ {
  struct IEnumerator_1_PlayFab_ServerModels_PlayerProfile___Class *klass;
  struct MonitorData *monitor;
};
struct GetPlayersInSegmentRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetPlayersInSegmentRequest__StaticFields {
};
struct GetPlayersInSegmentRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetPlayersInSegmentRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetPlayersInSegmentRequest__VTable vtable;
};
struct AdCampaignAttribution__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AdCampaignAttribution__StaticFields {
};
struct AdCampaignAttribution__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AdCampaignAttribution__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AdCampaignAttribution__VTable vtable;
};
struct IEnumerator_1_PlayFab_ServerModels_AdCampaignAttribution___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ServerModels_AdCampaignAttribution___StaticFields {
};
struct IEnumerator_1_PlayFab_ServerModels_AdCampaignAttribution___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ServerModels_AdCampaignAttribution___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ServerModels_AdCampaignAttribution___VTable vtable;
};
struct List_1_PlayFab_ServerModels_AdCampaignAttribution___VTable {
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
struct List_1_PlayFab_ServerModels_AdCampaignAttribution___StaticFields {
  struct AdCampaignAttribution__Array * _emptyArray;
};
struct List_1_PlayFab_ServerModels_AdCampaignAttribution___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_ServerModels_AdCampaignAttribution___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_ServerModels_AdCampaignAttribution___VTable vtable;
};
struct ContactEmailInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ContactEmailInfo__StaticFields {
};
struct ContactEmailInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ContactEmailInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ContactEmailInfo__VTable vtable;
};
struct IEnumerator_1_PlayFab_ServerModels_ContactEmailInfo___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ServerModels_ContactEmailInfo___StaticFields {
};
struct IEnumerator_1_PlayFab_ServerModels_ContactEmailInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ServerModels_ContactEmailInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ServerModels_ContactEmailInfo___VTable vtable;
};
struct List_1_PlayFab_ServerModels_ContactEmailInfo___VTable {
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
struct List_1_PlayFab_ServerModels_ContactEmailInfo___StaticFields {
  struct ContactEmailInfo__Array * _emptyArray;
};
struct List_1_PlayFab_ServerModels_ContactEmailInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_ServerModels_ContactEmailInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_ServerModels_ContactEmailInfo___VTable vtable;
};
struct PlayerLinkedAccount__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerLinkedAccount__StaticFields {
};
struct PlayerLinkedAccount__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerLinkedAccount__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerLinkedAccount__VTable vtable;
};
struct IEnumerator_1_PlayFab_ServerModels_PlayerLinkedAccount___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ServerModels_PlayerLinkedAccount___StaticFields {
};
struct IEnumerator_1_PlayFab_ServerModels_PlayerLinkedAccount___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ServerModels_PlayerLinkedAccount___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ServerModels_PlayerLinkedAccount___VTable vtable;
};
struct List_1_PlayFab_ServerModels_PlayerLinkedAccount___VTable {
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
struct List_1_PlayFab_ServerModels_PlayerLinkedAccount___StaticFields {
  struct PlayerLinkedAccount__Array * _emptyArray;
};
struct List_1_PlayFab_ServerModels_PlayerLinkedAccount___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_ServerModels_PlayerLinkedAccount___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_ServerModels_PlayerLinkedAccount___VTable vtable;
};
struct PlayerLocation__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerLocation__StaticFields {
};
struct PlayerLocation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerLocation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerLocation__VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ServerModels_PlayerLocation___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ServerModels_PlayerLocation___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ServerModels_PlayerLocation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ServerModels_PlayerLocation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ServerModels_PlayerLocation___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ServerModels_PlayerLocation___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ServerModels_PlayerLocation___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ServerModels_PlayerLocation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ServerModels_PlayerLocation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ServerModels_PlayerLocation___VTable vtable;
};
struct IEnumerator_1_PlayFab_ServerModels_PlayerLocation___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ServerModels_PlayerLocation___StaticFields {
};
struct IEnumerator_1_PlayFab_ServerModels_PlayerLocation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ServerModels_PlayerLocation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ServerModels_PlayerLocation___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ServerModels_PlayerLocation___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ServerModels_PlayerLocation___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ServerModels_PlayerLocation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ServerModels_PlayerLocation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ServerModels_PlayerLocation___VTable vtable;
};
struct ICollection_1_PlayFab_ServerModels_PlayerLocation___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_PlayFab_ServerModels_PlayerLocation___StaticFields {
};
struct ICollection_1_PlayFab_ServerModels_PlayerLocation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_PlayFab_ServerModels_PlayerLocation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_PlayFab_ServerModels_PlayerLocation___VTable vtable;
};
struct KeyValuePair_2_System_String_PlayFab_ServerModels_PlayerLocation___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_String_PlayFab_ServerModels_PlayerLocation___StaticFields {
};
struct KeyValuePair_2_System_String_PlayFab_ServerModels_PlayerLocation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_String_PlayFab_ServerModels_PlayerLocation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_String_PlayFab_ServerModels_PlayerLocation___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ServerModels_PlayerLocation___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ServerModels_PlayerLocation___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ServerModels_PlayerLocation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ServerModels_PlayerLocation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ServerModels_PlayerLocation___VTable vtable;
};
struct IEnumerable_1_PlayFab_ServerModels_PlayerLocation___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_PlayFab_ServerModels_PlayerLocation___StaticFields {
};
struct IEnumerable_1_PlayFab_ServerModels_PlayerLocation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_PlayFab_ServerModels_PlayerLocation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_PlayFab_ServerModels_PlayerLocation___VTable vtable;
};
struct Dictionary_2_System_String_PlayFab_ServerModels_PlayerLocation___VTable {
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
struct Dictionary_2_System_String_PlayFab_ServerModels_PlayerLocation___StaticFields {
};
struct Dictionary_2_System_String_PlayFab_ServerModels_PlayerLocation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_String_PlayFab_ServerModels_PlayerLocation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_String_PlayFab_ServerModels_PlayerLocation___VTable vtable;
};
struct PlayerStatistic__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerStatistic__StaticFields {
};
struct PlayerStatistic__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerStatistic__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerStatistic__VTable vtable;
};
struct IEnumerator_1_PlayFab_ServerModels_PlayerStatistic___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ServerModels_PlayerStatistic___StaticFields {
};
struct IEnumerator_1_PlayFab_ServerModels_PlayerStatistic___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ServerModels_PlayerStatistic___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ServerModels_PlayerStatistic___VTable vtable;
};
struct List_1_PlayFab_ServerModels_PlayerStatistic___VTable {
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
struct List_1_PlayFab_ServerModels_PlayerStatistic___StaticFields {
  struct PlayerStatistic__Array * _emptyArray;
};
struct List_1_PlayFab_ServerModels_PlayerStatistic___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_ServerModels_PlayerStatistic___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_ServerModels_PlayerStatistic___VTable vtable;
};
struct PushNotificationRegistration__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PushNotificationRegistration__StaticFields {
};
struct PushNotificationRegistration__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PushNotificationRegistration__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PushNotificationRegistration__VTable vtable;
};
struct IEnumerator_1_PlayFab_ServerModels_PushNotificationRegistration___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ServerModels_PushNotificationRegistration___StaticFields {
};
struct IEnumerator_1_PlayFab_ServerModels_PushNotificationRegistration___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ServerModels_PushNotificationRegistration___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ServerModels_PushNotificationRegistration___VTable vtable;
};
struct List_1_PlayFab_ServerModels_PushNotificationRegistration___VTable {
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
struct List_1_PlayFab_ServerModels_PushNotificationRegistration___StaticFields {
  struct PushNotificationRegistration__Array * _emptyArray;
};
struct List_1_PlayFab_ServerModels_PushNotificationRegistration___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_ServerModels_PushNotificationRegistration___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_ServerModels_PushNotificationRegistration___VTable vtable;
};
struct PlayerProfile__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerProfile__StaticFields {
};
struct PlayerProfile__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerProfile__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerProfile__VTable vtable;
};
struct IEnumerator_1_PlayFab_ServerModels_PlayerProfile___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ServerModels_PlayerProfile___StaticFields {
};
struct IEnumerator_1_PlayFab_ServerModels_PlayerProfile___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ServerModels_PlayerProfile___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ServerModels_PlayerProfile___VTable vtable;
};
struct List_1_PlayFab_ServerModels_PlayerProfile___VTable {
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
struct List_1_PlayFab_ServerModels_PlayerProfile___StaticFields {
  struct PlayerProfile__Array * _emptyArray;
};
struct List_1_PlayFab_ServerModels_PlayerProfile___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_ServerModels_PlayerProfile___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_ServerModels_PlayerProfile___VTable vtable;
};
struct GetPlayersInSegmentResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetPlayersInSegmentResult__StaticFields {
};
struct GetPlayersInSegmentResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetPlayersInSegmentResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetPlayersInSegmentResult__VTable vtable;
};
struct Action_1_PlayFab_ServerModels_GetPlayersInSegmentResult___VTable {
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
struct Action_1_PlayFab_ServerModels_GetPlayersInSegmentResult___StaticFields {
};
struct Action_1_PlayFab_ServerModels_GetPlayersInSegmentResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ServerModels_GetPlayersInSegmentResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ServerModels_GetPlayersInSegmentResult___VTable vtable;
};

struct GetPlayerStatisticsRequest_1__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * PlayFabId;
  struct List_1_System_String_ * StatisticNames;
  struct List_1_PlayFab_ServerModels_StatisticNameVersion_ * StatisticNameVersions;
};
struct GetPlayerStatisticsRequest_1 {
  struct GetPlayerStatisticsRequest_1__Class *klass;
  struct MonitorData *monitor;
  struct GetPlayerStatisticsRequest_1__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_ServerModels_StatisticNameVersion___Fields {
  struct StatisticNameVersion_1__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ServerModels_StatisticNameVersion_ {
  struct List_1_PlayFab_ServerModels_StatisticNameVersion___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ServerModels_StatisticNameVersion___Fields fields;
};
struct __declspec(align(8)) StatisticNameVersion_1__Fields {
  struct String * StatisticName;
  uint32_t Version;
};
struct StatisticNameVersion_1 {
  struct StatisticNameVersion_1__Class *klass;
  struct MonitorData *monitor;
  struct StatisticNameVersion_1__Fields fields;
};
struct StatisticNameVersion_1__Array {
  struct StatisticNameVersion_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct StatisticNameVersion_1 * vector[32];
};
struct IEnumerator_1_PlayFab_ServerModels_StatisticNameVersion_ {
  struct IEnumerator_1_PlayFab_ServerModels_StatisticNameVersion___Class *klass;
  struct MonitorData *monitor;
};
struct Action_1_PlayFab_ServerModels_GetPlayerStatisticsResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ServerModels_GetPlayerStatisticsResult_ {
  struct Action_1_PlayFab_ServerModels_GetPlayerStatisticsResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ServerModels_GetPlayerStatisticsResult___Fields fields;
};
struct GetPlayerStatisticsResult_1__Fields {
  struct PlayFabResultCommon__Fields _;
  struct String * PlayFabId;
  struct List_1_PlayFab_ServerModels_StatisticValue_ * Statistics;
};}