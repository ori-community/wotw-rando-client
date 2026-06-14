#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LobbyEnter_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LobbyEnter_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_LobbyEnter_t_DEFINED)
#define IL2CPP_STRUCT_LobbyEnter_t_DEFINED
struct LobbyEnter_t {
    uint64_t m_ulSteamIDLobby;
    uint32_t m_rgfChatPermissions;
    bool m_bLocked;
    uint32_t m_EChatRoomEnterResponse;
};
#endif
#if !defined(IL2CPP_STRUCT_LobbyEnter_t_FWDDECL)
#define IL2CPP_STRUCT_LobbyEnter_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_LobbyEnter_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_LobbyEnter_t_DEFINED) && !defined(IL2CPP_STRUCT_LobbyEnter_t_FWDDECL)
#include <Modloader/app/structs/LobbyEnter_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LobbyEnter_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
