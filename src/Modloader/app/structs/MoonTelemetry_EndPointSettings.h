#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetry_EndPointSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetry_EndPointSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetry_EndPointSettings_DEFINED)
#include <Modloader/app/structs/MoonTelemetry_EndPointSettings__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTelemetry_EndPointSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetry_EndPointSettings_DEFINED
struct MoonTelemetry_EndPointSettings__Class;
struct MoonTelemetry_EndPointSettings {
    struct MoonTelemetry_EndPointSettings__Class* klass;
    MonitorData* monitor;
    struct MoonTelemetry_EndPointSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetry_EndPointSettings_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetry_EndPointSettings_FWDDECL
#include <Modloader/app/structs/MoonTelemetry_EndPointSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetry_EndPointSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetry_EndPointSettings_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetry_EndPointSettings_FWDDECL)
#include <Modloader/app/structs/MoonTelemetry_EndPointSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetry_EndPointSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
