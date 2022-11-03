namespace app {
    struct HierarchyPerfTest_LastRunner__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct HierarchyPerfTest_LastRunner {
        struct HierarchyPerfTest_LastRunner__Class* klass;
        MonitorData* monitor;
        struct HierarchyPerfTest_LastRunner__Fields fields;
    };

    struct HierarchyPerfTest_LastRunner__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HierarchyPerfTest_LastRunner__StaticFields {
    };

    struct HierarchyPerfTest_LastRunner__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HierarchyPerfTest_LastRunner__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HierarchyPerfTest_LastRunner__VTable vtable;
    };

    struct HierarchyPerfTestsSceneRoot__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct HierarchyPerfTestsSceneRoot {
        struct HierarchyPerfTestsSceneRoot__Class* klass;
        MonitorData* monitor;
        struct HierarchyPerfTestsSceneRoot__Fields fields;
    };

    struct HierarchyPerfTestsSceneRoot__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HierarchyPerfTestsSceneRoot__StaticFields {
    };

    struct HierarchyPerfTestsSceneRoot__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HierarchyPerfTestsSceneRoot__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HierarchyPerfTestsSceneRoot__VTable vtable;
    };

    struct __declspec(align(8)) PerfTestTimer__Fields {
        struct PerfTestTimer_TestData* Data;
        struct Stopwatch* TestStopwatch;
        struct Stopwatch* GcStopwatch;
        bool TakeGCUnloadTimings;
        int32_t TotalIterationToDo;
        int32_t TestIterations;
        int64_t TotalGCChange;
    };

    struct PerfTestTimer {
        struct PerfTestTimer__Class* klass;
        MonitorData* monitor;
        struct PerfTestTimer__Fields fields;
    };

    struct __declspec(align(8)) PerfTestTimer_TestData__Fields {
        struct String* Name;
        struct TimeSpan TestTime;
        struct TimeSpan GcTime;
        int64_t MonoMemoryGcChange;
    };

    struct PerfTestTimer_TestData {
        struct PerfTestTimer_TestData__Class* klass;
        MonitorData* monitor;
        struct PerfTestTimer_TestData__Fields fields;
    };

    struct PerfTestTimer_TestData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PerfTestTimer_TestData__StaticFields {
        struct TimeSpan NoValue;
    };

    struct PerfTestTimer_TestData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PerfTestTimer_TestData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PerfTestTimer_TestData__VTable vtable;
    };

    struct PerfTestTimer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PerfTestTimer__StaticFields {
    };

    struct PerfTestTimer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PerfTestTimer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PerfTestTimer__VTable vtable;
    };

    struct HierarchyPerfTestComp_AllUnityCallbacks__Fields {
        struct MonoBehaviour__Fields _;
        int32_t i;
        int32_t j;
        int32_t k;
    };

    struct HierarchyPerfTestComp_AllUnityCallbacks {
        struct HierarchyPerfTestComp_AllUnityCallbacks__Class* klass;
        MonitorData* monitor;
        struct HierarchyPerfTestComp_AllUnityCallbacks__Fields fields;
    };

    struct HierarchyPerfTestComp_AllUnityCallbacks__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HierarchyPerfTestComp_AllUnityCallbacks__StaticFields {
    };

    struct HierarchyPerfTestComp_AllUnityCallbacks__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HierarchyPerfTestComp_AllUnityCallbacks__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HierarchyPerfTestComp_AllUnityCallbacks__VTable vtable;
    };

    struct HierarchyPerfTestComp_Empty__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct HierarchyPerfTestComp_Empty {
        struct HierarchyPerfTestComp_Empty__Class* klass;
        MonitorData* monitor;
        struct HierarchyPerfTestComp_Empty__Fields fields;
    };

    struct HierarchyPerfTestComp_Empty__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HierarchyPerfTestComp_Empty__StaticFields {
    };

    struct HierarchyPerfTestComp_Empty__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HierarchyPerfTestComp_Empty__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HierarchyPerfTestComp_Empty__VTable vtable;
    };

    struct TestRunner__Fields {
        struct MonoBehaviour__Fields _;
        struct String__Array* PerfSceneLists;
        struct Dictionary_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData_* sceneNameToTests;
        struct String* currentSceneName;
        struct Stack_1_System_Collections_IEnumerator_* TestCourtineStack;
        struct String* TestRunningString;
    };

    struct TestRunner {
        struct TestRunner__Class* klass;
        MonitorData* monitor;
        struct TestRunner__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_String_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData_ {
        struct Dictionary_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData_ {
        int32_t hashCode;
        int32_t next;
        struct String* key;
        struct List_1_HierarchyPerfTest_PerfTestTimer_TestData_* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData_ fields;
    };

    struct __declspec(align(8)) List_1_HierarchyPerfTest_PerfTestTimer_TestData___Fields {
        struct PerfTestTimer_TestData__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_HierarchyPerfTest_PerfTestTimer_TestData_ {
        struct List_1_HierarchyPerfTest_PerfTestTimer_TestData___Class* klass;
        MonitorData* monitor;
        struct List_1_HierarchyPerfTest_PerfTestTimer_TestData___Fields fields;
    };

    struct PerfTestTimer_TestData__Array {
        struct PerfTestTimer_TestData__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct PerfTestTimer_TestData* vector[32];
    };

    struct IEnumerator_1_HierarchyPerfTest_PerfTestTimer_TestData_ {
        struct IEnumerator_1_HierarchyPerfTest_PerfTestTimer_TestData___Class* klass;
        MonitorData* monitor;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Fields {
        struct Dictionary_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Fields {
        struct Dictionary_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Fields fields;
    };

    struct List_1_HierarchyPerfTest_PerfTestTimer_TestData___Array {
        struct List_1_HierarchyPerfTest_PerfTestTimer_TestData___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct List_1_HierarchyPerfTest_PerfTestTimer_TestData_* vector[32];
    };

    struct IEnumerator_1_List_1_HierarchyPerfTest_PerfTestTimer_TestData_ {
        struct IEnumerator_1_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_List_1_HierarchyPerfTest_PerfTestTimer_TestData_ {
        struct ICollection_1_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData_ {
        struct String* key;
        struct List_1_HierarchyPerfTest_PerfTestTimer_TestData_* value;
    };

    struct KeyValuePair_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Boxed {
        struct KeyValuePair_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData_ fields;
    };

    struct KeyValuePair_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Array {
        struct KeyValuePair_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData_ {
        struct IEnumerator_1_KeyValuePair_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_List_1_HierarchyPerfTest_PerfTestTimer_TestData_ {
        struct IEnumerable_1_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Stack_1_System_Collections_IEnumerator___Fields {
        struct IEnumerator__Array* _array;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct Stack_1_System_Collections_IEnumerator_ {
        struct Stack_1_System_Collections_IEnumerator___Class* klass;
        MonitorData* monitor;
        struct Stack_1_System_Collections_IEnumerator___Fields fields;
    };

    struct IEnumerator__Array {
        struct IEnumerator__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IEnumerator* vector[32];
    };

    struct IEnumerator_1_System_Collections_IEnumerator_ {
        struct IEnumerator_1_System_Collections_IEnumerator___Class* klass;
        MonitorData* monitor;
    };

    struct PerfTestTimer_TestData__Array__VTable {
    };

    struct PerfTestTimer_TestData__Array__StaticFields {
    };

    struct PerfTestTimer_TestData__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PerfTestTimer_TestData__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PerfTestTimer_TestData__Array__VTable vtable;
    };

    struct IEnumerator_1_HierarchyPerfTest_PerfTestTimer_TestData___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_HierarchyPerfTest_PerfTestTimer_TestData___StaticFields {
    };

    struct IEnumerator_1_HierarchyPerfTest_PerfTestTimer_TestData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_HierarchyPerfTest_PerfTestTimer_TestData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_HierarchyPerfTest_PerfTestTimer_TestData___VTable vtable;
    };

    struct List_1_HierarchyPerfTest_PerfTestTimer_TestData___VTable {
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

    struct List_1_HierarchyPerfTest_PerfTestTimer_TestData___StaticFields {
        struct PerfTestTimer_TestData__Array* _emptyArray;
    };

    struct List_1_HierarchyPerfTest_PerfTestTimer_TestData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_HierarchyPerfTest_PerfTestTimer_TestData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_HierarchyPerfTest_PerfTestTimer_TestData___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Array__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___VTable {
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

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___VTable vtable;
    };

    struct List_1_HierarchyPerfTest_PerfTestTimer_TestData___Array__VTable {
    };

    struct List_1_HierarchyPerfTest_PerfTestTimer_TestData___Array__StaticFields {
    };

    struct List_1_HierarchyPerfTest_PerfTestTimer_TestData___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_HierarchyPerfTest_PerfTestTimer_TestData___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_HierarchyPerfTest_PerfTestTimer_TestData___Array__VTable vtable;
    };

    struct IEnumerator_1_List_1_HierarchyPerfTest_PerfTestTimer_TestData___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_List_1_HierarchyPerfTest_PerfTestTimer_TestData___StaticFields {
    };

    struct IEnumerator_1_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_List_1_HierarchyPerfTest_PerfTestTimer_TestData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_List_1_HierarchyPerfTest_PerfTestTimer_TestData___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___VTable {
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

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___VTable vtable;
    };

    struct ICollection_1_List_1_HierarchyPerfTest_PerfTestTimer_TestData___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_List_1_HierarchyPerfTest_PerfTestTimer_TestData___StaticFields {
    };

    struct ICollection_1_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_List_1_HierarchyPerfTest_PerfTestTimer_TestData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_List_1_HierarchyPerfTest_PerfTestTimer_TestData___VTable vtable;
    };

    struct List_1_HierarchyPerfTest_PerfTestTimer_TestData__1__VTable {
    };

    struct List_1_HierarchyPerfTest_PerfTestTimer_TestData__1__StaticFields {
    };

    struct List_1_HierarchyPerfTest_PerfTestTimer_TestData__1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_HierarchyPerfTest_PerfTestTimer_TestData__1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_HierarchyPerfTest_PerfTestTimer_TestData__1__VTable vtable;
    };

    struct KeyValuePair_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___StaticFields {
    };

    struct KeyValuePair_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___VTable vtable;
    };

    struct KeyValuePair_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Array__VTable {
    };

    struct KeyValuePair_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Array__StaticFields {
    };

    struct KeyValuePair_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___VTable vtable;
    };

    struct IEnumerable_1_List_1_HierarchyPerfTest_PerfTestTimer_TestData___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_List_1_HierarchyPerfTest_PerfTestTimer_TestData___StaticFields {
    };

    struct IEnumerable_1_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_List_1_HierarchyPerfTest_PerfTestTimer_TestData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_List_1_HierarchyPerfTest_PerfTestTimer_TestData___VTable vtable;
    };

    struct Dictionary_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___VTable {
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

    struct Dictionary_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___StaticFields {
    };

    struct Dictionary_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData___VTable vtable;
    };

    struct IEnumerator__Array__VTable {
    };

    struct IEnumerator__Array__StaticFields {
    };

    struct IEnumerator__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator__Array__VTable vtable;
    };

    struct IEnumerator_1_System_Collections_IEnumerator___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_System_Collections_IEnumerator___StaticFields {
    };

    struct IEnumerator_1_System_Collections_IEnumerator___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_System_Collections_IEnumerator___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_System_Collections_IEnumerator___VTable vtable;
    };

    struct Stack_1_System_Collections_IEnumerator___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Count_1;
    };

    struct Stack_1_System_Collections_IEnumerator___StaticFields {
    };

    struct Stack_1_System_Collections_IEnumerator___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Stack_1_System_Collections_IEnumerator___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Stack_1_System_Collections_IEnumerator___VTable vtable;
    };

    struct TestRunner__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TestRunner__StaticFields {
        struct TestRunner* Instance;
    };

    struct TestRunner__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TestRunner__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TestRunner__VTable vtable;
    };

    struct __declspec(align(8)) TestRunner_TestCoroutine_d_13__Fields {
        int32_t __1__state;
        struct Object* __2__current;
    };

    struct TestRunner_TestCoroutine_d_13 {
        struct TestRunner_TestCoroutine_d_13__Class* klass;
        MonitorData* monitor;
        struct TestRunner_TestCoroutine_d_13__Fields fields;
    };

    struct TestRunner_TestCoroutine_d_13__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct TestRunner_TestCoroutine_d_13__StaticFields {
    };

    struct TestRunner_TestCoroutine_d_13__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TestRunner_TestCoroutine_d_13__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TestRunner_TestCoroutine_d_13__VTable vtable;
    };

    struct __declspec(align(8)) TestRunner_RunScenesThroughTests_d_14__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct TestRunner* __4__this;
        struct String* testPrefix;
        struct String__Array* __7__wrap1;
        int32_t __7__wrap2;
        struct String* _scene_5__4;
        int32_t _i_5__5;
    };

    struct TestRunner_RunScenesThroughTests_d_14 {
        struct TestRunner_RunScenesThroughTests_d_14__Class* klass;
        MonitorData* monitor;
        struct TestRunner_RunScenesThroughTests_d_14__Fields fields;
    };

    struct TestRunner_RunScenesThroughTests_d_14__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct TestRunner_RunScenesThroughTests_d_14__StaticFields {
    };

    struct TestRunner_RunScenesThroughTests_d_14__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TestRunner_RunScenesThroughTests_d_14__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TestRunner_RunScenesThroughTests_d_14__VTable vtable;
    };

    struct TestRunner_c {
        struct TestRunner_c__Class* klass;
        MonitorData* monitor;
    };

    struct Func_2_HierarchyPerfTest_PerfTestTimer_TestData_String___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_HierarchyPerfTest_PerfTestTimer_TestData_String_ {
        struct Func_2_HierarchyPerfTest_PerfTestTimer_TestData_String___Class* klass;
        MonitorData* monitor;
        struct Func_2_HierarchyPerfTest_PerfTestTimer_TestData_String___Fields fields;
    };

    struct Func_2_HierarchyPerfTest_PerfTestTimer_TestData_String___VTable {
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

    struct Func_2_HierarchyPerfTest_PerfTestTimer_TestData_String___StaticFields {
    };

    struct Func_2_HierarchyPerfTest_PerfTestTimer_TestData_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_2_HierarchyPerfTest_PerfTestTimer_TestData_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_2_HierarchyPerfTest_PerfTestTimer_TestData_String___VTable vtable;
    };

    struct TestRunner_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TestRunner_c__StaticFields {
        struct TestRunner_c* __9;
        struct Func_2_HierarchyPerfTest_PerfTestTimer_TestData_String_* __9__15_0;
    };

    struct TestRunner_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TestRunner_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TestRunner_c__VTable vtable;
    };

    struct __declspec(align(8)) List_1_UnityEngine_Quaternion___Fields {
        struct Quaternion__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_UnityEngine_Quaternion_ {
        struct List_1_UnityEngine_Quaternion___Class* klass;
        MonitorData* monitor;
        struct List_1_UnityEngine_Quaternion___Fields fields;
    };

    struct List_1_UnityEngine_Quaternion___VTable {
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

} // namespace app
