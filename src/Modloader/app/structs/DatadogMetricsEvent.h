#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DatadogMetricsEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DatadogMetricsEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_DatadogMetricsEvent_DEFINED)
#include <Modloader/app/structs/DatadogMetricsEvent__Fields.h>
#if defined(IL2CPP_STRUCT_DatadogMetricsEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_DatadogMetricsEvent_DEFINED
struct DatadogMetricsEvent__Class;
struct DatadogMetricsEvent {
    struct DatadogMetricsEvent__Class* klass;
    MonitorData* monitor;
    struct DatadogMetricsEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DatadogMetricsEvent_FWDDECL)
#define IL2CPP_STRUCT_DatadogMetricsEvent_FWDDECL
#include <Modloader/app/structs/DatadogMetricsEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_DatadogMetricsEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_DatadogMetricsEvent_DEFINED) && !defined(IL2CPP_STRUCT_DatadogMetricsEvent_FWDDECL)
#include <Modloader/app/structs/DatadogMetricsEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DatadogMetricsEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
