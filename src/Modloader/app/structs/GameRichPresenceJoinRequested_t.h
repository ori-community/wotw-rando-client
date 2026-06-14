#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameRichPresenceJoinRequested_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameRichPresenceJoinRequested_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameRichPresenceJoinRequested_t_DEFINED)
#include <Modloader/app/structs/CSteamID.h>
#if defined(IL2CPP_STRUCT_CSteamID_DEFINED)
#define IL2CPP_STRUCT_GameRichPresenceJoinRequested_t_DEFINED
struct String;
struct GameRichPresenceJoinRequested_t {
    struct CSteamID m_steamIDFriend;
    struct String* m_rgchConnect;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameRichPresenceJoinRequested_t_FWDDECL)
#define IL2CPP_STRUCT_GameRichPresenceJoinRequested_t_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GameRichPresenceJoinRequested_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameRichPresenceJoinRequested_t_DEFINED) && !defined(IL2CPP_STRUCT_GameRichPresenceJoinRequested_t_FWDDECL)
#include <Modloader/app/structs/GameRichPresenceJoinRequested_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameRichPresenceJoinRequested_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
