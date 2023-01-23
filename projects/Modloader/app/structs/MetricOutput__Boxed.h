#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MetricOutput__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MetricOutput__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_MetricOutput__Boxed_DEFINED)
#include <Modloader/app/structs/MetricOutput.h>
#if defined(IL2CPP_STRUCT_MetricOutput_DEFINED)
#define IL2CPP_STRUCT_MetricOutput__Boxed_DEFINED
struct MetricOutput__Class;
struct MetricOutput__Boxed {
    struct MetricOutput__Class* klass;
    MonitorData* monitor;
    struct MetricOutput fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MetricOutput__Boxed_FWDDECL)
#define IL2CPP_STRUCT_MetricOutput__Boxed_FWDDECL
#include <Modloader/app/structs/MetricOutput__Class.h>
#endif
#undef IL2CPP_STRUCT_MetricOutput__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_MetricOutput__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_MetricOutput__Boxed_FWDDECL)
#include <Modloader/app/structs/MetricOutput__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MetricOutput__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
