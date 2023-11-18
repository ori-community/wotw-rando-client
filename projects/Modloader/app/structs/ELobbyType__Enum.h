#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ELobbyType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ELobbyType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ELobbyType__Enum_DEFINED)
#define IL2CPP_STRUCT_ELobbyType__Enum_DEFINED
enum class ELobbyType__Enum : int32_t {
    k_ELobbyTypePrivate = 0x00000000,
    k_ELobbyTypeFriendsOnly = 0x00000001,
    k_ELobbyTypePublic = 0x00000002,
    k_ELobbyTypeInvisible = 0x00000003,
    k_ELobbyTypePrivateUnique = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_ELobbyType__Enum_FWDDECL)
#define IL2CPP_STRUCT_ELobbyType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ELobbyType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ELobbyType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ELobbyType__Enum_FWDDECL)
#include <Modloader/app/structs/ELobbyType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ELobbyType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
