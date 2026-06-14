#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetryPlayerSessionEndEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetryPlayerSessionEndEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryPlayerSessionEndEvent_DEFINED)
#include <Modloader/app/structs/MoonTelemetryPlayerSessionEndEvent__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTelemetryPlayerSessionEndEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetryPlayerSessionEndEvent_DEFINED
struct MoonTelemetryPlayerSessionEndEvent__Class;
struct MoonTelemetryPlayerSessionEndEvent {
    struct MoonTelemetryPlayerSessionEndEvent__Class* klass;
    MonitorData* monitor;
    struct MoonTelemetryPlayerSessionEndEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetryPlayerSessionEndEvent_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetryPlayerSessionEndEvent_FWDDECL
#include <Modloader/app/structs/MoonTelemetryPlayerSessionEndEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetryPlayerSessionEndEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryPlayerSessionEndEvent_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetryPlayerSessionEndEvent_FWDDECL)
#include <Modloader/app/structs/MoonTelemetryPlayerSessionEndEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetryPlayerSessionEndEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
