#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteamTelemetry__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteamTelemetry__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamTelemetry__StaticFields_DEFINED)
#include <Modloader/app/structs/Guid.h>
#if defined(IL2CPP_STRUCT_Guid_DEFINED)
#define IL2CPP_STRUCT_SteamTelemetry__StaticFields_DEFINED
struct SteamTelemetry;
struct String;
struct Dictionary_2_System_String_System_String_;
struct SteamTelemetry__StaticFields {
    struct SteamTelemetry* Instance;
    struct Guid SessionGUID;
    struct String* BaseUrL;
    struct String* URL;
    int32_t sequenceId;
    struct Dictionary_2_System_String_System_String_* m_headers;
    double m_epochTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SteamTelemetry__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SteamTelemetry__StaticFields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/SteamTelemetry.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SteamTelemetry__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamTelemetry__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SteamTelemetry__StaticFields_FWDDECL)
#include <Modloader/app/structs/SteamTelemetry__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteamTelemetry__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
