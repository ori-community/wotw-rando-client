#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetry_State__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetry_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetry_State__Enum_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetry_State__Enum_DEFINED
enum class MoonTelemetry_State__Enum : int32_t {
    INIT = 0x00000000,
    POSTING = 0x00000001,
    BATCHING = 0x00000002,
    SENDING = 0x00000003,
    TIMEOUT = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetry_State__Enum_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetry_State__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_MoonTelemetry_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetry_State__Enum_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetry_State__Enum_FWDDECL)
#include <Modloader/app/structs/MoonTelemetry_State__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetry_State__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
