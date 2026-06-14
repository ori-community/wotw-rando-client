#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteamTelemetry_FloatData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteamTelemetry_FloatData_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamTelemetry_FloatData_DEFINED)
#include <Modloader/app/structs/SteamTelemetry_FloatData__Fields.h>
#if defined(IL2CPP_STRUCT_SteamTelemetry_FloatData__Fields_DEFINED)
#define IL2CPP_STRUCT_SteamTelemetry_FloatData_DEFINED
struct SteamTelemetry_FloatData__Class;
struct SteamTelemetry_FloatData {
    struct SteamTelemetry_FloatData__Class* klass;
    MonitorData* monitor;
    struct SteamTelemetry_FloatData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SteamTelemetry_FloatData_FWDDECL)
#define IL2CPP_STRUCT_SteamTelemetry_FloatData_FWDDECL
#include <Modloader/app/structs/SteamTelemetry_FloatData__Class.h>
#endif
#undef IL2CPP_STRUCT_SteamTelemetry_FloatData_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamTelemetry_FloatData_DEFINED) && !defined(IL2CPP_STRUCT_SteamTelemetry_FloatData_FWDDECL)
#include <Modloader/app/structs/SteamTelemetry_FloatData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteamTelemetry_FloatData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
