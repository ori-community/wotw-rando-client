namespace app {
    struct AkCommonPlatformSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkCommonPlatformSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkCommonPlatformSettings__VTable vtable;
    };

    struct __declspec(align(8)) AkEnumFlagAttribute__Fields {
        struct Type* Type;
    };

    struct AkEnumFlagAttribute {
        struct AkEnumFlagAttribute__Class* klass;
        MonitorData* monitor;
        struct AkEnumFlagAttribute__Fields fields;
    };

    struct AkEnumFlagAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct AkEnumFlagAttribute__StaticFields {
    };

    struct AkEnumFlagAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkEnumFlagAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkEnumFlagAttribute__VTable vtable;
    };

    struct __declspec(align(8)) AkLogger__Fields {
        struct AkLogger_ErrorLoggerInteropDelegate* errorLoggerDelegate;
    };

    struct AkLogger {
        struct AkLogger__Class* klass;
        MonitorData* monitor;
        struct AkLogger__Fields fields;
    };

    struct AkLogger__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AkLogger__StaticFields {
        struct AkLogger* ms_Instance;
    };

    struct AkLogger__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkLogger__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkLogger__VTable vtable;
    };

    struct AkShowOnlyAttribute {
        struct AkShowOnlyAttribute__Class* klass;
        MonitorData* monitor;
    };

    struct AkShowOnlyAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct AkShowOnlyAttribute__StaticFields {
    };

    struct AkShowOnlyAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkShowOnlyAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkShowOnlyAttribute__VTable vtable;
    };

    struct __declspec(align(8)) WwiseSettings__Fields {
        bool CreatedPicker;
        bool CreateWwiseGlobal;
        bool ShowMissingRigidBodyWarning;
        struct String* SoundbankPath;
        struct String* WwiseInstallationPathMac;
        struct String* WwiseInstallationPathWindows;
        struct String* WwiseProjectPath;
    };

    struct WwiseSettings {
        struct WwiseSettings__Class* klass;
        MonitorData* monitor;
        struct WwiseSettings__Fields fields;
    };

    struct WwiseSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct WwiseSettings__StaticFields {
        struct WwiseSettings* s_Instance;
    };

    struct WwiseSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WwiseSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WwiseSettings__VTable vtable;
    };

    struct AkUtilities {
        struct AkUtilities__Class* klass;
        MonitorData* monitor;
    };

    struct AkUtilities__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AkUtilities__StaticFields {
    };

    struct AkUtilities__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkUtilities__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkUtilities__VTable vtable;
    };

    struct AkUtilities_ShortIDGenerator {
        struct AkUtilities_ShortIDGenerator__Class* klass;
        MonitorData* monitor;
    };

    struct AkUtilities_ShortIDGenerator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AkUtilities_ShortIDGenerator__StaticFields {
        uint8_t s_hashSize;
        uint32_t s_mask;
    };

    struct AkUtilities_ShortIDGenerator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkUtilities_ShortIDGenerator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkUtilities_ShortIDGenerator__VTable vtable;
    };

    struct __declspec(align(8)) RuntimeGuidMapping__Fields {
        int32_t m_bucketOffset;
        struct RuntimeGuidMapping_BucketEntry__Array* m_linearBucket;
        struct Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_* m_internalCache;
    };

    struct RuntimeGuidMapping {
        struct RuntimeGuidMapping__Class* klass;
        MonitorData* monitor;
        struct RuntimeGuidMapping__Fields fields;
    };

    struct RuntimeGuidMapping_BucketEntry {
        struct Byte__Array* Guid;
        uint32_t Id;
    };

    struct RuntimeGuidMapping_BucketEntry__Boxed {
        struct RuntimeGuidMapping_BucketEntry__Class* klass;
        MonitorData* monitor;
        struct RuntimeGuidMapping_BucketEntry fields;
    };

    struct RuntimeGuidMapping_BucketEntry__Array {
        struct RuntimeGuidMapping_BucketEntry__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct RuntimeGuidMapping_BucketEntry vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_UInt32_RuntimeGuidMapping_CacheEntry___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_UInt32_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_RuntimeGuidMapping_CacheEntry_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ {
        struct Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry___Fields fields;
    };

    struct RuntimeGuidMapping_CacheEntry {
        int32_t Offset;
        int32_t Head;
    };

    struct RuntimeGuidMapping_CacheEntry__Boxed {
        struct RuntimeGuidMapping_CacheEntry__Class* klass;
        MonitorData* monitor;
        struct RuntimeGuidMapping_CacheEntry fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_UInt32_RuntimeGuidMapping_CacheEntry_ {
        int32_t hashCode;
        int32_t next;
        uint32_t key;
        struct RuntimeGuidMapping_CacheEntry value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_UInt32_RuntimeGuidMapping_CacheEntry___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_UInt32_RuntimeGuidMapping_CacheEntry___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_UInt32_RuntimeGuidMapping_CacheEntry_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_UInt32_RuntimeGuidMapping_CacheEntry___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_UInt32_RuntimeGuidMapping_CacheEntry___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_UInt32_RuntimeGuidMapping_CacheEntry_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_RuntimeGuidMapping_CacheEntry___Fields {
        struct Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_RuntimeGuidMapping_CacheEntry_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_RuntimeGuidMapping_CacheEntry___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_RuntimeGuidMapping_CacheEntry___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry___Fields {
        struct Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry___Fields fields;
    };

    struct RuntimeGuidMapping_CacheEntry__Array {
        struct RuntimeGuidMapping_CacheEntry__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct RuntimeGuidMapping_CacheEntry vector[32];
    };

    struct IEnumerator_1_RuntimeGuidMapping_CacheEntry_ {
        struct IEnumerator_1_RuntimeGuidMapping_CacheEntry___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_RuntimeGuidMapping_CacheEntry_ {
        struct ICollection_1_RuntimeGuidMapping_CacheEntry___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ {
        uint32_t key;
        struct RuntimeGuidMapping_CacheEntry value;
    };

    struct KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___Boxed {
        struct KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ fields;
    };

    struct KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___Array {
        struct KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ {
        struct IEnumerator_1_KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_RuntimeGuidMapping_CacheEntry_ {
        struct IEnumerable_1_RuntimeGuidMapping_CacheEntry___Class* klass;
        MonitorData* monitor;
    };

    struct RuntimeGuidMapping_BucketEntry__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RuntimeGuidMapping_BucketEntry__StaticFields {
    };

    struct RuntimeGuidMapping_BucketEntry__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RuntimeGuidMapping_BucketEntry__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RuntimeGuidMapping_BucketEntry__VTable vtable;
    };

    struct RuntimeGuidMapping_BucketEntry__Array__VTable {
    };

    struct RuntimeGuidMapping_BucketEntry__Array__StaticFields {
    };

    struct RuntimeGuidMapping_BucketEntry__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RuntimeGuidMapping_BucketEntry__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RuntimeGuidMapping_BucketEntry__Array__VTable vtable;
    };

    struct RuntimeGuidMapping_CacheEntry__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RuntimeGuidMapping_CacheEntry__StaticFields {
    };

    struct RuntimeGuidMapping_CacheEntry__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RuntimeGuidMapping_CacheEntry__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RuntimeGuidMapping_CacheEntry__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_UInt32_RuntimeGuidMapping_CacheEntry___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_UInt32_RuntimeGuidMapping_CacheEntry___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_UInt32_RuntimeGuidMapping_CacheEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_UInt32_RuntimeGuidMapping_CacheEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_UInt32_RuntimeGuidMapping_CacheEntry___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_UInt32_RuntimeGuidMapping_CacheEntry___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_UInt32_RuntimeGuidMapping_CacheEntry___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_UInt32_RuntimeGuidMapping_CacheEntry___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_UInt32_RuntimeGuidMapping_CacheEntry___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_UInt32_RuntimeGuidMapping_CacheEntry___Array__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_RuntimeGuidMapping_CacheEntry___VTable {
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

    struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_RuntimeGuidMapping_CacheEntry___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_RuntimeGuidMapping_CacheEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_RuntimeGuidMapping_CacheEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_RuntimeGuidMapping_CacheEntry___VTable vtable;
    };

    struct RuntimeGuidMapping_CacheEntry__Array__VTable {
    };

    struct RuntimeGuidMapping_CacheEntry__Array__StaticFields {
    };

    struct RuntimeGuidMapping_CacheEntry__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RuntimeGuidMapping_CacheEntry__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RuntimeGuidMapping_CacheEntry__Array__VTable vtable;
    };

    struct IEnumerator_1_RuntimeGuidMapping_CacheEntry___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_RuntimeGuidMapping_CacheEntry___StaticFields {
    };

    struct IEnumerator_1_RuntimeGuidMapping_CacheEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_RuntimeGuidMapping_CacheEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_RuntimeGuidMapping_CacheEntry___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry___VTable {
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

    struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry___VTable vtable;
    };

    struct ICollection_1_RuntimeGuidMapping_CacheEntry___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_RuntimeGuidMapping_CacheEntry___StaticFields {
    };

    struct ICollection_1_RuntimeGuidMapping_CacheEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_RuntimeGuidMapping_CacheEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_RuntimeGuidMapping_CacheEntry___VTable vtable;
    };

    struct RuntimeGuidMapping_CacheEntry___VTable {
    };

    struct RuntimeGuidMapping_CacheEntry___StaticFields {
    };

    struct RuntimeGuidMapping_CacheEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RuntimeGuidMapping_CacheEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RuntimeGuidMapping_CacheEntry___VTable vtable;
    };

    struct KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___StaticFields {
    };

    struct KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___VTable vtable;
    };

    struct KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___Array__VTable {
    };

    struct KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___Array__StaticFields {
    };

    struct KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___VTable vtable;
    };

    struct IEnumerable_1_RuntimeGuidMapping_CacheEntry___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_RuntimeGuidMapping_CacheEntry___StaticFields {
    };

    struct IEnumerable_1_RuntimeGuidMapping_CacheEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_RuntimeGuidMapping_CacheEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_RuntimeGuidMapping_CacheEntry___VTable vtable;
    };

    struct Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry___VTable {
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

    struct Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry___StaticFields {
    };

    struct Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry___VTable vtable;
    };

    struct RuntimeGuidMapping__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RuntimeGuidMapping__StaticFields {
        struct RuntimeGuidMapping* m_instance;
    };

    struct RuntimeGuidMapping__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RuntimeGuidMapping__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RuntimeGuidMapping__VTable vtable;
    };

    struct MurmurHash2 {
        struct MurmurHash2__Class* klass;
        MonitorData* monitor;
    };

    struct MurmurHash2__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MurmurHash2__StaticFields {
    };

    struct MurmurHash2__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MurmurHash2__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MurmurHash2__VTable vtable;
    };

    struct WwiseBootstrapConfiguration__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct WwiseBootstrapConfiguration {
        struct WwiseBootstrapConfiguration__Class* klass;
        MonitorData* monitor;
        struct WwiseBootstrapConfiguration__Fields fields;
    };

    struct WotwWwiseBootstrapConfiguration__Fields {
        struct WwiseBootstrapConfiguration__Fields _;
        struct SoundHost* DefaultHost;
        struct SoundListener* DefaultListener;
    };

    struct WotwWwiseBootstrapConfiguration {
        struct WotwWwiseBootstrapConfiguration__Class* klass;
        MonitorData* monitor;
        struct WotwWwiseBootstrapConfiguration__Fields fields;
    };

    enum class WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum : int32_t {
        CoreOneOnly = 0x00000002,
        CoreTwoOnly = 0x00000004,
        CoreOneAndTwo = 0x00000006,
        AllCores = 0x00000007,
    };

    struct WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum__Boxed {
        struct WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum__Class* klass;
        MonitorData* monitor;
        WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum value;
    };

    struct SoundListener__Fields {
        struct SoundHost__Fields _;
        struct Vector3 m_positionOffset;
    };

    struct SoundListener {
        struct SoundListener__Class* klass;
        MonitorData* monitor;
        struct SoundListener__Fields fields;
    };

    struct WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum__VTable {
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

    struct WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum__StaticFields {
    };

    struct WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum__VTable vtable;
    };

    struct SoundListener__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData IsActiveVersion;
        VirtualInvokeData get_IsActive;
        VirtualInvokeData get_Version;
        VirtualInvokeData get_Position;
        VirtualInvokeData get_Rotation;
        VirtualInvokeData get_GameObject;
        VirtualInvokeData get_Id;
        VirtualInvokeData get_AsListener;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData get_Position_1;
        VirtualInvokeData get_Rotation_1;
        VirtualInvokeData OnEnable;
        VirtualInvokeData OnDrawGizmos;
        VirtualInvokeData get_PositionOffset;
        VirtualInvokeData Reregister;
    };

    struct SoundListener__StaticFields {
    };

    struct SoundListener__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SoundListener__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SoundListener__VTable vtable;
    };

    struct WotwWwiseBootstrapConfiguration__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData SetStatics;
        VirtualInvokeData Configure;
        VirtualInvokeData PostProcessSettings;
        VirtualInvokeData PostProcessSettings_1;
    };

    struct WotwWwiseBootstrapConfiguration__StaticFields {
        WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum SwitchThreadAffinity;
    };

    struct WotwWwiseBootstrapConfiguration__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WotwWwiseBootstrapConfiguration__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WotwWwiseBootstrapConfiguration__VTable vtable;
    };

    struct WwiseBootstrapConfiguration__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData __unknown_2;
        VirtualInvokeData __unknown_3;
    };

    struct WwiseBootstrapConfiguration__StaticFields {
        uint32_t SamplesPerFrame;
    };

    struct WwiseBootstrapConfiguration__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WwiseBootstrapConfiguration__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WwiseBootstrapConfiguration__VTable vtable;
    };

    struct __declspec(align(8)) AkWwiseInitializationSettings_WwiseOverrideSettings__Fields {
        uint32_t uDefaultPoolSize;
        uint32_t uLEngineDefaultPoolSize;
        uint32_t ShapeDefaultPoolSize;
        uint16_t MaximumNumberOfXMAVoices;
        bool UseHardwareCodecLowLatencyMode;
        uint32_t APUHeapCachedSize;
        uint32_t APUHeapNonCachedSize;
    };

    struct AkWwiseInitializationSettings_WwiseOverrideSettings {
        struct AkWwiseInitializationSettings_WwiseOverrideSettings__Class* klass;
        MonitorData* monitor;
        struct AkWwiseInitializationSettings_WwiseOverrideSettings__Fields fields;
    };

    struct AkWwiseInitializationSettings_WwiseOverrideSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AkWwiseInitializationSettings_WwiseOverrideSettings__StaticFields {
    };

    struct AkWwiseInitializationSettings_WwiseOverrideSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkWwiseInitializationSettings_WwiseOverrideSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkWwiseInitializationSettings_WwiseOverrideSettings__VTable vtable;
    };

    struct __declspec(align(8)) AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings__Fields {
        uint32_t OutputDeviceId;
        bool WindowsSpatialEnabled;
        AkPanningRule__Enum PanningRule;
    };

    struct AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings {
        struct AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings__Class* klass;
        MonitorData* monitor;
        struct AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings__Fields fields;
    };

    struct AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings__StaticFields {
    };

    struct AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings__VTable vtable;
    };

    struct __declspec(align(8)) AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings__Fields {
        AkAudioAPI__Enum ApiOverride;

        struct AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings* Output;
    };

    struct AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings {
        struct AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings__Class* klass;
        MonitorData* monitor;
        struct AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings__Fields fields;
    };

    struct AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings__StaticFields {
    };

    struct AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings__VTable vtable;
    };

    struct AkWwiseInitializationSettings_c {
        struct AkWwiseInitializationSettings_c__Class* klass;
        MonitorData* monitor;
    };

    struct Func_2_String_Boolean___Fields {
        struct MulticastDelegate__Fields _;
    };

} // namespace app
