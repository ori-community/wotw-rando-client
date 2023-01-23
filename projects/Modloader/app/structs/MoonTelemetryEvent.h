#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetryEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetryEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryEvent_DEFINED)
#include <Modloader/app/structs/MoonTelemetryEvent__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTelemetryEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetryEvent_DEFINED
struct MoonTelemetryEvent__Class;
struct MoonTelemetryEvent {
    struct MoonTelemetryEvent__Class* klass;
    MonitorData* monitor;
    struct MoonTelemetryEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetryEvent_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetryEvent_FWDDECL
#include <Modloader/app/structs/MoonTelemetryEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetryEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryEvent_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetryEvent_FWDDECL)
#include <Modloader/app/structs/MoonTelemetryEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetryEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
