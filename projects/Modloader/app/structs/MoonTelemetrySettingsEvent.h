#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetrySettingsEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetrySettingsEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetrySettingsEvent_DEFINED)
#include <Modloader/app/structs/MoonTelemetrySettingsEvent__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTelemetrySettingsEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetrySettingsEvent_DEFINED
struct MoonTelemetrySettingsEvent__Class;
struct MoonTelemetrySettingsEvent {
    struct MoonTelemetrySettingsEvent__Class* klass;
    MonitorData* monitor;
    struct MoonTelemetrySettingsEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetrySettingsEvent_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetrySettingsEvent_FWDDECL
#include <Modloader/app/structs/MoonTelemetrySettingsEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetrySettingsEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetrySettingsEvent_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetrySettingsEvent_FWDDECL)
#include <Modloader/app/structs/MoonTelemetrySettingsEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetrySettingsEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
