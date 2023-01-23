#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MicroProfilerInspector_MetricPreset__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MicroProfilerInspector_MetricPreset__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfilerInspector_MetricPreset__Fields_DEFINED)
#define IL2CPP_STRUCT_MicroProfilerInspector_MetricPreset__Fields_DEFINED
struct String;
struct List_1_Moon_Profile_Metric_;
struct __declspec(align(8)) MicroProfilerInspector_MetricPreset__Fields {
    struct String* _Name_k__BackingField;
    int32_t _MaxMS_k__BackingField;
    struct List_1_Moon_Profile_Metric_* GraphMetrics;
};
#endif
#if !defined(IL2CPP_STRUCT_MicroProfilerInspector_MetricPreset__Fields_FWDDECL)
#define IL2CPP_STRUCT_MicroProfilerInspector_MetricPreset__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_Profile_Metric_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MicroProfilerInspector_MetricPreset__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfilerInspector_MetricPreset__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MicroProfilerInspector_MetricPreset__Fields_FWDDECL)
#include <Modloader/app/structs/MicroProfilerInspector_MetricPreset__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MicroProfilerInspector_MetricPreset__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
