#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameConnectedChatJoin_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameConnectedChatJoin_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameConnectedChatJoin_t_DEFINED)
#include <Modloader/app/structs/CSteamID.h>
#if defined(IL2CPP_STRUCT_CSteamID_DEFINED)
#define IL2CPP_STRUCT_GameConnectedChatJoin_t_DEFINED
struct GameConnectedChatJoin_t {
    struct CSteamID m_steamIDClanChat;
    struct CSteamID m_steamIDUser;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameConnectedChatJoin_t_FWDDECL)
#define IL2CPP_STRUCT_GameConnectedChatJoin_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_GameConnectedChatJoin_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameConnectedChatJoin_t_DEFINED) && !defined(IL2CPP_STRUCT_GameConnectedChatJoin_t_FWDDECL)
#include <Modloader/app/structs/GameConnectedChatJoin_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameConnectedChatJoin_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
