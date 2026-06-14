#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RequestPlayersForGameResultCallback_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RequestPlayersForGameResultCallback_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequestPlayersForGameResultCallback_t_DEFINED)
#include <Modloader/app/structs/CSteamID.h>
#include <Modloader/app/structs/EResult__Enum.h>
#include <Modloader/app/structs/PlayerAcceptState_t__Enum.h>
#if defined(IL2CPP_STRUCT_EResult__Enum_DEFINED) && defined(IL2CPP_STRUCT_CSteamID_DEFINED) && defined(IL2CPP_STRUCT_PlayerAcceptState_t__Enum_DEFINED)
#define IL2CPP_STRUCT_RequestPlayersForGameResultCallback_t_DEFINED
struct RequestPlayersForGameResultCallback_t {
    EResult__Enum m_eResult;

    uint64_t m_ullSearchID;
    struct CSteamID m_SteamIDPlayerFound;
    struct CSteamID m_SteamIDLobby;
    PlayerAcceptState_t__Enum m_ePlayerAcceptState;

    int32_t m_nPlayerIndex;
    int32_t m_nTotalPlayersFound;
    int32_t m_nTotalPlayersAcceptedGame;
    int32_t m_nSuggestedTeamIndex;
    uint64_t m_ullUniqueGameID;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RequestPlayersForGameResultCallback_t_FWDDECL)
#define IL2CPP_STRUCT_RequestPlayersForGameResultCallback_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_RequestPlayersForGameResultCallback_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequestPlayersForGameResultCallback_t_DEFINED) && !defined(IL2CPP_STRUCT_RequestPlayersForGameResultCallback_t_FWDDECL)
#include <Modloader/app/structs/RequestPlayersForGameResultCallback_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RequestPlayersForGameResultCallback_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
