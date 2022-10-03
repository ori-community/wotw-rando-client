namespace app {
    struct Action_1_PlayFab_MultiplayerModels_JoinMatchmakingTicketResult___VTable {
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

    struct Action_1_PlayFab_MultiplayerModels_JoinMatchmakingTicketResult___StaticFields {
    };

    struct Action_1_PlayFab_MultiplayerModels_JoinMatchmakingTicketResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_MultiplayerModels_JoinMatchmakingTicketResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_MultiplayerModels_JoinMatchmakingTicketResult___VTable vtable;
    };

    struct ListMultiplayerServersRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct String* BuildId;
        struct Nullable_1_Int32_ PageSize;
        AzureRegion__Enum Region_1;

        struct String* SkipToken;
    };

    struct ListMultiplayerServersRequest {
        struct ListMultiplayerServersRequest__Class* klass;
        MonitorData* monitor;
        struct ListMultiplayerServersRequest__Fields fields;
    };

    struct Action_1_PlayFab_MultiplayerModels_ListMultiplayerServersResponse___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_PlayFab_MultiplayerModels_ListMultiplayerServersResponse_ {
        struct Action_1_PlayFab_MultiplayerModels_ListMultiplayerServersResponse___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_MultiplayerModels_ListMultiplayerServersResponse___Fields fields;
    };

    struct ListMultiplayerServersResponse__Fields {
        struct PlayFabResultCommon__Fields _;
        struct List_1_PlayFab_MultiplayerModels_MultiplayerServerSummary_* MultiplayerServerSummaries;
        int32_t PageSize;
        struct String* SkipToken;
    };

    struct ListMultiplayerServersResponse {
        struct ListMultiplayerServersResponse__Class* klass;
        MonitorData* monitor;
        struct ListMultiplayerServersResponse__Fields fields;
    };

    struct __declspec(align(8)) List_1_PlayFab_MultiplayerModels_MultiplayerServerSummary___Fields {
        struct MultiplayerServerSummary__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PlayFab_MultiplayerModels_MultiplayerServerSummary_ {
        struct List_1_PlayFab_MultiplayerModels_MultiplayerServerSummary___Class* klass;
        MonitorData* monitor;
        struct List_1_PlayFab_MultiplayerModels_MultiplayerServerSummary___Fields fields;
    };

    struct __declspec(align(8)) MultiplayerServerSummary__Fields {
        struct List_1_PlayFab_MultiplayerModels_ConnectedPlayer_* ConnectedPlayers;
        struct Nullable_1_DateTime_ LastStateTransitionTime;
        struct Nullable_1_PlayFab_MultiplayerModels_AzureRegion_ Region_1;
        struct String* ServerId;
        struct String* SessionId;
        struct String* State;
        struct String* VmId;
    };

    struct MultiplayerServerSummary {
        struct MultiplayerServerSummary__Class* klass;
        MonitorData* monitor;
        struct MultiplayerServerSummary__Fields fields;
    };

    struct MultiplayerServerSummary__Array {
        struct MultiplayerServerSummary__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MultiplayerServerSummary* vector[32];
    };

    struct IEnumerator_1_PlayFab_MultiplayerModels_MultiplayerServerSummary_ {
        struct IEnumerator_1_PlayFab_MultiplayerModels_MultiplayerServerSummary___Class* klass;
        MonitorData* monitor;
    };

    struct ListMultiplayerServersRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ListMultiplayerServersRequest__StaticFields {
    };

    struct ListMultiplayerServersRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ListMultiplayerServersRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ListMultiplayerServersRequest__VTable vtable;
    };

    struct MultiplayerServerSummary__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MultiplayerServerSummary__StaticFields {
    };

    struct MultiplayerServerSummary__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MultiplayerServerSummary__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MultiplayerServerSummary__VTable vtable;
    };

    struct MultiplayerServerSummary__Array__VTable {
    };

    struct MultiplayerServerSummary__Array__StaticFields {
    };

    struct MultiplayerServerSummary__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MultiplayerServerSummary__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MultiplayerServerSummary__Array__VTable vtable;
    };

    struct IEnumerator_1_PlayFab_MultiplayerModels_MultiplayerServerSummary___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_PlayFab_MultiplayerModels_MultiplayerServerSummary___StaticFields {
    };

    struct IEnumerator_1_PlayFab_MultiplayerModels_MultiplayerServerSummary___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_PlayFab_MultiplayerModels_MultiplayerServerSummary___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_PlayFab_MultiplayerModels_MultiplayerServerSummary___VTable vtable;
    };

    struct List_1_PlayFab_MultiplayerModels_MultiplayerServerSummary___VTable {
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

    struct List_1_PlayFab_MultiplayerModels_MultiplayerServerSummary___StaticFields {
        struct MultiplayerServerSummary__Array* _emptyArray;
    };

    struct List_1_PlayFab_MultiplayerModels_MultiplayerServerSummary___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_PlayFab_MultiplayerModels_MultiplayerServerSummary___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_PlayFab_MultiplayerModels_MultiplayerServerSummary___VTable vtable;
    };

    struct ListMultiplayerServersResponse__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ListMultiplayerServersResponse__StaticFields {
    };

    struct ListMultiplayerServersResponse__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ListMultiplayerServersResponse__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ListMultiplayerServersResponse__VTable vtable;
    };

    struct Action_1_PlayFab_MultiplayerModels_ListMultiplayerServersResponse___VTable {
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

    struct Action_1_PlayFab_MultiplayerModels_ListMultiplayerServersResponse___StaticFields {
    };

    struct Action_1_PlayFab_MultiplayerModels_ListMultiplayerServersResponse___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_MultiplayerModels_ListMultiplayerServersResponse___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_MultiplayerModels_ListMultiplayerServersResponse___VTable vtable;
    };

    struct ListAssetSummariesRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct Nullable_1_Int32_ PageSize;
        struct String* SkipToken;
    };

    struct ListAssetSummariesRequest {
        struct ListAssetSummariesRequest__Class* klass;
        MonitorData* monitor;
        struct ListAssetSummariesRequest__Fields fields;
    };

    struct Action_1_PlayFab_MultiplayerModels_ListAssetSummariesResponse___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_PlayFab_MultiplayerModels_ListAssetSummariesResponse_ {
        struct Action_1_PlayFab_MultiplayerModels_ListAssetSummariesResponse___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_MultiplayerModels_ListAssetSummariesResponse___Fields fields;
    };

    struct ListAssetSummariesResponse__Fields {
        struct PlayFabResultCommon__Fields _;
        struct List_1_PlayFab_MultiplayerModels_AssetSummary_* AssetSummaries;
        int32_t PageSize;
        struct String* SkipToken;
    };

    struct ListAssetSummariesResponse {
        struct ListAssetSummariesResponse__Class* klass;
        MonitorData* monitor;
        struct ListAssetSummariesResponse__Fields fields;
    };

    struct __declspec(align(8)) List_1_PlayFab_MultiplayerModels_AssetSummary___Fields {
        struct AssetSummary__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PlayFab_MultiplayerModels_AssetSummary_ {
        struct List_1_PlayFab_MultiplayerModels_AssetSummary___Class* klass;
        MonitorData* monitor;
        struct List_1_PlayFab_MultiplayerModels_AssetSummary___Fields fields;
    };

    struct __declspec(align(8)) AssetSummary__Fields {
        struct String* FileName;
        struct Dictionary_2_System_String_System_String_* Metadata;
    };

    struct AssetSummary {
        struct AssetSummary__Class* klass;
        MonitorData* monitor;
        struct AssetSummary__Fields fields;
    };

    struct AssetSummary__Array {
        struct AssetSummary__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct AssetSummary* vector[32];
    };

    struct IEnumerator_1_PlayFab_MultiplayerModels_AssetSummary_ {
        struct IEnumerator_1_PlayFab_MultiplayerModels_AssetSummary___Class* klass;
        MonitorData* monitor;
    };

    struct ListAssetSummariesRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ListAssetSummariesRequest__StaticFields {
    };

    struct ListAssetSummariesRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ListAssetSummariesRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ListAssetSummariesRequest__VTable vtable;
    };

    struct AssetSummary__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AssetSummary__StaticFields {
    };

    struct AssetSummary__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AssetSummary__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AssetSummary__VTable vtable;
    };

    struct AssetSummary__Array__VTable {
    };

    struct AssetSummary__Array__StaticFields {
    };

    struct AssetSummary__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AssetSummary__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AssetSummary__Array__VTable vtable;
    };

    struct IEnumerator_1_PlayFab_MultiplayerModels_AssetSummary___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_PlayFab_MultiplayerModels_AssetSummary___StaticFields {
    };

    struct IEnumerator_1_PlayFab_MultiplayerModels_AssetSummary___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_PlayFab_MultiplayerModels_AssetSummary___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_PlayFab_MultiplayerModels_AssetSummary___VTable vtable;
    };

    struct List_1_PlayFab_MultiplayerModels_AssetSummary___VTable {
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

    struct List_1_PlayFab_MultiplayerModels_AssetSummary___StaticFields {
        struct AssetSummary__Array* _emptyArray;
    };

    struct List_1_PlayFab_MultiplayerModels_AssetSummary___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_PlayFab_MultiplayerModels_AssetSummary___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_PlayFab_MultiplayerModels_AssetSummary___VTable vtable;
    };

    struct ListAssetSummariesResponse__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ListAssetSummariesResponse__StaticFields {
    };

    struct ListAssetSummariesResponse__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ListAssetSummariesResponse__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ListAssetSummariesResponse__VTable vtable;
    };

    struct Action_1_PlayFab_MultiplayerModels_ListAssetSummariesResponse___VTable {
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

    struct Action_1_PlayFab_MultiplayerModels_ListAssetSummariesResponse___StaticFields {
    };

    struct Action_1_PlayFab_MultiplayerModels_ListAssetSummariesResponse___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_MultiplayerModels_ListAssetSummariesResponse___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_MultiplayerModels_ListAssetSummariesResponse___VTable vtable;
    };

    struct ListBuildSummariesRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct Nullable_1_Int32_ PageSize;
        struct String* SkipToken;
    };

    struct ListBuildSummariesRequest {
        struct ListBuildSummariesRequest__Class* klass;
        MonitorData* monitor;
        struct ListBuildSummariesRequest__Fields fields;
    };

    struct Action_1_PlayFab_MultiplayerModels_ListBuildSummariesResponse___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_PlayFab_MultiplayerModels_ListBuildSummariesResponse_ {
        struct Action_1_PlayFab_MultiplayerModels_ListBuildSummariesResponse___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_MultiplayerModels_ListBuildSummariesResponse___Fields fields;
    };

    struct ListBuildSummariesResponse__Fields {
        struct PlayFabResultCommon__Fields _;
        struct List_1_PlayFab_MultiplayerModels_BuildSummary_* BuildSummaries;
        int32_t PageSize;
        struct String* SkipToken;
    };

    struct ListBuildSummariesResponse {
        struct ListBuildSummariesResponse__Class* klass;
        MonitorData* monitor;
        struct ListBuildSummariesResponse__Fields fields;
    };

    struct __declspec(align(8)) List_1_PlayFab_MultiplayerModels_BuildSummary___Fields {
        struct BuildSummary__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PlayFab_MultiplayerModels_BuildSummary_ {
        struct List_1_PlayFab_MultiplayerModels_BuildSummary___Class* klass;
        MonitorData* monitor;
        struct List_1_PlayFab_MultiplayerModels_BuildSummary___Fields fields;
    };

    struct __declspec(align(8)) BuildSummary__Fields {
        struct String* BuildId;
        struct String* BuildName;
        struct Nullable_1_DateTime_ CreationTime;
        struct Dictionary_2_System_String_System_String_* Metadata;
    };

    struct BuildSummary {
        struct BuildSummary__Class* klass;
        MonitorData* monitor;
        struct BuildSummary__Fields fields;
    };

    struct BuildSummary__Array {
        struct BuildSummary__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct BuildSummary* vector[32];
    };

    struct IEnumerator_1_PlayFab_MultiplayerModels_BuildSummary_ {
        struct IEnumerator_1_PlayFab_MultiplayerModels_BuildSummary___Class* klass;
        MonitorData* monitor;
    };

    struct ListBuildSummariesRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ListBuildSummariesRequest__StaticFields {
    };

    struct ListBuildSummariesRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ListBuildSummariesRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ListBuildSummariesRequest__VTable vtable;
    };

    struct BuildSummary__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BuildSummary__StaticFields {
    };

    struct BuildSummary__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BuildSummary__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BuildSummary__VTable vtable;
    };

    struct BuildSummary__Array__VTable {
    };

    struct BuildSummary__Array__StaticFields {
    };

    struct BuildSummary__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BuildSummary__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BuildSummary__Array__VTable vtable;
    };

    struct IEnumerator_1_PlayFab_MultiplayerModels_BuildSummary___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_PlayFab_MultiplayerModels_BuildSummary___StaticFields {
    };

    struct IEnumerator_1_PlayFab_MultiplayerModels_BuildSummary___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_PlayFab_MultiplayerModels_BuildSummary___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_PlayFab_MultiplayerModels_BuildSummary___VTable vtable;
    };

    struct List_1_PlayFab_MultiplayerModels_BuildSummary___VTable {
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

    struct List_1_PlayFab_MultiplayerModels_BuildSummary___StaticFields {
        struct BuildSummary__Array* _emptyArray;
    };

    struct List_1_PlayFab_MultiplayerModels_BuildSummary___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_PlayFab_MultiplayerModels_BuildSummary___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_PlayFab_MultiplayerModels_BuildSummary___VTable vtable;
    };

    struct ListBuildSummariesResponse__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ListBuildSummariesResponse__StaticFields {
    };

    struct ListBuildSummariesResponse__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ListBuildSummariesResponse__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ListBuildSummariesResponse__VTable vtable;
    };

    struct Action_1_PlayFab_MultiplayerModels_ListBuildSummariesResponse___VTable {
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

    struct Action_1_PlayFab_MultiplayerModels_ListBuildSummariesResponse___StaticFields {
    };

    struct Action_1_PlayFab_MultiplayerModels_ListBuildSummariesResponse___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_MultiplayerModels_ListBuildSummariesResponse___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_MultiplayerModels_ListBuildSummariesResponse___VTable vtable;
    };

    struct ListCertificateSummariesRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct Nullable_1_Int32_ PageSize;
        struct String* SkipToken;
    };

    struct ListCertificateSummariesRequest {
        struct ListCertificateSummariesRequest__Class* klass;
        MonitorData* monitor;
        struct ListCertificateSummariesRequest__Fields fields;
    };

    struct Action_1_PlayFab_MultiplayerModels_ListCertificateSummariesResponse___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_PlayFab_MultiplayerModels_ListCertificateSummariesResponse_ {
        struct Action_1_PlayFab_MultiplayerModels_ListCertificateSummariesResponse___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_MultiplayerModels_ListCertificateSummariesResponse___Fields fields;
    };

    struct ListCertificateSummariesResponse__Fields {
        struct PlayFabResultCommon__Fields _;
        struct List_1_PlayFab_MultiplayerModels_CertificateSummary_* CertificateSummaries;
        int32_t PageSize;
        struct String* SkipToken;
    };

    struct ListCertificateSummariesResponse {
        struct ListCertificateSummariesResponse__Class* klass;
        MonitorData* monitor;
        struct ListCertificateSummariesResponse__Fields fields;
    };

    struct __declspec(align(8)) List_1_PlayFab_MultiplayerModels_CertificateSummary___Fields {
        struct CertificateSummary__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PlayFab_MultiplayerModels_CertificateSummary_ {
        struct List_1_PlayFab_MultiplayerModels_CertificateSummary___Class* klass;
        MonitorData* monitor;
        struct List_1_PlayFab_MultiplayerModels_CertificateSummary___Fields fields;
    };

    struct __declspec(align(8)) CertificateSummary__Fields {
        struct String* Name;
        struct String* Thumbprint;
    };

    struct CertificateSummary {
        struct CertificateSummary__Class* klass;
        MonitorData* monitor;
        struct CertificateSummary__Fields fields;
    };

    struct CertificateSummary__Array {
        struct CertificateSummary__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CertificateSummary* vector[32];
    };

    struct IEnumerator_1_PlayFab_MultiplayerModels_CertificateSummary_ {
        struct IEnumerator_1_PlayFab_MultiplayerModels_CertificateSummary___Class* klass;
        MonitorData* monitor;
    };

    struct ListCertificateSummariesRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ListCertificateSummariesRequest__StaticFields {
    };

    struct ListCertificateSummariesRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ListCertificateSummariesRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ListCertificateSummariesRequest__VTable vtable;
    };

    struct CertificateSummary__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CertificateSummary__StaticFields {
    };

    struct CertificateSummary__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CertificateSummary__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CertificateSummary__VTable vtable;
    };

    struct CertificateSummary__Array__VTable {
    };

    struct CertificateSummary__Array__StaticFields {
    };

    struct CertificateSummary__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CertificateSummary__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CertificateSummary__Array__VTable vtable;
    };

    struct IEnumerator_1_PlayFab_MultiplayerModels_CertificateSummary___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_PlayFab_MultiplayerModels_CertificateSummary___StaticFields {
    };

    struct IEnumerator_1_PlayFab_MultiplayerModels_CertificateSummary___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_PlayFab_MultiplayerModels_CertificateSummary___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_PlayFab_MultiplayerModels_CertificateSummary___VTable vtable;
    };

    struct List_1_PlayFab_MultiplayerModels_CertificateSummary___VTable {
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

    struct List_1_PlayFab_MultiplayerModels_CertificateSummary___StaticFields {
        struct CertificateSummary__Array* _emptyArray;
    };

    struct List_1_PlayFab_MultiplayerModels_CertificateSummary___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_PlayFab_MultiplayerModels_CertificateSummary___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_PlayFab_MultiplayerModels_CertificateSummary___VTable vtable;
    };

    struct ListCertificateSummariesResponse__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ListCertificateSummariesResponse__StaticFields {
    };

    struct ListCertificateSummariesResponse__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ListCertificateSummariesResponse__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ListCertificateSummariesResponse__VTable vtable;
    };

    struct Action_1_PlayFab_MultiplayerModels_ListCertificateSummariesResponse___VTable {
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

    struct Action_1_PlayFab_MultiplayerModels_ListCertificateSummariesResponse___StaticFields {
    };

    struct Action_1_PlayFab_MultiplayerModels_ListCertificateSummariesResponse___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_MultiplayerModels_ListCertificateSummariesResponse___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_MultiplayerModels_ListCertificateSummariesResponse___VTable vtable;
    };

} // namespace app
