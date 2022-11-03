namespace app {
    struct FramePerformanceMonitor_PerformanceFrameData_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FramePerformanceMonitor_PerformanceFrameData_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FramePerformanceMonitor_PerformanceFrameData_c__VTable vtable;
    };

    struct FramePerformanceMonitor_PerformanceEntry_c {
        struct FramePerformanceMonitor_PerformanceEntry_c__Class* klass;
        MonitorData* monitor;
    };

    struct FramePerformanceMonitor_PerformanceEntry_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FramePerformanceMonitor_PerformanceEntry_c__StaticFields {
        struct FramePerformanceMonitor_PerformanceEntry_c* __9;
        struct Comparison_1_FramePerformanceMonitor_PerformanceEntry_* __9__5_0;
    };

    struct FramePerformanceMonitor_PerformanceEntry_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FramePerformanceMonitor_PerformanceEntry_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FramePerformanceMonitor_PerformanceEntry_c__VTable vtable;
    };

    struct GameDVRPerformanceMonitor__Fields {
        struct MonoBehaviour__Fields _;
        int32_t m_frameCount;
        float m_lastTime;
        float m_lastRecordedTime;
        float m_previousFrameTime;
    };

    struct GameDVRPerformanceMonitor {
        struct GameDVRPerformanceMonitor__Class* klass;
        MonitorData* monitor;
        struct GameDVRPerformanceMonitor__Fields fields;
    };

    struct GameDVRPerformanceMonitor__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GameDVRPerformanceMonitor__StaticFields {
        struct GameDVRPerformanceMonitor* m_instance;
    };

    struct GameDVRPerformanceMonitor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameDVRPerformanceMonitor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameDVRPerformanceMonitor__VTable vtable;
    };

    struct __declspec(align(8)) OutputWriter__Fields {
        struct StreamWriter* m_streamWriter;
        struct String* m_outputFolder;
        struct String* m_fullPath;
    };

    struct OutputWriter {
        struct OutputWriter__Class* klass;
        MonitorData* monitor;
        struct OutputWriter__Fields fields;
    };

    struct OutputWriter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OutputWriter__StaticFields {
    };

    struct OutputWriter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OutputWriter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OutputWriter__VTable vtable;
    };

    struct PerformanceMonitor__Fields {
        struct MonoBehaviour__Fields _;
        struct FPSMonitor* FPSMonitor;
        struct FPSTestResult* m_fpsTestResult;
        struct FPSSampleData* m_fpsSampleData;
        struct DateTime m_testTime;
        float m_performanceDipTimeout;
        struct List_1_FPSTestResult_* TestResults;
    };

    struct PerformanceMonitor {
        struct PerformanceMonitor__Class* klass;
        MonitorData* monitor;
        struct PerformanceMonitor__Fields fields;
    };

    struct FPSMonitor__Fields {
        struct MonoBehaviour__Fields _;
        struct DroppedFrameMonitor* m_DroppedFrameMonitor;
        float m_renderedFrames;
        float m_lastTime;
        float m_currentSampleTime;
        float m_currentMaxFrameTime;
        float m_currentMinFrameTime;
        float m_frameTime;
        int32_t AverageFPS;
        int32_t MinimumFPS;
        int32_t MaximumFPS;
        float AverageFrameTime;
        float MinFrameTime;
        float MaxFrameTime;
        int32_t m_frameIndex;
        struct FPSMonitor_FrameTimingData__Array* m_frameHistory;
        float m_deltaTimeAverage;
        float m_hitchDeltaTimeAverage;
        float m_slowDownDeltaTimeAverage;
        int32_t m_hitchCount;
        int32_t m_slowdownCount;
        int32_t m_frameCount;
        int32_t m_badFrameCount;
    };

    struct FPSMonitor {
        struct FPSMonitor__Class* klass;
        MonitorData* monitor;
        struct FPSMonitor__Fields fields;
    };

    struct __declspec(align(8)) DroppedFrameMonitor__Fields {
        int32_t DangerFrames;
        int32_t DroppedFrames_Single;
        int32_t DroppedFrames_Double;
        int32_t DroppedFrames_Triple;
        int32_t DroppedFrames_Multiple;
        int32_t m_dangerFrames;
        int32_t m_droppedFramesSingle;
        int32_t m_droppedFramesDouble;
        int32_t m_droppedFramesTriple;
        int32_t m_droppedFramesMultiple;
        float m_lastUpdateTime;
        struct List_1_DroppedFrameMonitor_TempData_* TempFrameData;
        int32_t m_index;
    };

    struct DroppedFrameMonitor {
        struct DroppedFrameMonitor__Class* klass;
        MonitorData* monitor;
        struct DroppedFrameMonitor__Fields fields;
    };

    struct __declspec(align(8)) List_1_DroppedFrameMonitor_TempData___Fields {
        struct DroppedFrameMonitor_TempData__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_DroppedFrameMonitor_TempData_ {
        struct List_1_DroppedFrameMonitor_TempData___Class* klass;
        MonitorData* monitor;
        struct List_1_DroppedFrameMonitor_TempData___Fields fields;
    };

    enum class DroppedFrameMonitor_FrameState__Enum : int32_t {
        Good = 0x00000000,
        Danger = 0x00000001,
        Single = 0x00000002,
        Double = 0x00000003,
        Triple = 0x00000004,
        Multiple = 0x00000005,
    };

    struct DroppedFrameMonitor_FrameState__Enum__Boxed {
        struct DroppedFrameMonitor_FrameState__Enum__Class* klass;
        MonitorData* monitor;
        DroppedFrameMonitor_FrameState__Enum value;
    };

    struct __declspec(align(8)) DroppedFrameMonitor_TempData__Fields {
        float Time;
        DroppedFrameMonitor_FrameState__Enum State;
    };

    struct DroppedFrameMonitor_TempData {
        struct DroppedFrameMonitor_TempData__Class* klass;
        MonitorData* monitor;
        struct DroppedFrameMonitor_TempData__Fields fields;
    };

    struct DroppedFrameMonitor_TempData__Array {
        struct DroppedFrameMonitor_TempData__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct DroppedFrameMonitor_TempData* vector[32];
    };

    struct IEnumerator_1_DroppedFrameMonitor_TempData_ {
        struct IEnumerator_1_DroppedFrameMonitor_TempData___Class* klass;
        MonitorData* monitor;
    };

    enum class FPSMonitor_FrameType__Enum : int32_t {
        Ok = 0x00000000,
        Danger = 0x00000001,
        Bad = 0x00000002,
        Terrible = 0x00000003,
    };

    struct FPSMonitor_FrameType__Enum__Boxed {
        struct FPSMonitor_FrameType__Enum__Class* klass;
        MonitorData* monitor;
        FPSMonitor_FrameType__Enum value;
    };

    struct __declspec(align(8)) FPSMonitor_FrameTimingData__Fields {
        float DeltaTime;
        FPSMonitor_FrameType__Enum Hitch;

        FPSMonitor_FrameType__Enum Slowdown;
    };

    struct FPSMonitor_FrameTimingData {
        struct FPSMonitor_FrameTimingData__Class* klass;
        MonitorData* monitor;
        struct FPSMonitor_FrameTimingData__Fields fields;
    };

    struct FPSMonitor_FrameTimingData__Array {
        struct FPSMonitor_FrameTimingData__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct FPSMonitor_FrameTimingData* vector[32];
    };

    struct __declspec(align(8)) FPSTestResult__Fields {
        struct String* SceneName;
        float SceneLoadTime;
        float SceneUnloadTime;
        struct DateTime DateTime;
        int32_t ActiveScenes;
        int32_t LoadedScenes;
        int32_t DisabledScenes;
        int32_t DisablingScenes;
        int32_t LoadingScenes;
        int32_t LoadingCancelledScenes;
        struct List_1_FPSSampleData_* SampleList;
        float ActivationTime;
        float DeactivationTime;
    };

    struct FPSTestResult {
        struct FPSTestResult__Class* klass;
        MonitorData* monitor;
        struct FPSTestResult__Fields fields;
    };

    struct __declspec(align(8)) List_1_FPSSampleData___Fields {
        struct FPSSampleData__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_FPSSampleData_ {
        struct List_1_FPSSampleData___Class* klass;
        MonitorData* monitor;
        struct List_1_FPSSampleData___Fields fields;
    };

    struct MoonProfilerSample {
        float count;
        float time;
    };

    struct MoonProfilerSample__Boxed {
        struct MoonProfilerSample__Class* klass;
        MonitorData* monitor;
        struct MoonProfilerSample fields;
    };

    struct MoonRenderPipelineView_SrpProfilerSample {
        float userTime;
        float engineTime;
    };

    struct MoonRenderPipelineView_SrpProfilerSample__Boxed {
        struct MoonRenderPipelineView_SrpProfilerSample__Class* klass;
        MonitorData* monitor;
        struct MoonRenderPipelineView_SrpProfilerSample fields;
    };

    struct MoonRenderPipelineView_SrpProfilerFrame {
        struct MoonRenderPipelineView_SrpProfilerSample totalTime;
        float prepareTime;
        struct MoonRenderPipelineView_SrpProfilerSample drawSlicesTime;
        float postsAndUiTime;
        struct MoonRenderPipelineView_SrpProfilerFrame_Slice__Array* slices;
        struct MoonProfilerSample cull;
        struct MoonRenderPipelineView_SrpProfilerSample rtManagement;
        struct MoonProfilerSample rtAcquire;
        struct MoonProfilerSample rtAcquireInternal;
        struct MoonProfilerSample rtAcquireInternalGPU;
        struct MoonProfilerSample rtRelease;
        struct MoonProfilerSample rtReleaseInternal;
        struct MoonProfilerSample rtReleaseInternalGPU;
    };

    struct MoonRenderPipelineView_SrpProfilerFrame__Boxed {
        struct MoonRenderPipelineView_SrpProfilerFrame__Class* klass;
        MonitorData* monitor;
        struct MoonRenderPipelineView_SrpProfilerFrame fields;
    };

    struct MoonProfilerFrame {
        float cpuTime;
        float gpuTime;
        float frameTime;
        struct MoonProfilerSample fixedUpdate;
        struct MoonProfilerSample update;
        struct MoonProfilerSample lateUpdate;
        struct MoonProfilerSample coroutines;
        struct MoonProfilerSample physicsFixedUpdate;
        float gameplayTime;
        struct MoonRenderPipelineView_SrpProfilerFrame srp;
    };

    struct MoonProfilerFrame__Boxed {
        struct MoonProfilerFrame__Class* klass;
        MonitorData* monitor;
        struct MoonProfilerFrame fields;
    };

    struct __declspec(align(8)) FPSSampleData__Fields {
        struct String* SampleID;
        int32_t AverageFPS;
        int32_t MinimumFPS;
        float AverageFrameTime;
        float MinFrameTime;
        int32_t CPUAverageFPS;
        int32_t CPUMinimumFPS;
        int32_t CPUBAverageFPS;
        int32_t CPUBMinimumFPS;
        float CPUBAverageFrameTime;
        float CPUBMinFrameTime;
        float TotalMemory;
        float TextureMemory;
        float AudioMemory;
        struct Vector3 SamplePosition;
        struct MoonProfilerFrame FrameData;
        int32_t DangerFrames;
        int32_t DroppedFrames_Single;
        int32_t DroppedFrames_Double;
        int32_t DroppedFrames_Triple;
        int32_t DroppedFrames_Multiple;
        struct MicroProfiler_SampleStats* MicroProfilerStats;
        int32_t ExceptionsCount;
        struct String* ExceptionMessages;
        int32_t HitchCount;
        int32_t SlowdownCount;
        int32_t Health;
    };

    struct FPSSampleData {
        struct FPSSampleData__Class* klass;
        MonitorData* monitor;
        struct FPSSampleData__Fields fields;
    };

    struct MoonRenderPipelineView_SrpProfilerFrame_Slice {
        struct MoonRenderPipelineView_SrpProfilerSample draw;
        float blurAmount;
        float downsampling;
        struct Int2 rtSize;
    };

    struct MoonRenderPipelineView_SrpProfilerFrame_Slice__Boxed {
        struct MoonRenderPipelineView_SrpProfilerFrame_Slice__Class* klass;
        MonitorData* monitor;
        struct MoonRenderPipelineView_SrpProfilerFrame_Slice fields;
    };

    struct MoonRenderPipelineView_SrpProfilerFrame_Slice__Array {
        struct MoonRenderPipelineView_SrpProfilerFrame_Slice__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MoonRenderPipelineView_SrpProfilerFrame_Slice vector[32];
    };

    struct FPSSampleData__Array {
        struct FPSSampleData__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct FPSSampleData* vector[32];
    };

    struct IEnumerator_1_FPSSampleData_ {
        struct IEnumerator_1_FPSSampleData___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_FPSTestResult___Fields {
        struct FPSTestResult__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_FPSTestResult_ {
        struct List_1_FPSTestResult___Class* klass;
        MonitorData* monitor;
        struct List_1_FPSTestResult___Fields fields;
    };

    struct FPSTestResult__Array {
        struct FPSTestResult__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct FPSTestResult* vector[32];
    };

    struct IEnumerator_1_FPSTestResult_ {
        struct IEnumerator_1_FPSTestResult___Class* klass;
        MonitorData* monitor;
    };

    struct DroppedFrameMonitor_FrameState__Enum__VTable {
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

    struct DroppedFrameMonitor_FrameState__Enum__StaticFields {
    };

    struct DroppedFrameMonitor_FrameState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DroppedFrameMonitor_FrameState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DroppedFrameMonitor_FrameState__Enum__VTable vtable;
    };

    struct DroppedFrameMonitor_TempData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DroppedFrameMonitor_TempData__StaticFields {
    };

    struct DroppedFrameMonitor_TempData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DroppedFrameMonitor_TempData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DroppedFrameMonitor_TempData__VTable vtable;
    };

    struct DroppedFrameMonitor_TempData__Array__VTable {
    };

    struct DroppedFrameMonitor_TempData__Array__StaticFields {
    };

    struct DroppedFrameMonitor_TempData__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DroppedFrameMonitor_TempData__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DroppedFrameMonitor_TempData__Array__VTable vtable;
    };

    struct IEnumerator_1_DroppedFrameMonitor_TempData___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_DroppedFrameMonitor_TempData___StaticFields {
    };

    struct IEnumerator_1_DroppedFrameMonitor_TempData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_DroppedFrameMonitor_TempData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_DroppedFrameMonitor_TempData___VTable vtable;
    };

    struct List_1_DroppedFrameMonitor_TempData___VTable {
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

    struct List_1_DroppedFrameMonitor_TempData___StaticFields {
        struct DroppedFrameMonitor_TempData__Array* _emptyArray;
    };

    struct List_1_DroppedFrameMonitor_TempData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_DroppedFrameMonitor_TempData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_DroppedFrameMonitor_TempData___VTable vtable;
    };

    struct DroppedFrameMonitor__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DroppedFrameMonitor__StaticFields {
        bool DEBUG_ENABLED;
    };

    struct DroppedFrameMonitor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DroppedFrameMonitor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DroppedFrameMonitor__VTable vtable;
    };

    struct FPSMonitor_FrameType__Enum__VTable {
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

    struct FPSMonitor_FrameType__Enum__StaticFields {
    };

    struct FPSMonitor_FrameType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FPSMonitor_FrameType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FPSMonitor_FrameType__Enum__VTable vtable;
    };

    struct FPSMonitor_FrameTimingData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FPSMonitor_FrameTimingData__StaticFields {
    };

    struct FPSMonitor_FrameTimingData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FPSMonitor_FrameTimingData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FPSMonitor_FrameTimingData__VTable vtable;
    };

    struct FPSMonitor_FrameTimingData__Array__VTable {
    };

    struct FPSMonitor_FrameTimingData__Array__StaticFields {
    };

    struct FPSMonitor_FrameTimingData__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FPSMonitor_FrameTimingData__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FPSMonitor_FrameTimingData__Array__VTable vtable;
    };

    struct FPSMonitor__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FPSMonitor__StaticFields {
        struct FPSMonitor* Instance;
        struct Color m_terribleColor;
        struct Color m_badColor;
        struct Color m_goodColor;
        struct Color m_mediumStartColor;
        struct Color m_mediumEndColor;
        int32_t m_terribleHealthMax;
        int32_t m_badHealthMax;
        int32_t m_mediumHealthMax;
        int32_t m_perfectDRSMin;
        int32_t m_mediumDRSMin;
        int32_t m_badDRSMin;
        int32_t m_terribleDRSMin;
        float m_terribleGPUTimeMin;
        float m_terribleGPUTimeMax;
    };

    struct FPSMonitor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FPSMonitor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FPSMonitor__VTable vtable;
    };

    struct MoonProfilerSample__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MoonProfilerSample__StaticFields {
    };

    struct MoonProfilerSample__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonProfilerSample__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonProfilerSample__VTable vtable;
    };

    struct MoonRenderPipelineView_SrpProfilerSample__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MoonRenderPipelineView_SrpProfilerSample__StaticFields {
    };

    struct MoonRenderPipelineView_SrpProfilerSample__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonRenderPipelineView_SrpProfilerSample__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonRenderPipelineView_SrpProfilerSample__VTable vtable;
    };

    struct MoonRenderPipelineView_SrpProfilerFrame_Slice__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MoonRenderPipelineView_SrpProfilerFrame_Slice__StaticFields {
    };

    struct MoonRenderPipelineView_SrpProfilerFrame_Slice__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonRenderPipelineView_SrpProfilerFrame_Slice__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonRenderPipelineView_SrpProfilerFrame_Slice__VTable vtable;
    };

    struct MoonRenderPipelineView_SrpProfilerFrame_Slice__Array__VTable {
    };

    struct MoonRenderPipelineView_SrpProfilerFrame_Slice__Array__StaticFields {
    };

    struct MoonRenderPipelineView_SrpProfilerFrame_Slice__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonRenderPipelineView_SrpProfilerFrame_Slice__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonRenderPipelineView_SrpProfilerFrame_Slice__Array__VTable vtable;
    };

    struct MoonRenderPipelineView_SrpProfilerFrame__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MoonRenderPipelineView_SrpProfilerFrame__StaticFields {
    };

    struct MoonRenderPipelineView_SrpProfilerFrame__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonRenderPipelineView_SrpProfilerFrame__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonRenderPipelineView_SrpProfilerFrame__VTable vtable;
    };

    struct MoonProfilerFrame__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MoonProfilerFrame__StaticFields {
    };

    struct MoonProfilerFrame__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonProfilerFrame__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonProfilerFrame__VTable vtable;
    };

    struct FPSSampleData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FPSSampleData__StaticFields {
    };

    struct FPSSampleData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FPSSampleData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FPSSampleData__VTable vtable;
    };

    struct FPSSampleData__Array__VTable {
    };

    struct FPSSampleData__Array__StaticFields {
    };

    struct FPSSampleData__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FPSSampleData__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FPSSampleData__Array__VTable vtable;
    };

    struct IEnumerator_1_FPSSampleData___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_FPSSampleData___StaticFields {
    };

    struct IEnumerator_1_FPSSampleData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_FPSSampleData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_FPSSampleData___VTable vtable;
    };

    struct List_1_FPSSampleData___VTable {
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

    struct List_1_FPSSampleData___StaticFields {
        struct FPSSampleData__Array* _emptyArray;
    };

    struct List_1_FPSSampleData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_FPSSampleData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_FPSSampleData___VTable vtable;
    };

    struct FPSTestResult__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FPSTestResult__StaticFields {
    };

    struct FPSTestResult__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FPSTestResult__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FPSTestResult__VTable vtable;
    };

    struct FPSTestResult__Array__VTable {
    };

    struct FPSTestResult__Array__StaticFields {
    };

    struct FPSTestResult__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FPSTestResult__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FPSTestResult__Array__VTable vtable;
    };

    struct IEnumerator_1_FPSTestResult___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_FPSTestResult___StaticFields {
    };

    struct IEnumerator_1_FPSTestResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_FPSTestResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_FPSTestResult___VTable vtable;
    };

    struct List_1_FPSTestResult___VTable {
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
