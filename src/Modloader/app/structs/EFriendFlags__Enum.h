#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EFriendFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EFriendFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EFriendFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_EFriendFlags__Enum_DEFINED
enum class EFriendFlags__Enum : int32_t {
    k_EFriendFlagNone = 0x00000000,
    k_EFriendFlagBlocked = 0x00000001,
    k_EFriendFlagFriendshipRequested = 0x00000002,
    k_EFriendFlagImmediate = 0x00000004,
    k_EFriendFlagClanMember = 0x00000008,
    k_EFriendFlagOnGameServer = 0x00000010,
    k_EFriendFlagRequestingFriendship = 0x00000080,
    k_EFriendFlagRequestingInfo = 0x00000100,
    k_EFriendFlagIgnored = 0x00000200,
    k_EFriendFlagIgnoredFriend = 0x00000400,
    k_EFriendFlagChatMember = 0x00001000,
    k_EFriendFlagAll = 0x0000ffff,
};
#endif
#if !defined(IL2CPP_STRUCT_EFriendFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_EFriendFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EFriendFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EFriendFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EFriendFlags__Enum_FWDDECL)
#include <Modloader/app/structs/EFriendFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EFriendFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
