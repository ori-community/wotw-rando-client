#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteamTelemetry_StringData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteamTelemetry_StringData_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamTelemetry_StringData_DEFINED)
#include <Modloader/app/structs/SteamTelemetry_StringData__Fields.h>
#if defined(IL2CPP_STRUCT_SteamTelemetry_StringData__Fields_DEFINED)
#define IL2CPP_STRUCT_SteamTelemetry_StringData_DEFINED
struct SteamTelemetry_StringData__Class;
struct SteamTelemetry_StringData {
    struct SteamTelemetry_StringData__Class* klass;
    MonitorData* monitor;
    struct SteamTelemetry_StringData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SteamTelemetry_StringData_FWDDECL)
#define IL2CPP_STRUCT_SteamTelemetry_StringData_FWDDECL
#include <Modloader/app/structs/SteamTelemetry_StringData__Class.h>
#endif
#undef IL2CPP_STRUCT_SteamTelemetry_StringData_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamTelemetry_StringData_DEFINED) && !defined(IL2CPP_STRUCT_SteamTelemetry_StringData_FWDDECL)
#include <Modloader/app/structs/SteamTelemetry_StringData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteamTelemetry_StringData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
