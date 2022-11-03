namespace app {
    struct GetCatalogItemsRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct String* CatalogVersion;
    };

    struct GetCatalogItemsRequest {
        struct GetCatalogItemsRequest__Class* klass;
        MonitorData* monitor;
        struct GetCatalogItemsRequest__Fields fields;
    };

    struct Action_1_PlayFab_ClientModels_GetCatalogItemsResult___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_PlayFab_ClientModels_GetCatalogItemsResult_ {
        struct Action_1_PlayFab_ClientModels_GetCatalogItemsResult___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_ClientModels_GetCatalogItemsResult___Fields fields;
    };

    struct GetCatalogItemsResult__Fields {
        struct PlayFabResultCommon__Fields _;
        struct List_1_PlayFab_ClientModels_CatalogItem_* Catalog;
    };

    struct GetCatalogItemsResult {
        struct GetCatalogItemsResult__Class* klass;
        MonitorData* monitor;
        struct GetCatalogItemsResult__Fields fields;
    };

    struct __declspec(align(8)) List_1_PlayFab_ClientModels_CatalogItem___Fields {
        struct CatalogItem__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PlayFab_ClientModels_CatalogItem_ {
        struct List_1_PlayFab_ClientModels_CatalogItem___Class* klass;
        MonitorData* monitor;
        struct List_1_PlayFab_ClientModels_CatalogItem___Fields fields;
    };

    struct __declspec(align(8)) CatalogItem__Fields {
        struct CatalogItemBundleInfo* Bundle;
        bool CanBecomeCharacter;
        struct String* CatalogVersion;
        struct CatalogItemConsumableInfo* Consumable;
        struct CatalogItemContainerInfo* Container;
        struct String* CustomData;
        struct String* Description;
        struct String* DisplayName;
        int32_t InitialLimitedEditionCount;
        bool IsLimitedEdition;
        bool IsStackable;
        bool IsTradable;
        struct String* ItemClass;
        struct String* ItemId;
        struct String* ItemImageUrl;
        struct Dictionary_2_System_String_System_UInt32_* RealCurrencyPrices;
        struct List_1_System_String_* Tags;
        struct Dictionary_2_System_String_System_UInt32_* VirtualCurrencyPrices;
    };

    struct CatalogItem {
        struct CatalogItem__Class* klass;
        MonitorData* monitor;
        struct CatalogItem__Fields fields;
    };

    struct __declspec(align(8)) CatalogItemBundleInfo__Fields {
        struct List_1_System_String_* BundledItems;
        struct List_1_System_String_* BundledResultTables;
        struct Dictionary_2_System_String_System_UInt32_* BundledVirtualCurrencies;
    };

    struct CatalogItemBundleInfo {
        struct CatalogItemBundleInfo__Class* klass;
        MonitorData* monitor;
        struct CatalogItemBundleInfo__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_System_String_System_UInt32___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_UInt32___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_String_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_UInt32_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_UInt32_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_String_System_UInt32_ {
        struct Dictionary_2_System_String_System_UInt32___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_String_System_UInt32___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_UInt32_ {
        int32_t hashCode;
        int32_t next;
        struct String* key;
        uint32_t value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_UInt32___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_UInt32___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_UInt32_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_UInt32___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_UInt32___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_UInt32_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_System_UInt32___Fields {
        struct Dictionary_2_System_String_System_UInt32_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_UInt32_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_UInt32___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_UInt32___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_System_UInt32___Fields {
        struct Dictionary_2_System_String_System_UInt32_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_UInt32_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_UInt32___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_UInt32___Fields fields;
    };

    struct KeyValuePair_2_System_String_System_UInt32_ {
        struct String* key;
        uint32_t value;
    };

    struct KeyValuePair_2_System_String_System_UInt32___Boxed {
        struct KeyValuePair_2_System_String_System_UInt32___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_String_System_UInt32_ fields;
    };

    struct KeyValuePair_2_System_String_System_UInt32___Array {
        struct KeyValuePair_2_System_String_System_UInt32___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_String_System_UInt32_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_System_UInt32_ {
        struct IEnumerator_1_KeyValuePair_2_System_String_System_UInt32___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) CatalogItemConsumableInfo__Fields {
        struct Nullable_1_UInt32_ UsageCount;
        struct Nullable_1_UInt32_ UsagePeriod;
        struct String* UsagePeriodGroup;
    };

    struct CatalogItemConsumableInfo {
        struct CatalogItemConsumableInfo__Class* klass;
        MonitorData* monitor;
        struct CatalogItemConsumableInfo__Fields fields;
    };

    struct __declspec(align(8)) CatalogItemContainerInfo__Fields {
        struct List_1_System_String_* ItemContents;
        struct String* KeyItemId;
        struct List_1_System_String_* ResultTableContents;
        struct Dictionary_2_System_String_System_UInt32_* VirtualCurrencyContents;
    };

    struct CatalogItemContainerInfo {
        struct CatalogItemContainerInfo__Class* klass;
        MonitorData* monitor;
        struct CatalogItemContainerInfo__Fields fields;
    };

    struct CatalogItem__Array {
        struct CatalogItem__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CatalogItem* vector[32];
    };

    struct IEnumerator_1_PlayFab_ClientModels_CatalogItem_ {
        struct IEnumerator_1_PlayFab_ClientModels_CatalogItem___Class* klass;
        MonitorData* monitor;
    };

    struct GetCatalogItemsRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GetCatalogItemsRequest__StaticFields {
    };

    struct GetCatalogItemsRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetCatalogItemsRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetCatalogItemsRequest__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_UInt32___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_UInt32___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_UInt32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_UInt32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_UInt32___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_UInt32___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_UInt32___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_UInt32___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_UInt32___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_UInt32___Array__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_UInt32___VTable {
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

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_UInt32___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_UInt32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_UInt32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_UInt32___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_UInt32___VTable {
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

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_UInt32___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_UInt32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_UInt32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_UInt32___VTable vtable;
    };

    struct KeyValuePair_2_System_String_System_UInt32___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_System_String_System_UInt32___StaticFields {
    };

    struct KeyValuePair_2_System_String_System_UInt32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_String_System_UInt32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_String_System_UInt32___VTable vtable;
    };

    struct KeyValuePair_2_System_String_System_UInt32___Array__VTable {
    };

    struct KeyValuePair_2_System_String_System_UInt32___Array__StaticFields {
    };

    struct KeyValuePair_2_System_String_System_UInt32___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_String_System_UInt32___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_String_System_UInt32___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_System_UInt32___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_System_UInt32___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_System_UInt32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_System_String_System_UInt32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_System_String_System_UInt32___VTable vtable;
    };

    struct Dictionary_2_System_String_System_UInt32___VTable {
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

    struct Dictionary_2_System_String_System_UInt32___StaticFields {
    };

    struct Dictionary_2_System_String_System_UInt32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_System_String_System_UInt32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_System_String_System_UInt32___VTable vtable;
    };

    struct CatalogItemBundleInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CatalogItemBundleInfo__StaticFields {
    };

    struct CatalogItemBundleInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CatalogItemBundleInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CatalogItemBundleInfo__VTable vtable;
    };

    struct CatalogItemConsumableInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CatalogItemConsumableInfo__StaticFields {
    };

    struct CatalogItemConsumableInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CatalogItemConsumableInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CatalogItemConsumableInfo__VTable vtable;
    };

    struct CatalogItemContainerInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CatalogItemContainerInfo__StaticFields {
    };

    struct CatalogItemContainerInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CatalogItemContainerInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CatalogItemContainerInfo__VTable vtable;
    };

    struct CatalogItem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CatalogItem__StaticFields {
    };

    struct CatalogItem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CatalogItem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CatalogItem__VTable vtable;
    };

    struct CatalogItem__Array__VTable {
    };

    struct CatalogItem__Array__StaticFields {
    };

    struct CatalogItem__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CatalogItem__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CatalogItem__Array__VTable vtable;
    };

    struct IEnumerator_1_PlayFab_ClientModels_CatalogItem___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_PlayFab_ClientModels_CatalogItem___StaticFields {
    };

    struct IEnumerator_1_PlayFab_ClientModels_CatalogItem___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_PlayFab_ClientModels_CatalogItem___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_PlayFab_ClientModels_CatalogItem___VTable vtable;
    };

    struct List_1_PlayFab_ClientModels_CatalogItem___VTable {
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

    struct List_1_PlayFab_ClientModels_CatalogItem___StaticFields {
        struct CatalogItem__Array* _emptyArray;
    };

    struct List_1_PlayFab_ClientModels_CatalogItem___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_PlayFab_ClientModels_CatalogItem___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_PlayFab_ClientModels_CatalogItem___VTable vtable;
    };

    struct GetCatalogItemsResult__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GetCatalogItemsResult__StaticFields {
    };

    struct GetCatalogItemsResult__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetCatalogItemsResult__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetCatalogItemsResult__VTable vtable;
    };

    struct Action_1_PlayFab_ClientModels_GetCatalogItemsResult___VTable {
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

    struct Action_1_PlayFab_ClientModels_GetCatalogItemsResult___StaticFields {
    };

    struct Action_1_PlayFab_ClientModels_GetCatalogItemsResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_ClientModels_GetCatalogItemsResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_ClientModels_GetCatalogItemsResult___VTable vtable;
    };

    struct GetCharacterDataRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct String* CharacterId;
        struct Nullable_1_UInt32_ IfChangedFromDataVersion;
        struct List_1_System_String_* Keys;
        struct String* PlayFabId;
    };

    struct GetCharacterDataRequest {
        struct GetCharacterDataRequest__Class* klass;
        MonitorData* monitor;
        struct GetCharacterDataRequest__Fields fields;
    };

    struct Action_1_PlayFab_ClientModels_GetCharacterDataResult___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_PlayFab_ClientModels_GetCharacterDataResult_ {
        struct Action_1_PlayFab_ClientModels_GetCharacterDataResult___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_ClientModels_GetCharacterDataResult___Fields fields;
    };

    struct GetCharacterDataResult__Fields {
        struct PlayFabResultCommon__Fields _;
        struct String* CharacterId;
        struct Dictionary_2_System_String_PlayFab_ClientModels_UserDataRecord_* Data;
        uint32_t DataVersion;
    };

    struct GetCharacterDataResult {
        struct GetCharacterDataResult__Class* klass;
        MonitorData* monitor;
        struct GetCharacterDataResult__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_System_String_PlayFab_ClientModels_UserDataRecord___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_UserDataRecord___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_String_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ClientModels_UserDataRecord_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ClientModels_UserDataRecord_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_String_PlayFab_ClientModels_UserDataRecord_ {
        struct Dictionary_2_System_String_PlayFab_ClientModels_UserDataRecord___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_String_PlayFab_ClientModels_UserDataRecord___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_UserDataRecord_ {
        int32_t hashCode;
        int32_t next;
        struct String* key;
        struct UserDataRecord* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_UserDataRecord___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_UserDataRecord___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_UserDataRecord_ fields;
    };

    enum class UserDataPermission__Enum : int32_t {
        Private = 0x00000000,
        Public = 0x00000001,
    };

    struct UserDataPermission__Enum__Boxed {
        struct UserDataPermission__Enum__Class* klass;
        MonitorData* monitor;
        UserDataPermission__Enum value;
    };

    struct Nullable_1_PlayFab_ClientModels_UserDataPermission_ {
        UserDataPermission__Enum value;

        bool has_value;
    };

    struct Nullable_1_PlayFab_ClientModels_UserDataPermission___Boxed {
        struct Nullable_1_PlayFab_ClientModels_UserDataPermission___Class* klass;
        MonitorData* monitor;
        struct Nullable_1_PlayFab_ClientModels_UserDataPermission_ fields;
    };

    struct __declspec(align(8)) UserDataRecord__Fields {
        struct DateTime LastUpdated;
        struct Nullable_1_PlayFab_ClientModels_UserDataPermission_ Permission;
        struct String* Value;
    };

    struct UserDataRecord {
        struct UserDataRecord__Class* klass;
        MonitorData* monitor;
        struct UserDataRecord__Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_UserDataRecord___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_UserDataRecord___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_UserDataRecord_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ClientModels_UserDataRecord___Fields {
        struct Dictionary_2_System_String_PlayFab_ClientModels_UserDataRecord_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ClientModels_UserDataRecord_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ClientModels_UserDataRecord___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ClientModels_UserDataRecord___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ClientModels_UserDataRecord___Fields {
        struct Dictionary_2_System_String_PlayFab_ClientModels_UserDataRecord_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ClientModels_UserDataRecord_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ClientModels_UserDataRecord___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ClientModels_UserDataRecord___Fields fields;
    };

    struct UserDataRecord__Array {
        struct UserDataRecord__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct UserDataRecord* vector[32];
    };

    struct IEnumerator_1_PlayFab_ClientModels_UserDataRecord_ {
        struct IEnumerator_1_PlayFab_ClientModels_UserDataRecord___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_PlayFab_ClientModels_UserDataRecord_ {
        struct ICollection_1_PlayFab_ClientModels_UserDataRecord___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_String_PlayFab_ClientModels_UserDataRecord_ {
        struct String* key;
        struct UserDataRecord* value;
    };

    struct KeyValuePair_2_System_String_PlayFab_ClientModels_UserDataRecord___Boxed {
        struct KeyValuePair_2_System_String_PlayFab_ClientModels_UserDataRecord___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_String_PlayFab_ClientModels_UserDataRecord_ fields;
    };

    struct KeyValuePair_2_System_String_PlayFab_ClientModels_UserDataRecord___Array {
        struct KeyValuePair_2_System_String_PlayFab_ClientModels_UserDataRecord___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_String_PlayFab_ClientModels_UserDataRecord_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ClientModels_UserDataRecord_ {
        struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ClientModels_UserDataRecord___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_PlayFab_ClientModels_UserDataRecord_ {
        struct IEnumerable_1_PlayFab_ClientModels_UserDataRecord___Class* klass;
        MonitorData* monitor;
    };

    struct GetCharacterDataRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GetCharacterDataRequest__StaticFields {
    };

    struct GetCharacterDataRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetCharacterDataRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetCharacterDataRequest__VTable vtable;
    };

    struct UserDataPermission__Enum__VTable {
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

    struct UserDataPermission__Enum__StaticFields {
    };

    struct UserDataPermission__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UserDataPermission__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UserDataPermission__Enum__VTable vtable;
    };

    struct Nullable_1_PlayFab_ClientModels_UserDataPermission___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Nullable_1_PlayFab_ClientModels_UserDataPermission___StaticFields {
    };

    struct Nullable_1_PlayFab_ClientModels_UserDataPermission___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Nullable_1_PlayFab_ClientModels_UserDataPermission___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Nullable_1_PlayFab_ClientModels_UserDataPermission___VTable vtable;
    };

    struct UserDataRecord__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UserDataRecord__StaticFields {
    };

    struct UserDataRecord__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UserDataRecord__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UserDataRecord__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_UserDataRecord___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_UserDataRecord___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_UserDataRecord___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_UserDataRecord___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_UserDataRecord___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_UserDataRecord___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_UserDataRecord___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_UserDataRecord___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_UserDataRecord___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_UserDataRecord___Array__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ClientModels_UserDataRecord___VTable {
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

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ClientModels_UserDataRecord___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ClientModels_UserDataRecord___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ClientModels_UserDataRecord___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ClientModels_UserDataRecord___VTable vtable;
    };

    struct UserDataRecord__Array__VTable {
    };

    struct UserDataRecord__Array__StaticFields {
    };

    struct UserDataRecord__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UserDataRecord__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UserDataRecord__Array__VTable vtable;
    };

    struct IEnumerator_1_PlayFab_ClientModels_UserDataRecord___VTable {
        VirtualInvokeData get_Current;
    };

} // namespace app
