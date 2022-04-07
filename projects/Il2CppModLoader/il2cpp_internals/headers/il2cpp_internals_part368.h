namespace app {
struct MultiplayerServerRequestedEventPayload__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MultiplayerServerRequestedEventPayload__StaticFields {
};
struct MultiplayerServerRequestedEventPayload__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultiplayerServerRequestedEventPayload__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MultiplayerServerRequestedEventPayload__VTable vtable;
};
struct MultiplayerServerRequestedEventDataDoc__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MultiplayerServerRequestedEventDataDoc__StaticFields {
};
struct MultiplayerServerRequestedEventDataDoc__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultiplayerServerRequestedEventDataDoc__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MultiplayerServerRequestedEventDataDoc__VTable vtable;
};

struct MultiplayerServerStateChangedEventDataDoc__Fields {
  struct PlayStreamEventBase__Fields _;
  struct EntityLineage_1 * EntityLineage;
  struct String * OriginalEventId;
  struct Nullable_1_DateTime_ OriginalTimestamp;
  struct MultiplayerServerStateChangedEventPayload * Payload;
  struct EntityKey_9 * WriterEntity;
};
struct MultiplayerServerStateChangedEventDataDoc {
  struct MultiplayerServerStateChangedEventDataDoc__Class *klass;
  struct MonitorData *monitor;
  struct MultiplayerServerStateChangedEventDataDoc__Fields fields;
};
struct __declspec(align(8)) MultiplayerServerStateChangedEventPayload__Fields {
  struct String * BuildId;
  struct String * NewState;
  struct String * OldState;
  struct Nullable_1_PlayFab_PlayStreamModels_AzureRegion_ Region;
  struct String * ServerId;
  struct String * SessionId;
  struct String * VmId;
};
struct MultiplayerServerStateChangedEventPayload {
  struct MultiplayerServerStateChangedEventPayload__Class *klass;
  struct MonitorData *monitor;
  struct MultiplayerServerStateChangedEventPayload__Fields fields;
};
struct MultiplayerServerStateChangedEventPayload__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MultiplayerServerStateChangedEventPayload__StaticFields {
};
struct MultiplayerServerStateChangedEventPayload__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultiplayerServerStateChangedEventPayload__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MultiplayerServerStateChangedEventPayload__VTable vtable;
};
struct MultiplayerServerStateChangedEventDataDoc__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MultiplayerServerStateChangedEventDataDoc__StaticFields {
};
struct MultiplayerServerStateChangedEventDataDoc__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultiplayerServerStateChangedEventDataDoc__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MultiplayerServerStateChangedEventDataDoc__VTable vtable;
};

struct MultiplayerServerVmAssignedEventDataDoc__Fields {
  struct PlayStreamEventBase__Fields _;
  struct EntityLineage_1 * EntityLineage;
  struct String * OriginalEventId;
  struct Nullable_1_DateTime_ OriginalTimestamp;
  struct MultiplayerServerVmAssignedEventPayload * Payload;
  struct EntityKey_9 * WriterEntity;
};
struct MultiplayerServerVmAssignedEventDataDoc {
  struct MultiplayerServerVmAssignedEventDataDoc__Class *klass;
  struct MonitorData *monitor;
  struct MultiplayerServerVmAssignedEventDataDoc__Fields fields;
};
struct __declspec(align(8)) MultiplayerServerVmAssignedEventPayload__Fields {
  struct DateTime AssignmentEventTimestamp;
  struct String * BillingAssignmentCorrelationId;
  struct String * BuildId;
  struct Nullable_1_PlayFab_PlayStreamModels_AzureRegion_ Region;
  struct String * SessionId;
  struct String * VmId;
};
struct MultiplayerServerVmAssignedEventPayload {
  struct MultiplayerServerVmAssignedEventPayload__Class *klass;
  struct MonitorData *monitor;
  struct MultiplayerServerVmAssignedEventPayload__Fields fields;
};
struct MultiplayerServerVmAssignedEventPayload__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MultiplayerServerVmAssignedEventPayload__StaticFields {
};
struct MultiplayerServerVmAssignedEventPayload__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultiplayerServerVmAssignedEventPayload__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MultiplayerServerVmAssignedEventPayload__VTable vtable;
};
struct MultiplayerServerVmAssignedEventDataDoc__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MultiplayerServerVmAssignedEventDataDoc__StaticFields {
};
struct MultiplayerServerVmAssignedEventDataDoc__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultiplayerServerVmAssignedEventDataDoc__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MultiplayerServerVmAssignedEventDataDoc__VTable vtable;
};

struct MultiplayerServerVmRemoteUserCreatedEventDataDoc__Fields {
  struct PlayStreamEventBase__Fields _;
  struct EntityLineage_1 * EntityLineage;
  struct String * OriginalEventId;
  struct Nullable_1_DateTime_ OriginalTimestamp;
  struct MultiplayerServerVmRemoteUserCreatedEventPayload * Payload;
  struct EntityKey_9 * WriterEntity;
};
struct MultiplayerServerVmRemoteUserCreatedEventDataDoc {
  struct MultiplayerServerVmRemoteUserCreatedEventDataDoc__Class *klass;
  struct MonitorData *monitor;
  struct MultiplayerServerVmRemoteUserCreatedEventDataDoc__Fields fields;
};
struct __declspec(align(8)) MultiplayerServerVmRemoteUserCreatedEventPayload__Fields {
  struct Nullable_1_DateTime_ ExpirationTime;
  struct String * Username;
  struct String * VmId;
};
struct MultiplayerServerVmRemoteUserCreatedEventPayload {
  struct MultiplayerServerVmRemoteUserCreatedEventPayload__Class *klass;
  struct MonitorData *monitor;
  struct MultiplayerServerVmRemoteUserCreatedEventPayload__Fields fields;
};
struct MultiplayerServerVmRemoteUserCreatedEventPayload__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MultiplayerServerVmRemoteUserCreatedEventPayload__StaticFields {
};
struct MultiplayerServerVmRemoteUserCreatedEventPayload__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultiplayerServerVmRemoteUserCreatedEventPayload__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MultiplayerServerVmRemoteUserCreatedEventPayload__VTable vtable;
};
struct MultiplayerServerVmRemoteUserCreatedEventDataDoc__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MultiplayerServerVmRemoteUserCreatedEventDataDoc__StaticFields {
};
struct MultiplayerServerVmRemoteUserCreatedEventDataDoc__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultiplayerServerVmRemoteUserCreatedEventDataDoc__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MultiplayerServerVmRemoteUserCreatedEventDataDoc__VTable vtable;
};

struct MultiplayerServerVmRemoteUserDeletedEventDataDoc__Fields {
  struct PlayStreamEventBase__Fields _;
  struct EntityLineage_1 * EntityLineage;
  struct String * OriginalEventId;
  struct Nullable_1_DateTime_ OriginalTimestamp;
  struct MultiplayerServerVmRemoteUserDeletedEventPayload * Payload;
  struct EntityKey_9 * WriterEntity;
};
struct MultiplayerServerVmRemoteUserDeletedEventDataDoc {
  struct MultiplayerServerVmRemoteUserDeletedEventDataDoc__Class *klass;
  struct MonitorData *monitor;
  struct MultiplayerServerVmRemoteUserDeletedEventDataDoc__Fields fields;
};
struct __declspec(align(8)) MultiplayerServerVmRemoteUserDeletedEventPayload__Fields {
  struct String * BuildId;
  struct String * Username;
  struct String * VmId;
};
struct MultiplayerServerVmRemoteUserDeletedEventPayload {
  struct MultiplayerServerVmRemoteUserDeletedEventPayload__Class *klass;
  struct MonitorData *monitor;
  struct MultiplayerServerVmRemoteUserDeletedEventPayload__Fields fields;
};
struct MultiplayerServerVmRemoteUserDeletedEventPayload__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MultiplayerServerVmRemoteUserDeletedEventPayload__StaticFields {
};
struct MultiplayerServerVmRemoteUserDeletedEventPayload__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultiplayerServerVmRemoteUserDeletedEventPayload__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MultiplayerServerVmRemoteUserDeletedEventPayload__VTable vtable;
};
struct MultiplayerServerVmRemoteUserDeletedEventDataDoc__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MultiplayerServerVmRemoteUserDeletedEventDataDoc__StaticFields {
};
struct MultiplayerServerVmRemoteUserDeletedEventDataDoc__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultiplayerServerVmRemoteUserDeletedEventDataDoc__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MultiplayerServerVmRemoteUserDeletedEventDataDoc__VTable vtable;
};

struct MultiplayerServerVmUnassignmentStartedEventDataDoc__Fields {
  struct PlayStreamEventBase__Fields _;
  struct EntityLineage_1 * EntityLineage;
  struct String * OriginalEventId;
  struct Nullable_1_DateTime_ OriginalTimestamp;
  struct MultiplayerServerVmUnassignmentStartedEventPayload * Payload;
  struct EntityKey_9 * WriterEntity;
};
struct MultiplayerServerVmUnassignmentStartedEventDataDoc {
  struct MultiplayerServerVmUnassignmentStartedEventDataDoc__Class *klass;
  struct MonitorData *monitor;
  struct MultiplayerServerVmUnassignmentStartedEventDataDoc__Fields fields;
};
struct __declspec(align(8)) MultiplayerServerVmUnassignmentStartedEventPayload__Fields {
  double AssignmentDurationMs;
  struct String * BillingAssignmentCorrelationId;
  struct String * BuildId;
  struct Nullable_1_PlayFab_PlayStreamModels_AzureRegion_ Region;
  struct String * SessionId;
  struct DateTime UnassignmentEventTimestamp;
  struct String * VmId;
  struct String * VmOs;
};
struct MultiplayerServerVmUnassignmentStartedEventPayload {
  struct MultiplayerServerVmUnassignmentStartedEventPayload__Class *klass;
  struct MonitorData *monitor;
  struct MultiplayerServerVmUnassignmentStartedEventPayload__Fields fields;
};
struct MultiplayerServerVmUnassignmentStartedEventPayload__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MultiplayerServerVmUnassignmentStartedEventPayload__StaticFields {
};
struct MultiplayerServerVmUnassignmentStartedEventPayload__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultiplayerServerVmUnassignmentStartedEventPayload__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultiplayerServerVmUnassignmentStartedEventDataDoc__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MultiplayerServerVmUnassignmentStartedEventDataDoc__VTable vtable;
};

struct MultiplayerServerVmUnhealthyEventDataDoc__Fields {
  struct PlayStreamEventBase__Fields _;
  struct EntityLineage_1 * EntityLineage;
  struct String * OriginalEventId;
  struct Nullable_1_DateTime_ OriginalTimestamp;
  struct MultiplayerServerVmUnhealthyEventPayload * Payload;
  struct EntityKey_9 * WriterEntity;
};
struct MultiplayerServerVmUnhealthyEventDataDoc {
  struct MultiplayerServerVmUnhealthyEventDataDoc__Class *klass;
  struct MonitorData *monitor;
  struct MultiplayerServerVmUnhealthyEventDataDoc__Fields fields;
};
struct __declspec(align(8)) MultiplayerServerVmUnhealthyEventPayload__Fields {
  struct String * BuildId;
  struct String * HealthStatus;
  struct Nullable_1_PlayFab_PlayStreamModels_AzureRegion_ Region;
  struct String * VmId;
};
struct MultiplayerServerVmUnhealthyEventPayload {
  struct MultiplayerServerVmUnhealthyEventPayload__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultiplayerServerVmUnhealthyEventPayload__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultiplayerServerVmUnhealthyEventDataDoc__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MultiplayerServerVmUnhealthyEventDataDoc__VTable vtable;
};

struct StudioCreatedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * CreatorAuthenticationId;
  struct String * CreatorPlayFabId;
  struct String * StudioName;
};
struct StudioCreatedEventData {
  struct StudioCreatedEventData__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StudioCreatedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StudioCreatedEventData__VTable vtable;
};

enum AuthenticationProvider__Enum : int32_t {
  AuthenticationProvider__Enum_PlayFab = 0,
  AuthenticationProvider__Enum_SAML = 1,
};
struct AuthenticationProvider__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AuthenticationProvider__Enum value;
};
struct Nullable_1_PlayFab_PlayStreamModels_AuthenticationProvider_ {
  enum AuthenticationProvider__Enum value;
  bool has_value;
};
struct Nullable_1_PlayFab_PlayStreamModels_AuthenticationProvider___Boxed {
  struct Nullable_1_PlayFab_PlayStreamModels_AuthenticationProvider___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_PlayStreamModels_AuthenticationProvider_ fields;
};
struct StudioUserAddedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * AuthenticationId;
  struct Nullable_1_PlayFab_PlayStreamModels_AuthenticationProvider_ AuthenticationProvider;
  struct String * AuthenticationProviderId;
  struct String * Email;
  struct String * InvitationId;
  struct String * PlayFabId;
  struct List_1_System_String_ * StudioPermissions;
  struct Dictionary_2_System_String_System_String_ * TitlePermissions;
};
struct StudioUserAddedEventData {
  struct StudioUserAddedEventData__Class *klass;
  struct MonitorData *monitor;
  struct StudioUserAddedEventData__Fields fields;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_PlayFab_PlayStreamModels_AuthenticationProvider___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StudioUserAddedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StudioUserAddedEventData__VTable vtable;
};

struct StudioUserInvitedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct Nullable_1_PlayFab_PlayStreamModels_AuthenticationProvider_ AuthenticationProvider;
  struct String * AuthenticationProviderId;
  struct String * Email;
  struct Nullable_1_DateTime_ InvitationExpires;
  struct String * InvitationId;
  bool InvitedExistingUser;
  struct String * InvitorPlayFabId;
  struct List_1_System_String_ * StudioPermissions;
  struct Dictionary_2_System_String_System_String_ * TitlePermissions;
};
struct StudioUserInvitedEventData {
  struct StudioUserInvitedEventData__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StudioUserInvitedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StudioUserInvitedEventData__VTable vtable;
};

struct StudioUserRemovedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * AuthenticationId;
  struct Nullable_1_PlayFab_PlayStreamModels_AuthenticationProvider_ AuthenticationProvider;
  struct String * AuthenticationProviderId;
  struct String * PlayFabId;
  struct List_1_System_String_ * StudioPermissions;
  struct Dictionary_2_System_String_System_String_ * TitlePermissions;
};
struct StudioUserRemovedEventData {
  struct StudioUserRemovedEventData__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StudioUserRemovedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StudioUserRemovedEventData__VTable vtable;
};

struct TenacyConnectorOnboardEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * EntityChain;
  struct EntityLineage_1 * EntityLineage;
};
struct TenacyConnectorOnboardEventData {
  struct TenacyConnectorOnboardEventData__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TenacyConnectorOnboardEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TenacyConnectorOnboardEventData__VTable vtable;
};

struct TierUpdateEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * ContactCompanyName;
  bool IsPayAsYouGo;
  bool IsReservedCapacity;
  bool IsReservedCapacityAnnual;
  double MonthlyMinimumUSD;
  struct List_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier_ * OveragePricePerMauTiers;
  struct String * PaymentSystemAccountId;
  struct List_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier_ * PricePerMauTiers;
  struct Nullable_1_Int32_ ReservedMAU;
  struct IEnumerable_String * StudioIds;
  struct String * TierDisplayName;
  struct String * TierId;
  struct String * TransactionId;
};
struct TierUpdateEventData {
  struct TierUpdateEventData__Class *klass;
  struct MonitorData *monitor;
  struct TierUpdateEventData__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier___Fields {
  struct PaymentOptionPerMauPriceTier__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier_ {
  struct List_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier___Fields fields;
};
enum MetricUnit__Enum : int32_t {
  MetricUnit__Enum_Value = 0,
  MetricUnit__Enum_Count = 1,
  MetricUnit__Enum_Percent = 2,
  MetricUnit__Enum_Milliseconds = 3,
  MetricUnit__Enum_Seconds = 4,
  MetricUnit__Enum_Hours = 5,
  MetricUnit__Enum_Days = 6,
  MetricUnit__Enum_Bits = 7,
  MetricUnit__Enum_Bytes = 8,
  MetricUnit__Enum_Kilobytes = 9,
  MetricUnit__Enum_Megabytes = 10,
  MetricUnit__Enum_Gigabytes = 11,
  MetricUnit__Enum_Terabytes = 12,
  MetricUnit__Enum_Bytes_Per_Second = 13,
  MetricUnit__Enum_MonthlyActiveUsers = 14,
  MetricUnit__Enum_EnableDisable = 15,
};
struct MetricUnit__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MetricUnit__Enum value;
};
struct Nullable_1_PlayFab_PlayStreamModels_MetricUnit_ {
  enum MetricUnit__Enum value;
  bool has_value;
};
struct Nullable_1_PlayFab_PlayStreamModels_MetricUnit___Boxed {
  struct Nullable_1_PlayFab_PlayStreamModels_MetricUnit___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_PlayStreamModels_MetricUnit_ fields;
};
struct __declspec(align(8)) PaymentOptionPerMauPriceTier__Fields {
  struct Nullable_1_Int32_ LowerBoundInclusive;
  struct String * Name;
  struct Nullable_1_PlayFab_PlayStreamModels_MetricUnit_ PriceUnit;
  struct Nullable_1_Double_ PriceUnitSize;
  struct Nullable_1_Double_ PriceUSD;
  struct String * PriceUSDFormatted;
  struct Nullable_1_Int32_ UpperBoundInclusive;
};
struct PaymentOptionPerMauPriceTier {
  struct PaymentOptionPerMauPriceTier__Class *klass;
  struct MonitorData *monitor;
  struct PaymentOptionPerMauPriceTier__Fields fields;
};
struct PaymentOptionPerMauPriceTier__Array {
  struct PaymentOptionPerMauPriceTier__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PaymentOptionPerMauPriceTier * vector[32];
};
struct IEnumerator_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier_ {
  struct IEnumerator_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_String {
  struct IEnumerable_String__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_PlayFab_PlayStreamModels_MetricUnit___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PaymentOptionPerMauPriceTier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PaymentOptionPerMauPriceTier__VTable vtable;
};
struct IEnumerator_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier___StaticFields {
};
struct IEnumerator_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct PaymentOptionPerMauPriceTier__Array * _emptyArray;
};
struct List_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_String__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TierUpdateEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TierUpdateEventData__VTable vtable;
};

struct CharacterConsumedItemEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * CatalogVersion;
  struct String * ItemId;
  struct String * ItemInstanceId;
  struct String * PlayerId;
  uint32_t PreviousUsesRemaining;
  struct String * TitleId;
  uint32_t UsesRemaining;
};
struct CharacterConsumedItemEventData {
  struct CharacterConsumedItemEventData__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharacterConsumedItemEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharacterConsumedItemEventData__VTable vtable;
};

struct CharacterCreatedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * CharacterName;
  struct DateTime Created;
  struct String * PlayerId;
  struct String * TitleId;
};
struct CharacterCreatedEventData {
  struct CharacterCreatedEventData__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharacterCreatedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharacterCreatedEventData__VTable vtable;
};

struct CharacterInventoryItemAddedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * Annotation;
  struct List_1_System_String_ * BundleContents;
  struct String * CatalogVersion;
  struct String * Class;
  struct String * CouponCode;
  struct String * DisplayName;
  struct Nullable_1_DateTime_ Expiration;
  struct String * InstanceId;
  struct String * ItemId;
  struct String * PlayerId;
  struct Nullable_1_UInt32_ RemainingUses;
  struct String * TitleId;
};
struct CharacterInventoryItemAddedEventData {
  struct CharacterInventoryItemAddedEventData__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharacterInventoryItemAddedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharacterInventoryItemAddedEventData__VTable vtable;
};

struct CharacterStatisticChangedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * PlayerId;
  struct String * StatisticName;
  struct Nullable_1_Int32_ StatisticPreviousValue;
  int32_t StatisticValue;
  struct String * TitleId;
  uint32_t Version;
};
struct CharacterStatisticChangedEventData {
  struct CharacterStatisticChangedEventData__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharacterStatisticChangedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharacterStatisticChangedEventData__VTable vtable;
};

struct CharacterStatisticDeletedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * PlayerId;
  struct String * StatisticName;
  struct String * TitleId;
  uint32_t Version;
};
struct CharacterStatisticDeletedEventData {
  struct CharacterStatisticDeletedEventData__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharacterStatisticDeletedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharacterStatisticDeletedEventData__VTable vtable;
};

struct CharacterVCPurchaseEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * CatalogVersion;
  struct String * CurrencyCode;
  struct String * ItemId;
  struct String * PlayerId;
  struct String * PurchaseId;
  int32_t Quantity;
  struct String * StoreId;
  struct String * TitleId;
  uint32_t UnitPrice;
};
struct CharacterVCPurchaseEventData {
  struct CharacterVCPurchaseEventData__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharacterVCPurchaseEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharacterVCPurchaseEventData__VTable vtable;
};

struct CharacterVirtualCurrencyBalanceChangedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * OrderId;
  struct String * PlayerId;
  struct String * TitleId;
  int32_t VirtualCurrencyBalance;
  struct String * VirtualCurrencyName;
  int32_t VirtualCurrencyPreviousBalance;
};
struct CharacterVirtualCurrencyBalanceChangedEventData {
  struct CharacterVirtualCurrencyBalanceChangedEventData__Class *klass;
  struct MonitorData *monitor;
  struct CharacterVirtualCurrencyBalanceChangedEventData__Fields fields;
};
struct CharacterVirtualCurrencyBalanceChangedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};}