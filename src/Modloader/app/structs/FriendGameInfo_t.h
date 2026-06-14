#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FriendGameInfo_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FriendGameInfo_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_FriendGameInfo_t_DEFINED)
#include <Modloader/app/structs/CGameID.h>
#include <Modloader/app/structs/CSteamID.h>
#if defined(IL2CPP_STRUCT_CGameID_DEFINED) && defined(IL2CPP_STRUCT_CSteamID_DEFINED)
#define IL2CPP_STRUCT_FriendGameInfo_t_DEFINED
struct FriendGameInfo_t {
    struct CGameID m_gameID;
    uint32_t m_unGameIP;
    uint16_t m_usGamePort;
    uint16_t m_usQueryPort;
    struct CSteamID m_steamIDLobby;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FriendGameInfo_t_FWDDECL)
#define IL2CPP_STRUCT_FriendGameInfo_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_FriendGameInfo_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_FriendGameInfo_t_DEFINED) && !defined(IL2CPP_STRUCT_FriendGameInfo_t_FWDDECL)
#include <Modloader/app/structs/FriendGameInfo_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FriendGameInfo_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
