#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GPUAutoProfiler_Sample__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GPUAutoProfiler_Sample__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GPUAutoProfiler_Sample__Fields_DEFINED)
#include <Modloader/app/structs/GPUAutoProfiler_Sample_SamplingState__Enum.h>
#include <Modloader/app/structs/ProfilingSettings_SettingAction__Enum.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>
#if defined(IL2CPP_STRUCT_ProfilingSettings_SettingType__Enum_DEFINED) && defined(IL2CPP_STRUCT_ProfilingSettings_SettingAction__Enum_DEFINED) && defined(IL2CPP_STRUCT_GPUAutoProfiler_Sample_SamplingState__Enum_DEFINED)
#define IL2CPP_STRUCT_GPUAutoProfiler_Sample__Fields_DEFINED
struct Dictionary_2_Moon_Profile_Metric_System_Single__1;
struct Dictionary_2_Moon_Profile_Metric_List_1_System_Single_;
struct List_1_Moon_Profile_Metric_;
struct __declspec(align(8)) GPUAutoProfiler_Sample__Fields {
    struct Dictionary_2_Moon_Profile_Metric_System_Single__1* Results;
    ProfilingSettings_SettingType__Enum Setting;

    ProfilingSettings_SettingAction__Enum Action;

    GPUAutoProfiler_Sample_SamplingState__Enum m_state;

    struct Dictionary_2_Moon_Profile_Metric_List_1_System_Single_* m_samples;
    struct List_1_Moon_Profile_Metric_* m_metrics;
    int32_t m_frameCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GPUAutoProfiler_Sample__Fields_FWDDECL)
#define IL2CPP_STRUCT_GPUAutoProfiler_Sample__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_Moon_Profile_Metric_List_1_System_Single_.h>
#include <Modloader/app/structs/Dictionary_2_Moon_Profile_Metric_System_Single__1.h>
#include <Modloader/app/structs/List_1_Moon_Profile_Metric_.h>
#endif
#undef IL2CPP_STRUCT_GPUAutoProfiler_Sample__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GPUAutoProfiler_Sample__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GPUAutoProfiler_Sample__Fields_FWDDECL)
#include <Modloader/app/structs/GPUAutoProfiler_Sample__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GPUAutoProfiler_Sample__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
