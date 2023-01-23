#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MicroProfilerInspector_MetricData__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MicroProfilerInspector_MetricData__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfilerInspector_MetricData__Boxed_DEFINED)
#include <Modloader/app/structs/MicroProfilerInspector_MetricData.h>
#if defined(IL2CPP_STRUCT_MicroProfilerInspector_MetricData_DEFINED)
#define IL2CPP_STRUCT_MicroProfilerInspector_MetricData__Boxed_DEFINED
struct MicroProfilerInspector_MetricData__Class;
struct MicroProfilerInspector_MetricData__Boxed {
    struct MicroProfilerInspector_MetricData__Class* klass;
    MonitorData* monitor;
    struct MicroProfilerInspector_MetricData fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MicroProfilerInspector_MetricData__Boxed_FWDDECL)
#define IL2CPP_STRUCT_MicroProfilerInspector_MetricData__Boxed_FWDDECL
#include <Modloader/app/structs/MicroProfilerInspector_MetricData__Class.h>
#endif
#undef IL2CPP_STRUCT_MicroProfilerInspector_MetricData__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfilerInspector_MetricData__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_MicroProfilerInspector_MetricData__Boxed_FWDDECL)
#include <Modloader/app/structs/MicroProfilerInspector_MetricData__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MicroProfilerInspector_MetricData__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
