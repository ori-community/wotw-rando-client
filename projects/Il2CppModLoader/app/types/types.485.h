namespace app {
struct MultiplayerServerVmUnassignmentStartedEventPayload__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MultiplayerServerVmUnassignmentStartedEventPayload__StaticFields {
};

struct MultiplayerServerVmUnassignmentStartedEventPayload__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MultiplayerServerVmUnassignmentStartedEventPayload__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MultiplayerServerVmUnassignmentStartedEventPayload__VTable vtable;
};

struct MultiplayerServerVmUnassignmentStartedEventDataDoc__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MultiplayerServerVmUnassignmentStartedEventDataDoc__StaticFields {
};

struct MultiplayerServerVmUnassignmentStartedEventDataDoc__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MultiplayerServerVmUnassignmentStartedEventDataDoc__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MultiplayerServerVmUnassignmentStartedEventDataDoc__VTable vtable;
};

struct MultiplayerServerVmUnhealthyEventDataDoc__Fields {
    struct PlayStreamEventBase__Fields _;
    struct EntityLineage_1 *EntityLineage;
    struct String *OriginalEventId;
    struct Nullable_1_DateTime_ OriginalTimestamp;
    struct MultiplayerServerVmUnhealthyEventPayload *Payload;
    struct EntityKey_9 *WriterEntity;
};

struct MultiplayerServerVmUnhealthyEventDataDoc {
    struct MultiplayerServerVmUnhealthyEventDataDoc__Class *klass;
    MonitorData *monitor;
    struct MultiplayerServerVmUnhealthyEventDataDoc__Fields fields;
};

struct __declspec(align(8)) MultiplayerServerVmUnhealthyEventPayload__Fields {
    struct String *BuildId;
    struct String *HealthStatus;
    struct Nullable_1_PlayFab_PlayStreamModels_AzureRegion_ Region_1;
    struct String *VmId;
};

struct MultiplayerServerVmUnhealthyEventPayload {
    struct MultiplayerServerVmUnhealthyEventPayload__Class *klass;
    MonitorData *monitor;
    struct MultiplayerServerVmUnhealthyEventPayload__Fields fields;
};

struct MultiplayerServerVmUnhealthyEventPayload__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MultiplayerServerVmUnhealthyEventPayload__StaticFields {
};

struct MultiplayerServerVmUnhealthyEventPayload__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MultiplayerServerVmUnhealthyEventPayload__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MultiplayerServerVmUnhealthyEventPayload__VTable vtable;
};

struct MultiplayerServerVmUnhealthyEventDataDoc__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MultiplayerServerVmUnhealthyEventDataDoc__StaticFields {
};

struct MultiplayerServerVmUnhealthyEventDataDoc__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MultiplayerServerVmUnhealthyEventDataDoc__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MultiplayerServerVmUnhealthyEventDataDoc__VTable vtable;
};

struct StudioCreatedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *CreatorAuthenticationId;
    struct String *CreatorPlayFabId;
    struct String *StudioName;
};

struct StudioCreatedEventData {
    struct StudioCreatedEventData__Class *klass;
    MonitorData *monitor;
    struct StudioCreatedEventData__Fields fields;
};

struct StudioCreatedEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct StudioCreatedEventData__StaticFields {
};

struct StudioCreatedEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StudioCreatedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StudioCreatedEventData__VTable vtable;
};

enum class AuthenticationProvider__Enum : int32_t {
    PlayFab = 0x00000000,
    SAML = 0x00000001,
};

struct AuthenticationProvider__Enum__Boxed {
    struct AuthenticationProvider__Enum__Class *klass;
    MonitorData *monitor;
    AuthenticationProvider__Enum value;
    
};

struct Nullable_1_PlayFab_PlayStreamModels_AuthenticationProvider_ {
    AuthenticationProvider__Enum value;
    
    bool has_value;
};

struct Nullable_1_PlayFab_PlayStreamModels_AuthenticationProvider___Boxed {
    struct Nullable_1_PlayFab_PlayStreamModels_AuthenticationProvider___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_PlayFab_PlayStreamModels_AuthenticationProvider_ fields;
};

struct StudioUserAddedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *AuthenticationId;
    struct Nullable_1_PlayFab_PlayStreamModels_AuthenticationProvider_ AuthenticationProvider;
    struct String *AuthenticationProviderId;
    struct String *Email;
    struct String *InvitationId;
    struct String *PlayFabId;
    struct List_1_System_String_ *StudioPermissions;
    struct Dictionary_2_System_String_System_String_ *TitlePermissions;
};

struct StudioUserAddedEventData {
    struct StudioUserAddedEventData__Class *klass;
    MonitorData *monitor;
    struct StudioUserAddedEventData__Fields fields;
};

struct AuthenticationProvider__Enum__VTable {
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

struct AuthenticationProvider__Enum__StaticFields {
};

struct AuthenticationProvider__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AuthenticationProvider__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AuthenticationProvider__Enum__VTable vtable;
};

struct Nullable_1_PlayFab_PlayStreamModels_AuthenticationProvider___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_PlayFab_PlayStreamModels_AuthenticationProvider___StaticFields {
};

struct Nullable_1_PlayFab_PlayStreamModels_AuthenticationProvider___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_PlayFab_PlayStreamModels_AuthenticationProvider___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_PlayFab_PlayStreamModels_AuthenticationProvider___VTable vtable;
};

struct StudioUserAddedEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct StudioUserAddedEventData__StaticFields {
};

struct StudioUserAddedEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StudioUserAddedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StudioUserAddedEventData__VTable vtable;
};

struct StudioUserInvitedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct Nullable_1_PlayFab_PlayStreamModels_AuthenticationProvider_ AuthenticationProvider;
    struct String *AuthenticationProviderId;
    struct String *Email;
    struct Nullable_1_DateTime_ InvitationExpires;
    struct String *InvitationId;
    bool InvitedExistingUser;
    struct String *InvitorPlayFabId;
    struct List_1_System_String_ *StudioPermissions;
    struct Dictionary_2_System_String_System_String_ *TitlePermissions;
};

struct StudioUserInvitedEventData {
    struct StudioUserInvitedEventData__Class *klass;
    MonitorData *monitor;
    struct StudioUserInvitedEventData__Fields fields;
};

struct StudioUserInvitedEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct StudioUserInvitedEventData__StaticFields {
};

struct StudioUserInvitedEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StudioUserInvitedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StudioUserInvitedEventData__VTable vtable;
};

struct StudioUserRemovedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *AuthenticationId;
    struct Nullable_1_PlayFab_PlayStreamModels_AuthenticationProvider_ AuthenticationProvider;
    struct String *AuthenticationProviderId;
    struct String *PlayFabId;
    struct List_1_System_String_ *StudioPermissions;
    struct Dictionary_2_System_String_System_String_ *TitlePermissions;
};

struct StudioUserRemovedEventData {
    struct StudioUserRemovedEventData__Class *klass;
    MonitorData *monitor;
    struct StudioUserRemovedEventData__Fields fields;
};

struct StudioUserRemovedEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct StudioUserRemovedEventData__StaticFields {
};

struct StudioUserRemovedEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StudioUserRemovedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StudioUserRemovedEventData__VTable vtable;
};

struct TenacyConnectorOnboardEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *EntityChain;
    struct EntityLineage_1 *EntityLineage;
};

struct TenacyConnectorOnboardEventData {
    struct TenacyConnectorOnboardEventData__Class *klass;
    MonitorData *monitor;
    struct TenacyConnectorOnboardEventData__Fields fields;
};

struct TenacyConnectorOnboardEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TenacyConnectorOnboardEventData__StaticFields {
};

struct TenacyConnectorOnboardEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TenacyConnectorOnboardEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TenacyConnectorOnboardEventData__VTable vtable;
};

struct TierUpdateEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *ContactCompanyName;
    bool IsPayAsYouGo;
    bool IsReservedCapacity;
    bool IsReservedCapacityAnnual;
    double MonthlyMinimumUSD;
    struct List_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier_ *OveragePricePerMauTiers;
    struct String *PaymentSystemAccountId;
    struct List_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier_ *PricePerMauTiers;
    struct Nullable_1_Int32_ ReservedMAU;
    struct IEnumerable_String *StudioIds;
    struct String *TierDisplayName;
    struct String *TierId;
    struct String *TransactionId;
};

struct TierUpdateEventData {
    struct TierUpdateEventData__Class *klass;
    MonitorData *monitor;
    struct TierUpdateEventData__Fields fields;
};

struct __declspec(align(8)) List_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier___Fields {
    struct PaymentOptionPerMauPriceTier__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier_ {
    struct List_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier___Fields fields;
};

enum class MetricUnit__Enum : int32_t {
    Value = 0x00000000,
    Count = 0x00000001,
    Percent = 0x00000002,
    Milliseconds = 0x00000003,
    Seconds = 0x00000004,
    Hours = 0x00000005,
    Days = 0x00000006,
    Bits = 0x00000007,
    Bytes = 0x00000008,
    Kilobytes = 0x00000009,
    Megabytes = 0x0000000a,
    Gigabytes = 0x0000000b,
    Terabytes = 0x0000000c,
    Bytes_Per_Second = 0x0000000d,
    MonthlyActiveUsers = 0x0000000e,
    EnableDisable = 0x0000000f,
};

struct MetricUnit__Enum__Boxed {
    struct MetricUnit__Enum__Class *klass;
    MonitorData *monitor;
    MetricUnit__Enum value;
    
};

struct Nullable_1_PlayFab_PlayStreamModels_MetricUnit_ {
    MetricUnit__Enum value;
    
    bool has_value;
};

struct Nullable_1_PlayFab_PlayStreamModels_MetricUnit___Boxed {
    struct Nullable_1_PlayFab_PlayStreamModels_MetricUnit___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_PlayFab_PlayStreamModels_MetricUnit_ fields;
};

struct __declspec(align(8)) PaymentOptionPerMauPriceTier__Fields {
    struct Nullable_1_Int32_ LowerBoundInclusive;
    struct String *Name;
    struct Nullable_1_PlayFab_PlayStreamModels_MetricUnit_ PriceUnit;
    struct Nullable_1_Double_ PriceUnitSize;
    struct Nullable_1_Double_ PriceUSD;
    struct String *PriceUSDFormatted;
    struct Nullable_1_Int32_ UpperBoundInclusive;
};

struct PaymentOptionPerMauPriceTier {
    struct PaymentOptionPerMauPriceTier__Class *klass;
    MonitorData *monitor;
    struct PaymentOptionPerMauPriceTier__Fields fields;
};

struct PaymentOptionPerMauPriceTier__Array {
    struct PaymentOptionPerMauPriceTier__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct PaymentOptionPerMauPriceTier *vector[32];
};

struct IEnumerator_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier_ {
    struct IEnumerator_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_String {
    struct IEnumerable_String__Class *klass;
    MonitorData *monitor;
};

struct MetricUnit__Enum__VTable {
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

struct MetricUnit__Enum__StaticFields {
};

struct MetricUnit__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MetricUnit__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MetricUnit__Enum__VTable vtable;
};

struct Nullable_1_PlayFab_PlayStreamModels_MetricUnit___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_PlayFab_PlayStreamModels_MetricUnit___StaticFields {
};

struct Nullable_1_PlayFab_PlayStreamModels_MetricUnit___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_PlayFab_PlayStreamModels_MetricUnit___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_PlayFab_PlayStreamModels_MetricUnit___VTable vtable;
};

struct PaymentOptionPerMauPriceTier__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PaymentOptionPerMauPriceTier__StaticFields {
};

struct PaymentOptionPerMauPriceTier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PaymentOptionPerMauPriceTier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PaymentOptionPerMauPriceTier__VTable vtable;
};

struct PaymentOptionPerMauPriceTier__Array__VTable {
};

struct PaymentOptionPerMauPriceTier__Array__StaticFields {
};

struct PaymentOptionPerMauPriceTier__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PaymentOptionPerMauPriceTier__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PaymentOptionPerMauPriceTier__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier___StaticFields {
};

struct IEnumerator_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier___VTable vtable;
};

struct List_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier___VTable {
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

struct List_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier___StaticFields {
    struct PaymentOptionPerMauPriceTier__Array *_emptyArray;
};

struct List_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier___VTable vtable;
};

struct IEnumerable_String__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct IEnumerable_String__StaticFields {
};

struct IEnumerable_String__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_String__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_String__VTable vtable;
};

struct TierUpdateEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TierUpdateEventData__StaticFields {
};

struct TierUpdateEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TierUpdateEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TierUpdateEventData__VTable vtable;
};

struct CharacterConsumedItemEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *CatalogVersion;
    struct String *ItemId;
    struct String *ItemInstanceId;
    struct String *PlayerId;
    uint32_t PreviousUsesRemaining;
    struct String *TitleId;
    uint32_t UsesRemaining;
};

struct CharacterConsumedItemEventData {
    struct CharacterConsumedItemEventData__Class *klass;
    MonitorData *monitor;
    struct CharacterConsumedItemEventData__Fields fields;
};

struct CharacterConsumedItemEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CharacterConsumedItemEventData__StaticFields {
};

struct CharacterConsumedItemEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CharacterConsumedItemEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CharacterConsumedItemEventData__VTable vtable;
};

struct CharacterCreatedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *CharacterName;
    struct DateTime Created;
    struct String *PlayerId;
    struct String *TitleId;
};

struct CharacterCreatedEventData {
    struct CharacterCreatedEventData__Class *klass;
    MonitorData *monitor;
    struct CharacterCreatedEventData__Fields fields;
};

struct CharacterCreatedEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CharacterCreatedEventData__StaticFields {
};

struct CharacterCreatedEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CharacterCreatedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CharacterCreatedEventData__VTable vtable;
};

struct CharacterInventoryItemAddedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *Annotation;
    struct List_1_System_String_ *BundleContents;
    struct String *CatalogVersion;
    struct String *Class;
    struct String *CouponCode;
    struct String *DisplayName;
    struct Nullable_1_DateTime_ Expiration;
    struct String *InstanceId;
    struct String *ItemId;
    struct String *PlayerId;
    struct Nullable_1_UInt32_ RemainingUses;
    struct String *TitleId;
};

struct CharacterInventoryItemAddedEventData {
    struct CharacterInventoryItemAddedEventData__Class *klass;
    MonitorData *monitor;
    struct CharacterInventoryItemAddedEventData__Fields fields;
};

struct CharacterInventoryItemAddedEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CharacterInventoryItemAddedEventData__StaticFields {
};

struct CharacterInventoryItemAddedEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CharacterInventoryItemAddedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CharacterInventoryItemAddedEventData__VTable vtable;
};

struct CharacterStatisticChangedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *PlayerId;
    struct String *StatisticName;
    struct Nullable_1_Int32_ StatisticPreviousValue;
    int32_t StatisticValue;
    struct String *TitleId;
    uint32_t Version;
};

struct CharacterStatisticChangedEventData {
    struct CharacterStatisticChangedEventData__Class *klass;
    MonitorData *monitor;
    struct CharacterStatisticChangedEventData__Fields fields;
};

struct CharacterStatisticChangedEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CharacterStatisticChangedEventData__StaticFields {
};

struct CharacterStatisticChangedEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CharacterStatisticChangedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CharacterStatisticChangedEventData__VTable vtable;
};

struct CharacterStatisticDeletedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *PlayerId;
    struct String *StatisticName;
    struct String *TitleId;
    uint32_t Version;
};

struct CharacterStatisticDeletedEventData {
    struct CharacterStatisticDeletedEventData__Class *klass;
    MonitorData *monitor;
    struct CharacterStatisticDeletedEventData__Fields fields;
};

struct CharacterStatisticDeletedEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CharacterStatisticDeletedEventData__StaticFields {
};

struct CharacterStatisticDeletedEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CharacterStatisticDeletedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CharacterStatisticDeletedEventData__VTable vtable;
};

struct CharacterVCPurchaseEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *CatalogVersion;
    struct String *CurrencyCode;
    struct String *ItemId;
    struct String *PlayerId;
    struct String *PurchaseId;
    int32_t Quantity;
    struct String *StoreId;
    struct String *TitleId;
    uint32_t UnitPrice;
};

struct CharacterVCPurchaseEventData {
    struct CharacterVCPurchaseEventData__Class *klass;
    MonitorData *monitor;
    struct CharacterVCPurchaseEventData__Fields fields;
};

struct CharacterVCPurchaseEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CharacterVCPurchaseEventData__StaticFields {
};

struct CharacterVCPurchaseEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CharacterVCPurchaseEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CharacterVCPurchaseEventData__VTable vtable;
};

struct CharacterVirtualCurrencyBalanceChangedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *OrderId;
    struct String *PlayerId;
    struct String *TitleId;
    int32_t VirtualCurrencyBalance;
    struct String *VirtualCurrencyName;
    int32_t VirtualCurrencyPreviousBalance;
};

struct CharacterVirtualCurrencyBalanceChangedEventData {
    struct CharacterVirtualCurrencyBalanceChangedEventData__Class *klass;
    MonitorData *monitor;
    struct CharacterVirtualCurrencyBalanceChangedEventData__Fields fields;
};

struct CharacterVirtualCurrencyBalanceChangedEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CharacterVirtualCurrencyBalanceChangedEventData__StaticFields {
};

struct CharacterVirtualCurrencyBalanceChangedEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CharacterVirtualCurrencyBalanceChangedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CharacterVirtualCurrencyBalanceChangedEventData__VTable vtable;
};

struct DisplayNameFilteredEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *DisplayName;
    struct String *PlayerId;
};

struct DisplayNameFilteredEventData {
    struct DisplayNameFilteredEventData__Class *klass;
    MonitorData *monitor;
    struct DisplayNameFilteredEventData__Fields fields;
};

struct DisplayNameFilteredEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DisplayNameFilteredEventData__StaticFields {
};

struct DisplayNameFilteredEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DisplayNameFilteredEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DisplayNameFilteredEventData__VTable vtable;
};

struct PlayerDisplayNameFilteredEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *DisplayName;
    struct String *TitleId;
};

struct PlayerDisplayNameFilteredEventData {
    struct PlayerDisplayNameFilteredEventData__Class *klass;
    MonitorData *monitor;
    struct PlayerDisplayNameFilteredEventData__Fields fields;
};

struct PlayerDisplayNameFilteredEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PlayerDisplayNameFilteredEventData__StaticFields {
};

struct PlayerDisplayNameFilteredEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayerDisplayNameFilteredEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayerDisplayNameFilteredEventData__VTable vtable;
};

enum class PhotonServicesEnum__Enum : int32_t {
    Realtime = 0x00000000,
    Turnbased = 0x00000001,
    Chat = 0x00000002,
};

struct PhotonServicesEnum__Enum__Boxed {
    struct PhotonServicesEnum__Enum__Class *klass;
    MonitorData *monitor;
    PhotonServicesEnum__Enum value;
    
};

struct Nullable_1_PlayFab_PlayStreamModels_PhotonServicesEnum_ {
    PhotonServicesEnum__Enum value;
    
    bool has_value;
};

struct Nullable_1_PlayFab_PlayStreamModels_PhotonServicesEnum___Boxed {
    struct Nullable_1_PlayFab_PlayStreamModels_PhotonServicesEnum___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_PlayFab_PlayStreamModels_PhotonServicesEnum_ fields;
};

struct PlayerPhotonSessionAuthenticatedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *PhotonApplicationId;
    struct Nullable_1_PlayFab_PlayStreamModels_PhotonServicesEnum_ PhotonApplicationType;
    struct String *TitleId;
};

}
