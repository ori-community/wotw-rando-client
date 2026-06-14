#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetryDeathEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetryDeathEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryDeathEvent_DEFINED)
#include <Modloader/app/structs/MoonTelemetryDeathEvent__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTelemetryDeathEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetryDeathEvent_DEFINED
struct MoonTelemetryDeathEvent__Class;
struct MoonTelemetryDeathEvent {
    struct MoonTelemetryDeathEvent__Class* klass;
    MonitorData* monitor;
    struct MoonTelemetryDeathEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetryDeathEvent_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetryDeathEvent_FWDDECL
#include <Modloader/app/structs/MoonTelemetryDeathEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetryDeathEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryDeathEvent_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetryDeathEvent_FWDDECL)
#include <Modloader/app/structs/MoonTelemetryDeathEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetryDeathEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
