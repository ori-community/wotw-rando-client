#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MicroProfilerInspector_MetricData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MicroProfilerInspector_MetricData_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfilerInspector_MetricData_DEFINED)
#include <Modloader/app/structs/Metric__Enum.h>
#if defined(IL2CPP_STRUCT_Metric__Enum_DEFINED)
#define IL2CPP_STRUCT_MicroProfilerInspector_MetricData_DEFINED
struct String;
struct MicroProfilerInspector_MetricData {
    struct String* _MetricHeaderName_k__BackingField;
    Metric__Enum _Metric_k__BackingField;

    double _Value_k__BackingField;
    uint32_t _Invokations_k__BackingField;
    int32_t _ColorIndex_k__BackingField;
    float _HideThreshold_k__BackingField;
    float _DangerThreshold_k__BackingField;
    double _MarkerPeak_k__BackingField;
    double _MarkerAvg_k__BackingField;
    int32_t _Column_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MicroProfilerInspector_MetricData_FWDDECL)
#define IL2CPP_STRUCT_MicroProfilerInspector_MetricData_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MicroProfilerInspector_MetricData_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfilerInspector_MetricData_DEFINED) && !defined(IL2CPP_STRUCT_MicroProfilerInspector_MetricData_FWDDECL)
#include <Modloader/app/structs/MicroProfilerInspector_MetricData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MicroProfilerInspector_MetricData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
