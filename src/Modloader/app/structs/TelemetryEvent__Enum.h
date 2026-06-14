#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TelemetryEvent__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TelemetryEvent__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TelemetryEvent__Enum_DEFINED)
#define IL2CPP_STRUCT_TelemetryEvent__Enum_DEFINED
enum class TelemetryEvent__Enum : int32_t {
    Test = 0x00002328,
    Death = 0x00002329,
    Achievement = 0x0000232a,
    AchievementData = 0x0000232b,
    User = 0x0000232c,
    ViewUnlockFullTitle = 0x0000232d,
    ReachedEndOfDemo = 0x0000232e,
};
#endif
#if !defined(IL2CPP_STRUCT_TelemetryEvent__Enum_FWDDECL)
#define IL2CPP_STRUCT_TelemetryEvent__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_TelemetryEvent__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TelemetryEvent__Enum_DEFINED) && !defined(IL2CPP_STRUCT_TelemetryEvent__Enum_FWDDECL)
#include <Modloader/app/structs/TelemetryEvent__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TelemetryEvent__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
