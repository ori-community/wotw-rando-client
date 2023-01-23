#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TraceLoggingEventTypes_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TraceLoggingEventTypes_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraceLoggingEventTypes_DEFINED)
#include <Modloader/app/structs/TraceLoggingEventTypes__Fields.h>
#if defined(IL2CPP_STRUCT_TraceLoggingEventTypes__Fields_DEFINED)
#define IL2CPP_STRUCT_TraceLoggingEventTypes_DEFINED
struct TraceLoggingEventTypes__Class;
struct TraceLoggingEventTypes {
    struct TraceLoggingEventTypes__Class* klass;
    MonitorData* monitor;
    struct TraceLoggingEventTypes__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TraceLoggingEventTypes_FWDDECL)
#define IL2CPP_STRUCT_TraceLoggingEventTypes_FWDDECL
#include <Modloader/app/structs/TraceLoggingEventTypes__Class.h>
#endif
#undef IL2CPP_STRUCT_TraceLoggingEventTypes_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraceLoggingEventTypes_DEFINED) && !defined(IL2CPP_STRUCT_TraceLoggingEventTypes_FWDDECL)
#include <Modloader/app/structs/TraceLoggingEventTypes.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TraceLoggingEventTypes.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
