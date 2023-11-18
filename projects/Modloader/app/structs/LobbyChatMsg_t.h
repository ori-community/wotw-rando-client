#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LobbyChatMsg_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LobbyChatMsg_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_LobbyChatMsg_t_DEFINED)
#define IL2CPP_STRUCT_LobbyChatMsg_t_DEFINED
struct LobbyChatMsg_t {
    uint64_t m_ulSteamIDLobby;
    uint64_t m_ulSteamIDUser;
    uint8_t m_eChatEntryType;
    uint32_t m_iChatID;
};
#endif
#if !defined(IL2CPP_STRUCT_LobbyChatMsg_t_FWDDECL)
#define IL2CPP_STRUCT_LobbyChatMsg_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_LobbyChatMsg_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_LobbyChatMsg_t_DEFINED) && !defined(IL2CPP_STRUCT_LobbyChatMsg_t_FWDDECL)
#include <Modloader/app/structs/LobbyChatMsg_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LobbyChatMsg_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
