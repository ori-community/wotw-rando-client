namespace app {
struct __declspec(align(8)) List_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem___Fields {
  struct CouponGrantedInventoryItem__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem_ {
  struct List_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem___Fields fields;
};
struct __declspec(align(8)) CouponGrantedInventoryItem__Fields {
  struct String * CatalogVersion;
  struct String * InstanceId;
  struct String * ItemId;
};
struct CouponGrantedInventoryItem {
  struct CouponGrantedInventoryItem__Class *klass;
  struct MonitorData *monitor;
  struct CouponGrantedInventoryItem__Fields fields;
};
struct CouponGrantedInventoryItem__Array {
  struct CouponGrantedInventoryItem__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CouponGrantedInventoryItem * vector[32];
};
struct IEnumerator_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem_ {
  struct IEnumerator_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem___Class *klass;
  struct MonitorData *monitor;
};
struct CouponGrantedInventoryItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CouponGrantedInventoryItem__StaticFields {
};
struct CouponGrantedInventoryItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CouponGrantedInventoryItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CouponGrantedInventoryItem__VTable vtable;
};
struct IEnumerator_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem___StaticFields {
};
struct IEnumerator_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem___VTable vtable;
};
struct List_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem___VTable {
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
struct List_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem___StaticFields {
  struct CouponGrantedInventoryItem__Array * _emptyArray;
};
struct List_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem___VTable vtable;
};
struct PlayerRedeemedCouponEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerRedeemedCouponEventData__StaticFields {
};
struct PlayerRedeemedCouponEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerRedeemedCouponEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerRedeemedCouponEventData__VTable vtable;
};

enum PushNotificationPlatform__Enum_2 : int32_t {
  PushNotificationPlatform__Enum_2_ApplePushNotificationService = 0,
  PushNotificationPlatform__Enum_2_GoogleCloudMessaging = 1,
};
struct PushNotificationPlatform__Enum_2__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PushNotificationPlatform__Enum_2 value;
};
struct Nullable_1_PlayFab_PlayStreamModels_PushNotificationPlatform_ {
  enum PushNotificationPlatform__Enum_2 value;
  bool has_value;
};
struct Nullable_1_PlayFab_PlayStreamModels_PushNotificationPlatform___Boxed {
  struct Nullable_1_PlayFab_PlayStreamModels_PushNotificationPlatform___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_PlayStreamModels_PushNotificationPlatform_ fields;
};
struct PlayerRegisteredPushNotificationsEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * DeviceToken;
  struct Nullable_1_PlayFab_PlayStreamModels_PushNotificationPlatform_ Platform;
  struct String * TitleId;
};
struct PlayerRegisteredPushNotificationsEventData {
  struct PlayerRegisteredPushNotificationsEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerRegisteredPushNotificationsEventData__Fields fields;
};
struct Nullable_1_PlayFab_PlayStreamModels_PushNotificationPlatform___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_PlayFab_PlayStreamModels_PushNotificationPlatform___StaticFields {
};
struct Nullable_1_PlayFab_PlayStreamModels_PushNotificationPlatform___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_PlayFab_PlayStreamModels_PushNotificationPlatform___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_PlayFab_PlayStreamModels_PushNotificationPlatform___VTable vtable;
};
struct PlayerRegisteredPushNotificationsEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerRegisteredPushNotificationsEventData__StaticFields {
};
struct PlayerRegisteredPushNotificationsEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerRegisteredPushNotificationsEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerRegisteredPushNotificationsEventData__VTable vtable;
};

struct PlayerRemovedTitleEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * TitleId;
};
struct PlayerRemovedTitleEventData {
  struct PlayerRemovedTitleEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerRemovedTitleEventData__Fields fields;
};
struct PlayerRemovedTitleEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerRemovedTitleEventData__StaticFields {
};
struct PlayerRemovedTitleEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerRemovedTitleEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerRemovedTitleEventData__VTable vtable;
};

struct PlayerReportedAsAbusiveEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * Comment;
  struct String * ReportedByPlayer;
  struct String * TitleId;
};
struct PlayerReportedAsAbusiveEventData {
  struct PlayerReportedAsAbusiveEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerReportedAsAbusiveEventData__Fields fields;
};
struct PlayerReportedAsAbusiveEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerReportedAsAbusiveEventData__StaticFields {
};
struct PlayerReportedAsAbusiveEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerReportedAsAbusiveEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerReportedAsAbusiveEventData__VTable vtable;
};

enum PlayerProfileProperty__Enum : int32_t {
  PlayerProfileProperty__Enum_TotalValueToDateInUSD = 0,
  PlayerProfileProperty__Enum_PlayerValuesToDate = 1,
};
struct PlayerProfileProperty__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PlayerProfileProperty__Enum value;
};
struct Nullable_1_PlayFab_PlayStreamModels_PlayerProfileProperty_ {
  enum PlayerProfileProperty__Enum value;
  bool has_value;
};
struct Nullable_1_PlayFab_PlayStreamModels_PlayerProfileProperty___Boxed {
  struct Nullable_1_PlayFab_PlayStreamModels_PlayerProfileProperty___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_PlayStreamModels_PlayerProfileProperty_ fields;
};
struct PlayerSetProfilePropertyEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct Nullable_1_PlayFab_PlayStreamModels_PlayerProfileProperty_ Property;
  struct String * TitleId;
  struct Object * Value;
};
struct PlayerSetProfilePropertyEventData {
  struct PlayerSetProfilePropertyEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerSetProfilePropertyEventData__Fields fields;
};
struct Nullable_1_PlayFab_PlayStreamModels_PlayerProfileProperty___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_PlayFab_PlayStreamModels_PlayerProfileProperty___StaticFields {
};
struct Nullable_1_PlayFab_PlayStreamModels_PlayerProfileProperty___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_PlayFab_PlayStreamModels_PlayerProfileProperty___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_PlayFab_PlayStreamModels_PlayerProfileProperty___VTable vtable;
};
struct PlayerSetProfilePropertyEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerSetProfilePropertyEventData__StaticFields {
};
struct PlayerSetProfilePropertyEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerSetProfilePropertyEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerSetProfilePropertyEventData__VTable vtable;
};

struct PlayerStartPurchaseEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * CatalogVersion;
  struct List_1_PlayFab_PlayStreamModels_CartItem_ * Contents;
  struct String * OrderId;
  struct String * StoreId;
  struct String * TitleId;
};
struct PlayerStartPurchaseEventData {
  struct PlayerStartPurchaseEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerStartPurchaseEventData__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_PlayStreamModels_CartItem___Fields {
  struct CartItem_1__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_PlayStreamModels_CartItem_ {
  struct List_1_PlayFab_PlayStreamModels_CartItem___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_PlayStreamModels_CartItem___Fields fields;
};
struct __declspec(align(8)) CartItem_1__Fields {
  struct String * Description;
  struct String * DisplayName;
  struct String * ItemClass;
  struct String * ItemId;
  struct String * ItemInstanceId;
  struct Dictionary_2_System_String_System_UInt32_ * RealCurrencyPrices;
  struct Dictionary_2_System_String_System_UInt32_ * VCAmount;
  struct Dictionary_2_System_String_System_UInt32_ * VirtualCurrencyPrices;
};
struct CartItem_1 {
  struct CartItem_1__Class *klass;
  struct MonitorData *monitor;
  struct CartItem_1__Fields fields;
};
struct CartItem_1__Array {
  struct CartItem_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CartItem_1 * vector[32];
};
struct IEnumerator_1_PlayFab_PlayStreamModels_CartItem_ {
  struct IEnumerator_1_PlayFab_PlayStreamModels_CartItem___Class *klass;
  struct MonitorData *monitor;
};
struct CartItem_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CartItem_1__StaticFields {
};
struct CartItem_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CartItem_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CartItem_1__VTable vtable;
};
struct IEnumerator_1_PlayFab_PlayStreamModels_CartItem___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_PlayStreamModels_CartItem___StaticFields {
};
struct IEnumerator_1_PlayFab_PlayStreamModels_CartItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_PlayStreamModels_CartItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_PlayStreamModels_CartItem___VTable vtable;
};
struct List_1_PlayFab_PlayStreamModels_CartItem___VTable {
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
struct List_1_PlayFab_PlayStreamModels_CartItem___StaticFields {
  struct CartItem_1__Array * _emptyArray;
};
struct List_1_PlayFab_PlayStreamModels_CartItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_PlayStreamModels_CartItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_PlayStreamModels_CartItem___VTable vtable;
};
struct PlayerStartPurchaseEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerStartPurchaseEventData__StaticFields {
};
struct PlayerStartPurchaseEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerStartPurchaseEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerStartPurchaseEventData__VTable vtable;
};

enum StatisticAggregationMethod__Enum : int32_t {
  StatisticAggregationMethod__Enum_Last = 0,
  StatisticAggregationMethod__Enum_Min = 1,
  StatisticAggregationMethod__Enum_Max = 2,
  StatisticAggregationMethod__Enum_Sum = 3,
};
struct StatisticAggregationMethod__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum StatisticAggregationMethod__Enum value;
};
struct Nullable_1_PlayFab_PlayStreamModels_StatisticAggregationMethod_ {
  enum StatisticAggregationMethod__Enum value;
  bool has_value;
};
struct Nullable_1_PlayFab_PlayStreamModels_StatisticAggregationMethod___Boxed {
  struct Nullable_1_PlayFab_PlayStreamModels_StatisticAggregationMethod___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_PlayStreamModels_StatisticAggregationMethod_ fields;
};
struct PlayerStatisticChangedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct Nullable_1_PlayFab_PlayStreamModels_StatisticAggregationMethod_ AggregationMethod;
  uint32_t StatisticId;
  struct String * StatisticName;
  struct Nullable_1_Int32_ StatisticPreviousValue;
  int32_t StatisticValue;
  struct String * TitleId;
  uint32_t Version;
};
struct PlayerStatisticChangedEventData {
  struct PlayerStatisticChangedEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerStatisticChangedEventData__Fields fields;
};
struct Nullable_1_PlayFab_PlayStreamModels_StatisticAggregationMethod___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_PlayFab_PlayStreamModels_StatisticAggregationMethod___StaticFields {
};
struct Nullable_1_PlayFab_PlayStreamModels_StatisticAggregationMethod___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_PlayFab_PlayStreamModels_StatisticAggregationMethod___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_PlayFab_PlayStreamModels_StatisticAggregationMethod___VTable vtable;
};
struct PlayerStatisticChangedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerStatisticChangedEventData__StaticFields {
};
struct PlayerStatisticChangedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerStatisticChangedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerStatisticChangedEventData__VTable vtable;
};

struct PlayerStatisticDeletedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  uint32_t StatisticId;
  struct String * StatisticName;
  struct Nullable_1_Int32_ StatisticPreviousValue;
  struct String * TitleId;
  uint32_t Version;
};
struct PlayerStatisticDeletedEventData {
  struct PlayerStatisticDeletedEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerStatisticDeletedEventData__Fields fields;
};
struct PlayerStatisticDeletedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerStatisticDeletedEventData__StaticFields {
};
struct PlayerStatisticDeletedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerStatisticDeletedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerStatisticDeletedEventData__VTable vtable;
};

struct PlayerTagAddedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * Namespace;
  struct String * TagName;
  struct String * TitleId;
};
struct PlayerTagAddedEventData {
  struct PlayerTagAddedEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerTagAddedEventData__Fields fields;
};
struct PlayerTagAddedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerTagAddedEventData__StaticFields {
};
struct PlayerTagAddedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerTagAddedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerTagAddedEventData__VTable vtable;
};

struct PlayerTagRemovedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * Namespace;
  struct String * TagName;
  struct String * TitleId;
};
struct PlayerTagRemovedEventData {
  struct PlayerTagRemovedEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerTagRemovedEventData__Fields fields;
};
struct PlayerTagRemovedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerTagRemovedEventData__StaticFields {
};
struct PlayerTagRemovedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerTagRemovedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerTagRemovedEventData__VTable vtable;
};

struct PlayerTriggeredActionExecutedCloudScriptEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct ExecuteCloudScriptResult_3 * CloudScriptExecutionResult;
  struct String * FunctionName;
  struct String * TitleId;
  struct Object * TriggeringEventData;
  struct String * TriggeringEventName;
  struct PlayerProfile_1 * TriggeringPlayer;
};
struct PlayerTriggeredActionExecutedCloudScriptEventData {
  struct PlayerTriggeredActionExecutedCloudScriptEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerTriggeredActionExecutedCloudScriptEventData__Fields fields;
};
struct __declspec(align(8)) PlayerProfile_1__Fields {
  struct List_1_PlayFab_PlayStreamModels_AdCampaignAttribution_ * AdCampaignAttributions;
  struct String * AvatarUrl;
  struct Nullable_1_DateTime_ BannedUntil;
  struct List_1_PlayFab_PlayStreamModels_ContactEmailInfo_ * ContactEmailAddresses;
  struct Nullable_1_DateTime_ Created;
  struct String * DisplayName;
  struct Nullable_1_DateTime_ LastLogin;
  struct List_1_PlayFab_PlayStreamModels_PlayerLinkedAccount_ * LinkedAccounts;
  struct Dictionary_2_System_String_PlayFab_PlayStreamModels_PlayerLocation_ * Locations;
  struct Nullable_1_PlayFab_PlayStreamModels_LoginIdentityProvider_ Origination;
  struct String * PlayerId;
  struct List_1_PlayFab_PlayStreamModels_PlayerStatistic_ * PlayerStatistics;
  struct String * PublisherId;
  struct List_1_PlayFab_PlayStreamModels_PushNotificationRegistration_ * PushNotificationRegistrations;
  struct Dictionary_2_System_String_System_Int32_ * Statistics;
  struct List_1_System_String_ * Tags;
  struct String * TitleId;
  struct Nullable_1_UInt32_ TotalValueToDateInUSD;
  struct Dictionary_2_System_String_System_UInt32_ * ValuesToDate;
  struct Dictionary_2_System_String_System_Int32_ * VirtualCurrencyBalances;
};
struct PlayerProfile_1 {
  struct PlayerProfile_1__Class *klass;
  struct MonitorData *monitor;
  struct PlayerProfile_1__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_PlayStreamModels_AdCampaignAttribution___Fields {
  struct AdCampaignAttribution_1__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_PlayStreamModels_AdCampaignAttribution_ {
  struct List_1_PlayFab_PlayStreamModels_AdCampaignAttribution___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_PlayStreamModels_AdCampaignAttribution___Fields fields;
};
struct __declspec(align(8)) AdCampaignAttribution_1__Fields {
  struct DateTime AttributedAt;
  struct String * CampaignId;
  struct String * Platform;
};
struct AdCampaignAttribution_1 {
  struct AdCampaignAttribution_1__Class *klass;
  struct MonitorData *monitor;
  struct AdCampaignAttribution_1__Fields fields;
};
struct AdCampaignAttribution_1__Array {
  struct AdCampaignAttribution_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AdCampaignAttribution_1 * vector[32];
};
struct IEnumerator_1_PlayFab_PlayStreamModels_AdCampaignAttribution_ {
  struct IEnumerator_1_PlayFab_PlayStreamModels_AdCampaignAttribution___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_PlayFab_PlayStreamModels_ContactEmailInfo___Fields {
  struct ContactEmailInfo_1__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_PlayStreamModels_ContactEmailInfo_ {
  struct List_1_PlayFab_PlayStreamModels_ContactEmailInfo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_PlayStreamModels_ContactEmailInfo___Fields fields;
};
enum EmailVerificationStatus__Enum_2 : int32_t {
  EmailVerificationStatus__Enum_2_Unverified = 0,
  EmailVerificationStatus__Enum_2_Pending = 1,
  EmailVerificationStatus__Enum_2_Confirmed = 2,
};
struct EmailVerificationStatus__Enum_2__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EmailVerificationStatus__Enum_2 value;
};
struct Nullable_1_PlayFab_PlayStreamModels_EmailVerificationStatus_ {
  enum EmailVerificationStatus__Enum_2 value;
  bool has_value;
};
struct Nullable_1_PlayFab_PlayStreamModels_EmailVerificationStatus___Boxed {
  struct Nullable_1_PlayFab_PlayStreamModels_EmailVerificationStatus___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_PlayStreamModels_EmailVerificationStatus_ fields;
};
struct __declspec(align(8)) ContactEmailInfo_1__Fields {
  struct String * EmailAddress;
  struct String * Name;
  struct Nullable_1_PlayFab_PlayStreamModels_EmailVerificationStatus_ VerificationStatus;
};
struct ContactEmailInfo_1 {
  struct ContactEmailInfo_1__Class *klass;
  struct MonitorData *monitor;
  struct ContactEmailInfo_1__Fields fields;
};
struct ContactEmailInfo_1__Array {
  struct ContactEmailInfo_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ContactEmailInfo_1 * vector[32];
};
struct IEnumerator_1_PlayFab_PlayStreamModels_ContactEmailInfo_ {
  struct IEnumerator_1_PlayFab_PlayStreamModels_ContactEmailInfo___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_PlayFab_PlayStreamModels_PlayerLinkedAccount___Fields {
  struct PlayerLinkedAccount_1__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_PlayStreamModels_PlayerLinkedAccount_ {
  struct List_1_PlayFab_PlayStreamModels_PlayerLinkedAccount___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_PlayStreamModels_PlayerLinkedAccount___Fields fields;
};
struct __declspec(align(8)) PlayerLinkedAccount_1__Fields {
  struct String * Email;
  struct Nullable_1_PlayFab_PlayStreamModels_LoginIdentityProvider_ Platform;
  struct String * PlatformUserId;
  struct String * Username;
};
struct PlayerLinkedAccount_1 {
  struct PlayerLinkedAccount_1__Class *klass;
  struct MonitorData *monitor;
  struct PlayerLinkedAccount_1__Fields fields;
};
struct PlayerLinkedAccount_1__Array {
  struct PlayerLinkedAccount_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PlayerLinkedAccount_1 * vector[32];
};
struct IEnumerator_1_PlayFab_PlayStreamModels_PlayerLinkedAccount_ {
  struct IEnumerator_1_PlayFab_PlayStreamModels_PlayerLinkedAccount___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_String_PlayFab_PlayStreamModels_PlayerLocation___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_PlayStreamModels_PlayerLocation___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_PlayStreamModels_PlayerLocation_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_PlayStreamModels_PlayerLocation_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_PlayFab_PlayStreamModels_PlayerLocation_ {
  struct Dictionary_2_System_String_PlayFab_PlayStreamModels_PlayerLocation___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_PlayFab_PlayStreamModels_PlayerLocation___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_PlayStreamModels_PlayerLocation_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct PlayerLocation_1 * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_PlayStreamModels_PlayerLocation___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_PlayStreamModels_PlayerLocation___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_PlayStreamModels_PlayerLocation_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_PlayStreamModels_PlayerLocation___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_PlayStreamModels_PlayerLocation___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_PlayStreamModels_PlayerLocation_ vector[32];
};
struct __declspec(align(8)) PlayerLocation_1__Fields {
  struct String * City;
  enum ContinentCode__Enum_2 ContinentCode;
  enum CountryCode__Enum_2 CountryCode;
  struct Nullable_1_Double_ Latitude;
  struct Nullable_1_Double_ Longitude;
};
struct PlayerLocation_1 {
  struct PlayerLocation_1__Class *klass;
  struct MonitorData *monitor;
  struct PlayerLocation_1__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_PlayStreamModels_PlayerLocation___Fields {
  struct Dictionary_2_System_String_PlayFab_PlayStreamModels_PlayerLocation_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_PlayStreamModels_PlayerLocation_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_PlayStreamModels_PlayerLocation___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_PlayStreamModels_PlayerLocation___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_PlayStreamModels_PlayerLocation___Fields {
  struct Dictionary_2_System_String_PlayFab_PlayStreamModels_PlayerLocation_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_PlayStreamModels_PlayerLocation_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_PlayStreamModels_PlayerLocation___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_PlayStreamModels_PlayerLocation___Fields fields;
};
struct PlayerLocation_1__Array {
  struct PlayerLocation_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PlayerLocation_1 * vector[32];
};
struct IEnumerator_1_PlayFab_PlayStreamModels_PlayerLocation_ {
  struct IEnumerator_1_PlayFab_PlayStreamModels_PlayerLocation___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_PlayFab_PlayStreamModels_PlayerLocation_ {
  struct ICollection_1_PlayFab_PlayStreamModels_PlayerLocation___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_PlayFab_PlayStreamModels_PlayerLocation_ {
  struct String * key;
  struct PlayerLocation_1 * value;
};
struct KeyValuePair_2_System_String_PlayFab_PlayStreamModels_PlayerLocation___Boxed {
  struct KeyValuePair_2_System_String_PlayFab_PlayStreamModels_PlayerLocation___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_PlayFab_PlayStreamModels_PlayerLocation_ fields;
};
struct KeyValuePair_2_System_String_PlayFab_PlayStreamModels_PlayerLocation___Array {
  struct KeyValuePair_2_System_String_PlayFab_PlayStreamModels_PlayerLocation___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_PlayFab_PlayStreamModels_PlayerLocation_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_PlayStreamModels_PlayerLocation_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_PlayStreamModels_PlayerLocation___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_PlayFab_PlayStreamModels_PlayerLocation_ {
  struct IEnumerable_1_PlayFab_PlayStreamModels_PlayerLocation___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_PlayFab_PlayStreamModels_PlayerStatistic___Fields {
  struct PlayerStatistic_1__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_PlayStreamModels_PlayerStatistic_ {
  struct List_1_PlayFab_PlayStreamModels_PlayerStatistic___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_PlayStreamModels_PlayerStatistic___Fields fields;
};
struct __declspec(align(8)) PlayerStatistic_1__Fields {
  struct String * Id;
  struct String * Name;
  int32_t StatisticValue;
  int32_t StatisticVersion;
};
struct PlayerStatistic_1 {
  struct PlayerStatistic_1__Class *klass;
  struct MonitorData *monitor;
  struct PlayerStatistic_1__Fields fields;
};
struct PlayerStatistic_1__Array {
  struct PlayerStatistic_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PlayerStatistic_1 * vector[32];
};
struct IEnumerator_1_PlayFab_PlayStreamModels_PlayerStatistic_ {
  struct IEnumerator_1_PlayFab_PlayStreamModels_PlayerStatistic___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_PlayFab_PlayStreamModels_PushNotificationRegistration___Fields {
  struct PushNotificationRegistration_1__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_PlayStreamModels_PushNotificationRegistration_ {
  struct List_1_PlayFab_PlayStreamModels_PushNotificationRegistration___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_PlayStreamModels_PushNotificationRegistration___Fields fields;
};
struct __declspec(align(8)) PushNotificationRegistration_1__Fields {
  struct String * NotificationEndpointARN;
  struct Nullable_1_PlayFab_PlayStreamModels_PushNotificationPlatform_ Platform;
};
struct PushNotificationRegistration_1 {
  struct PushNotificationRegistration_1__Class *klass;
  struct MonitorData *monitor;
  struct PushNotificationRegistration_1__Fields fields;
};
struct PushNotificationRegistration_1__Array {
  struct PushNotificationRegistration_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PushNotificationRegistration_1 * vector[32];
};
struct IEnumerator_1_PlayFab_PlayStreamModels_PushNotificationRegistration_ {
  struct IEnumerator_1_PlayFab_PlayStreamModels_PushNotificationRegistration___Class *klass;
  struct MonitorData *monitor;
};
struct AdCampaignAttribution_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AdCampaignAttribution_1__StaticFields {
};
struct AdCampaignAttribution_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AdCampaignAttribution_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AdCampaignAttribution_1__VTable vtable;
};
struct IEnumerator_1_PlayFab_PlayStreamModels_AdCampaignAttribution___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_PlayStreamModels_AdCampaignAttribution___StaticFields {
};
struct IEnumerator_1_PlayFab_PlayStreamModels_AdCampaignAttribution___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_PlayStreamModels_AdCampaignAttribution___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_PlayStreamModels_AdCampaignAttribution___VTable vtable;
};
struct List_1_PlayFab_PlayStreamModels_AdCampaignAttribution___VTable {
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
struct List_1_PlayFab_PlayStreamModels_AdCampaignAttribution___StaticFields {
  struct AdCampaignAttribution_1__Array * _emptyArray;
};
struct List_1_PlayFab_PlayStreamModels_AdCampaignAttribution___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_PlayStreamModels_AdCampaignAttribution___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_PlayStreamModels_AdCampaignAttribution___VTable vtable;
};}