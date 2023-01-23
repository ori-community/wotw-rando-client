#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GPUAutoProfiler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GPUAutoProfiler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GPUAutoProfiler__Fields_DEFINED)
#include <Modloader/app/structs/DeltaTimeManager_ControllerType__Enum.h>
#include <Modloader/app/structs/GPUAutoProfiler_ProfilerState__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_ProfilingSettings_SettingType__Enum_DEFINED) && defined(IL2CPP_STRUCT_GPUAutoProfiler_ProfilerState__Enum_DEFINED) && defined(IL2CPP_STRUCT_DeltaTimeManager_ControllerType__Enum_DEFINED)
#define IL2CPP_STRUCT_GPUAutoProfiler__Fields_DEFINED
struct List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_;
struct GPUAutoProfiler_Sample;
struct GPUAutoProfiler_ProfilerStateHandler;
struct GPUAutoProfilerReport;
struct ProfilingSettings_BulkSettings;
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
#endif
#endif
#if !defined(IL2CPP_STRUCT_GPUAutoProfiler__Fields_FWDDECL)
#define IL2CPP_STRUCT_GPUAutoProfiler__Fields_FWDDECL
#include <Modloader/app/structs/GPUAutoProfilerReport.h>
#include <Modloader/app/structs/GPUAutoProfiler_ProfilerStateHandler.h>
#include <Modloader/app/structs/GPUAutoProfiler_Sample.h>
#include <Modloader/app/structs/List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_.h>
#include <Modloader/app/structs/ProfilingSettings_BulkSettings.h>
#endif
#undef IL2CPP_STRUCT_GPUAutoProfiler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GPUAutoProfiler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GPUAutoProfiler__Fields_FWDDECL)
#include <Modloader/app/structs/GPUAutoProfiler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GPUAutoProfiler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
