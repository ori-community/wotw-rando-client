#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteamTelemetry_Data_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteamTelemetry_Data_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamTelemetry_Data_DEFINED)
#include <Modloader/app/structs/SteamTelemetry_Data__Fields.h>
#if defined(IL2CPP_STRUCT_SteamTelemetry_Data__Fields_DEFINED)
#define IL2CPP_STRUCT_SteamTelemetry_Data_DEFINED
struct SteamTelemetry_Data__Class;
struct SteamTelemetry_Data {
    struct SteamTelemetry_Data__Class* klass;
    MonitorData* monitor;
    struct SteamTelemetry_Data__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SteamTelemetry_Data_FWDDECL)
#define IL2CPP_STRUCT_SteamTelemetry_Data_FWDDECL
#include <Modloader/app/structs/SteamTelemetry_Data__Class.h>
#endif
#undef IL2CPP_STRUCT_SteamTelemetry_Data_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamTelemetry_Data_DEFINED) && !defined(IL2CPP_STRUCT_SteamTelemetry_Data_FWDDECL)
#include <Modloader/app/structs/SteamTelemetry_Data.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteamTelemetry_Data.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
