namespace app {
    struct List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfilerReport_ReportSampleEntry___StaticFields {
        struct GPUAutoProfilerReport_ReportSampleEntry__Array* _emptyArray;
    };

    struct List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfilerReport_ReportSampleEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfilerReport_ReportSampleEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfilerReport_ReportSampleEntry___VTable vtable;
    };

    struct GPUAutoProfilerReport_ReportBaselineData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GPUAutoProfilerReport_ReportBaselineData__StaticFields {
    };

    struct GPUAutoProfilerReport_ReportBaselineData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GPUAutoProfilerReport_ReportBaselineData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GPUAutoProfilerReport_ReportBaselineData__VTable vtable;
    };

    struct GPUAutoProfilerReport__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GPUAutoProfilerReport__StaticFields {
    };

    struct GPUAutoProfilerReport__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GPUAutoProfilerReport__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GPUAutoProfilerReport__VTable vtable;
    };

    enum class GPUAutoProfiler_ProfilerState__Enum : int32_t {
        Idle = 0x00000000,
        MeasuringBaseline = 0x00000001,
        MeasuringLightSpeed = 0x00000002,
        MeasuringFTLSpeed = 0x00000003,
        Sampling = 0x00000004,
        Done = 0x00000005,
    };

    struct GPUAutoProfiler_ProfilerState__Enum__Boxed {
        struct GPUAutoProfiler_ProfilerState__Enum__Class* klass;
        MonitorData* monitor;
        GPUAutoProfiler_ProfilerState__Enum value;
    };

    struct GPUAutoProfiler__Fields {
        struct MonoBehaviour__Fields _;
        ProfilingSettings_SettingType__Enum m_currentSampleSetting;

        struct List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_* m_samples;
        struct GPUAutoProfiler_Sample* m_currentSample;
        struct GPUAutoProfiler_ProfilerStateHandler* m_currentHandler;
        int32_t m_frameCount;
        GPUAutoProfiler_ProfilerState__Enum m_currentState;

        struct GPUAutoProfilerReport* m_report;
        bool m_gpuProfilingWasEnabled;
        bool m_particlesWereEnabled;
        DeltaTimeManager_ControllerType__Enum m_previousControllerType;

        struct ProfilingSettings_BulkSettings* m_debugOverlayRestore;
        bool m_imguiRegistered;
    };

    struct GPUAutoProfiler {
        struct GPUAutoProfiler__Class* klass;
        MonitorData* monitor;
        struct GPUAutoProfiler__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample___Fields {
        struct GPUAutoProfiler_Sample__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_ {
        struct List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample___Fields fields;
    };

    enum class GPUAutoProfiler_Sample_SamplingState__Enum : int32_t {
        Queued = 0x00000000,
        Idle = 0x00000001,
        Cooldown = 0x00000002,
        Sampling = 0x00000003,
        Done = 0x00000004,
    };

    struct GPUAutoProfiler_Sample_SamplingState__Enum__Boxed {
        struct GPUAutoProfiler_Sample_SamplingState__Enum__Class* klass;
        MonitorData* monitor;
        GPUAutoProfiler_Sample_SamplingState__Enum value;
    };

    struct __declspec(align(8)) GPUAutoProfiler_Sample__Fields {
        struct Dictionary_2_Moon_Profile_Metric_System_Single__1* Results;
        ProfilingSettings_SettingType__Enum Setting;

        ProfilingSettings_SettingAction__Enum Action;

        GPUAutoProfiler_Sample_SamplingState__Enum m_state;

        struct Dictionary_2_Moon_Profile_Metric_List_1_System_Single_* m_samples;
        struct List_1_Moon_Profile_Metric_* m_metrics;
        int32_t m_frameCount;
    };

    struct GPUAutoProfiler_Sample {
        struct GPUAutoProfiler_Sample__Class* klass;
        MonitorData* monitor;
        struct GPUAutoProfiler_Sample__Fields fields;
    };

    struct GPUAutoProfiler_Sample__Array {
        struct GPUAutoProfiler_Sample__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct GPUAutoProfiler_Sample* vector[32];
    };

    struct IEnumerator_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_ {
        struct IEnumerator_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample___Class* klass;
        MonitorData* monitor;
    };

    struct GPUAutoProfiler_ProfilerStateHandler {
        struct GPUAutoProfiler_ProfilerStateHandler__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) GPUAutoProfiler_BaselineMeasurementHandler__Fields {
        int32_t m_frameCount;
        struct Dictionary_2_Moon_Profile_Metric_List_1_System_Single_* m_samples;
        struct List_1_Moon_Profile_Metric_* m_metrics;
    };

    struct GPUAutoProfiler_BaselineMeasurementHandler {
        struct GPUAutoProfiler_BaselineMeasurementHandler__Class* klass;
        MonitorData* monitor;
        struct GPUAutoProfiler_BaselineMeasurementHandler__Fields fields;
    };

    struct GPUAutoProfiler_Sample_SamplingState__Enum__VTable {
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

    struct GPUAutoProfiler_Sample_SamplingState__Enum__StaticFields {
    };

    struct GPUAutoProfiler_Sample_SamplingState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GPUAutoProfiler_Sample_SamplingState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GPUAutoProfiler_Sample_SamplingState__Enum__VTable vtable;
    };

    struct GPUAutoProfiler_Sample__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GPUAutoProfiler_Sample__StaticFields {
    };

    struct GPUAutoProfiler_Sample__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GPUAutoProfiler_Sample__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GPUAutoProfiler_Sample__VTable vtable;
    };

    struct GPUAutoProfiler_Sample__Array__VTable {
    };

    struct GPUAutoProfiler_Sample__Array__StaticFields {
    };

    struct GPUAutoProfiler_Sample__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GPUAutoProfiler_Sample__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GPUAutoProfiler_Sample__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample___StaticFields {
    };

    struct IEnumerator_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample___VTable vtable;
    };

    struct List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample___VTable {
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

    struct List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample___StaticFields {
        struct GPUAutoProfiler_Sample__Array* _emptyArray;
    };

    struct List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample___VTable vtable;
    };

    struct GPUAutoProfiler_BaselineMeasurementHandler__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData EnterState;
        VirtualInvokeData ExitState;
        VirtualInvokeData UpdateState;
        VirtualInvokeData get_CanExit;
        VirtualInvokeData get_DebugString;
        VirtualInvokeData SetupState;
        VirtualInvokeData AddToReport;
    };

    struct GPUAutoProfiler_BaselineMeasurementHandler__StaticFields {
    };

    struct GPUAutoProfiler_BaselineMeasurementHandler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GPUAutoProfiler_BaselineMeasurementHandler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GPUAutoProfiler_BaselineMeasurementHandler__VTable vtable;
    };

    struct GPUAutoProfiler_ProfilerStateHandler__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData __unknown_2;
        VirtualInvokeData __unknown_3;
        VirtualInvokeData __unknown_4;
    };

    struct GPUAutoProfiler_ProfilerStateHandler__StaticFields {
    };

    struct GPUAutoProfiler_ProfilerStateHandler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GPUAutoProfiler_ProfilerStateHandler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GPUAutoProfiler_ProfilerStateHandler__VTable vtable;
    };

    struct GPUAutoProfiler_ProfilerState__Enum__VTable {
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

    struct GPUAutoProfiler_ProfilerState__Enum__StaticFields {
    };

    struct GPUAutoProfiler_ProfilerState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GPUAutoProfiler_ProfilerState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GPUAutoProfiler_ProfilerState__Enum__VTable vtable;
    };

    struct GPUAutoProfiler__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GPUAutoProfiler__StaticFields {
        struct ProfilingSettings_SettingType__Enum__Array* SettingsToIgnoreDuringScreenshotRuns;
        struct ProfilingSettings_SettingType__Enum__Array* SettingsToTest;
        struct ProfilingSettings_SettingType__Enum__Array* SettingsToIgnoreForLightSpeed;
        struct GPUAutoProfilerReport* _LastReport_k__BackingField;
        struct GPUAutoProfiler* s_instance;
        bool AllowDebugOverlays;
        float DurationMultiplier;
        int32_t m_sampleDurationDefault;
        int32_t m_sampleIntervalDefault;
        int32_t m_baselineMeasurementTimeDefault;
        struct IProfilingDataProvider* ProfilingDataProvider;
    };

    struct GPUAutoProfiler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GPUAutoProfiler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GPUAutoProfiler__VTable vtable;
    };

    struct GPUAutoProfiler_LightSpeedMeasurementHandler__Fields {
        struct GPUAutoProfiler_BaselineMeasurementHandler__Fields _;
        struct List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_* m_samples;
    };

    struct GPUAutoProfiler_LightSpeedMeasurementHandler {
        struct GPUAutoProfiler_LightSpeedMeasurementHandler__Class* klass;
        MonitorData* monitor;
        struct GPUAutoProfiler_LightSpeedMeasurementHandler__Fields fields;
    };

    struct GPUAutoProfiler_LightSpeedMeasurementHandler__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData EnterState;
        VirtualInvokeData ExitState;
        VirtualInvokeData UpdateState;
        VirtualInvokeData get_CanExit;
        VirtualInvokeData get_DebugString;
        VirtualInvokeData SetupState;
        VirtualInvokeData AddToReport;
    };

    struct GPUAutoProfiler_LightSpeedMeasurementHandler__StaticFields {
    };

    struct GPUAutoProfiler_LightSpeedMeasurementHandler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GPUAutoProfiler_LightSpeedMeasurementHandler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GPUAutoProfiler_LightSpeedMeasurementHandler__VTable vtable;
    };

    struct GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler__Fields {
        struct GPUAutoProfiler_LightSpeedMeasurementHandler__Fields _;
    };

    struct GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler {
        struct GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler__Class* klass;
        MonitorData* monitor;
        struct GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler__Fields fields;
    };

    struct GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData EnterState;
        VirtualInvokeData ExitState;
        VirtualInvokeData UpdateState;
        VirtualInvokeData get_CanExit;
        VirtualInvokeData get_DebugString;
        VirtualInvokeData SetupState;
        VirtualInvokeData AddToReport;
    };

    struct GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler__StaticFields {
        struct ProfilingSettings_SettingType__Enum__Array* AdditionalSettingsToDisable;
        struct ProfilingSettings_SettingType__Enum__Array* AdditionalSettingsToEnable;
    };

    struct GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler__VTable vtable;
    };

    struct __declspec(align(8)) GPUAutoProfiler_SamplingHandler__Fields {
        struct List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_* m_samples;
        int32_t m_sampleIndex;
    };

    struct GPUAutoProfiler_SamplingHandler {
        struct GPUAutoProfiler_SamplingHandler__Class* klass;
        MonitorData* monitor;
        struct GPUAutoProfiler_SamplingHandler__Fields fields;
    };

    struct GPUAutoProfiler_SamplingHandler__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData EnterState;
        VirtualInvokeData ExitState;
        VirtualInvokeData UpdateState;
        VirtualInvokeData get_CanExit;
        VirtualInvokeData get_DebugString;
    };

    struct GPUAutoProfiler_SamplingHandler__StaticFields {
    };

    struct GPUAutoProfiler_SamplingHandler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GPUAutoProfiler_SamplingHandler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GPUAutoProfiler_SamplingHandler__VTable vtable;
    };

    struct GPUAutoProfiler_SamplingHandler_c {
        struct GPUAutoProfiler_SamplingHandler_c__Class* klass;
        MonitorData* monitor;
    };

    struct Func_2_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_Boolean___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_Boolean_ {
        struct Func_2_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_Boolean___Class* klass;
        MonitorData* monitor;
        struct Func_2_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_Boolean___Fields fields;
    };

    struct Func_2_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_Boolean___VTable {
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

    struct Func_2_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_Boolean___StaticFields {
    };

    struct Func_2_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_Boolean___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_2_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_Boolean___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_2_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_Boolean___VTable vtable;
    };

    struct GPUAutoProfiler_SamplingHandler_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GPUAutoProfiler_SamplingHandler_c__StaticFields {
        struct GPUAutoProfiler_SamplingHandler_c* __9;
        struct Func_2_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_Boolean_* __9__7_0;
    };

    struct GPUAutoProfiler_SamplingHandler_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GPUAutoProfiler_SamplingHandler_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GPUAutoProfiler_SamplingHandler_c__VTable vtable;
    };

    struct GPUAutoProfilerReportRenderer__Fields {
        struct MonoBehaviour__Fields _;
        int32_t xOffset;
        int32_t yOffset;
        int32_t scale;
        bool overrideOffset;
        int32_t xOffsetOverride;
        int32_t yOffsetOverride;
        struct GPUAutoProfilerReport* m_report;
        struct Material* m_material;
        bool m_wasGPUProfilingEnabled;
        bool m_wasShowingHelp;
        struct Color__Array* m_lineBackColors;
        int32_t m_lineBackIndex;
    };

    struct GPUAutoProfilerReportRenderer {
        struct GPUAutoProfilerReportRenderer__Class* klass;
        MonitorData* monitor;
        struct GPUAutoProfilerReportRenderer__Fields fields;
    };

    struct GPUAutoProfilerReportRenderer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GPUAutoProfilerReportRenderer__StaticFields {
        struct GPUAutoProfilerReportRenderer* s_instance;
        struct Dictionary_2_Moon_Profile_Metric_System_String_* s_metricShortNames;
    };

    struct GPUAutoProfilerReportRenderer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GPUAutoProfilerReportRenderer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GPUAutoProfilerReportRenderer__VTable vtable;
    };

    struct GPUProfilingMode {
        struct GPUProfilingMode__Class* klass;
        MonitorData* monitor;
    };

    struct GPUProfilingMode__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GPUProfilingMode__StaticFields {
        struct ProfilingSettings_SettingType__Enum__Array* SettingsToDisable;
        struct ProfilingSettings_SettingType__Enum__Array* SettingsToEnable;
    };

    struct GPUProfilingMode__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GPUProfilingMode__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GPUProfilingMode__VTable vtable;
    };

    struct MoonEffectCollisionModifierWisps__Fields {
        struct MoonEffectVariationModifier__Fields _;
        bool DisableCollision;
    };

    struct MoonEffectCollisionModifierWisps {
        struct MoonEffectCollisionModifierWisps__Class* klass;
        MonitorData* monitor;
        struct MoonEffectCollisionModifierWisps__Fields fields;
    };

    struct MoonEffectCollisionModifierWisps__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Revert;
        VirtualInvokeData Apply;
        VirtualInvokeData Revert_1;
    };

    struct MoonEffectCollisionModifierWisps__StaticFields {
    };

    struct MoonEffectCollisionModifierWisps__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonEffectCollisionModifierWisps__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonEffectCollisionModifierWisps__VTable vtable;
    };

    enum class ColorApplyRule__Enum : int32_t {
        Multiply = 0x00000000,
        Override = 0x00000001,
    };

    struct ColorApplyRule__Enum__Boxed {
        struct ColorApplyRule__Enum__Class* klass;
        MonitorData* monitor;
        ColorApplyRule__Enum value;
    };

    struct MoonEffectEmissivityModifierWisps__Fields {
        struct MoonEffectVariationModifier__Fields _;
        struct Color Color;
        ColorApplyRule__Enum ApplyRule;

        float SpreadMulitplier;
        float IntensityMultiplier;
    };

    struct MoonEffectEmissivityModifierWisps {
        struct MoonEffectEmissivityModifierWisps__Class* klass;
        MonitorData* monitor;
        struct MoonEffectEmissivityModifierWisps__Fields fields;
    };

    struct ColorApplyRule__Enum__VTable {
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

    struct ColorApplyRule__Enum__StaticFields {
    };

    struct ColorApplyRule__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ColorApplyRule__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ColorApplyRule__Enum__VTable vtable;
    };

    struct MoonEffectEmissivityModifierWisps__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Revert;
        VirtualInvokeData Apply;
        VirtualInvokeData Revert_1;
    };

    struct MoonEffectEmissivityModifierWisps__StaticFields {
    };

    struct MoonEffectEmissivityModifierWisps__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonEffectEmissivityModifierWisps__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonEffectEmissivityModifierWisps__VTable vtable;
    };

    struct MoonEffectMainColorModifierWisps__Fields {
        struct MoonEffectVariationModifier__Fields _;
        struct Color Color;
        ColorApplyRule__Enum ApplyRule;
    };

    struct MoonEffectMainColorModifierWisps {
        struct MoonEffectMainColorModifierWisps__Class* klass;
        MonitorData* monitor;
        struct MoonEffectMainColorModifierWisps__Fields fields;
    };

    struct MoonEffectMainColorModifierWisps__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Revert;
        VirtualInvokeData Apply;
        VirtualInvokeData Revert_1;
    };

    struct MoonEffectMainColorModifierWisps__StaticFields {
    };

    struct MoonEffectMainColorModifierWisps__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonEffectMainColorModifierWisps__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonEffectMainColorModifierWisps__VTable vtable;
    };

    struct MoonEffectMaskDissolveColorModifierWisps__Fields {
        struct MoonEffectVariationModifier__Fields _;
        struct Color Color;
        ColorApplyRule__Enum ApplyRule;
    };

    struct MoonEffectMaskDissolveColorModifierWisps {
        struct MoonEffectMaskDissolveColorModifierWisps__Class* klass;
        MonitorData* monitor;
        struct MoonEffectMaskDissolveColorModifierWisps__Fields fields;
    };

    struct MoonEffectMaskDissolveColorModifierWisps__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Revert;
        VirtualInvokeData Apply;
        VirtualInvokeData Revert_1;
    };

    struct MoonEffectMaskDissolveColorModifierWisps__StaticFields {
    };

    struct MoonEffectMaskDissolveColorModifierWisps__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonEffectMaskDissolveColorModifierWisps__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonEffectMaskDissolveColorModifierWisps__VTable vtable;
    };

    struct MoonEffectsWispsInstantionHandler {
        struct MoonEffectsWispsInstantionHandler__Class* klass;
        MonitorData* monitor;
    };

    struct MoonEffectsWispsInstantionHandler__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Instantiate;
    };

    struct MoonEffectsWispsInstantionHandler__StaticFields {
    };

    struct MoonEffectsWispsInstantionHandler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonEffectsWispsInstantionHandler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonEffectsWispsInstantionHandler__VTable vtable;
    };

    struct MoonEffectTintColorModifierWisps__Fields {
        struct MoonEffectVariationModifier__Fields _;
        struct Color Color;
        ColorApplyRule__Enum ApplyRule;
    };

    struct MoonEffectTintColorModifierWisps {
        struct MoonEffectTintColorModifierWisps__Class* klass;
        MonitorData* monitor;
        struct MoonEffectTintColorModifierWisps__Fields fields;
    };

    struct MoonEffectTintColorModifierWisps__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Revert;
        VirtualInvokeData Apply;
        VirtualInvokeData Revert_1;
    };

    struct MoonEffectTintColorModifierWisps__StaticFields {
    };

    struct MoonEffectTintColorModifierWisps__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonEffectTintColorModifierWisps__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonEffectTintColorModifierWisps__VTable vtable;
    };

    struct __declspec(align(8)) MoonEffectWisps__Fields {
        bool m_isDirty;
        struct GameObject* EffectPrefab;
        struct MoonEffectMainColorModifierWisps* Color;
        struct MoonEffectMaskDissolveColorModifierWisps* DissolveColor;
        struct MoonEffectTintColorModifierWisps* TintColor;
        struct MoonEffectEmissivityModifierWisps* Emissivity;
        struct MoonEffectSizeModifier* Size;
        struct MoonEffectEmissionRateModifier* EmissionRate;
        struct MoonEffectSpeedModifier* Speed;
        struct MoonEffectShapeModifier* Shape;
        struct MoonEffectCollisionModifierWisps* Collision;
        struct List_1_Moon_EffectsFramework_MoonEffectVariationModifier_* m_allModifiers;
    };

    struct MoonEffectWisps {
        struct MoonEffectWisps__Class* klass;
        MonitorData* monitor;
        struct MoonEffectWisps__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_EffectsFramework_MoonEffectVariationModifier___Fields {
        struct MoonEffectVariationModifier__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_EffectsFramework_MoonEffectVariationModifier_ {
        struct List_1_Moon_EffectsFramework_MoonEffectVariationModifier___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_EffectsFramework_MoonEffectVariationModifier___Fields fields;
    };

    struct MoonEffectVariationModifier__Array {
        struct MoonEffectVariationModifier__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MoonEffectVariationModifier* vector[32];
    };

    struct IEnumerator_1_Moon_EffectsFramework_MoonEffectVariationModifier_ {
        struct IEnumerator_1_Moon_EffectsFramework_MoonEffectVariationModifier___Class* klass;
        MonitorData* monitor;
    };

    struct MoonEffectVariationModifier__Array__VTable {
    };

    struct MoonEffectVariationModifier__Array__StaticFields {
    };

    struct MoonEffectVariationModifier__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonEffectVariationModifier__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonEffectVariationModifier__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_EffectsFramework_MoonEffectVariationModifier___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_EffectsFramework_MoonEffectVariationModifier___StaticFields {
    };

    struct IEnumerator_1_Moon_EffectsFramework_MoonEffectVariationModifier___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_EffectsFramework_MoonEffectVariationModifier___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_EffectsFramework_MoonEffectVariationModifier___VTable vtable;
    };

    struct List_1_Moon_EffectsFramework_MoonEffectVariationModifier___VTable {
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
