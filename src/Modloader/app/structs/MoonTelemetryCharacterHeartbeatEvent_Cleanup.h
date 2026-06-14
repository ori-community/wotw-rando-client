#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetryCharacterHeartbeatEvent_Cleanup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetryCharacterHeartbeatEvent_Cleanup_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryCharacterHeartbeatEvent_Cleanup_DEFINED)
#include <Modloader/app/structs/TelemetryCleanupEvents__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_TelemetryCleanupEvents__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetryCharacterHeartbeatEvent_Cleanup_DEFINED
struct String;
struct MoonTelemetryCharacterHeartbeatEvent_Cleanup {
    TelemetryCleanupEvents__Enum Event;

    struct Vector2 Position;
    struct String* SceneName;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetryCharacterHeartbeatEvent_Cleanup_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetryCharacterHeartbeatEvent_Cleanup_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetryCharacterHeartbeatEvent_Cleanup_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryCharacterHeartbeatEvent_Cleanup_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetryCharacterHeartbeatEvent_Cleanup_FWDDECL)
#include <Modloader/app/structs/MoonTelemetryCharacterHeartbeatEvent_Cleanup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetryCharacterHeartbeatEvent_Cleanup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
