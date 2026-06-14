#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetryPlayerSessionStartEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetryPlayerSessionStartEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryPlayerSessionStartEvent_DEFINED)
#include <Modloader/app/structs/MoonTelemetryPlayerSessionStartEvent__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTelemetryPlayerSessionStartEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetryPlayerSessionStartEvent_DEFINED
struct MoonTelemetryPlayerSessionStartEvent__Class;
struct MoonTelemetryPlayerSessionStartEvent {
    struct MoonTelemetryPlayerSessionStartEvent__Class* klass;
    MonitorData* monitor;
    struct MoonTelemetryPlayerSessionStartEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetryPlayerSessionStartEvent_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetryPlayerSessionStartEvent_FWDDECL
#include <Modloader/app/structs/MoonTelemetryPlayerSessionStartEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetryPlayerSessionStartEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryPlayerSessionStartEvent_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetryPlayerSessionStartEvent_FWDDECL)
#include <Modloader/app/structs/MoonTelemetryPlayerSessionStartEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetryPlayerSessionStartEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
