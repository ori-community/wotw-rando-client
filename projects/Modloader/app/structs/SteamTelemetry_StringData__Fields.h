#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteamTelemetry_StringData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteamTelemetry_StringData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamTelemetry_StringData__Fields_DEFINED)
#include <Modloader/app/structs/SteamTelemetry_Data__Fields.h>
#if defined(IL2CPP_STRUCT_SteamTelemetry_Data__Fields_DEFINED)
#define IL2CPP_STRUCT_SteamTelemetry_StringData__Fields_DEFINED
struct String;
struct SteamTelemetry_StringData__Fields {
    struct SteamTelemetry_Data__Fields _;
    struct String* StringValue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SteamTelemetry_StringData__Fields_FWDDECL)
#define IL2CPP_STRUCT_SteamTelemetry_StringData__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SteamTelemetry_StringData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamTelemetry_StringData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SteamTelemetry_StringData__Fields_FWDDECL)
#include <Modloader/app/structs/SteamTelemetry_StringData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteamTelemetry_StringData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
