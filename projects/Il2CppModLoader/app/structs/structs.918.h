namespace app {
    struct List_1_FPSTestResult___StaticFields {
        struct FPSTestResult__Array* _emptyArray;
    };

    struct List_1_FPSTestResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_FPSTestResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_FPSTestResult___VTable vtable;
    };

    struct PerformanceMonitor__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PerformanceMonitor__StaticFields {
        struct PerformanceMonitor* Instance;
        bool DebugMode;
        struct Action* OnGoodPerformance;
        struct Action* OnNotMonitoringPerformance;
        bool Enabled;
    };

    struct PerformanceMonitor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PerformanceMonitor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PerformanceMonitor__VTable vtable;
    };

    struct FPSSampleData___VTable {
    };

    struct FPSSampleData___StaticFields {
    };

    struct FPSSampleData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FPSSampleData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FPSSampleData___VTable vtable;
    };

    struct PerformanceMonitor_c {
        struct PerformanceMonitor_c__Class* klass;
        MonitorData* monitor;
    };

    struct Func_2_SceneManagerScene_Boolean___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_SceneManagerScene_Boolean_ {
        struct Func_2_SceneManagerScene_Boolean___Class* klass;
        MonitorData* monitor;
        struct Func_2_SceneManagerScene_Boolean___Fields fields;
    };

    struct Func_2_SceneManagerScene_Boolean___VTable {
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

    struct Func_2_SceneManagerScene_Boolean___StaticFields {
    };

    struct Func_2_SceneManagerScene_Boolean___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_2_SceneManagerScene_Boolean___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_2_SceneManagerScene_Boolean___VTable vtable;
    };

    struct PerformanceMonitor_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PerformanceMonitor_c__StaticFields {
        struct PerformanceMonitor_c* __9;
        struct Func_2_SceneManagerScene_Boolean_* __9__14_0;
    };

    struct PerformanceMonitor_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PerformanceMonitor_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PerformanceMonitor_c__VTable vtable;
    };

    enum class PerformanceTestManager_State__Enum : int32_t {
        Start = 0x00000000,
        RegularTest = 0x00000001,
        QuadScale = 0x00000002,
        NoCamera = 0x00000003,
        FinishedTest = 0x00000004,
        Done = 0x00000005,
    };

    struct PerformanceTestManager_State__Enum__Boxed {
        struct PerformanceTestManager_State__Enum__Class* klass;
        MonitorData* monitor;
        PerformanceTestManager_State__Enum value;
    };

    struct PerformanceTestManager__Fields {
        struct MonoBehaviour__Fields _;
        struct FPSTestOutput* m_fpsTestOutput;
        float m_stateCurrentTime;
        PerformanceTestManager_State__Enum CurrentState;
    };

    struct PerformanceTestManager {
        struct PerformanceTestManager__Class* klass;
        MonitorData* monitor;
        struct PerformanceTestManager__Fields fields;
    };

    struct __declspec(align(8)) FPSTestOutput__Fields {
        struct StreamWriter* m_streamWriter;
        struct String* m_outputFolder;
    };

    struct FPSTestOutput {
        struct FPSTestOutput__Class* klass;
        MonitorData* monitor;
        struct FPSTestOutput__Fields fields;
    };

    enum class FPSTestFields_Scope__Enum : int32_t {
        OriDE = 0x00000001,
        Wisps = 0x00000002,
        All = 0x00000003,
    };

    struct FPSTestFields_Scope__Enum__Boxed {
        struct FPSTestFields_Scope__Enum__Class* klass;
        MonitorData* monitor;
        FPSTestFields_Scope__Enum value;
    };

    struct FPSTestFields_Scope__Enum__VTable {
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

    struct FPSTestFields_Scope__Enum__StaticFields {
    };

    struct FPSTestFields_Scope__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FPSTestFields_Scope__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FPSTestFields_Scope__Enum__VTable vtable;
    };

    struct FPSTestOutput__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FPSTestOutput__StaticFields {
        struct String* FILE_END_STRING;
    };

    struct FPSTestOutput__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FPSTestOutput__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FPSTestOutput__VTable vtable;
    };

    struct PerformanceTestManager_State__Enum__VTable {
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

    struct PerformanceTestManager_State__Enum__StaticFields {
    };

    struct PerformanceTestManager_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PerformanceTestManager_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PerformanceTestManager_State__Enum__VTable vtable;
    };

    struct PerformanceTestManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PerformanceTestManager__StaticFields {
        struct PerformanceTestManager* Instance;
        bool DebugMode;
    };

    struct PerformanceTestManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PerformanceTestManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PerformanceTestManager__VTable vtable;
    };

    struct SceneFrameworkPerformanceMonitor__Fields {
        struct MonoBehaviour__Fields _;
        struct StreamWriter* m_streamWriter;
        struct List_1_System_String_* m_lines;
    };

    struct SceneFrameworkPerformanceMonitor {
        struct SceneFrameworkPerformanceMonitor__Class* klass;
        MonitorData* monitor;
        struct SceneFrameworkPerformanceMonitor__Fields fields;
    };

    struct SceneFrameworkPerformanceMonitor__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SceneFrameworkPerformanceMonitor__StaticFields {
        struct SceneFrameworkPerformanceMonitor* m_instance;
    };

    struct SceneFrameworkPerformanceMonitor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SceneFrameworkPerformanceMonitor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SceneFrameworkPerformanceMonitor__VTable vtable;
    };

    struct __declspec(align(8)) Test__Fields {
        struct String* TestFilePath;
    };

    struct Test {
        struct Test__Class* klass;
        MonitorData* monitor;
        struct Test__Fields fields;
    };

    struct Test__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Test__StaticFields {
    };

    struct Test__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Test__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Test__VTable vtable;
    };

    struct __declspec(align(8)) TestReporter__Fields {
        struct String* m_reportPath;
    };

    struct TestReporter {
        struct TestReporter__Class* klass;
        MonitorData* monitor;
        struct TestReporter__Fields fields;
    };

    struct TestReporter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TestReporter__StaticFields {
    };

    struct TestReporter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TestReporter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TestReporter__VTable vtable;
    };

    struct __declspec(align(8)) TestSet__Fields {
        struct String* TestSetFolderPath;
        struct List_1_Test_* Tests;
        struct TestSetConfiguration* TestSetConfiguration;
        struct String* OutputFolderPath;
        struct LogCallbackHandler* m_logCallbackHandler;
        int32_t m_testIndex;
    };

    struct TestSet {
        struct TestSet__Class* klass;
        MonitorData* monitor;
        struct TestSet__Fields fields;
    };

    struct __declspec(align(8)) List_1_Test___Fields {
        struct Test__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Test_ {
        struct List_1_Test___Class* klass;
        MonitorData* monitor;
        struct List_1_Test___Fields fields;
    };

    struct Test__Array {
        struct Test__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Test* vector[32];
    };

    struct IEnumerator_1_Test_ {
        struct IEnumerator_1_Test___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) TestSetConfiguration__Fields {
        struct String* FirstTestSetSceneName;
    };

    struct TestSetConfiguration {
        struct TestSetConfiguration__Class* klass;
        MonitorData* monitor;
        struct TestSetConfiguration__Fields fields;
    };

    struct Test__Array__VTable {
    };

    struct Test__Array__StaticFields {
    };

    struct Test__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Test__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Test__Array__VTable vtable;
    };

    struct IEnumerator_1_Test___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Test___StaticFields {
    };

    struct IEnumerator_1_Test___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Test___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Test___VTable vtable;
    };

    struct List_1_Test___VTable {
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

    struct List_1_Test___StaticFields {
        struct Test__Array* _emptyArray;
    };

    struct List_1_Test___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Test___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Test___VTable vtable;
    };

    struct TestSetConfiguration__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TestSetConfiguration__StaticFields {
    };

    struct TestSetConfiguration__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TestSetConfiguration__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TestSetConfiguration__VTable vtable;
    };

    struct TestSet__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TestSet__StaticFields {
    };

    struct TestSet__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TestSet__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TestSet__VTable vtable;
    };

    struct TestSet_c {
        struct TestSet_c__Class* klass;
        MonitorData* monitor;
    };

    struct TestSet_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TestSet_c__StaticFields {
        struct TestSet_c* __9;
        struct Func_2_String_Boolean_* __9__16_0;
    };

    struct TestSet_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TestSet_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TestSet_c__VTable vtable;
    };

    struct __declspec(align(8)) TestSet_c_DisplayClass17_0__Fields {
        struct Test* test;
    };

    struct TestSet_c_DisplayClass17_0 {
        struct TestSet_c_DisplayClass17_0__Class* klass;
        MonitorData* monitor;
        struct TestSet_c_DisplayClass17_0__Fields fields;
    };

    struct TestSet_c_DisplayClass17_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TestSet_c_DisplayClass17_0__StaticFields {
    };

    struct TestSet_c_DisplayClass17_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TestSet_c_DisplayClass17_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TestSet_c_DisplayClass17_0__VTable vtable;
    };

    struct TestSetManager__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct TestSetManager {
        struct TestSetManager__Class* klass;
        MonitorData* monitor;
        struct TestSetManager__Fields fields;
    };

    struct __declspec(align(8)) List_1_TestSet___Fields {
        struct TestSet__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_TestSet_ {
        struct List_1_TestSet___Class* klass;
        MonitorData* monitor;
        struct List_1_TestSet___Fields fields;
    };

    struct TestSet__Array {
        struct TestSet__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct TestSet* vector[32];
    };

    struct IEnumerator_1_TestSet_ {
        struct IEnumerator_1_TestSet___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) JUnitReporter_TestSuite__Fields {
        struct String* m_id;
        struct String* m_name;
        struct TimeSpan m_timeSpan;
        struct List_1_JUnitReporter_TestCase_* m_testCases;
        int32_t m_numberOfTestCasesWrittenToOutput;
    };

    struct JUnitReporter_TestSuite {
        struct JUnitReporter_TestSuite__Class* klass;
        MonitorData* monitor;
        struct JUnitReporter_TestSuite__Fields fields;
    };

    struct __declspec(align(8)) List_1_JUnitReporter_TestCase___Fields {
        struct JUnitReporter_TestCase__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_JUnitReporter_TestCase_ {
        struct List_1_JUnitReporter_TestCase___Class* klass;
        MonitorData* monitor;
        struct List_1_JUnitReporter_TestCase___Fields fields;
    };

    struct __declspec(align(8)) JUnitReporter_TestCase__Fields {
        struct String* m_id;
        struct String* m_name;
        struct List_1_JUnitReporter_Failure_* m_failure;
        struct TimeSpan m_timeSpan;
    };

    struct JUnitReporter_TestCase {
        struct JUnitReporter_TestCase__Class* klass;
        MonitorData* monitor;
        struct JUnitReporter_TestCase__Fields fields;
    };

    struct __declspec(align(8)) List_1_JUnitReporter_Failure___Fields {
        struct JUnitReporter_Failure__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_JUnitReporter_Failure_ {
        struct List_1_JUnitReporter_Failure___Class* klass;
        MonitorData* monitor;
        struct List_1_JUnitReporter_Failure___Fields fields;
    };

    struct __declspec(align(8)) JUnitReporter_Failure__Fields {
        struct String* m_message;
        struct String* m_type;
        struct String* m_detailedMessage;
    };

    struct JUnitReporter_Failure {
        struct JUnitReporter_Failure__Class* klass;
        MonitorData* monitor;
        struct JUnitReporter_Failure__Fields fields;
    };

    struct JUnitReporter_Failure__Array {
        struct JUnitReporter_Failure__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct JUnitReporter_Failure* vector[32];
    };

    struct IEnumerator_1_JUnitReporter_Failure_ {
        struct IEnumerator_1_JUnitReporter_Failure___Class* klass;
        MonitorData* monitor;
    };

    struct JUnitReporter_TestCase__Array {
        struct JUnitReporter_TestCase__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct JUnitReporter_TestCase* vector[32];
    };

    struct IEnumerator_1_JUnitReporter_TestCase_ {
        struct IEnumerator_1_JUnitReporter_TestCase___Class* klass;
        MonitorData* monitor;
    };

    struct TestSet__Array__VTable {
    };

    struct TestSet__Array__StaticFields {
    };

    struct TestSet__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TestSet__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TestSet__Array__VTable vtable;
    };

    struct IEnumerator_1_TestSet___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_TestSet___StaticFields {
    };

    struct IEnumerator_1_TestSet___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_TestSet___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_TestSet___VTable vtable;
    };

    struct List_1_TestSet___VTable {
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

    struct List_1_TestSet___StaticFields {
        struct TestSet__Array* _emptyArray;
    };

    struct List_1_TestSet___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_TestSet___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_TestSet___VTable vtable;
    };

    struct JUnitReporter_Failure__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct JUnitReporter_Failure__StaticFields {
    };

    struct JUnitReporter_Failure__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JUnitReporter_Failure__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JUnitReporter_Failure__VTable vtable;
    };

    struct JUnitReporter_Failure__Array__VTable {
    };

    struct JUnitReporter_Failure__Array__StaticFields {
    };

    struct JUnitReporter_Failure__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JUnitReporter_Failure__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JUnitReporter_Failure__Array__VTable vtable;
    };

    struct IEnumerator_1_JUnitReporter_Failure___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_JUnitReporter_Failure___StaticFields {
    };

    struct IEnumerator_1_JUnitReporter_Failure___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_JUnitReporter_Failure___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_JUnitReporter_Failure___VTable vtable;
    };

    struct List_1_JUnitReporter_Failure___VTable {
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

    struct List_1_JUnitReporter_Failure___StaticFields {
        struct JUnitReporter_Failure__Array* _emptyArray;
    };

    struct List_1_JUnitReporter_Failure___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_JUnitReporter_Failure___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_JUnitReporter_Failure___VTable vtable;
    };

    struct JUnitReporter_TestCase__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct JUnitReporter_TestCase__StaticFields {
    };

    struct JUnitReporter_TestCase__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JUnitReporter_TestCase__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JUnitReporter_TestCase__VTable vtable;
    };

    struct JUnitReporter_TestCase__Array__VTable {
    };

    struct JUnitReporter_TestCase__Array__StaticFields {
    };

    struct JUnitReporter_TestCase__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JUnitReporter_TestCase__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JUnitReporter_TestCase__Array__VTable vtable;
    };

    struct IEnumerator_1_JUnitReporter_TestCase___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_JUnitReporter_TestCase___StaticFields {
    };

    struct IEnumerator_1_JUnitReporter_TestCase___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_JUnitReporter_TestCase___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_JUnitReporter_TestCase___VTable vtable;
    };

    struct List_1_JUnitReporter_TestCase___VTable {
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
