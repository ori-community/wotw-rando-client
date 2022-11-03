namespace app {
    struct MatchmakingMatchFoundEventData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MatchmakingMatchFoundEventData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MatchmakingMatchFoundEventData__VTable vtable;
    };

    struct MatchmakingTicketCompleteEventData__Fields {
        struct PlayStreamEventBase__Fields _;
        struct EntityLineage_1* EntityLineage;
        struct MatchmakingTicketCompletePayload* Payload;
        struct EntityKey_9* WriterEntity;
    };

    struct MatchmakingTicketCompleteEventData {
        struct MatchmakingTicketCompleteEventData__Class* klass;
        MonitorData* monitor;
        struct MatchmakingTicketCompleteEventData__Fields fields;
    };

    struct __declspec(align(8)) MatchmakingTicketCompletePayload__Fields {
        struct String* CancellationReason;
        struct DateTime CompletionTime;
        struct DateTime CreationTime;
        struct String* QueueName;
        struct String* Result;
        struct Nullable_1_DateTime_ SubmissionTime;
        struct List_1_PlayFab_PlayStreamModels_EntityKey_* TicketEntities;
        struct String* TicketId;
    };

    struct MatchmakingTicketCompletePayload {
        struct MatchmakingTicketCompletePayload__Class* klass;
        MonitorData* monitor;
        struct MatchmakingTicketCompletePayload__Fields fields;
    };

    struct __declspec(align(8)) List_1_PlayFab_PlayStreamModels_EntityKey___Fields {
        struct EntityKey_9__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PlayFab_PlayStreamModels_EntityKey_ {
        struct List_1_PlayFab_PlayStreamModels_EntityKey___Class* klass;
        MonitorData* monitor;
        struct List_1_PlayFab_PlayStreamModels_EntityKey___Fields fields;
    };

    struct EntityKey_9__Array {
        struct EntityKey_9__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct EntityKey_9* vector[32];
    };

    struct IEnumerator_1_PlayFab_PlayStreamModels_EntityKey_ {
        struct IEnumerator_1_PlayFab_PlayStreamModels_EntityKey___Class* klass;
        MonitorData* monitor;
    };

    struct EntityKey_9__Array__VTable {
    };

    struct EntityKey_9__Array__StaticFields {
    };

    struct EntityKey_9__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntityKey_9__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EntityKey_9__Array__VTable vtable;
    };

    struct IEnumerator_1_PlayFab_PlayStreamModels_EntityKey___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_PlayFab_PlayStreamModels_EntityKey___StaticFields {
    };

    struct IEnumerator_1_PlayFab_PlayStreamModels_EntityKey___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_PlayFab_PlayStreamModels_EntityKey___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct EntityKey_9__Array* _emptyArray;
    };

    struct List_1_PlayFab_PlayStreamModels_EntityKey___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_PlayFab_PlayStreamModels_EntityKey___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MatchmakingTicketCompletePayload__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MatchmakingTicketCompleteEventData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MatchmakingTicketCompleteEventData__VTable vtable;
    };

    struct MatchmakingUserTicketCompleteEventData__Fields {
        struct PlayStreamEventBase__Fields _;
        struct EntityLineage_1* EntityLineage;
        struct MatchmakingUserTicketCompletePayload* Payload;
        struct EntityKey_9* WriterEntity;
    };

    struct MatchmakingUserTicketCompleteEventData {
        struct MatchmakingUserTicketCompleteEventData__Class* klass;
        MonitorData* monitor;
        struct MatchmakingUserTicketCompleteEventData__Fields fields;
    };

    struct __declspec(align(8)) MatchmakingUserTicketCompletePayload__Fields {
        struct String* CancellationReason;
        struct String* MatchId;
        struct String* QueueName;
        struct String* Result;
        struct String* TicketId;
    };

    struct MatchmakingUserTicketCompletePayload {
        struct MatchmakingUserTicketCompletePayload__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MatchmakingUserTicketCompletePayload__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MatchmakingUserTicketCompleteEventData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MatchmakingUserTicketCompleteEventData__VTable vtable;
    };

    struct MatchmakingUserTicketInviteEventData__Fields {
        struct PlayStreamEventBase__Fields _;
        struct EntityLineage_1* EntityLineage;
        struct MatchmakingUserTicketInvitePayload* Payload;
        struct EntityKey_9* WriterEntity;
    };

    struct MatchmakingUserTicketInviteEventData {
        struct MatchmakingUserTicketInviteEventData__Class* klass;
        MonitorData* monitor;
        struct MatchmakingUserTicketInviteEventData__Fields fields;
    };

    struct __declspec(align(8)) MatchmakingUserTicketInvitePayload__Fields {
        struct EntityKey_9* CreatorEntity;
        struct String* QueueName;
        struct String* TicketId;
    };

    struct MatchmakingUserTicketInvitePayload {
        struct MatchmakingUserTicketInvitePayload__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MatchmakingUserTicketInvitePayload__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MatchmakingUserTicketInviteEventData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MatchmakingUserTicketInviteEventData__VTable vtable;
    };

    struct MultiplayerServerBuildDeletedEventDataDoc__Fields {
        struct PlayStreamEventBase__Fields _;
        struct EntityLineage_1* EntityLineage;
        struct String* OriginalEventId;
        struct Nullable_1_DateTime_ OriginalTimestamp;
        struct MultiplayerServerBuildDeletedEventPayload* Payload;
        struct EntityKey_9* WriterEntity;
    };

    struct MultiplayerServerBuildDeletedEventDataDoc {
        struct MultiplayerServerBuildDeletedEventDataDoc__Class* klass;
        MonitorData* monitor;
        struct MultiplayerServerBuildDeletedEventDataDoc__Fields fields;
    };

    struct __declspec(align(8)) MultiplayerServerBuildDeletedEventPayload__Fields {
        struct String* BuildId;
    };

    struct MultiplayerServerBuildDeletedEventPayload {
        struct MultiplayerServerBuildDeletedEventPayload__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MultiplayerServerBuildDeletedEventPayload__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MultiplayerServerBuildDeletedEventDataDoc__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MultiplayerServerBuildDeletedEventDataDoc__VTable vtable;
    };

    struct MultiplayerServerBuildRegionStatusChangedEventDataDoc__Fields {
        struct PlayStreamEventBase__Fields _;
        struct EntityLineage_1* EntityLineage;
        struct String* OriginalEventId;
        struct Nullable_1_DateTime_ OriginalTimestamp;
        struct MultiplayerServerBuildRegionStatusChangedEventPayload* Payload;
        struct EntityKey_9* WriterEntity;
    };

    struct MultiplayerServerBuildRegionStatusChangedEventDataDoc {
        struct MultiplayerServerBuildRegionStatusChangedEventDataDoc__Class* klass;
        MonitorData* monitor;
        struct MultiplayerServerBuildRegionStatusChangedEventDataDoc__Fields fields;
    };

    enum class AzureRegion__Enum_1 : int32_t {
        AustraliaEast = 0x00000000,
        AustraliaSoutheast = 0x00000001,
        BrazilSouth = 0x00000002,
        CentralUs = 0x00000003,
        EastAsia = 0x00000004,
        EastUs = 0x00000005,
        EastUs2 = 0x00000006,
        JapanEast = 0x00000007,
        JapanWest = 0x00000008,
        NorthCentralUs = 0x00000009,
        NorthEurope = 0x0000000a,
        SouthCentralUs = 0x0000000b,
        SoutheastAsia = 0x0000000c,
        WestEurope = 0x0000000d,
        WestUs = 0x0000000e,
        ChinaEast2 = 0x0000000f,
        ChinaNorth2 = 0x00000010,
    };

    struct AzureRegion__Enum_1__Boxed {
        struct AzureRegion__Enum_1__Class* klass;
        MonitorData* monitor;
        AzureRegion__Enum_1 value;
    };

    struct Nullable_1_PlayFab_PlayStreamModels_AzureRegion_ {
        AzureRegion__Enum_1 value;

        bool has_value;
    };

    struct Nullable_1_PlayFab_PlayStreamModels_AzureRegion___Boxed {
        struct Nullable_1_PlayFab_PlayStreamModels_AzureRegion___Class* klass;
        MonitorData* monitor;
        struct Nullable_1_PlayFab_PlayStreamModels_AzureRegion_ fields;
    };

    struct __declspec(align(8)) MultiplayerServerBuildRegionStatusChangedEventPayload__Fields {
        struct String* BuildId;
        double MinutesInOldStatus;
        struct String* NewStatus;
        struct String* OldStatus;
        struct Nullable_1_PlayFab_PlayStreamModels_AzureRegion_ Region_1;
    };

    struct MultiplayerServerBuildRegionStatusChangedEventPayload {
        struct MultiplayerServerBuildRegionStatusChangedEventPayload__Class* klass;
        MonitorData* monitor;
        struct MultiplayerServerBuildRegionStatusChangedEventPayload__Fields fields;
    };

    struct AzureRegion__Enum_1__VTable {
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

    struct AzureRegion__Enum_1__StaticFields {
    };

    struct AzureRegion__Enum_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AzureRegion__Enum_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AzureRegion__Enum_1__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Nullable_1_PlayFab_PlayStreamModels_AzureRegion___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MultiplayerServerBuildRegionStatusChangedEventPayload__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MultiplayerServerBuildRegionStatusChangedEventPayload__VTable vtable;
    };

    struct MultiplayerServerBuildRegionStatusChangedEventDataDoc__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MultiplayerServerBuildRegionStatusChangedEventDataDoc__StaticFields {
    };

    struct MultiplayerServerBuildRegionStatusChangedEventDataDoc__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MultiplayerServerBuildRegionStatusChangedEventDataDoc__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MultiplayerServerBuildRegionStatusChangedEventDataDoc__VTable vtable;
    };

    struct MultiplayerServerBuildRegionUpdatedEventDataDoc__Fields {
        struct PlayStreamEventBase__Fields _;
        struct EntityLineage_1* EntityLineage;
        struct String* OriginalEventId;
        struct Nullable_1_DateTime_ OriginalTimestamp;
        struct MultiplayerServerBuildRegionUpdatedEventPayload* Payload;
        struct EntityKey_9* WriterEntity;
    };

    struct MultiplayerServerBuildRegionUpdatedEventDataDoc {
        struct MultiplayerServerBuildRegionUpdatedEventDataDoc__Class* klass;
        MonitorData* monitor;
        struct MultiplayerServerBuildRegionUpdatedEventDataDoc__Fields fields;
    };

    struct __declspec(align(8)) MultiplayerServerBuildRegionUpdatedEventPayload__Fields {
        struct String* BuildId;
        struct List_1_PlayFab_PlayStreamModels_BuildRegion_* BuildRegions;
    };

    struct MultiplayerServerBuildRegionUpdatedEventPayload {
        struct MultiplayerServerBuildRegionUpdatedEventPayload__Class* klass;
        MonitorData* monitor;
        struct MultiplayerServerBuildRegionUpdatedEventPayload__Fields fields;
    };

    struct __declspec(align(8)) List_1_PlayFab_PlayStreamModels_BuildRegion___Fields {
        struct BuildRegion_1__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PlayFab_PlayStreamModels_BuildRegion_ {
        struct List_1_PlayFab_PlayStreamModels_BuildRegion___Class* klass;
        MonitorData* monitor;
        struct List_1_PlayFab_PlayStreamModels_BuildRegion___Fields fields;
    };

    struct __declspec(align(8)) BuildRegion_1__Fields {
        int32_t MaxServers;
        struct Nullable_1_PlayFab_PlayStreamModels_AzureRegion_ Region_1;
        int32_t StandbyServers;
    };

    struct BuildRegion_1 {
        struct BuildRegion_1__Class* klass;
        MonitorData* monitor;
        struct BuildRegion_1__Fields fields;
    };

    struct BuildRegion_1__Array {
        struct BuildRegion_1__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct BuildRegion_1* vector[32];
    };

    struct IEnumerator_1_PlayFab_PlayStreamModels_BuildRegion_ {
        struct IEnumerator_1_PlayFab_PlayStreamModels_BuildRegion___Class* klass;
        MonitorData* monitor;
    };

    struct BuildRegion_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BuildRegion_1__StaticFields {
    };

    struct BuildRegion_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BuildRegion_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BuildRegion_1__VTable vtable;
    };

    struct BuildRegion_1__Array__VTable {
    };

    struct BuildRegion_1__Array__StaticFields {
    };

    struct BuildRegion_1__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BuildRegion_1__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BuildRegion_1__Array__VTable vtable;
    };

    struct IEnumerator_1_PlayFab_PlayStreamModels_BuildRegion___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_PlayFab_PlayStreamModels_BuildRegion___StaticFields {
    };

    struct IEnumerator_1_PlayFab_PlayStreamModels_BuildRegion___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_PlayFab_PlayStreamModels_BuildRegion___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_PlayFab_PlayStreamModels_BuildRegion___VTable vtable;
    };

    struct List_1_PlayFab_PlayStreamModels_BuildRegion___VTable {
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

    struct List_1_PlayFab_PlayStreamModels_BuildRegion___StaticFields {
        struct BuildRegion_1__Array* _emptyArray;
    };

    struct List_1_PlayFab_PlayStreamModels_BuildRegion___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_PlayFab_PlayStreamModels_BuildRegion___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_PlayFab_PlayStreamModels_BuildRegion___VTable vtable;
    };

    struct MultiplayerServerBuildRegionUpdatedEventPayload__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MultiplayerServerBuildRegionUpdatedEventPayload__StaticFields {
    };

    struct MultiplayerServerBuildRegionUpdatedEventPayload__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MultiplayerServerBuildRegionUpdatedEventPayload__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MultiplayerServerBuildRegionUpdatedEventPayload__VTable vtable;
    };

    struct MultiplayerServerBuildRegionUpdatedEventDataDoc__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MultiplayerServerBuildRegionUpdatedEventDataDoc__StaticFields {
    };

    struct MultiplayerServerBuildRegionUpdatedEventDataDoc__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MultiplayerServerBuildRegionUpdatedEventDataDoc__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MultiplayerServerBuildRegionUpdatedEventDataDoc__VTable vtable;
    };

    struct MultiplayerServerCertificateDeletedEventDataDoc__Fields {
        struct PlayStreamEventBase__Fields _;
        struct EntityLineage_1* EntityLineage;
        struct String* OriginalEventId;
        struct Nullable_1_DateTime_ OriginalTimestamp;
        struct MultiplayerServerCertificateDeletedEventPayload* Payload;
        struct EntityKey_9* WriterEntity;
    };

    struct MultiplayerServerCertificateDeletedEventDataDoc {
        struct MultiplayerServerCertificateDeletedEventDataDoc__Class* klass;
        MonitorData* monitor;
        struct MultiplayerServerCertificateDeletedEventDataDoc__Fields fields;
    };

    struct __declspec(align(8)) MultiplayerServerCertificateDeletedEventPayload__Fields {
        struct String* CertificateName;
    };

    struct MultiplayerServerCertificateDeletedEventPayload {
        struct MultiplayerServerCertificateDeletedEventPayload__Class* klass;
        MonitorData* monitor;
        struct MultiplayerServerCertificateDeletedEventPayload__Fields fields;
    };

    struct MultiplayerServerCertificateDeletedEventPayload__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MultiplayerServerCertificateDeletedEventPayload__StaticFields {
    };

    struct MultiplayerServerCertificateDeletedEventPayload__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MultiplayerServerCertificateDeletedEventPayload__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MultiplayerServerCertificateDeletedEventPayload__VTable vtable;
    };

    struct MultiplayerServerCertificateDeletedEventDataDoc__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MultiplayerServerCertificateDeletedEventDataDoc__StaticFields {
    };

    struct MultiplayerServerCertificateDeletedEventDataDoc__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MultiplayerServerCertificateDeletedEventDataDoc__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MultiplayerServerCertificateDeletedEventDataDoc__VTable vtable;
    };

    struct MultiplayerServerCertificateUploadedEventDataDoc__Fields {
        struct PlayStreamEventBase__Fields _;
        struct EntityLineage_1* EntityLineage;
        struct String* OriginalEventId;
        struct Nullable_1_DateTime_ OriginalTimestamp;
        struct MultiplayerServerCertificateUploadedEventPayload* Payload;
        struct EntityKey_9* WriterEntity;
    };

    struct MultiplayerServerCertificateUploadedEventDataDoc {
        struct MultiplayerServerCertificateUploadedEventDataDoc__Class* klass;
        MonitorData* monitor;
        struct MultiplayerServerCertificateUploadedEventDataDoc__Fields fields;
    };

    struct __declspec(align(8)) MultiplayerServerCertificateUploadedEventPayload__Fields {
        struct String* CertificateName;
    };

    struct MultiplayerServerCertificateUploadedEventPayload {
        struct MultiplayerServerCertificateUploadedEventPayload__Class* klass;
        MonitorData* monitor;
        struct MultiplayerServerCertificateUploadedEventPayload__Fields fields;
    };

    struct MultiplayerServerCertificateUploadedEventPayload__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MultiplayerServerCertificateUploadedEventPayload__StaticFields {
    };

    struct MultiplayerServerCertificateUploadedEventPayload__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MultiplayerServerCertificateUploadedEventPayload__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MultiplayerServerCertificateUploadedEventPayload__VTable vtable;
    };

    struct MultiplayerServerCertificateUploadedEventDataDoc__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MultiplayerServerCertificateUploadedEventDataDoc__StaticFields {
    };

    struct MultiplayerServerCertificateUploadedEventDataDoc__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MultiplayerServerCertificateUploadedEventDataDoc__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MultiplayerServerCertificateUploadedEventDataDoc__VTable vtable;
    };

    struct MultiplayerServerCreateBuildInitiatedEventDataDoc__Fields {
        struct PlayStreamEventBase__Fields _;
        struct EntityLineage_1* EntityLineage;
        struct String* OriginalEventId;
        struct Nullable_1_DateTime_ OriginalTimestamp;
        struct MultiplayerServerCreateBuildInitiatedEventPayload* Payload;
        struct EntityKey_9* WriterEntity;
    };

    struct MultiplayerServerCreateBuildInitiatedEventDataDoc {
        struct MultiplayerServerCreateBuildInitiatedEventDataDoc__Class* klass;
        MonitorData* monitor;
        struct MultiplayerServerCreateBuildInitiatedEventDataDoc__Fields fields;
    };

    struct __declspec(align(8)) MultiplayerServerCreateBuildInitiatedEventPayload__Fields {
        struct String* BuildId;
        struct String* BuildName;
        struct Nullable_1_DateTime_ CreationTime;
        struct Dictionary_2_System_String_System_String_* Metadata;
    };

    struct MultiplayerServerCreateBuildInitiatedEventPayload {
        struct MultiplayerServerCreateBuildInitiatedEventPayload__Class* klass;
        MonitorData* monitor;
        struct MultiplayerServerCreateBuildInitiatedEventPayload__Fields fields;
    };

    struct MultiplayerServerCreateBuildInitiatedEventPayload__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MultiplayerServerCreateBuildInitiatedEventPayload__StaticFields {
    };

    struct MultiplayerServerCreateBuildInitiatedEventPayload__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MultiplayerServerCreateBuildInitiatedEventPayload__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MultiplayerServerCreateBuildInitiatedEventPayload__VTable vtable;
    };

    struct MultiplayerServerCreateBuildInitiatedEventDataDoc__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MultiplayerServerCreateBuildInitiatedEventDataDoc__StaticFields {
    };

    struct MultiplayerServerCreateBuildInitiatedEventDataDoc__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MultiplayerServerCreateBuildInitiatedEventDataDoc__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MultiplayerServerCreateBuildInitiatedEventDataDoc__VTable vtable;
    };

    struct MultiplayerServerGameAssetDeletedEventDataDoc__Fields {
        struct PlayStreamEventBase__Fields _;
        struct EntityLineage_1* EntityLineage;
        struct String* OriginalEventId;
        struct Nullable_1_DateTime_ OriginalTimestamp;
        struct MultiplayerServerGameAssetDeletedEventPayload* Payload;
        struct EntityKey_9* WriterEntity;
    };

    struct MultiplayerServerGameAssetDeletedEventDataDoc {
        struct MultiplayerServerGameAssetDeletedEventDataDoc__Class* klass;
        MonitorData* monitor;
        struct MultiplayerServerGameAssetDeletedEventDataDoc__Fields fields;
    };

    struct __declspec(align(8)) MultiplayerServerGameAssetDeletedEventPayload__Fields {
        struct String* AssetFileName;
    };

    struct MultiplayerServerGameAssetDeletedEventPayload {
        struct MultiplayerServerGameAssetDeletedEventPayload__Class* klass;
        MonitorData* monitor;
        struct MultiplayerServerGameAssetDeletedEventPayload__Fields fields;
    };

    struct MultiplayerServerGameAssetDeletedEventPayload__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MultiplayerServerGameAssetDeletedEventPayload__StaticFields {
    };

    struct MultiplayerServerGameAssetDeletedEventPayload__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MultiplayerServerGameAssetDeletedEventPayload__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MultiplayerServerGameAssetDeletedEventPayload__VTable vtable;
    };

    struct MultiplayerServerGameAssetDeletedEventDataDoc__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MultiplayerServerGameAssetDeletedEventDataDoc__StaticFields {
    };

    struct MultiplayerServerGameAssetDeletedEventDataDoc__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MultiplayerServerGameAssetDeletedEventDataDoc__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MultiplayerServerGameAssetDeletedEventDataDoc__VTable vtable;
    };

    struct MultiplayerServerRequestedEventDataDoc__Fields {
        struct PlayStreamEventBase__Fields _;
        struct EntityLineage_1* EntityLineage;
        struct String* OriginalEventId;
        struct Nullable_1_DateTime_ OriginalTimestamp;
        struct MultiplayerServerRequestedEventPayload* Payload;
        struct EntityKey_9* WriterEntity;
    };

} // namespace app
