#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteamTelemetry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteamTelemetry_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamTelemetry_DEFINED)
#include <Modloader/app/structs/SteamTelemetry__Fields.h>
#if defined(IL2CPP_STRUCT_SteamTelemetry__Fields_DEFINED)
#define IL2CPP_STRUCT_SteamTelemetry_DEFINED
struct SteamTelemetry__Class;
struct SteamTelemetry {
    struct SteamTelemetry__Class* klass;
    MonitorData* monitor;
    struct SteamTelemetry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SteamTelemetry_FWDDECL)
#define IL2CPP_STRUCT_SteamTelemetry_FWDDECL
#include <Modloader/app/structs/SteamTelemetry__Class.h>
#endif
#undef IL2CPP_STRUCT_SteamTelemetry_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamTelemetry_DEFINED) && !defined(IL2CPP_STRUCT_SteamTelemetry_FWDDECL)
#include <Modloader/app/structs/SteamTelemetry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteamTelemetry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
