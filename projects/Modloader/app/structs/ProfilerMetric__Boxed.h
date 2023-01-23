#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProfilerMetric__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProfilerMetric__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProfilerMetric__Boxed_DEFINED)
#include <Modloader/app/structs/ProfilerMetric.h>
#if defined(IL2CPP_STRUCT_ProfilerMetric_DEFINED)
#define IL2CPP_STRUCT_ProfilerMetric__Boxed_DEFINED
struct ProfilerMetric__Class;
struct ProfilerMetric__Boxed {
    struct ProfilerMetric__Class* klass;
    MonitorData* monitor;
    struct ProfilerMetric fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ProfilerMetric__Boxed_FWDDECL)
#define IL2CPP_STRUCT_ProfilerMetric__Boxed_FWDDECL
#include <Modloader/app/structs/ProfilerMetric__Class.h>
#endif
#undef IL2CPP_STRUCT_ProfilerMetric__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProfilerMetric__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_ProfilerMetric__Boxed_FWDDECL)
#include <Modloader/app/structs/ProfilerMetric__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProfilerMetric__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
