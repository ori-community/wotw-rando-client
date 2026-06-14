#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetryClientBaseEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetryClientBaseEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryClientBaseEvent_DEFINED)
#include <Modloader/app/structs/MoonTelemetryClientBaseEvent__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTelemetryClientBaseEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetryClientBaseEvent_DEFINED
struct MoonTelemetryClientBaseEvent__Class;
struct MoonTelemetryClientBaseEvent {
    struct MoonTelemetryClientBaseEvent__Class* klass;
    MonitorData* monitor;
    struct MoonTelemetryClientBaseEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetryClientBaseEvent_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetryClientBaseEvent_FWDDECL
#include <Modloader/app/structs/MoonTelemetryClientBaseEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetryClientBaseEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryClientBaseEvent_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetryClientBaseEvent_FWDDECL)
#include <Modloader/app/structs/MoonTelemetryClientBaseEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetryClientBaseEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
