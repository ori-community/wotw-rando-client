#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetryClientHeartbeatEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetryClientHeartbeatEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryClientHeartbeatEvent_DEFINED)
#include <Modloader/app/structs/MoonTelemetryClientHeartbeatEvent__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTelemetryClientHeartbeatEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetryClientHeartbeatEvent_DEFINED
struct MoonTelemetryClientHeartbeatEvent__Class;
struct MoonTelemetryClientHeartbeatEvent {
    struct MoonTelemetryClientHeartbeatEvent__Class* klass;
    MonitorData* monitor;
    struct MoonTelemetryClientHeartbeatEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetryClientHeartbeatEvent_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetryClientHeartbeatEvent_FWDDECL
#include <Modloader/app/structs/MoonTelemetryClientHeartbeatEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetryClientHeartbeatEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryClientHeartbeatEvent_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetryClientHeartbeatEvent_FWDDECL)
#include <Modloader/app/structs/MoonTelemetryClientHeartbeatEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetryClientHeartbeatEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
