namespace app {
    struct GetTitleDataRequest__StaticFields {
    };

    struct GetTitleDataRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetTitleDataRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetTitleDataRequest__VTable vtable;
    };

    struct GetTitleDataResult__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GetTitleDataResult__StaticFields {
    };

    struct GetTitleDataResult__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetTitleDataResult__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetTitleDataResult__VTable vtable;
    };

    struct Action_1_PlayFab_ClientModels_GetTitleDataResult___VTable {
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

    struct Action_1_PlayFab_ClientModels_GetTitleDataResult___StaticFields {
    };

    struct Action_1_PlayFab_ClientModels_GetTitleDataResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_ClientModels_GetTitleDataResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_ClientModels_GetTitleDataResult___VTable vtable;
    };

    struct GetTitleNewsRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct Nullable_1_Int32_ Count;
    };

    struct GetTitleNewsRequest {
        struct GetTitleNewsRequest__Class* klass;
        MonitorData* monitor;
        struct GetTitleNewsRequest__Fields fields;
    };

    struct Action_1_PlayFab_ClientModels_GetTitleNewsResult___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_PlayFab_ClientModels_GetTitleNewsResult_ {
        struct Action_1_PlayFab_ClientModels_GetTitleNewsResult___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_ClientModels_GetTitleNewsResult___Fields fields;
    };

    struct GetTitleNewsResult__Fields {
        struct PlayFabResultCommon__Fields _;
        struct List_1_PlayFab_ClientModels_TitleNewsItem_* News;
    };

    struct GetTitleNewsResult {
        struct GetTitleNewsResult__Class* klass;
        MonitorData* monitor;
        struct GetTitleNewsResult__Fields fields;
    };

    struct __declspec(align(8)) List_1_PlayFab_ClientModels_TitleNewsItem___Fields {
        struct TitleNewsItem__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PlayFab_ClientModels_TitleNewsItem_ {
        struct List_1_PlayFab_ClientModels_TitleNewsItem___Class* klass;
        MonitorData* monitor;
        struct List_1_PlayFab_ClientModels_TitleNewsItem___Fields fields;
    };

    struct __declspec(align(8)) TitleNewsItem__Fields {
        struct String* Body;
        struct String* NewsId;
        struct DateTime Timestamp;
        struct String* Title;
    };

    struct TitleNewsItem {
        struct TitleNewsItem__Class* klass;
        MonitorData* monitor;
        struct TitleNewsItem__Fields fields;
    };

    struct TitleNewsItem__Array {
        struct TitleNewsItem__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct TitleNewsItem* vector[32];
    };

    struct IEnumerator_1_PlayFab_ClientModels_TitleNewsItem_ {
        struct IEnumerator_1_PlayFab_ClientModels_TitleNewsItem___Class* klass;
        MonitorData* monitor;
    };

    struct GetTitleNewsRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GetTitleNewsRequest__StaticFields {
    };

    struct GetTitleNewsRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetTitleNewsRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetTitleNewsRequest__VTable vtable;
    };

    struct TitleNewsItem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TitleNewsItem__StaticFields {
    };

    struct TitleNewsItem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TitleNewsItem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TitleNewsItem__VTable vtable;
    };

    struct TitleNewsItem__Array__VTable {
    };

    struct TitleNewsItem__Array__StaticFields {
    };

    struct TitleNewsItem__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TitleNewsItem__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TitleNewsItem__Array__VTable vtable;
    };

    struct IEnumerator_1_PlayFab_ClientModels_TitleNewsItem___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_PlayFab_ClientModels_TitleNewsItem___StaticFields {
    };

    struct IEnumerator_1_PlayFab_ClientModels_TitleNewsItem___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_PlayFab_ClientModels_TitleNewsItem___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_PlayFab_ClientModels_TitleNewsItem___VTable vtable;
    };

    struct List_1_PlayFab_ClientModels_TitleNewsItem___VTable {
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

    struct List_1_PlayFab_ClientModels_TitleNewsItem___StaticFields {
        struct TitleNewsItem__Array* _emptyArray;
    };

    struct List_1_PlayFab_ClientModels_TitleNewsItem___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_PlayFab_ClientModels_TitleNewsItem___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_PlayFab_ClientModels_TitleNewsItem___VTable vtable;
    };

    struct GetTitleNewsResult__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GetTitleNewsResult__StaticFields {
    };

    struct GetTitleNewsResult__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetTitleNewsResult__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetTitleNewsResult__VTable vtable;
    };

    struct Action_1_PlayFab_ClientModels_GetTitleNewsResult___VTable {
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

    struct Action_1_PlayFab_ClientModels_GetTitleNewsResult___StaticFields {
    };

    struct Action_1_PlayFab_ClientModels_GetTitleNewsResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_ClientModels_GetTitleNewsResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_ClientModels_GetTitleNewsResult___VTable vtable;
    };

    struct GetTitlePublicKeyRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct String* TitleId;
        struct String* TitleSharedSecret;
    };

    struct GetTitlePublicKeyRequest {
        struct GetTitlePublicKeyRequest__Class* klass;
        MonitorData* monitor;
        struct GetTitlePublicKeyRequest__Fields fields;
    };

    struct Action_1_PlayFab_ClientModels_GetTitlePublicKeyResult___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_PlayFab_ClientModels_GetTitlePublicKeyResult_ {
        struct Action_1_PlayFab_ClientModels_GetTitlePublicKeyResult___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_ClientModels_GetTitlePublicKeyResult___Fields fields;
    };

    struct GetTitlePublicKeyResult__Fields {
        struct PlayFabResultCommon__Fields _;
        struct String* RSAPublicKey;
    };

    struct GetTitlePublicKeyResult {
        struct GetTitlePublicKeyResult__Class* klass;
        MonitorData* monitor;
        struct GetTitlePublicKeyResult__Fields fields;
    };

    struct GetTitlePublicKeyRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GetTitlePublicKeyRequest__StaticFields {
    };

    struct GetTitlePublicKeyRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetTitlePublicKeyRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetTitlePublicKeyRequest__VTable vtable;
    };

    struct GetTitlePublicKeyResult__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GetTitlePublicKeyResult__StaticFields {
    };

    struct GetTitlePublicKeyResult__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetTitlePublicKeyResult__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetTitlePublicKeyResult__VTable vtable;
    };

    struct Action_1_PlayFab_ClientModels_GetTitlePublicKeyResult___VTable {
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

    struct Action_1_PlayFab_ClientModels_GetTitlePublicKeyResult___StaticFields {
    };

    struct Action_1_PlayFab_ClientModels_GetTitlePublicKeyResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_ClientModels_GetTitlePublicKeyResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_ClientModels_GetTitlePublicKeyResult___VTable vtable;
    };

    struct GetTradeStatusRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct String* OfferingPlayerId;
        struct String* TradeId;
    };

    struct GetTradeStatusRequest {
        struct GetTradeStatusRequest__Class* klass;
        MonitorData* monitor;
        struct GetTradeStatusRequest__Fields fields;
    };

    struct Action_1_PlayFab_ClientModels_GetTradeStatusResponse___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_PlayFab_ClientModels_GetTradeStatusResponse_ {
        struct Action_1_PlayFab_ClientModels_GetTradeStatusResponse___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_ClientModels_GetTradeStatusResponse___Fields fields;
    };

    struct GetTradeStatusResponse__Fields {
        struct PlayFabResultCommon__Fields _;
        struct TradeInfo* Trade;
    };

    struct GetTradeStatusResponse {
        struct GetTradeStatusResponse__Class* klass;
        MonitorData* monitor;
        struct GetTradeStatusResponse__Fields fields;
    };

    struct GetTradeStatusRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GetTradeStatusRequest__StaticFields {
    };

    struct GetTradeStatusRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetTradeStatusRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetTradeStatusRequest__VTable vtable;
    };

    struct GetTradeStatusResponse__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GetTradeStatusResponse__StaticFields {
    };

    struct GetTradeStatusResponse__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetTradeStatusResponse__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetTradeStatusResponse__VTable vtable;
    };

    struct Action_1_PlayFab_ClientModels_GetTradeStatusResponse___VTable {
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

    struct Action_1_PlayFab_ClientModels_GetTradeStatusResponse___StaticFields {
    };

    struct Action_1_PlayFab_ClientModels_GetTradeStatusResponse___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_ClientModels_GetTradeStatusResponse___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_ClientModels_GetTradeStatusResponse___VTable vtable;
    };

    struct GetUserDataRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct Nullable_1_UInt32_ IfChangedFromDataVersion;
        struct List_1_System_String_* Keys;
        struct String* PlayFabId;
    };

    struct GetUserDataRequest {
        struct GetUserDataRequest__Class* klass;
        MonitorData* monitor;
        struct GetUserDataRequest__Fields fields;
    };

    struct Action_1_PlayFab_ClientModels_GetUserDataResult___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_PlayFab_ClientModels_GetUserDataResult_ {
        struct Action_1_PlayFab_ClientModels_GetUserDataResult___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_ClientModels_GetUserDataResult___Fields fields;
    };

    struct GetUserDataResult__Fields {
        struct PlayFabResultCommon__Fields _;
        struct Dictionary_2_System_String_PlayFab_ClientModels_UserDataRecord_* Data;
        uint32_t DataVersion;
    };

    struct GetUserDataResult {
        struct GetUserDataResult__Class* klass;
        MonitorData* monitor;
        struct GetUserDataResult__Fields fields;
    };

    struct GetUserDataRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GetUserDataRequest__StaticFields {
    };

    struct GetUserDataRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetUserDataRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetUserDataRequest__VTable vtable;
    };

    struct GetUserDataResult__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GetUserDataResult__StaticFields {
    };

    struct GetUserDataResult__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetUserDataResult__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetUserDataResult__VTable vtable;
    };

    struct Action_1_PlayFab_ClientModels_GetUserDataResult___VTable {
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

    struct Action_1_PlayFab_ClientModels_GetUserDataResult___StaticFields {
    };

    struct Action_1_PlayFab_ClientModels_GetUserDataResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_ClientModels_GetUserDataResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_ClientModels_GetUserDataResult___VTable vtable;
    };

    struct GetUserInventoryRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
    };

    struct GetUserInventoryRequest {
        struct GetUserInventoryRequest__Class* klass;
        MonitorData* monitor;
        struct GetUserInventoryRequest__Fields fields;
    };

    struct Action_1_PlayFab_ClientModels_GetUserInventoryResult___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_PlayFab_ClientModels_GetUserInventoryResult_ {
        struct Action_1_PlayFab_ClientModels_GetUserInventoryResult___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_ClientModels_GetUserInventoryResult___Fields fields;
    };

    struct GetUserInventoryResult__Fields {
        struct PlayFabResultCommon__Fields _;
        struct List_1_PlayFab_ClientModels_ItemInstance_* Inventory;
        struct Dictionary_2_System_String_System_Int32_* VirtualCurrency;
        struct Dictionary_2_System_String_PlayFab_ClientModels_VirtualCurrencyRechargeTime_* VirtualCurrencyRechargeTimes;
    };

    struct GetUserInventoryResult {
        struct GetUserInventoryResult__Class* klass;
        MonitorData* monitor;
        struct GetUserInventoryResult__Fields fields;
    };

    struct GetUserInventoryRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GetUserInventoryRequest__StaticFields {
    };

    struct GetUserInventoryRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetUserInventoryRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetUserInventoryRequest__VTable vtable;
    };

    struct GetUserInventoryResult__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GetUserInventoryResult__StaticFields {
    };

    struct GetUserInventoryResult__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetUserInventoryResult__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetUserInventoryResult__VTable vtable;
    };

    struct Action_1_PlayFab_ClientModels_GetUserInventoryResult___VTable {
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

    struct Action_1_PlayFab_ClientModels_GetUserInventoryResult___StaticFields {
    };

    struct Action_1_PlayFab_ClientModels_GetUserInventoryResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_ClientModels_GetUserInventoryResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_ClientModels_GetUserInventoryResult___VTable vtable;
    };

    struct GetWindowsHelloChallengeRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct String* PublicKeyHint;
        struct String* TitleId;
    };

    struct GetWindowsHelloChallengeRequest {
        struct GetWindowsHelloChallengeRequest__Class* klass;
        MonitorData* monitor;
        struct GetWindowsHelloChallengeRequest__Fields fields;
    };

    struct Action_1_PlayFab_ClientModels_GetWindowsHelloChallengeResponse___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_PlayFab_ClientModels_GetWindowsHelloChallengeResponse_ {
        struct Action_1_PlayFab_ClientModels_GetWindowsHelloChallengeResponse___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_ClientModels_GetWindowsHelloChallengeResponse___Fields fields;
    };

    struct GetWindowsHelloChallengeResponse__Fields {
        struct PlayFabResultCommon__Fields _;
        struct String* Challenge;
    };

    struct GetWindowsHelloChallengeResponse {
        struct GetWindowsHelloChallengeResponse__Class* klass;
        MonitorData* monitor;
        struct GetWindowsHelloChallengeResponse__Fields fields;
    };

    struct GetWindowsHelloChallengeRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GetWindowsHelloChallengeRequest__StaticFields {
    };

    struct GetWindowsHelloChallengeRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetWindowsHelloChallengeRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetWindowsHelloChallengeRequest__VTable vtable;
    };

    struct GetWindowsHelloChallengeResponse__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GetWindowsHelloChallengeResponse__StaticFields {
    };

    struct GetWindowsHelloChallengeResponse__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetWindowsHelloChallengeResponse__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetWindowsHelloChallengeResponse__VTable vtable;
    };

    struct Action_1_PlayFab_ClientModels_GetWindowsHelloChallengeResponse___VTable {
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

    struct Action_1_PlayFab_ClientModels_GetWindowsHelloChallengeResponse___StaticFields {
    };

    struct Action_1_PlayFab_ClientModels_GetWindowsHelloChallengeResponse___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_ClientModels_GetWindowsHelloChallengeResponse___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_ClientModels_GetWindowsHelloChallengeResponse___VTable vtable;
    };

    struct GrantCharacterToUserRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct String* CatalogVersion;
        struct String* CharacterName;
        struct String* ItemId;
    };

    struct GrantCharacterToUserRequest {
        struct GrantCharacterToUserRequest__Class* klass;
        MonitorData* monitor;
        struct GrantCharacterToUserRequest__Fields fields;
    };

    struct Action_1_PlayFab_ClientModels_GrantCharacterToUserResult___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_PlayFab_ClientModels_GrantCharacterToUserResult_ {
        struct Action_1_PlayFab_ClientModels_GrantCharacterToUserResult___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_ClientModels_GrantCharacterToUserResult___Fields fields;
    };

    struct GrantCharacterToUserResult__Fields {
        struct PlayFabResultCommon__Fields _;
        struct String* CharacterId;
        struct String* CharacterType;
        bool Result;
    };

    struct GrantCharacterToUserResult {
        struct GrantCharacterToUserResult__Class* klass;
        MonitorData* monitor;
        struct GrantCharacterToUserResult__Fields fields;
    };

    struct GrantCharacterToUserRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GrantCharacterToUserRequest__StaticFields {
    };

    struct GrantCharacterToUserRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GrantCharacterToUserRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GrantCharacterToUserRequest__VTable vtable;
    };

    struct GrantCharacterToUserResult__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GrantCharacterToUserResult__StaticFields {
    };

    struct GrantCharacterToUserResult__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GrantCharacterToUserResult__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GrantCharacterToUserResult__VTable vtable;
    };

    struct Action_1_PlayFab_ClientModels_GrantCharacterToUserResult___VTable {
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

    struct Action_1_PlayFab_ClientModels_GrantCharacterToUserResult___StaticFields {
    };

    struct Action_1_PlayFab_ClientModels_GrantCharacterToUserResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_ClientModels_GrantCharacterToUserResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_ClientModels_GrantCharacterToUserResult___VTable vtable;
    };

    struct LinkAndroidDeviceIDRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct String* AndroidDevice;
        struct String* AndroidDeviceId;
        struct Nullable_1_Boolean_ ForceLink;
        struct String* OS;
    };

    struct LinkAndroidDeviceIDRequest {
        struct LinkAndroidDeviceIDRequest__Class* klass;
        MonitorData* monitor;
        struct LinkAndroidDeviceIDRequest__Fields fields;
    };

    struct Action_1_PlayFab_ClientModels_LinkAndroidDeviceIDResult___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_PlayFab_ClientModels_LinkAndroidDeviceIDResult_ {
        struct Action_1_PlayFab_ClientModels_LinkAndroidDeviceIDResult___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_ClientModels_LinkAndroidDeviceIDResult___Fields fields;
    };

    struct LinkAndroidDeviceIDResult__Fields {
        struct PlayFabResultCommon__Fields _;
    };

    struct LinkAndroidDeviceIDResult {
        struct LinkAndroidDeviceIDResult__Class* klass;
        MonitorData* monitor;
        struct LinkAndroidDeviceIDResult__Fields fields;
    };

    struct LinkAndroidDeviceIDRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LinkAndroidDeviceIDRequest__StaticFields {
    };

    struct LinkAndroidDeviceIDRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LinkAndroidDeviceIDRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LinkAndroidDeviceIDRequest__VTable vtable;
    };

    struct LinkAndroidDeviceIDResult__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LinkAndroidDeviceIDResult__StaticFields {
    };

    struct LinkAndroidDeviceIDResult__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LinkAndroidDeviceIDResult__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LinkAndroidDeviceIDResult__VTable vtable;
    };

    struct Action_1_PlayFab_ClientModels_LinkAndroidDeviceIDResult___VTable {
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

} // namespace app
