#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetry_MaelstromEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetry_MaelstromEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetry_MaelstromEvent_DEFINED)
#include <Modloader/app/structs/MoonTelemetry_MaelstromEvent__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTelemetry_MaelstromEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetry_MaelstromEvent_DEFINED
struct MoonTelemetry_MaelstromEvent__Class;
struct MoonTelemetry_MaelstromEvent {
    struct MoonTelemetry_MaelstromEvent__Class* klass;
    MonitorData* monitor;
    struct MoonTelemetry_MaelstromEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetry_MaelstromEvent_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetry_MaelstromEvent_FWDDECL
#include <Modloader/app/structs/MoonTelemetry_MaelstromEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetry_MaelstromEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetry_MaelstromEvent_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetry_MaelstromEvent_FWDDECL)
#include <Modloader/app/structs/MoonTelemetry_MaelstromEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetry_MaelstromEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
