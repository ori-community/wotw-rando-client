#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteamTelemetry_Data__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteamTelemetry_Data__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamTelemetry_Data__Fields_DEFINED)
#include <Modloader/app/structs/TelemetryEvent__Enum.h>
#if defined(IL2CPP_STRUCT_TelemetryEvent__Enum_DEFINED)
#define IL2CPP_STRUCT_SteamTelemetry_Data__Fields_DEFINED
struct String;
struct __declspec(align(8)) SteamTelemetry_Data__Fields {
    int32_t Version;
    TelemetryEvent__Enum EventId;

    struct String* ExtraData;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SteamTelemetry_Data__Fields_FWDDECL)
#define IL2CPP_STRUCT_SteamTelemetry_Data__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SteamTelemetry_Data__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamTelemetry_Data__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SteamTelemetry_Data__Fields_FWDDECL)
#include <Modloader/app/structs/SteamTelemetry_Data__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteamTelemetry_Data__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
