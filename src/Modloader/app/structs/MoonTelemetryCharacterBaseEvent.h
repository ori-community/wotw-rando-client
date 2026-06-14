#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetryCharacterBaseEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetryCharacterBaseEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryCharacterBaseEvent_DEFINED)
#include <Modloader/app/structs/MoonTelemetryCharacterBaseEvent__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTelemetryCharacterBaseEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetryCharacterBaseEvent_DEFINED
struct MoonTelemetryCharacterBaseEvent__Class;
struct MoonTelemetryCharacterBaseEvent {
    struct MoonTelemetryCharacterBaseEvent__Class* klass;
    MonitorData* monitor;
    struct MoonTelemetryCharacterBaseEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetryCharacterBaseEvent_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetryCharacterBaseEvent_FWDDECL
#include <Modloader/app/structs/MoonTelemetryCharacterBaseEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetryCharacterBaseEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryCharacterBaseEvent_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetryCharacterBaseEvent_FWDDECL)
#include <Modloader/app/structs/MoonTelemetryCharacterBaseEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetryCharacterBaseEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
