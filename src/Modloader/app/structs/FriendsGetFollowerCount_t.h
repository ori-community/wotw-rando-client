#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FriendsGetFollowerCount_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FriendsGetFollowerCount_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_FriendsGetFollowerCount_t_DEFINED)
#include <Modloader/app/structs/CSteamID.h>
#include <Modloader/app/structs/EResult__Enum.h>
#if defined(IL2CPP_STRUCT_EResult__Enum_DEFINED) && defined(IL2CPP_STRUCT_CSteamID_DEFINED)
#define IL2CPP_STRUCT_FriendsGetFollowerCount_t_DEFINED
struct FriendsGetFollowerCount_t {
    EResult__Enum m_eResult;

    struct CSteamID m_steamID;
    int32_t m_nCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FriendsGetFollowerCount_t_FWDDECL)
#define IL2CPP_STRUCT_FriendsGetFollowerCount_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_FriendsGetFollowerCount_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_FriendsGetFollowerCount_t_DEFINED) && !defined(IL2CPP_STRUCT_FriendsGetFollowerCount_t_FWDDECL)
#include <Modloader/app/structs/FriendsGetFollowerCount_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FriendsGetFollowerCount_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
