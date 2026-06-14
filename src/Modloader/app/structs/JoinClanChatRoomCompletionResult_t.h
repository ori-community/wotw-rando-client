#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JoinClanChatRoomCompletionResult_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JoinClanChatRoomCompletionResult_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_JoinClanChatRoomCompletionResult_t_DEFINED)
#include <Modloader/app/structs/CSteamID.h>
#include <Modloader/app/structs/EChatRoomEnterResponse__Enum.h>
#if defined(IL2CPP_STRUCT_CSteamID_DEFINED) && defined(IL2CPP_STRUCT_EChatRoomEnterResponse__Enum_DEFINED)
#define IL2CPP_STRUCT_JoinClanChatRoomCompletionResult_t_DEFINED
struct JoinClanChatRoomCompletionResult_t {
    struct CSteamID m_steamIDClanChat;
    EChatRoomEnterResponse__Enum m_eChatRoomEnterResponse;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JoinClanChatRoomCompletionResult_t_FWDDECL)
#define IL2CPP_STRUCT_JoinClanChatRoomCompletionResult_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_JoinClanChatRoomCompletionResult_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_JoinClanChatRoomCompletionResult_t_DEFINED) && !defined(IL2CPP_STRUCT_JoinClanChatRoomCompletionResult_t_FWDDECL)
#include <Modloader/app/structs/JoinClanChatRoomCompletionResult_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JoinClanChatRoomCompletionResult_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
