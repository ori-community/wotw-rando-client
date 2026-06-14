#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TelemetryCleanupEvents__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TelemetryCleanupEvents__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TelemetryCleanupEvents__Enum_DEFINED)
#define IL2CPP_STRUCT_TelemetryCleanupEvents__Enum_DEFINED
enum class TelemetryCleanupEvents__Enum : int32_t {
    Cleanup = 0x0000000a,
    Fader = 0x0000000b,
    Gc = 0x0000000c,
    GcAuto = 0x0000000d,
    GcDebug = 0x0000000e,
    GcFader = 0x0000000f,
    GcProactive = 0x00000010,
    HeapGrow = 0x00000011,
    Menu = 0x00000012,
    Panic = 0x00000013,
    PanicHint = 0x00000014,
};
#endif
#if !defined(IL2CPP_STRUCT_TelemetryCleanupEvents__Enum_FWDDECL)
#define IL2CPP_STRUCT_TelemetryCleanupEvents__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_TelemetryCleanupEvents__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TelemetryCleanupEvents__Enum_DEFINED) && !defined(IL2CPP_STRUCT_TelemetryCleanupEvents__Enum_FWDDECL)
#include <Modloader/app/structs/TelemetryCleanupEvents__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TelemetryCleanupEvents__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
