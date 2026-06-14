#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MicroProfilerInspector__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MicroProfilerInspector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfilerInspector__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_MicroProfilerInspector__Fields_DEFINED
struct List_1_MicroProfilerInspector_MetricPreset_;
struct Metric__Enum__Array;
struct Dictionary_2_Moon_Profile_Metric_System_String_;
struct MicroProfilerInspector_MetricData__Array;
struct String__Array;
struct Dictionary_2_System_Int32_System_String_;
struct List_1_Moon_Profile_Metric_;
struct MicroProfilerInspector__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_MicroProfilerInspector_MetricPreset_* m_metricPresets;
    int32_t m_presetIndex;
    bool m_presetPrevConsumed;
    bool m_presetNextConsumed;
    bool m_spewOutputConsumed;
    struct Metric__Enum__Array* HeaderMetrics;
    struct Dictionary_2_Moon_Profile_Metric_System_String_* HeaderShortNames;
    struct MicroProfilerInspector_MetricData__Array* m_headerCache;
    struct MicroProfilerInspector_MetricData__Array* m_metricCache;
    struct String__Array* m_sortNames;
    int32_t m_sortBy;
    bool m_sortConsumed;
    int32_t m_frameIdx;
    int32_t m_frameInspectorIndex;
    int32_t m_frameInspectorIndexOffset;
    float m_frameNavigationTimeInterval;
    float m_frameNavigationTimer;
    int32_t m_lastFrameInspectorIndex;
    int32_t m_lastPreset;
    struct Dictionary_2_System_Int32_System_String_* m_msToStringCache;
    struct Color FrameNavigationScrollbarColor;
    struct List_1_Moon_Profile_Metric_* m_tempList;
    int32_t m_lastTimeMarkerStart;
    int32_t m_lastTimeMarkerEnd;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MicroProfilerInspector__Fields_FWDDECL)
#define IL2CPP_STRUCT_MicroProfilerInspector__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_Moon_Profile_Metric_System_String_.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_String_.h>
#include <Modloader/app/structs/List_1_MicroProfilerInspector_MetricPreset_.h>
#include <Modloader/app/structs/List_1_Moon_Profile_Metric_.h>
#include <Modloader/app/structs/Metric__Enum__Array.h>
#include <Modloader/app/structs/MicroProfilerInspector_MetricData__Array.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_MicroProfilerInspector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfilerInspector__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MicroProfilerInspector__Fields_FWDDECL)
#include <Modloader/app/structs/MicroProfilerInspector__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MicroProfilerInspector__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
