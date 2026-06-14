#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceStopReason__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceStopReason__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceStopReason__Enum_DEFINED)
#define IL2CPP_STRUCT_RaceStopReason__Enum_DEFINED
enum class RaceStopReason__Enum : int32_t {
    None = 0x00000000,
    Finished = 0x00000001,
    Timeout = 0x00000002,
    Death = 0x00000003,
    SpectatingFinished = 0x00000004,
    TechnicalFailure = 0x00000005,
    UserAction = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_RaceStopReason__Enum_FWDDECL)
#define IL2CPP_STRUCT_RaceStopReason__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_RaceStopReason__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceStopReason__Enum_DEFINED) && !defined(IL2CPP_STRUCT_RaceStopReason__Enum_FWDDECL)
#include <Modloader/app/structs/RaceStopReason__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceStopReason__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
