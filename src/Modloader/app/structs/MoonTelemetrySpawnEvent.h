#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetrySpawnEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetrySpawnEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetrySpawnEvent_DEFINED)
#include <Modloader/app/structs/MoonTelemetrySpawnEvent__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTelemetrySpawnEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetrySpawnEvent_DEFINED
struct MoonTelemetrySpawnEvent__Class;
struct MoonTelemetrySpawnEvent {
    struct MoonTelemetrySpawnEvent__Class* klass;
    MonitorData* monitor;
    struct MoonTelemetrySpawnEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetrySpawnEvent_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetrySpawnEvent_FWDDECL
#include <Modloader/app/structs/MoonTelemetrySpawnEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetrySpawnEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetrySpawnEvent_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetrySpawnEvent_FWDDECL)
#include <Modloader/app/structs/MoonTelemetrySpawnEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetrySpawnEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
