#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetry_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetry_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetry_DEFINED
struct MoonTelemetry__Class;
struct MoonTelemetry {
    struct MoonTelemetry__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetry_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetry_FWDDECL
#include <Modloader/app/structs/MoonTelemetry__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetry_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetry_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetry_FWDDECL)
#include <Modloader/app/structs/MoonTelemetry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
