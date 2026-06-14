#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetryLogger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetryLogger_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryLogger_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetryLogger_DEFINED
struct MoonTelemetryLogger__Class;
struct MoonTelemetryLogger {
    struct MoonTelemetryLogger__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetryLogger_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetryLogger_FWDDECL
#include <Modloader/app/structs/MoonTelemetryLogger__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetryLogger_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryLogger_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetryLogger_FWDDECL)
#include <Modloader/app/structs/MoonTelemetryLogger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetryLogger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
