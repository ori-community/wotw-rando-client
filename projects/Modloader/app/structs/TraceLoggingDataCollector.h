#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TraceLoggingDataCollector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TraceLoggingDataCollector_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraceLoggingDataCollector_DEFINED)
#define IL2CPP_STRUCT_TraceLoggingDataCollector_DEFINED
struct TraceLoggingDataCollector__Class;
struct TraceLoggingDataCollector {
    struct TraceLoggingDataCollector__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TraceLoggingDataCollector_FWDDECL)
#define IL2CPP_STRUCT_TraceLoggingDataCollector_FWDDECL
#include <Modloader/app/structs/TraceLoggingDataCollector__Class.h>
#endif
#undef IL2CPP_STRUCT_TraceLoggingDataCollector_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraceLoggingDataCollector_DEFINED) && !defined(IL2CPP_STRUCT_TraceLoggingDataCollector_FWDDECL)
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
