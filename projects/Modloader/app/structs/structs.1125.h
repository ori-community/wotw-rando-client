namespace app {
    struct HashSet_1_T_Slot_Moon_HierarchyPerformanceTest_HPerfTestResult___Array__VTable {
    };

    struct HashSet_1_T_Slot_Moon_HierarchyPerformanceTest_HPerfTestResult___Array__StaticFields {
    };

    struct HashSet_1_T_Slot_Moon_HierarchyPerformanceTest_HPerfTestResult___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HashSet_1_T_Slot_Moon_HierarchyPerformanceTest_HPerfTestResult___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HashSet_1_T_Slot_Moon_HierarchyPerformanceTest_HPerfTestResult___Array__VTable vtable;
    };

    struct IEqualityComparer_1_Moon_HierarchyPerformanceTest_HPerfTestResult___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData GetHashCode;
    };

    struct IEqualityComparer_1_Moon_HierarchyPerformanceTest_HPerfTestResult___StaticFields {
    };

    struct IEqualityComparer_1_Moon_HierarchyPerformanceTest_HPerfTestResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEqualityComparer_1_Moon_HierarchyPerformanceTest_HPerfTestResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEqualityComparer_1_Moon_HierarchyPerformanceTest_HPerfTestResult___VTable vtable;
    };

    struct HashSet_1_Moon_HierarchyPerformanceTest_HPerfTestResult___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_T__Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData OnDeserialization;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData OnDeserialization_1;
        VirtualInvokeData Add;
        VirtualInvokeData UnionWith;
    };

    struct HashSet_1_Moon_HierarchyPerformanceTest_HPerfTestResult___StaticFields {
    };

    struct HashSet_1_Moon_HierarchyPerformanceTest_HPerfTestResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HashSet_1_Moon_HierarchyPerformanceTest_HPerfTestResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HashSet_1_Moon_HierarchyPerformanceTest_HPerfTestResult___VTable vtable;
    };

    struct __declspec(align(8)) HierarchyTestOutputBase_1_HierarchyTestBulkToolData___Fields {
        struct HierarchyTestBulkToolData* m_data;
        struct HierarchyPerformanceTester_Old_HPerfTestResultComparer* m_comparer;
        struct String* m_lastSavedPath;
    };

    struct HierarchyTestOutputBase_1_HierarchyTestBulkToolData_ {
        struct HierarchyTestOutputBase_1_HierarchyTestBulkToolData___Class* klass;
        MonitorData* monitor;
        struct HierarchyTestOutputBase_1_HierarchyTestBulkToolData___Fields fields;
    };

    struct HierarchyTestBulkOutput__Fields {
        struct HierarchyTestOutputBase_1_HierarchyTestBulkToolData___Fields _;
        struct HierarchyTestResultAggregator* m_aggregator;
        struct String* m_fileName;
        struct String* m_fileExtension;
        bool m_headerAdded;
    };

    struct HierarchyTestBulkOutput {
        struct HierarchyTestBulkOutput__Class* klass;
        MonitorData* monitor;
        struct HierarchyTestBulkOutput__Fields fields;
    };

    struct __declspec(align(8)) HierarchyTestBulkToolData__Fields {
        struct List_1_Moon_HierarchyPerformanceTest_SceneTestData_* ScenesDataCollection;
    };

    struct HierarchyTestBulkToolData {
        struct HierarchyTestBulkToolData__Class* klass;
        MonitorData* monitor;
        struct HierarchyTestBulkToolData__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_HierarchyPerformanceTest_SceneTestData___Fields {
        struct SceneTestData__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_HierarchyPerformanceTest_SceneTestData_ {
        struct List_1_Moon_HierarchyPerformanceTest_SceneTestData___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_HierarchyPerformanceTest_SceneTestData___Fields fields;
    };

    struct __declspec(align(8)) SceneTestData__Fields {
        struct SceneMetaData* SceneMetaData;
        struct HierarchyDebugMenu_GameObjectItem* Root;
        struct List_1_Moon_HierarchyPerformanceTest_SceneSample_* Samples;
        float ScanningTime;
    };

    struct SceneTestData {
        struct SceneTestData__Class* klass;
        MonitorData* monitor;
        struct SceneTestData__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_HierarchyPerformanceTest_SceneSample___Fields {
        struct SceneSample__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_HierarchyPerformanceTest_SceneSample_ {
        struct List_1_Moon_HierarchyPerformanceTest_SceneSample___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_HierarchyPerformanceTest_SceneSample___Fields fields;
    };

    struct __declspec(align(8)) SceneSample__Fields {
        struct Vector3 CameraPosition;
        struct HPerfTestResult* BaselineMeasurement;
        struct Dictionary_2_System_Int32_Moon_HierarchyPerformanceTest_HPerfTestResult_* Results;
    };

    struct SceneSample {
        struct SceneSample__Class* klass;
        MonitorData* monitor;
        struct SceneSample__Fields fields;
    };

    struct SceneSample__Array {
        struct SceneSample__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SceneSample* vector[32];
    };

    struct IEnumerator_1_Moon_HierarchyPerformanceTest_SceneSample_ {
        struct IEnumerator_1_Moon_HierarchyPerformanceTest_SceneSample___Class* klass;
        MonitorData* monitor;
    };

    struct SceneTestData__Array {
        struct SceneTestData__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SceneTestData* vector[32];
    };

    struct IEnumerator_1_Moon_HierarchyPerformanceTest_SceneTestData_ {
        struct IEnumerator_1_Moon_HierarchyPerformanceTest_SceneTestData___Class* klass;
        MonitorData* monitor;
    };

    enum class HierarchyTestResultAggregator_AggregationType__Enum : int32_t {
        Min = 0x00000000,
        Max = 0x00000001,
        Avg = 0x00000002,
    };

    struct HierarchyTestResultAggregator_AggregationType__Enum__Boxed {
        struct HierarchyTestResultAggregator_AggregationType__Enum__Class* klass;
        MonitorData* monitor;
        HierarchyTestResultAggregator_AggregationType__Enum value;
    };

    struct __declspec(align(8)) HierarchyTestResultAggregator__Fields {
        struct SceneTestData* m_data;
        int32_t m_samplesCount;
        struct HPerfTestResult__Array* m_objectTempSamples;
        HierarchyTestResultAggregator_AggregationType__Enum m_aggregationType;
    };

    struct HierarchyTestResultAggregator {
        struct HierarchyTestResultAggregator__Class* klass;
        MonitorData* monitor;
        struct HierarchyTestResultAggregator__Fields fields;
    };

    struct SceneSample__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SceneSample__StaticFields {
    };

    struct SceneSample__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SceneSample__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SceneSample__VTable vtable;
    };

    struct SceneSample__Array__VTable {
    };

    struct SceneSample__Array__StaticFields {
    };

    struct SceneSample__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SceneSample__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SceneSample__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_HierarchyPerformanceTest_SceneSample___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_HierarchyPerformanceTest_SceneSample___StaticFields {
    };

    struct IEnumerator_1_Moon_HierarchyPerformanceTest_SceneSample___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_HierarchyPerformanceTest_SceneSample___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_HierarchyPerformanceTest_SceneSample___VTable vtable;
    };

    struct List_1_Moon_HierarchyPerformanceTest_SceneSample___VTable {
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

    struct List_1_Moon_HierarchyPerformanceTest_SceneSample___StaticFields {
        struct SceneSample__Array* _emptyArray;
    };

    struct List_1_Moon_HierarchyPerformanceTest_SceneSample___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_HierarchyPerformanceTest_SceneSample___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_HierarchyPerformanceTest_SceneSample___VTable vtable;
    };

    struct SceneTestData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SceneTestData__StaticFields {
    };

    struct SceneTestData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SceneTestData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SceneTestData__VTable vtable;
    };

    struct SceneTestData__Array__VTable {
    };

    struct SceneTestData__Array__StaticFields {
    };

    struct SceneTestData__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SceneTestData__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SceneTestData__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_HierarchyPerformanceTest_SceneTestData___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_HierarchyPerformanceTest_SceneTestData___StaticFields {
    };

    struct IEnumerator_1_Moon_HierarchyPerformanceTest_SceneTestData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_HierarchyPerformanceTest_SceneTestData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_HierarchyPerformanceTest_SceneTestData___VTable vtable;
    };

    struct List_1_Moon_HierarchyPerformanceTest_SceneTestData___VTable {
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

    struct List_1_Moon_HierarchyPerformanceTest_SceneTestData___StaticFields {
        struct SceneTestData__Array* _emptyArray;
    };

    struct List_1_Moon_HierarchyPerformanceTest_SceneTestData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_HierarchyPerformanceTest_SceneTestData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_HierarchyPerformanceTest_SceneTestData___VTable vtable;
    };

    struct HierarchyTestBulkToolData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HierarchyTestBulkToolData__StaticFields {
    };

    struct HierarchyTestBulkToolData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HierarchyTestBulkToolData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HierarchyTestBulkToolData__VTable vtable;
    };

    struct HierarchyTestOutputBase_1_HierarchyTestBulkToolData___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Save;
        VirtualInvokeData __unknown;
    };

    struct HierarchyTestOutputBase_1_HierarchyTestBulkToolData___StaticFields {
    };

    struct HierarchyTestOutputBase_1_HierarchyTestBulkToolData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HierarchyTestOutputBase_1_HierarchyTestBulkToolData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HierarchyTestOutputBase_1_HierarchyTestBulkToolData___VTable vtable;
    };

    struct HierarchyTestResultAggregator_AggregationType__Enum__VTable {
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

    struct HierarchyTestResultAggregator_AggregationType__Enum__StaticFields {
    };

    struct HierarchyTestResultAggregator_AggregationType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HierarchyTestResultAggregator_AggregationType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HierarchyTestResultAggregator_AggregationType__Enum__VTable vtable;
    };

    struct HierarchyTestResultAggregator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HierarchyTestResultAggregator__StaticFields {
    };

    struct HierarchyTestResultAggregator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HierarchyTestResultAggregator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HierarchyTestResultAggregator__VTable vtable;
    };

    struct HierarchyTestBulkOutput__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Save;
        VirtualInvokeData BuildContent;
    };

    struct HierarchyTestBulkOutput__StaticFields {
    };

    struct HierarchyTestBulkOutput__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HierarchyTestBulkOutput__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HierarchyTestBulkOutput__VTable vtable;
    };

    enum class HierarchyTestBulkTool_State__Enum : int32_t {
        Idle = 0x00000000,
        Starting = 0x00000001,
        StartLoadScene = 0x00000002,
        SceneLoading = 0x00000003,
        EndLoadScene = 0x00000004,
        StartScan = 0x00000005,
        Scan = 0x00000006,
        EndScan = 0x00000007,
        StartUnloadScene = 0x00000008,
        UnloadingScene = 0x00000009,
        EndUnloadScene = 0x0000000a,
        WriteOutput = 0x0000000b,
        NextScene = 0x0000000c,
        Done = 0x0000000d,
    };

    struct HierarchyTestBulkTool_State__Enum__Boxed {
        struct HierarchyTestBulkTool_State__Enum__Class* klass;
        MonitorData* monitor;
        HierarchyTestBulkTool_State__Enum value;
    };

    struct HierarchyTestBulkTool__Fields {
        struct MonoBehaviour__Fields _;
        struct Queue_1_RuntimeSceneMetaData_* m_queue;
        int32_t m_maxObjectsToScan;
        struct HierarchyTestBulkToolData* m_data;
        struct HierarchyTestBulkOutput* m_output;
        struct HierarchyTester* m_currentTester;
        struct RuntimeSceneMetaData* m_currentScene;
        HierarchyTestBulkTool_State__Enum m_currentState;

        float m_currentStateTime;
        float m_currentStateTimeNoLoading;
        struct PreparationTask* m_preparationTask;
        struct FinishTask* m_finishTask;
        float m_sceneLoadingGraceTime;
        struct String* m_emptyTestSceneName;
    };

    struct HierarchyTestBulkTool {
        struct HierarchyTestBulkTool__Class* klass;
        MonitorData* monitor;
        struct HierarchyTestBulkTool__Fields fields;
    };

    struct __declspec(align(8)) Queue_1_RuntimeSceneMetaData___Fields {
        struct RuntimeSceneMetaData__Array* _array;
        int32_t _head;
        int32_t _tail;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct Queue_1_RuntimeSceneMetaData_ {
        struct Queue_1_RuntimeSceneMetaData___Class* klass;
        MonitorData* monitor;
        struct Queue_1_RuntimeSceneMetaData___Fields fields;
    };

    enum class HierarchyTester_State__Enum : int32_t {
        Idle = 0x00000000,
        GettingReady = 0x00000001,
        Processing = 0x00000002,
        Done = 0x00000003,
    };

    struct HierarchyTester_State__Enum__Boxed {
        struct HierarchyTester_State__Enum__Class* klass;
        MonitorData* monitor;
        HierarchyTester_State__Enum value;
    };

    struct HierarchyTester__Fields {
        struct MonoBehaviour__Fields _;
        struct Action* OnStarted;
        struct Action* OnFinished;
        HierarchyTester_State__Enum m_currentState;

        struct PreparationTask* m_preparationTask;
        struct FinishTask* m_finishTask;
        struct CompositeTask* m_prepareSamplesTask;
        struct CompositeTask* m_processingTask;
        struct IProfilingDataProvider* m_dataProvider;
        struct SceneRoot* m_currentSceneRoot;
        int32_t m_maxObjectsToScan;
        struct GameObject* m_rootGameObject;
        struct List_1_UnityEngine_Vector3_* m_cameraSamplePoints;
        struct SceneTestData* m_dataModel;
        struct HierarchyTestOutput* m_output;
        bool m_usePrepareAndFinishTasks;
        float m_scanningStartTime;
        int32_t m_scannedObjects;
        float m_progress;
        float _EstimateTime_k__BackingField;
        int32_t m_objectsCount;
    };

    struct HierarchyTester {
        struct HierarchyTester__Class* klass;
        MonitorData* monitor;
        struct HierarchyTester__Fields fields;
    };

    enum class TaskState__Enum : int32_t {
        NotStarted = 0x00000000,
        InProgress = 0x00000001,
        Finished = 0x00000002,
    };

    struct TaskState__Enum__Boxed {
        struct TaskState__Enum__Class* klass;
        MonitorData* monitor;
        TaskState__Enum value;
    };

    struct __declspec(align(8)) SimpleTask__Fields {
        TaskState__Enum m_state;

        struct IOptimizationTask* m_nextTask;
    };

    struct SimpleTask {
        struct SimpleTask__Class* klass;
        MonitorData* monitor;
        struct SimpleTask__Fields fields;
    };

    struct PreparationTask__Fields {
        struct SimpleTask__Fields _;
        int32_t m_framesForDelay;
        bool m_suspended;
    };

    struct PreparationTask {
        struct PreparationTask__Class* klass;
        MonitorData* monitor;
        struct PreparationTask__Fields fields;
    };

    struct IOptimizationTask {
        struct IOptimizationTask__Class* klass;
        MonitorData* monitor;
    };

    struct FinishTask__Fields {
        struct SimpleTask__Fields _;
        bool m_resumed;
    };

    struct FinishTask {
        struct FinishTask__Class* klass;
        MonitorData* monitor;
        struct FinishTask__Fields fields;
    };

    struct CompositeTask__Fields {
        struct SimpleTask__Fields _;
        struct Queue_1_Moon_ArtOptimization_IOptimizationTask_* m_subTasks;
        struct IOptimizationTask* m_currentTask;
        struct IOptimizationTask* m_lastEnqueuedTask;
    };

    struct CompositeTask {
        struct CompositeTask__Class* klass;
        MonitorData* monitor;
        struct CompositeTask__Fields fields;
    };

    struct __declspec(align(8)) Queue_1_Moon_ArtOptimization_IOptimizationTask___Fields {
        struct IOptimizationTask__Array* _array;
        int32_t _head;
        int32_t _tail;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct Queue_1_Moon_ArtOptimization_IOptimizationTask_ {
        struct Queue_1_Moon_ArtOptimization_IOptimizationTask___Class* klass;
        MonitorData* monitor;
        struct Queue_1_Moon_ArtOptimization_IOptimizationTask___Fields fields;
    };

    struct IOptimizationTask__Array {
        struct IOptimizationTask__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IOptimizationTask* vector[32];
    };

    struct IEnumerator_1_Moon_ArtOptimization_IOptimizationTask_ {
        struct IEnumerator_1_Moon_ArtOptimization_IOptimizationTask___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) HierarchyTestOutputBase_1_SceneTestData___Fields {
        struct SceneTestData* m_data;
        struct HierarchyPerformanceTester_Old_HPerfTestResultComparer* m_comparer;
        struct String* m_lastSavedPath;
    };

    struct HierarchyTestOutputBase_1_SceneTestData_ {
        struct HierarchyTestOutputBase_1_SceneTestData___Class* klass;
        MonitorData* monitor;
        struct HierarchyTestOutputBase_1_SceneTestData___Fields fields;
    };

    struct HierarchyTestOutput__Fields {
        struct HierarchyTestOutputBase_1_SceneTestData___Fields _;
        struct HierarchyTestResultAggregator* m_aggregator;
    };

    struct HierarchyTestOutput {
        struct HierarchyTestOutput__Class* klass;
        MonitorData* monitor;
        struct HierarchyTestOutput__Fields fields;
    };

    struct Queue_1_RuntimeSceneMetaData___VTable {
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

    struct Queue_1_RuntimeSceneMetaData___StaticFields {
    };

    struct Queue_1_RuntimeSceneMetaData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Queue_1_RuntimeSceneMetaData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Queue_1_RuntimeSceneMetaData___VTable vtable;
    };

    struct HierarchyTester_State__Enum__VTable {
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

    struct HierarchyTester_State__Enum__StaticFields {
    };

    struct HierarchyTester_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HierarchyTester_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HierarchyTester_State__Enum__VTable vtable;
    };

    struct TaskState__Enum__VTable {
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

    struct TaskState__Enum__StaticFields {
    };

    struct TaskState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TaskState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TaskState__Enum__VTable vtable;
    };

    struct IOptimizationTask__VTable {
        VirtualInvokeData get_IsFinished;
        VirtualInvokeData get_State;
        VirtualInvokeData SetNext;
        VirtualInvokeData Update;
        VirtualInvokeData OnEnterContext;
    };

    struct IOptimizationTask__StaticFields {
    };

    struct IOptimizationTask__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IOptimizationTask__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IOptimizationTask__VTable vtable;
    };

    struct SimpleTask__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_IsFinished;
        VirtualInvokeData get_State;
        VirtualInvokeData SetNext;
        VirtualInvokeData Update;
        VirtualInvokeData OnEnterContext;
        VirtualInvokeData Update_1;
        VirtualInvokeData OnEnterContext_1;
    };

    struct SimpleTask__StaticFields {
    };

    struct SimpleTask__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SimpleTask__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SimpleTask__VTable vtable;
    };

    struct PreparationTask__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_IsFinished;
        VirtualInvokeData get_State;
        VirtualInvokeData SetNext;
        VirtualInvokeData Update;
        VirtualInvokeData OnEnterContext;
        VirtualInvokeData Update_1;
        VirtualInvokeData OnEnterContext_1;
    };

    struct PreparationTask__StaticFields {
        bool s_debugImmortalMode;
        bool s_immortal;
        float s_gravityStrength;
        int32_t s_maxDRSDownscale;
        int32_t s_maxDRSDownscaleY;
        RenderScope__Enum s_allowInterleaved;

        struct HashSet_1_Moon_ISuspendable_* SuspendablesToIgnoreForGameplay;
    };

    struct PreparationTask__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PreparationTask__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PreparationTask__VTable vtable;
    };

    struct FinishTask__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_IsFinished;
        VirtualInvokeData get_State;
        VirtualInvokeData SetNext;
        VirtualInvokeData Update;
        VirtualInvokeData OnEnterContext;
        VirtualInvokeData Update_1;
        VirtualInvokeData OnEnterContext_1;
    };

    struct FinishTask__StaticFields {
    };

    struct FinishTask__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FinishTask__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FinishTask__VTable vtable;
    };

    struct IOptimizationTask__Array__VTable {
    };

    struct IOptimizationTask__Array__StaticFields {
    };

    struct IOptimizationTask__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IOptimizationTask__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IOptimizationTask__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_ArtOptimization_IOptimizationTask___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_ArtOptimization_IOptimizationTask___StaticFields {
    };

    struct IEnumerator_1_Moon_ArtOptimization_IOptimizationTask___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_ArtOptimization_IOptimizationTask___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_ArtOptimization_IOptimizationTask___VTable vtable;
    };

    struct Queue_1_Moon_ArtOptimization_IOptimizationTask___VTable {
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

} // namespace app
