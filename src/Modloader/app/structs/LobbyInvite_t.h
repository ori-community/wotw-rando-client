#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LobbyInvite_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LobbyInvite_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_LobbyInvite_t_DEFINED)
#define IL2CPP_STRUCT_LobbyInvite_t_DEFINED
struct LobbyInvite_t {
    uint64_t m_ulSteamIDUser;
    uint64_t m_ulSteamIDLobby;
    uint64_t m_ulGameID;
};
#endif
#if !defined(IL2CPP_STRUCT_LobbyInvite_t_FWDDECL)
#define IL2CPP_STRUCT_LobbyInvite_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_LobbyInvite_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_LobbyInvite_t_DEFINED) && !defined(IL2CPP_STRUCT_LobbyInvite_t_FWDDECL)
#include <Modloader/app/structs/LobbyInvite_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LobbyInvite_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
