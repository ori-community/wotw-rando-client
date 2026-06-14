#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MicroProfilerGraph__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MicroProfilerGraph__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfilerGraph__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_MicroProfilerGraph__Fields_DEFINED
struct Material;
struct FrameCounter_1;
struct IProfilingDataProvider;
struct MicroProfilerGraph_FrameCache__Array;
struct List_1_System_Int32_;
struct Color__Array;
struct MicroProfilerGraph_MetricCache__Array;
struct Metric__Enum__Array;
struct Int32__Array;
struct Boolean__Array;
struct List_1_MicroProfilerGraph_MarkerCache___Array;
struct Single__Array;
struct MicroProfilerGraph__Fields {
    struct MonoBehaviour__Fields _;
    int32_t m_lastScreenWidth;
    int32_t m_lastScreenHeight;
    struct Material* m_material;
    struct FrameCounter_1* m_frameCounter;
    bool m_pageLeftHandled;
    bool m_pageRightHandled;
    float m_holdInputTimer;
    float TimeMarkerInterval;
    bool m_isExpanded;
    int32_t m_graphWidth;
    int32_t m_graphHeight;
    float GraphScale;
    struct Vector2 GraphPositionOffset;
    int32_t GraphMaxMS;
    float m_xGraphOffset;
    float m_yGraphOffset;
    int32_t m_visibleHistory;
    struct Color ScrollBarBackgroundColor;
    struct Color ScrollBarHandleColor;
    struct Color TimeMarkerColor;
    struct Color LineColor;
    struct Color GraphBackgroundColor;
    struct Color MSLabelBackgroundColor;
    struct IProfilingDataProvider* m_dataProvider;
    struct MicroProfilerGraph_FrameCache__Array* m_frameCache;
    struct List_1_System_Int32_* m_timeMarkers;
    struct List_1_System_Int32_* m_fpsMarkers;
    struct List_1_System_Int32_* m_fixedUpdateMarkers;
    int32_t m_frameCacheIndex;
    int32_t m_timeMarkerCacheIndex;
    int32_t m_markerCacheIndex;
    struct Color__Array* m_markerColors;
    struct MicroProfilerGraph_MetricCache__Array* m_metricCache;
    struct Metric__Enum__Array* VisibleMetrics;
    struct Int32__Array* m_prevMinY;
    struct Int32__Array* m_prevMaxY;
    struct Boolean__Array* m_markersActive;
    struct List_1_MicroProfilerGraph_MarkerCache___Array* m_markerCache;
    int32_t m_baseMPIndex;
    int32_t m_visibleFrames;
    int32_t m_inspectIndex;
    int32_t m_highlightedTimeMarker;
    int32_t m_lastHighlightedTimeMarker;
    struct Single__Array* m_highlightedAverages;
    int32_t m_lastSecondId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MicroProfilerGraph__Fields_FWDDECL)
#define IL2CPP_STRUCT_MicroProfilerGraph__Fields_FWDDECL
#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/Color__Array.h>
#include <Modloader/app/structs/FrameCounter_1.h>
#include <Modloader/app/structs/IProfilingDataProvider.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/List_1_MicroProfilerGraph_MarkerCache___Array.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Metric__Enum__Array.h>
#include <Modloader/app/structs/MicroProfilerGraph_FrameCache__Array.h>
#include <Modloader/app/structs/MicroProfilerGraph_MetricCache__Array.h>
#include <Modloader/app/structs/Single__Array.h>
#endif
#undef IL2CPP_STRUCT_MicroProfilerGraph__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfilerGraph__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MicroProfilerGraph__Fields_FWDDECL)
#include <Modloader/app/structs/MicroProfilerGraph__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MicroProfilerGraph__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
