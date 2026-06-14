#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameLobbyJoinRequested_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameLobbyJoinRequested_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameLobbyJoinRequested_t_DEFINED)
#include <Modloader/app/structs/CSteamID.h>
#if defined(IL2CPP_STRUCT_CSteamID_DEFINED)
#define IL2CPP_STRUCT_GameLobbyJoinRequested_t_DEFINED
struct GameLobbyJoinRequested_t {
    struct CSteamID m_steamIDLobby;
    struct CSteamID m_steamIDFriend;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameLobbyJoinRequested_t_FWDDECL)
#define IL2CPP_STRUCT_GameLobbyJoinRequested_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_GameLobbyJoinRequested_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameLobbyJoinRequested_t_DEFINED) && !defined(IL2CPP_STRUCT_GameLobbyJoinRequested_t_FWDDECL)
#include <Modloader/app/structs/GameLobbyJoinRequested_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameLobbyJoinRequested_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
