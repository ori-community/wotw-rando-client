#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TraceLoggingMetadataCollector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TraceLoggingMetadataCollector_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraceLoggingMetadataCollector_DEFINED)
#include <Modloader/app/structs/TraceLoggingMetadataCollector__Fields.h>
#if defined(IL2CPP_STRUCT_TraceLoggingMetadataCollector__Fields_DEFINED)
#define IL2CPP_STRUCT_TraceLoggingMetadataCollector_DEFINED
struct TraceLoggingMetadataCollector__Class;
struct TraceLoggingMetadataCollector {
    struct TraceLoggingMetadataCollector__Class* klass;
    MonitorData* monitor;
    struct TraceLoggingMetadataCollector__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TraceLoggingMetadataCollector_FWDDECL)
#define IL2CPP_STRUCT_TraceLoggingMetadataCollector_FWDDECL
#include <Modloader/app/structs/TraceLoggingMetadataCollector__Class.h>
#endif
#undef IL2CPP_STRUCT_TraceLoggingMetadataCollector_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraceLoggingMetadataCollector_DEFINED) && !defined(IL2CPP_STRUCT_TraceLoggingMetadataCollector_FWDDECL)
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
