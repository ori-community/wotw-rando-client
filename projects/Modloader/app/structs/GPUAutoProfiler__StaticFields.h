#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GPUAutoProfiler__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GPUAutoProfiler__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GPUAutoProfiler__StaticFields_DEFINED)
#define IL2CPP_STRUCT_GPUAutoProfiler__StaticFields_DEFINED
struct ProfilingSettings_SettingType__Enum__Array;
struct GPUAutoProfilerReport;
struct GPUAutoProfiler;
struct IProfilingDataProvider;
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
#endif
#if !defined(IL2CPP_STRUCT_GPUAutoProfiler__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_GPUAutoProfiler__StaticFields_FWDDECL
#include <Modloader/app/structs/GPUAutoProfiler.h>
#include <Modloader/app/structs/GPUAutoProfilerReport.h>
#include <Modloader/app/structs/IProfilingDataProvider.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum__Array.h>
#endif
#undef IL2CPP_STRUCT_GPUAutoProfiler__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GPUAutoProfiler__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_GPUAutoProfiler__StaticFields_FWDDECL)
#include <Modloader/app/structs/GPUAutoProfiler__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GPUAutoProfiler__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
