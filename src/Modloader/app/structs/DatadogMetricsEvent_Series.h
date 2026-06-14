#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DatadogMetricsEvent_Series_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DatadogMetricsEvent_Series_INITIALIZING
#if !defined(IL2CPP_STRUCT_DatadogMetricsEvent_Series_DEFINED)
#include <Modloader/app/structs/DatadogMetricsEvent_Series__Fields.h>
#if defined(IL2CPP_STRUCT_DatadogMetricsEvent_Series__Fields_DEFINED)
#define IL2CPP_STRUCT_DatadogMetricsEvent_Series_DEFINED
struct DatadogMetricsEvent_Series__Class;
struct DatadogMetricsEvent_Series {
    struct DatadogMetricsEvent_Series__Class* klass;
    MonitorData* monitor;
    struct DatadogMetricsEvent_Series__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DatadogMetricsEvent_Series_FWDDECL)
#define IL2CPP_STRUCT_DatadogMetricsEvent_Series_FWDDECL
#include <Modloader/app/structs/DatadogMetricsEvent_Series__Class.h>
#endif
#undef IL2CPP_STRUCT_DatadogMetricsEvent_Series_INITIALIZING
#if !defined(IL2CPP_STRUCT_DatadogMetricsEvent_Series_DEFINED) && !defined(IL2CPP_STRUCT_DatadogMetricsEvent_Series_FWDDECL)
#include <Modloader/app/structs/DatadogMetricsEvent_Series.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DatadogMetricsEvent_Series.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
