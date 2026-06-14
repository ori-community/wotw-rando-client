#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EChatSteamIDInstanceFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EChatSteamIDInstanceFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EChatSteamIDInstanceFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_EChatSteamIDInstanceFlags__Enum_DEFINED
enum class EChatSteamIDInstanceFlags__Enum : int32_t {
    k_EChatAccountInstanceMask = 0x00000fff,
    k_EChatInstanceFlagClan = 0x00080000,
    k_EChatInstanceFlagLobby = 0x00040000,
    k_EChatInstanceFlagMMSLobby = 0x00020000,
};
#endif
#if !defined(IL2CPP_STRUCT_EChatSteamIDInstanceFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_EChatSteamIDInstanceFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EChatSteamIDInstanceFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EChatSteamIDInstanceFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EChatSteamIDInstanceFlags__Enum_FWDDECL)
#include <Modloader/app/structs/EChatSteamIDInstanceFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EChatSteamIDInstanceFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
