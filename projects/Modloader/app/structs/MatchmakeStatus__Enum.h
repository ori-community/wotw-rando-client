#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MatchmakeStatus__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MatchmakeStatus__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakeStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_MatchmakeStatus__Enum_DEFINED
enum class MatchmakeStatus__Enum : int32_t {
    Complete = 0x00000000,
    Waiting = 0x00000001,
    GameNotFound = 0x00000002,
    NoAvailableSlots = 0x00000003,
    SessionClosed = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_MatchmakeStatus__Enum_FWDDECL)
#define IL2CPP_STRUCT_MatchmakeStatus__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_MatchmakeStatus__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakeStatus__Enum_DEFINED) && !defined(IL2CPP_STRUCT_MatchmakeStatus__Enum_FWDDECL)
#include <Modloader/app/structs/MatchmakeStatus__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MatchmakeStatus__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
