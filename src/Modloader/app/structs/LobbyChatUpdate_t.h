#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LobbyChatUpdate_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LobbyChatUpdate_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_LobbyChatUpdate_t_DEFINED)
#define IL2CPP_STRUCT_LobbyChatUpdate_t_DEFINED
struct LobbyChatUpdate_t {
    uint64_t m_ulSteamIDLobby;
    uint64_t m_ulSteamIDUserChanged;
    uint64_t m_ulSteamIDMakingChange;
    uint32_t m_rgfChatMemberStateChange;
};
#endif
#if !defined(IL2CPP_STRUCT_LobbyChatUpdate_t_FWDDECL)
#define IL2CPP_STRUCT_LobbyChatUpdate_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_LobbyChatUpdate_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_LobbyChatUpdate_t_DEFINED) && !defined(IL2CPP_STRUCT_LobbyChatUpdate_t_FWDDECL)
#include <Modloader/app/structs/LobbyChatUpdate_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LobbyChatUpdate_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
