namespace app {
struct List_1_PlayFab_PlayStreamModels_CartItem_ {
    struct List_1_PlayFab_PlayStreamModels_CartItem___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_PlayStreamModels_CartItem___Fields fields;
};

struct __declspec(align(8)) CartItem_1__Fields {
    struct String *Description;
    struct String *DisplayName;
    struct String *ItemClass;
    struct String *ItemId;
    struct String *ItemInstanceId;
    struct Dictionary_2_System_String_System_UInt32_ *RealCurrencyPrices;
    struct Dictionary_2_System_String_System_UInt32_ *VCAmount;
    struct Dictionary_2_System_String_System_UInt32_ *VirtualCurrencyPrices;
};

struct CartItem_1 {
    struct CartItem_1__Class *klass;
    MonitorData *monitor;
    struct CartItem_1__Fields fields;
};

struct CartItem_1__Array {
    struct CartItem_1__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CartItem_1 *vector[32];
};

struct IEnumerator_1_PlayFab_PlayStreamModels_CartItem_ {
    struct IEnumerator_1_PlayFab_PlayStreamModels_CartItem___Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CartItem_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CartItem_1__VTable vtable;
};

struct CartItem_1__Array__VTable {
};

struct CartItem_1__Array__StaticFields {
};

struct CartItem_1__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CartItem_1__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CartItem_1__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_PlayStreamModels_CartItem___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_PlayStreamModels_CartItem___StaticFields {
};

struct IEnumerator_1_PlayFab_PlayStreamModels_CartItem___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_PlayStreamModels_CartItem___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct CartItem_1__Array *_emptyArray;
};

struct List_1_PlayFab_PlayStreamModels_CartItem___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_PlayStreamModels_CartItem___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayerStartPurchaseEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayerStartPurchaseEventData__VTable vtable;
};

enum class StatisticAggregationMethod__Enum : int32_t {
    Last = 0x00000000,
    Min = 0x00000001,
    Max = 0x00000002,
    Sum = 0x00000003,
};

struct StatisticAggregationMethod__Enum__Boxed {
    struct StatisticAggregationMethod__Enum__Class *klass;
    MonitorData *monitor;
    StatisticAggregationMethod__Enum value;
    
};

struct Nullable_1_PlayFab_PlayStreamModels_StatisticAggregationMethod_ {
    StatisticAggregationMethod__Enum value;
    
    bool has_value;
};

struct Nullable_1_PlayFab_PlayStreamModels_StatisticAggregationMethod___Boxed {
    struct Nullable_1_PlayFab_PlayStreamModels_StatisticAggregationMethod___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_PlayFab_PlayStreamModels_StatisticAggregationMethod_ fields;
};

struct PlayerStatisticChangedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct Nullable_1_PlayFab_PlayStreamModels_StatisticAggregationMethod_ AggregationMethod;
    uint32_t StatisticId;
    struct String *StatisticName;
    struct Nullable_1_Int32_ StatisticPreviousValue;
    int32_t StatisticValue;
    struct String *TitleId;
    uint32_t Version;
};

struct PlayerStatisticChangedEventData {
    struct PlayerStatisticChangedEventData__Class *klass;
    MonitorData *monitor;
    struct PlayerStatisticChangedEventData__Fields fields;
};

struct StatisticAggregationMethod__Enum__VTable {
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

struct StatisticAggregationMethod__Enum__StaticFields {
};

struct StatisticAggregationMethod__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StatisticAggregationMethod__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StatisticAggregationMethod__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_PlayFab_PlayStreamModels_StatisticAggregationMethod___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayerStatisticChangedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayerStatisticChangedEventData__VTable vtable;
};

struct PlayerStatisticDeletedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    uint32_t StatisticId;
    struct String *StatisticName;
    struct Nullable_1_Int32_ StatisticPreviousValue;
    struct String *TitleId;
    uint32_t Version;
};

struct PlayerStatisticDeletedEventData {
    struct PlayerStatisticDeletedEventData__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayerStatisticDeletedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayerStatisticDeletedEventData__VTable vtable;
};

struct PlayerTagAddedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *Namespace;
    struct String *TagName;
    struct String *TitleId;
};

struct PlayerTagAddedEventData {
    struct PlayerTagAddedEventData__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayerTagAddedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayerTagAddedEventData__VTable vtable;
};

struct PlayerTagRemovedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *Namespace;
    struct String *TagName;
    struct String *TitleId;
};

struct PlayerTagRemovedEventData {
    struct PlayerTagRemovedEventData__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayerTagRemovedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayerTagRemovedEventData__VTable vtable;
};

struct PlayerTriggeredActionExecutedCloudScriptEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct ExecuteCloudScriptResult_3 *CloudScriptExecutionResult;
    struct String *FunctionName;
    struct String *TitleId;
    struct Object *TriggeringEventData;
    struct String *TriggeringEventName;
    struct PlayerProfile_1 *TriggeringPlayer;
};

struct PlayerTriggeredActionExecutedCloudScriptEventData {
    struct PlayerTriggeredActionExecutedCloudScriptEventData__Class *klass;
    MonitorData *monitor;
    struct PlayerTriggeredActionExecutedCloudScriptEventData__Fields fields;
};

struct __declspec(align(8)) PlayerProfile_1__Fields {
    struct List_1_PlayFab_PlayStreamModels_AdCampaignAttribution_ *AdCampaignAttributions;
    struct String *AvatarUrl;
    struct Nullable_1_DateTime_ BannedUntil;
    struct List_1_PlayFab_PlayStreamModels_ContactEmailInfo_ *ContactEmailAddresses;
    struct Nullable_1_DateTime_ Created;
    struct String *DisplayName;
    struct Nullable_1_DateTime_ LastLogin;
    struct List_1_PlayFab_PlayStreamModels_PlayerLinkedAccount_ *LinkedAccounts;
    struct Dictionary_2_System_String_PlayFab_PlayStreamModels_PlayerLocation_ *Locations;
    struct Nullable_1_PlayFab_PlayStreamModels_LoginIdentityProvider_ Origination;
    struct String *PlayerId;
    struct List_1_PlayFab_PlayStreamModels_PlayerStatistic_ *PlayerStatistics;
    struct String *PublisherId;
    struct List_1_PlayFab_PlayStreamModels_PushNotificationRegistration_ *PushNotificationRegistrations;
    struct Dictionary_2_System_String_System_Int32_ *Statistics;
    struct List_1_System_String_ *Tags;
    struct String *TitleId;
    struct Nullable_1_UInt32_ TotalValueToDateInUSD;
    struct Dictionary_2_System_String_System_UInt32_ *ValuesToDate;
    struct Dictionary_2_System_String_System_Int32_ *VirtualCurrencyBalances;
};

struct PlayerProfile_1 {
    struct PlayerProfile_1__Class *klass;
    MonitorData *monitor;
    struct PlayerProfile_1__Fields fields;
};

struct __declspec(align(8)) List_1_PlayFab_PlayStreamModels_AdCampaignAttribution___Fields {
    struct AdCampaignAttribution_1__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_PlayStreamModels_AdCampaignAttribution_ {
    struct List_1_PlayFab_PlayStreamModels_AdCampaignAttribution___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_PlayStreamModels_AdCampaignAttribution___Fields fields;
};

struct __declspec(align(8)) AdCampaignAttribution_1__Fields {
    struct DateTime AttributedAt;
    struct String *CampaignId;
    struct String *Platform;
};

struct AdCampaignAttribution_1 {
    struct AdCampaignAttribution_1__Class *klass;
    MonitorData *monitor;
    struct AdCampaignAttribution_1__Fields fields;
};

struct AdCampaignAttribution_1__Array {
    struct AdCampaignAttribution_1__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct AdCampaignAttribution_1 *vector[32];
};

struct IEnumerator_1_PlayFab_PlayStreamModels_AdCampaignAttribution_ {
    struct IEnumerator_1_PlayFab_PlayStreamModels_AdCampaignAttribution___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_PlayFab_PlayStreamModels_ContactEmailInfo___Fields {
    struct ContactEmailInfo_1__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_PlayStreamModels_ContactEmailInfo_ {
    struct List_1_PlayFab_PlayStreamModels_ContactEmailInfo___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_PlayStreamModels_ContactEmailInfo___Fields fields;
};

enum class EmailVerificationStatus__Enum_2 : int32_t {
    Unverified = 0x00000000,
    Pending = 0x00000001,
    Confirmed = 0x00000002,
};

struct EmailVerificationStatus__Enum_2__Boxed {
    struct EmailVerificationStatus__Enum_2__Class *klass;
    MonitorData *monitor;
    EmailVerificationStatus__Enum_2 value;
    
};

struct Nullable_1_PlayFab_PlayStreamModels_EmailVerificationStatus_ {
    EmailVerificationStatus__Enum_2 value;
    
    bool has_value;
};

struct Nullable_1_PlayFab_PlayStreamModels_EmailVerificationStatus___Boxed {
    struct Nullable_1_PlayFab_PlayStreamModels_EmailVerificationStatus___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_PlayFab_PlayStreamModels_EmailVerificationStatus_ fields;
};

struct __declspec(align(8)) ContactEmailInfo_1__Fields {
    struct String *EmailAddress;
    struct String *Name;
    struct Nullable_1_PlayFab_PlayStreamModels_EmailVerificationStatus_ VerificationStatus;
};

struct ContactEmailInfo_1 {
    struct ContactEmailInfo_1__Class *klass;
    MonitorData *monitor;
    struct ContactEmailInfo_1__Fields fields;
};

struct ContactEmailInfo_1__Array {
    struct ContactEmailInfo_1__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ContactEmailInfo_1 *vector[32];
};

struct IEnumerator_1_PlayFab_PlayStreamModels_ContactEmailInfo_ {
    struct IEnumerator_1_PlayFab_PlayStreamModels_ContactEmailInfo___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_PlayFab_PlayStreamModels_PlayerLinkedAccount___Fields {
    struct PlayerLinkedAccount_1__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_PlayStreamModels_PlayerLinkedAccount_ {
    struct List_1_PlayFab_PlayStreamModels_PlayerLinkedAccount___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_PlayStreamModels_PlayerLinkedAccount___Fields fields;
};

struct __declspec(align(8)) PlayerLinkedAccount_1__Fields {
    struct String *Email;
    struct Nullable_1_PlayFab_PlayStreamModels_LoginIdentityProvider_ Platform;
    struct String *PlatformUserId;
    struct String *Username;
};

struct PlayerLinkedAccount_1 {
    struct PlayerLinkedAccount_1__Class *klass;
    MonitorData *monitor;
    struct PlayerLinkedAccount_1__Fields fields;
};

struct PlayerLinkedAccount_1__Array {
    struct PlayerLinkedAccount_1__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct PlayerLinkedAccount_1 *vector[32];
};

struct IEnumerator_1_PlayFab_PlayStreamModels_PlayerLinkedAccount_ {
    struct IEnumerator_1_PlayFab_PlayStreamModels_PlayerLinkedAccount___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_System_String_PlayFab_PlayStreamModels_PlayerLocation___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_PlayStreamModels_PlayerLocation___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_String_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_PlayStreamModels_PlayerLocation_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_PlayStreamModels_PlayerLocation_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_String_PlayFab_PlayStreamModels_PlayerLocation_ {
    struct Dictionary_2_System_String_PlayFab_PlayStreamModels_PlayerLocation___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_String_PlayFab_PlayStreamModels_PlayerLocation___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_PlayStreamModels_PlayerLocation_ {
    int32_t hashCode;
    int32_t next;
    struct String *key;
    struct PlayerLocation_1 *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_PlayStreamModels_PlayerLocation___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_PlayStreamModels_PlayerLocation___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_PlayStreamModels_PlayerLocation_ fields;
};

struct __declspec(align(8)) PlayerLocation_1__Fields {
    struct String *City;
    ContinentCode__Enum_2 ContinentCode;
    
    CountryCode__Enum_2 CountryCode;
    
    struct Nullable_1_Double_ Latitude;
    struct Nullable_1_Double_ Longitude;
};

struct PlayerLocation_1 {
    struct PlayerLocation_1__Class *klass;
    MonitorData *monitor;
    struct PlayerLocation_1__Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_PlayStreamModels_PlayerLocation___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_PlayStreamModels_PlayerLocation___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_PlayStreamModels_PlayerLocation_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_PlayStreamModels_PlayerLocation___Fields {
    struct Dictionary_2_System_String_PlayFab_PlayStreamModels_PlayerLocation_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_PlayStreamModels_PlayerLocation_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_PlayStreamModels_PlayerLocation___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_PlayStreamModels_PlayerLocation___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_PlayStreamModels_PlayerLocation___Fields {
    struct Dictionary_2_System_String_PlayFab_PlayStreamModels_PlayerLocation_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_PlayStreamModels_PlayerLocation_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_PlayStreamModels_PlayerLocation___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_PlayStreamModels_PlayerLocation___Fields fields;
};

struct PlayerLocation_1__Array {
    struct PlayerLocation_1__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct PlayerLocation_1 *vector[32];
};

struct IEnumerator_1_PlayFab_PlayStreamModels_PlayerLocation_ {
    struct IEnumerator_1_PlayFab_PlayStreamModels_PlayerLocation___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_PlayFab_PlayStreamModels_PlayerLocation_ {
    struct ICollection_1_PlayFab_PlayStreamModels_PlayerLocation___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_String_PlayFab_PlayStreamModels_PlayerLocation_ {
    struct String *key;
    struct PlayerLocation_1 *value;
};

struct KeyValuePair_2_System_String_PlayFab_PlayStreamModels_PlayerLocation___Boxed {
    struct KeyValuePair_2_System_String_PlayFab_PlayStreamModels_PlayerLocation___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_String_PlayFab_PlayStreamModels_PlayerLocation_ fields;
};

struct KeyValuePair_2_System_String_PlayFab_PlayStreamModels_PlayerLocation___Array {
    struct KeyValuePair_2_System_String_PlayFab_PlayStreamModels_PlayerLocation___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_String_PlayFab_PlayStreamModels_PlayerLocation_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_PlayStreamModels_PlayerLocation_ {
    struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_PlayStreamModels_PlayerLocation___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_PlayFab_PlayStreamModels_PlayerLocation_ {
    struct IEnumerable_1_PlayFab_PlayStreamModels_PlayerLocation___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_PlayFab_PlayStreamModels_PlayerStatistic___Fields {
    struct PlayerStatistic_1__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_PlayStreamModels_PlayerStatistic_ {
    struct List_1_PlayFab_PlayStreamModels_PlayerStatistic___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_PlayStreamModels_PlayerStatistic___Fields fields;
};

struct __declspec(align(8)) PlayerStatistic_1__Fields {
    struct String *Id;
    struct String *Name;
    int32_t StatisticValue;
    int32_t StatisticVersion;
};

struct PlayerStatistic_1 {
    struct PlayerStatistic_1__Class *klass;
    MonitorData *monitor;
    struct PlayerStatistic_1__Fields fields;
};

struct PlayerStatistic_1__Array {
    struct PlayerStatistic_1__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct PlayerStatistic_1 *vector[32];
};

struct IEnumerator_1_PlayFab_PlayStreamModels_PlayerStatistic_ {
    struct IEnumerator_1_PlayFab_PlayStreamModels_PlayerStatistic___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_PlayFab_PlayStreamModels_PushNotificationRegistration___Fields {
    struct PushNotificationRegistration_1__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_PlayStreamModels_PushNotificationRegistration_ {
    struct List_1_PlayFab_PlayStreamModels_PushNotificationRegistration___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_PlayStreamModels_PushNotificationRegistration___Fields fields;
};

struct __declspec(align(8)) PushNotificationRegistration_1__Fields {
    struct String *NotificationEndpointARN;
    struct Nullable_1_PlayFab_PlayStreamModels_PushNotificationPlatform_ Platform;
};

struct PushNotificationRegistration_1 {
    struct PushNotificationRegistration_1__Class *klass;
    MonitorData *monitor;
    struct PushNotificationRegistration_1__Fields fields;
};

struct PushNotificationRegistration_1__Array {
    struct PushNotificationRegistration_1__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct PushNotificationRegistration_1 *vector[32];
};

struct IEnumerator_1_PlayFab_PlayStreamModels_PushNotificationRegistration_ {
    struct IEnumerator_1_PlayFab_PlayStreamModels_PushNotificationRegistration___Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AdCampaignAttribution_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AdCampaignAttribution_1__VTable vtable;
};

struct AdCampaignAttribution_1__Array__VTable {
};

struct AdCampaignAttribution_1__Array__StaticFields {
};

struct AdCampaignAttribution_1__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AdCampaignAttribution_1__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AdCampaignAttribution_1__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_PlayStreamModels_AdCampaignAttribution___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_PlayStreamModels_AdCampaignAttribution___StaticFields {
};

struct IEnumerator_1_PlayFab_PlayStreamModels_AdCampaignAttribution___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_PlayStreamModels_AdCampaignAttribution___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct AdCampaignAttribution_1__Array *_emptyArray;
};

struct List_1_PlayFab_PlayStreamModels_AdCampaignAttribution___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_PlayStreamModels_AdCampaignAttribution___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayFab_PlayStreamModels_AdCampaignAttribution___VTable vtable;
};

struct EmailVerificationStatus__Enum_2__VTable {
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

struct EmailVerificationStatus__Enum_2__StaticFields {
};

struct EmailVerificationStatus__Enum_2__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EmailVerificationStatus__Enum_2__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EmailVerificationStatus__Enum_2__VTable vtable;
};

struct Nullable_1_PlayFab_PlayStreamModels_EmailVerificationStatus___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_PlayFab_PlayStreamModels_EmailVerificationStatus___StaticFields {
};

struct Nullable_1_PlayFab_PlayStreamModels_EmailVerificationStatus___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_PlayFab_PlayStreamModels_EmailVerificationStatus___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_PlayFab_PlayStreamModels_EmailVerificationStatus___VTable vtable;
};

struct ContactEmailInfo_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ContactEmailInfo_1__StaticFields {
};

struct ContactEmailInfo_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ContactEmailInfo_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ContactEmailInfo_1__VTable vtable;
};

struct ContactEmailInfo_1__Array__VTable {
};

struct ContactEmailInfo_1__Array__StaticFields {
};

struct ContactEmailInfo_1__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ContactEmailInfo_1__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ContactEmailInfo_1__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_PlayStreamModels_ContactEmailInfo___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_PlayStreamModels_ContactEmailInfo___StaticFields {
};

struct IEnumerator_1_PlayFab_PlayStreamModels_ContactEmailInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_PlayStreamModels_ContactEmailInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_PlayStreamModels_ContactEmailInfo___VTable vtable;
};

struct List_1_PlayFab_PlayStreamModels_ContactEmailInfo___VTable {
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

}
