#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameConnectedChatLeave_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameConnectedChatLeave_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameConnectedChatLeave_t_DEFINED)
#include <Modloader/app/structs/CSteamID.h>
#if defined(IL2CPP_STRUCT_CSteamID_DEFINED)
#define IL2CPP_STRUCT_GameConnectedChatLeave_t_DEFINED
struct GameConnectedChatLeave_t {
    struct CSteamID m_steamIDClanChat;
    struct CSteamID m_steamIDUser;
    bool m_bKicked;
    bool m_bDropped;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameConnectedChatLeave_t_FWDDECL)
#define IL2CPP_STRUCT_GameConnectedChatLeave_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_GameConnectedChatLeave_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameConnectedChatLeave_t_DEFINED) && !defined(IL2CPP_STRUCT_GameConnectedChatLeave_t_FWDDECL)
#include <Modloader/app/structs/GameConnectedChatLeave_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameConnectedChatLeave_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
