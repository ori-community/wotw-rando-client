#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetryWebConfig_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetryWebConfig_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryWebConfig_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetryWebConfig_DEFINED
struct MoonTelemetryWebConfig__Class;
struct MoonTelemetryWebConfig {
    struct MoonTelemetryWebConfig__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetryWebConfig_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetryWebConfig_FWDDECL
#include <Modloader/app/structs/MoonTelemetryWebConfig__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetryWebConfig_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryWebConfig_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetryWebConfig_FWDDECL)
#include <Modloader/app/structs/MoonTelemetryWebConfig.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetryWebConfig.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
