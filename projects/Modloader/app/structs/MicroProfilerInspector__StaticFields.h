#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MicroProfilerInspector__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MicroProfilerInspector__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfilerInspector__StaticFields_DEFINED)
#define IL2CPP_STRUCT_MicroProfilerInspector__StaticFields_DEFINED
struct MicroProfilerInspector;
struct GUIStyle;
struct GUIStyle__Array;
struct Metric__Enum__Array;
struct Dictionary_2_Moon_Profile_Metric_System_Single_;
struct List_1_Moon_Profile_Metric_;
struct HashSet_1_Moon_ISuspendable_;
struct MicroProfilerInspector__StaticFields {
    struct MicroProfilerInspector* Instance;
    struct GUIStyle* m_tintableBoxStyle;
    struct GUIStyle* m_columnHeaderStyle;
    struct GUIStyle* m_columnHeaderSortedStyle;
    struct GUIStyle__Array* m_metricNormalStyles;
    struct GUIStyle__Array* m_metricBadStyles;
    struct GUIStyle__Array* m_metricInvokedStyles;
    struct GUIStyle* m_statStyle;
    struct GUIStyle* m_statNotZeroStyle;
    struct GUIStyle* m_backgroundRectStyle;
    struct Metric__Enum__Array* IgnoreMetrics;
    struct Dictionary_2_Moon_Profile_Metric_System_Single_* MetricDangerThresholds;
    struct List_1_Moon_Profile_Metric_* MetricsInSecondColumn;
    struct Dictionary_2_Moon_Profile_Metric_System_Single_* MetricThresholds;
    struct HashSet_1_Moon_ISuspendable_* SuspendablesToIgnoreForGameplay;
    bool m_registeredImGUIClient;
};
#endif
#if !defined(IL2CPP_STRUCT_MicroProfilerInspector__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MicroProfilerInspector__StaticFields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_Moon_Profile_Metric_System_Single_.h>
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/GUIStyle__Array.h>
#include <Modloader/app/structs/HashSet_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/List_1_Moon_Profile_Metric_.h>
#include <Modloader/app/structs/Metric__Enum__Array.h>
#include <Modloader/app/structs/MicroProfilerInspector.h>
#endif
#undef IL2CPP_STRUCT_MicroProfilerInspector__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfilerInspector__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MicroProfilerInspector__StaticFields_FWDDECL)
#include <Modloader/app/structs/MicroProfilerInspector__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MicroProfilerInspector__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
