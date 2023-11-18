#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetryCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetryCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryCallback_DEFINED)
#include <Modloader/app/structs/MoonTelemetryCallback__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTelemetryCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetryCallback_DEFINED
struct MoonTelemetryCallback__Class;
struct MoonTelemetryCallback {
    struct MoonTelemetryCallback__Class* klass;
    MonitorData* monitor;
    struct MoonTelemetryCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetryCallback_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetryCallback_FWDDECL
#include <Modloader/app/structs/MoonTelemetryCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetryCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryCallback_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetryCallback_FWDDECL)
#include <Modloader/app/structs/MoonTelemetryCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetryCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
