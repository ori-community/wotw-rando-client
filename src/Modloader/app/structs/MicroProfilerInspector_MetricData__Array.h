#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MicroProfilerInspector_MetricData__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MicroProfilerInspector_MetricData__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfilerInspector_MetricData__Array_DEFINED)
#include <Modloader/app/structs/MicroProfilerInspector_MetricData.h>
#if defined(IL2CPP_STRUCT_MicroProfilerInspector_MetricData_DEFINED)
#define IL2CPP_STRUCT_MicroProfilerInspector_MetricData__Array_DEFINED
struct MicroProfilerInspector_MetricData__Array__Class;
struct MicroProfilerInspector_MetricData__Array {
    struct MicroProfilerInspector_MetricData__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct MicroProfilerInspector_MetricData vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MicroProfilerInspector_MetricData__Array_FWDDECL)
#define IL2CPP_STRUCT_MicroProfilerInspector_MetricData__Array_FWDDECL
#include <Modloader/app/structs/MicroProfilerInspector_MetricData__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_MicroProfilerInspector_MetricData__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfilerInspector_MetricData__Array_DEFINED) && !defined(IL2CPP_STRUCT_MicroProfilerInspector_MetricData__Array_FWDDECL)
#include <Modloader/app/structs/MicroProfilerInspector_MetricData__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MicroProfilerInspector_MetricData__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
