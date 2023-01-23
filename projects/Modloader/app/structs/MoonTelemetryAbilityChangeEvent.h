#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetryAbilityChangeEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetryAbilityChangeEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryAbilityChangeEvent_DEFINED)
#include <Modloader/app/structs/MoonTelemetryAbilityChangeEvent__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTelemetryAbilityChangeEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetryAbilityChangeEvent_DEFINED
struct MoonTelemetryAbilityChangeEvent__Class;
struct MoonTelemetryAbilityChangeEvent {
    struct MoonTelemetryAbilityChangeEvent__Class* klass;
    MonitorData* monitor;
    struct MoonTelemetryAbilityChangeEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetryAbilityChangeEvent_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetryAbilityChangeEvent_FWDDECL
#include <Modloader/app/structs/MoonTelemetryAbilityChangeEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetryAbilityChangeEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryAbilityChangeEvent_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetryAbilityChangeEvent_FWDDECL)
#include <Modloader/app/structs/MoonTelemetryAbilityChangeEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetryAbilityChangeEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
