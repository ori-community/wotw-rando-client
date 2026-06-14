#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleFPS__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleFPS__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleFPS__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_SimpleFPS__Fields_DEFINED
struct Material;
struct List_1_System_Int32_;
struct Double__Array;
struct IProfilingDataProvider;
struct Dictionary_2_Moon_Profile_Metric_List_1_System_Single_;
struct Dictionary_2_Moon_Profile_Metric_System_Single_;
struct List_1_Moon_Profile_Metric_;
struct String__Array;
struct List_1_SimpleFPS_VideoPlayerDebugInfo_;
struct SimpleFPS__Fields {
    struct MonoBehaviour__Fields _;
    float GraphScale;
    struct Material* m_material;
    float m_xGraphOffset;
    float m_yGraphOffset;
    int32_t m_FrameCount;
    int32_t m_TotalFrameCount;
    int32_t m_FrameCountLast;
    float m_Timer;
    struct Color m_goodColor;
    struct Color m_warningColor;
    struct Color m_dangerColor;
    struct Color m_terrorColor;
    struct Color m_badColor;
    int32_t m_historySeconds;
    struct List_1_System_Int32_* m_recentAverages;
    int32_t m_worstHistoryAverage;
    float m_lastTime;
    int32_t m_atlasPlatform;
    int32_t m_buildID;
    int32_t m_engineVersion;
    float m_integrationPeak;
    float m_lastIntegrationPeak;
    double m_frameTimeAccum;
    struct Double__Array* m_frameHistory;
    int32_t m_frameHistoryWriteIdx;
    int32_t m_runningFrameCount;
    struct IProfilingDataProvider* m_dataProvider;
    struct Dictionary_2_Moon_Profile_Metric_List_1_System_Single_* m_recentMetricAverages;
    struct Dictionary_2_Moon_Profile_Metric_System_Single_* m_worstMetricAverages;
    struct Dictionary_2_Moon_Profile_Metric_System_Single_* m_lastAverage;
    struct Dictionary_2_Moon_Profile_Metric_System_Single_* m_lastPeak;
    bool m_enabledNanoProfiler;
    struct List_1_Moon_Profile_Metric_* m_metricsToShow;
    struct String__Array* m_metricNames;
    int32_t m_lastSecondProfilerStartFrame;
    int32_t m_textScale;
    int32_t m_lastScreenHeight;
    bool m_ranGc;
    bool m_ranPanic;
    bool m_ranResourceCleanup;
    bool m_ranGcLast;
    bool m_ranPanicLast;
    bool m_ranResourceCleanupLast;
    int32_t m_lastCollectionCount;
    int32_t m_lastPanicCount;
    int32_t m_lastCleanupCount;
    float m_lastUnhide;
    struct Color m_black;
    struct Color m_white;
    struct Color m_yellow;
    struct Color m_orange;
    struct Color m_clear;
    struct Color m_background1;
    struct Color m_foreground1;
    bool ComplicatedMode;
    bool ReallySimpleMode;
    bool TrailerMode;
    uint64_t m_physicalMemorySize;
    int32_t m_warningLights;
    int32_t m_dangerLights;
    int32_t m_badLights;
    int32_t m_terrorLights;
    float m_lastExceptionResetTime;
    struct List_1_SimpleFPS_VideoPlayerDebugInfo_* m_videoPlayerDebugStrings;
    int32_t m_nvnUsedCache;
    int32_t m_nvnAllocatedCache;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleFPS__Fields_FWDDECL)
#define IL2CPP_STRUCT_SimpleFPS__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_Moon_Profile_Metric_List_1_System_Single_.h>
#include <Modloader/app/structs/Dictionary_2_Moon_Profile_Metric_System_Single_.h>
#include <Modloader/app/structs/Double__Array.h>
#include <Modloader/app/structs/IProfilingDataProvider.h>
#include <Modloader/app/structs/List_1_Moon_Profile_Metric_.h>
#include <Modloader/app/structs/List_1_SimpleFPS_VideoPlayerDebugInfo_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_SimpleFPS__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleFPS__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SimpleFPS__Fields_FWDDECL)
#include <Modloader/app/structs/SimpleFPS__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleFPS__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
