#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteamTelemetry_IntData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteamTelemetry_IntData_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamTelemetry_IntData_DEFINED)
#include <Modloader/app/structs/SteamTelemetry_IntData__Fields.h>
#if defined(IL2CPP_STRUCT_SteamTelemetry_IntData__Fields_DEFINED)
#define IL2CPP_STRUCT_SteamTelemetry_IntData_DEFINED
struct SteamTelemetry_IntData__Class;
struct SteamTelemetry_IntData {
    struct SteamTelemetry_IntData__Class* klass;
    MonitorData* monitor;
    struct SteamTelemetry_IntData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SteamTelemetry_IntData_FWDDECL)
#define IL2CPP_STRUCT_SteamTelemetry_IntData_FWDDECL
#include <Modloader/app/structs/SteamTelemetry_IntData__Class.h>
#endif
#undef IL2CPP_STRUCT_SteamTelemetry_IntData_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamTelemetry_IntData_DEFINED) && !defined(IL2CPP_STRUCT_SteamTelemetry_IntData_FWDDECL)
#include <Modloader/app/structs/SteamTelemetry_IntData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteamTelemetry_IntData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
