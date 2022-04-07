namespace app {
struct List_1_PlayFab_PlayStreamModels_ObjectSet___StaticFields {
  struct ObjectSet__Array * _emptyArray;
};
struct List_1_PlayFab_PlayStreamModels_ObjectSet___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_PlayStreamModels_ObjectSet___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_PlayStreamModels_ObjectSet___VTable vtable;
};
struct EntityObjectsSetEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EntityObjectsSetEventData__StaticFields {
};
struct EntityObjectsSetEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityObjectsSetEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityObjectsSetEventData__VTable vtable;
};

struct EntityVirtualCurrencyBalancesChangedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * EntityChain;
  struct EntityLineage_1 * EntityLineage;
  struct String * SequenceId;
  struct Dictionary_2_System_String_System_Int32_ * VirtualCurrencyBalances;
  struct String * VirtualCurrencyContainerId;
  struct Dictionary_2_System_String_System_Int32_ * VirtualCurrencyPreviousBalances;
};
struct EntityVirtualCurrencyBalancesChangedEventData {
  struct EntityVirtualCurrencyBalancesChangedEventData__Class *klass;
  struct MonitorData *monitor;
  struct EntityVirtualCurrencyBalancesChangedEventData__Fields fields;
};
struct EntityVirtualCurrencyBalancesChangedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EntityVirtualCurrencyBalancesChangedEventData__StaticFields {
};
struct EntityVirtualCurrencyBalancesChangedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityVirtualCurrencyBalancesChangedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityVirtualCurrencyBalancesChangedEventData__VTable vtable;
};

struct GroupCreatedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * CreatorEntityId;
  struct String * CreatorEntityType;
  struct String * EntityChain;
  struct EntityLineage_1 * EntityLineage;
  struct String * GroupName;
};
struct GroupCreatedEventData {
  struct GroupCreatedEventData__Class *klass;
  struct MonitorData *monitor;
  struct GroupCreatedEventData__Fields fields;
};
struct GroupCreatedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GroupCreatedEventData__StaticFields {
};
struct GroupCreatedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GroupCreatedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GroupCreatedEventData__VTable vtable;
};

struct GroupDeletedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * DeleterEntityId;
  struct String * DeleterEntityType;
  struct String * EntityChain;
  struct EntityLineage_1 * EntityLineage;
  struct String * GroupName;
};
struct GroupDeletedEventData {
  struct GroupDeletedEventData__Class *klass;
  struct MonitorData *monitor;
  struct GroupDeletedEventData__Fields fields;
};
struct GroupDeletedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GroupDeletedEventData__StaticFields {
};
struct GroupDeletedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GroupDeletedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GroupDeletedEventData__VTable vtable;
};

struct GroupMembersAddedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * EntityChain;
  struct EntityLineage_1 * EntityLineage;
  struct String * GroupName;
  struct List_1_PlayFab_PlayStreamModels_Member_ * Members;
  struct String * RoleId;
  struct String * RoleName;
};
struct GroupMembersAddedEventData {
  struct GroupMembersAddedEventData__Class *klass;
  struct MonitorData *monitor;
  struct GroupMembersAddedEventData__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_PlayStreamModels_Member___Fields {
  struct Member__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_PlayStreamModels_Member_ {
  struct List_1_PlayFab_PlayStreamModels_Member___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_PlayStreamModels_Member___Fields fields;
};
struct __declspec(align(8)) Member__Fields {
  struct String * EntityId;
  struct String * EntityType;
};
struct Member {
  struct Member__Class *klass;
  struct MonitorData *monitor;
  struct Member__Fields fields;
};
struct Member__Array {
  struct Member__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Member * vector[32];
};
struct IEnumerator_1_PlayFab_PlayStreamModels_Member_ {
  struct IEnumerator_1_PlayFab_PlayStreamModels_Member___Class *klass;
  struct MonitorData *monitor;
};
struct Member__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Member__StaticFields {
};
struct Member__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Member__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Member__VTable vtable;
};
struct IEnumerator_1_PlayFab_PlayStreamModels_Member___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_PlayStreamModels_Member___StaticFields {
};
struct IEnumerator_1_PlayFab_PlayStreamModels_Member___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_PlayStreamModels_Member___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_PlayStreamModels_Member___VTable vtable;
};
struct List_1_PlayFab_PlayStreamModels_Member___VTable {
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
struct List_1_PlayFab_PlayStreamModels_Member___StaticFields {
  struct Member__Array * _emptyArray;
};
struct List_1_PlayFab_PlayStreamModels_Member___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_PlayStreamModels_Member___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_PlayStreamModels_Member___VTable vtable;
};
struct GroupMembersAddedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GroupMembersAddedEventData__StaticFields {
};
struct GroupMembersAddedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GroupMembersAddedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GroupMembersAddedEventData__VTable vtable;
};

struct GroupMembersRemovedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * EntityChain;
  struct EntityLineage_1 * EntityLineage;
  struct String * GroupName;
  struct List_1_PlayFab_PlayStreamModels_Member_ * Members;
};
struct GroupMembersRemovedEventData {
  struct GroupMembersRemovedEventData__Class *klass;
  struct MonitorData *monitor;
  struct GroupMembersRemovedEventData__Fields fields;
};
struct GroupMembersRemovedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GroupMembersRemovedEventData__StaticFields {
};
struct GroupMembersRemovedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GroupMembersRemovedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GroupMembersRemovedEventData__VTable vtable;
};

struct GroupRoleCreatedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * CreatorEntityId;
  struct String * CreatorEntityType;
  struct String * EntityChain;
  struct EntityLineage_1 * EntityLineage;
  struct String * GroupName;
  struct String * RoleId;
  struct String * RoleName;
};
struct GroupRoleCreatedEventData {
  struct GroupRoleCreatedEventData__Class *klass;
  struct MonitorData *monitor;
  struct GroupRoleCreatedEventData__Fields fields;
};
struct GroupRoleCreatedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GroupRoleCreatedEventData__StaticFields {
};
struct GroupRoleCreatedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GroupRoleCreatedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GroupRoleCreatedEventData__VTable vtable;
};

struct GroupRoleDeletedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * DeleterEntityId;
  struct String * DeleterEntityType;
  struct String * EntityChain;
  struct EntityLineage_1 * EntityLineage;
  struct String * GroupName;
  struct String * RoleId;
  struct String * RoleName;
};
struct GroupRoleDeletedEventData {
  struct GroupRoleDeletedEventData__Class *klass;
  struct MonitorData *monitor;
  struct GroupRoleDeletedEventData__Fields fields;
};
struct GroupRoleDeletedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GroupRoleDeletedEventData__StaticFields {
};
struct GroupRoleDeletedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GroupRoleDeletedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GroupRoleDeletedEventData__VTable vtable;
};

struct GroupRoleMembersAddedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * EntityChain;
  struct EntityLineage_1 * EntityLineage;
  struct String * GroupName;
  struct List_1_PlayFab_PlayStreamModels_Member_ * Members;
  struct String * RoleId;
  struct String * RoleName;
};
struct GroupRoleMembersAddedEventData {
  struct GroupRoleMembersAddedEventData__Class *klass;
  struct MonitorData *monitor;
  struct GroupRoleMembersAddedEventData__Fields fields;
};
struct GroupRoleMembersAddedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GroupRoleMembersAddedEventData__StaticFields {
};
struct GroupRoleMembersAddedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GroupRoleMembersAddedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GroupRoleMembersAddedEventData__VTable vtable;
};

struct GroupRoleMembersRemovedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * EntityChain;
  struct EntityLineage_1 * EntityLineage;
  struct String * GroupName;
  struct List_1_PlayFab_PlayStreamModels_Member_ * Members;
  struct String * RoleId;
  struct String * RoleName;
};
struct GroupRoleMembersRemovedEventData {
  struct GroupRoleMembersRemovedEventData__Class *klass;
  struct MonitorData *monitor;
  struct GroupRoleMembersRemovedEventData__Fields fields;
};
struct GroupRoleMembersRemovedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GroupRoleMembersRemovedEventData__StaticFields {
};
struct GroupRoleMembersRemovedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GroupRoleMembersRemovedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GroupRoleMembersRemovedEventData__VTable vtable;
};

struct GroupRoleUpdatedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * EntityChain;
  struct EntityLineage_1 * EntityLineage;
  struct String * GroupName;
  struct RolePropertyValues * NewValues;
  struct RolePropertyValues * OldValues;
  struct String * RoleId;
  struct String * RoleName;
  struct String * UpdaterEntityId;
  struct String * UpdaterEntityType;
};
struct GroupRoleUpdatedEventData {
  struct GroupRoleUpdatedEventData__Class *klass;
  struct MonitorData *monitor;
  struct GroupRoleUpdatedEventData__Fields fields;
};
struct __declspec(align(8)) RolePropertyValues__Fields {
  struct String * RoleName;
};
struct RolePropertyValues {
  struct RolePropertyValues__Class *klass;
  struct MonitorData *monitor;
  struct RolePropertyValues__Fields fields;
};
struct RolePropertyValues__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RolePropertyValues__StaticFields {
};
struct RolePropertyValues__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RolePropertyValues__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RolePropertyValues__VTable vtable;
};
struct GroupRoleUpdatedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GroupRoleUpdatedEventData__StaticFields {
};
struct GroupRoleUpdatedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GroupRoleUpdatedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GroupRoleUpdatedEventData__VTable vtable;
};

struct GroupUpdatedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * EntityChain;
  struct EntityLineage_1 * EntityLineage;
  struct String * GroupName;
  struct GroupPropertyValues * NewValues;
  struct GroupPropertyValues * OldValues;
  struct String * UpdaterEntityId;
  struct String * UpdaterEntityType;
};
struct GroupUpdatedEventData {
  struct GroupUpdatedEventData__Class *klass;
  struct MonitorData *monitor;
  struct GroupUpdatedEventData__Fields fields;
};
struct __declspec(align(8)) GroupPropertyValues__Fields {
  struct String * AdminRoleId;
  struct String * GroupName;
  struct String * MemberRoleId;
};
struct GroupPropertyValues {
  struct GroupPropertyValues__Class *klass;
  struct MonitorData *monitor;
  struct GroupPropertyValues__Fields fields;
};
struct GroupPropertyValues__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GroupPropertyValues__StaticFields {
};
struct GroupPropertyValues__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GroupPropertyValues__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GroupPropertyValues__VTable vtable;
};
struct GroupUpdatedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GroupUpdatedEventData__StaticFields {
};
struct GroupUpdatedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GroupUpdatedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GroupUpdatedEventData__VTable vtable;
};

struct MatchmakingMatchFoundEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct EntityLineage_1 * EntityLineage;
  struct MatchmakingMatchFoundPayload * Payload;
  struct EntityKey_9 * WriterEntity;
};
struct MatchmakingMatchFoundEventData {
  struct MatchmakingMatchFoundEventData__Class *klass;
  struct MonitorData *monitor;
  struct MatchmakingMatchFoundEventData__Fields fields;
};
struct __declspec(align(8)) MatchmakingMatchFoundPayload__Fields {
  struct String * MatchId;
  struct String * QueueName;
  struct List_1_System_String_ * TicketIds;
};
struct MatchmakingMatchFoundPayload {
  struct MatchmakingMatchFoundPayload__Class *klass;
  struct MonitorData *monitor;
  struct MatchmakingMatchFoundPayload__Fields fields;
};
struct __declspec(align(8)) EntityKey_9__Fields {
  struct String * Id;
  struct String * Type;
  struct String * TypeString;
};
struct EntityKey_9 {
  struct EntityKey_9__Class *klass;
  struct MonitorData *monitor;
  struct EntityKey_9__Fields fields;
};
struct MatchmakingMatchFoundPayload__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MatchmakingMatchFoundPayload__StaticFields {
};
struct MatchmakingMatchFoundPayload__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MatchmakingMatchFoundPayload__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MatchmakingMatchFoundPayload__VTable vtable;
};
struct EntityKey_9__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EntityKey_9__StaticFields {
};
struct EntityKey_9__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityKey_9__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityKey_9__VTable vtable;
};
struct MatchmakingMatchFoundEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MatchmakingMatchFoundEventData__StaticFields {
};
struct MatchmakingMatchFoundEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MatchmakingMatchFoundEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MatchmakingMatchFoundEventData__VTable vtable;
};

struct MatchmakingTicketCompleteEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct EntityLineage_1 * EntityLineage;
  struct MatchmakingTicketCompletePayload * Payload;
  struct EntityKey_9 * WriterEntity;
};
struct MatchmakingTicketCompleteEventData {
  struct MatchmakingTicketCompleteEventData__Class *klass;
  struct MonitorData *monitor;
  struct MatchmakingTicketCompleteEventData__Fields fields;
};
struct __declspec(align(8)) MatchmakingTicketCompletePayload__Fields {
  struct String * CancellationReason;
  struct DateTime CompletionTime;
  struct DateTime CreationTime;
  struct String * QueueName;
  struct String * Result;
  struct Nullable_1_DateTime_ SubmissionTime;
  struct List_1_PlayFab_PlayStreamModels_EntityKey_ * TicketEntities;
  struct String * TicketId;
};
struct MatchmakingTicketCompletePayload {
  struct MatchmakingTicketCompletePayload__Class *klass;
  struct MonitorData *monitor;
  struct MatchmakingTicketCompletePayload__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_PlayStreamModels_EntityKey___Fields {
  struct EntityKey_9__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_PlayStreamModels_EntityKey_ {
  struct List_1_PlayFab_PlayStreamModels_EntityKey___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_PlayStreamModels_EntityKey___Fields fields;
};
struct EntityKey_9__Array {
  struct EntityKey_9__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct EntityKey_9 * vector[32];
};
struct IEnumerator_1_PlayFab_PlayStreamModels_EntityKey_ {
  struct IEnumerator_1_PlayFab_PlayStreamModels_EntityKey___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_PlayFab_PlayStreamModels_EntityKey___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_PlayStreamModels_EntityKey___StaticFields {
};
struct IEnumerator_1_PlayFab_PlayStreamModels_EntityKey___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_PlayStreamModels_EntityKey___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_PlayStreamModels_EntityKey___VTable vtable;
};
struct List_1_PlayFab_PlayStreamModels_EntityKey___VTable {
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
struct List_1_PlayFab_PlayStreamModels_EntityKey___StaticFields {
  struct EntityKey_9__Array * _emptyArray;
};
struct List_1_PlayFab_PlayStreamModels_EntityKey___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_PlayStreamModels_EntityKey___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_PlayStreamModels_EntityKey___VTable vtable;
};
struct MatchmakingTicketCompletePayload__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MatchmakingTicketCompletePayload__StaticFields {
};
struct MatchmakingTicketCompletePayload__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MatchmakingTicketCompletePayload__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MatchmakingTicketCompletePayload__VTable vtable;
};
struct MatchmakingTicketCompleteEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MatchmakingTicketCompleteEventData__StaticFields {
};
struct MatchmakingTicketCompleteEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MatchmakingTicketCompleteEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MatchmakingTicketCompleteEventData__VTable vtable;
};

struct MatchmakingUserTicketCompleteEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct EntityLineage_1 * EntityLineage;
  struct MatchmakingUserTicketCompletePayload * Payload;
  struct EntityKey_9 * WriterEntity;
};
struct MatchmakingUserTicketCompleteEventData {
  struct MatchmakingUserTicketCompleteEventData__Class *klass;
  struct MonitorData *monitor;
  struct MatchmakingUserTicketCompleteEventData__Fields fields;
};
struct __declspec(align(8)) MatchmakingUserTicketCompletePayload__Fields {
  struct String * CancellationReason;
  struct String * MatchId;
  struct String * QueueName;
  struct String * Result;
  struct String * TicketId;
};
struct MatchmakingUserTicketCompletePayload {
  struct MatchmakingUserTicketCompletePayload__Class *klass;
  struct MonitorData *monitor;
  struct MatchmakingUserTicketCompletePayload__Fields fields;
};
struct MatchmakingUserTicketCompletePayload__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MatchmakingUserTicketCompletePayload__StaticFields {
};
struct MatchmakingUserTicketCompletePayload__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MatchmakingUserTicketCompletePayload__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MatchmakingUserTicketCompletePayload__VTable vtable;
};
struct MatchmakingUserTicketCompleteEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MatchmakingUserTicketCompleteEventData__StaticFields {
};
struct MatchmakingUserTicketCompleteEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MatchmakingUserTicketCompleteEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MatchmakingUserTicketCompleteEventData__VTable vtable;
};

struct MatchmakingUserTicketInviteEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct EntityLineage_1 * EntityLineage;
  struct MatchmakingUserTicketInvitePayload * Payload;
  struct EntityKey_9 * WriterEntity;
};
struct MatchmakingUserTicketInviteEventData {
  struct MatchmakingUserTicketInviteEventData__Class *klass;
  struct MonitorData *monitor;
  struct MatchmakingUserTicketInviteEventData__Fields fields;
};
struct __declspec(align(8)) MatchmakingUserTicketInvitePayload__Fields {
  struct EntityKey_9 * CreatorEntity;
  struct String * QueueName;
  struct String * TicketId;
};
struct MatchmakingUserTicketInvitePayload {
  struct MatchmakingUserTicketInvitePayload__Class *klass;
  struct MonitorData *monitor;
  struct MatchmakingUserTicketInvitePayload__Fields fields;
};
struct MatchmakingUserTicketInvitePayload__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MatchmakingUserTicketInvitePayload__StaticFields {
};
struct MatchmakingUserTicketInvitePayload__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MatchmakingUserTicketInvitePayload__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MatchmakingUserTicketInvitePayload__VTable vtable;
};
struct MatchmakingUserTicketInviteEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MatchmakingUserTicketInviteEventData__StaticFields {
};
struct MatchmakingUserTicketInviteEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MatchmakingUserTicketInviteEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MatchmakingUserTicketInviteEventData__VTable vtable;
};

struct MultiplayerServerBuildDeletedEventDataDoc__Fields {
  struct PlayStreamEventBase__Fields _;
  struct EntityLineage_1 * EntityLineage;
  struct String * OriginalEventId;
  struct Nullable_1_DateTime_ OriginalTimestamp;
  struct MultiplayerServerBuildDeletedEventPayload * Payload;
  struct EntityKey_9 * WriterEntity;
};
struct MultiplayerServerBuildDeletedEventDataDoc {
  struct MultiplayerServerBuildDeletedEventDataDoc__Class *klass;
  struct MonitorData *monitor;
  struct MultiplayerServerBuildDeletedEventDataDoc__Fields fields;
};
struct __declspec(align(8)) MultiplayerServerBuildDeletedEventPayload__Fields {
  struct String * BuildId;
};
struct MultiplayerServerBuildDeletedEventPayload {
  struct MultiplayerServerBuildDeletedEventPayload__Class *klass;
  struct MonitorData *monitor;
  struct MultiplayerServerBuildDeletedEventPayload__Fields fields;
};
struct MultiplayerServerBuildDeletedEventPayload__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MultiplayerServerBuildDeletedEventPayload__StaticFields {
};
struct MultiplayerServerBuildDeletedEventPayload__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultiplayerServerBuildDeletedEventPayload__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MultiplayerServerBuildDeletedEventPayload__VTable vtable;
};
struct MultiplayerServerBuildDeletedEventDataDoc__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MultiplayerServerBuildDeletedEventDataDoc__StaticFields {
};
struct MultiplayerServerBuildDeletedEventDataDoc__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultiplayerServerBuildDeletedEventDataDoc__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MultiplayerServerBuildDeletedEventDataDoc__VTable vtable;
};

struct MultiplayerServerBuildRegionStatusChangedEventDataDoc__Fields {
  struct PlayStreamEventBase__Fields _;
  struct EntityLineage_1 * EntityLineage;
  struct String * OriginalEventId;
  struct Nullable_1_DateTime_ OriginalTimestamp;
  struct MultiplayerServerBuildRegionStatusChangedEventPayload * Payload;
  struct EntityKey_9 * WriterEntity;
};
struct MultiplayerServerBuildRegionStatusChangedEventDataDoc {
  struct MultiplayerServerBuildRegionStatusChangedEventDataDoc__Class *klass;
  struct MonitorData *monitor;
  struct MultiplayerServerBuildRegionStatusChangedEventDataDoc__Fields fields;
};
enum AzureRegion__Enum_1 : int32_t {
  AzureRegion__Enum_1_AustraliaEast = 0,
  AzureRegion__Enum_1_AustraliaSoutheast = 1,
  AzureRegion__Enum_1_BrazilSouth = 2,
  AzureRegion__Enum_1_CentralUs = 3,
  AzureRegion__Enum_1_EastAsia = 4,
  AzureRegion__Enum_1_EastUs = 5,
  AzureRegion__Enum_1_EastUs2 = 6,
  AzureRegion__Enum_1_JapanEast = 7,
  AzureRegion__Enum_1_JapanWest = 8,
  AzureRegion__Enum_1_NorthCentralUs = 9,
  AzureRegion__Enum_1_NorthEurope = 10,
  AzureRegion__Enum_1_SouthCentralUs = 11,
  AzureRegion__Enum_1_SoutheastAsia = 12,
  AzureRegion__Enum_1_WestEurope = 13,
  AzureRegion__Enum_1_WestUs = 14,
  AzureRegion__Enum_1_ChinaEast2 = 15,
  AzureRegion__Enum_1_ChinaNorth2 = 16,
};
struct AzureRegion__Enum_1__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AzureRegion__Enum_1 value;
};
struct Nullable_1_PlayFab_PlayStreamModels_AzureRegion_ {
  enum AzureRegion__Enum_1 value;
  bool has_value;
};
struct Nullable_1_PlayFab_PlayStreamModels_AzureRegion___Boxed {
  struct Nullable_1_PlayFab_PlayStreamModels_AzureRegion___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_PlayStreamModels_AzureRegion_ fields;
};
struct __declspec(align(8)) MultiplayerServerBuildRegionStatusChangedEventPayload__Fields {
  struct String * BuildId;
  double MinutesInOldStatus;
  struct String * NewStatus;
  struct String * OldStatus;
  struct Nullable_1_PlayFab_PlayStreamModels_AzureRegion_ Region;
};
struct MultiplayerServerBuildRegionStatusChangedEventPayload {
  struct MultiplayerServerBuildRegionStatusChangedEventPayload__Class *klass;
  struct MonitorData *monitor;
  struct MultiplayerServerBuildRegionStatusChangedEventPayload__Fields fields;
};
struct Nullable_1_PlayFab_PlayStreamModels_AzureRegion___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_PlayFab_PlayStreamModels_AzureRegion___StaticFields {
};
struct Nullable_1_PlayFab_PlayStreamModels_AzureRegion___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_PlayFab_PlayStreamModels_AzureRegion___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_PlayFab_PlayStreamModels_AzureRegion___VTable vtable;
};
struct MultiplayerServerBuildRegionStatusChangedEventPayload__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MultiplayerServerBuildRegionStatusChangedEventPayload__StaticFields {
};
struct MultiplayerServerBuildRegionStatusChangedEventPayload__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultiplayerServerBuildRegionStatusChangedEventPayload__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MultiplayerServerBuildRegionStatusChangedEventPayload__VTable vtable;
};}