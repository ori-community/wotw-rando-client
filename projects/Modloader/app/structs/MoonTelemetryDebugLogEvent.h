#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetryDebugLogEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetryDebugLogEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryDebugLogEvent_DEFINED)
#include <Modloader/app/structs/MoonTelemetryDebugLogEvent__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTelemetryDebugLogEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetryDebugLogEvent_DEFINED
struct MoonTelemetryDebugLogEvent__Class;
struct MoonTelemetryDebugLogEvent {
    struct MoonTelemetryDebugLogEvent__Class* klass;
    MonitorData* monitor;
    struct MoonTelemetryDebugLogEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetryDebugLogEvent_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetryDebugLogEvent_FWDDECL
#include <Modloader/app/structs/MoonTelemetryDebugLogEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetryDebugLogEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryDebugLogEvent_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetryDebugLogEvent_FWDDECL)
#include <Modloader/app/structs/MoonTelemetryDebugLogEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetryDebugLogEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
