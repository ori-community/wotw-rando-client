#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISteamMatchmakingPlayersResponse__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISteamMatchmakingPlayersResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISteamMatchmakingPlayersResponse__Fields_DEFINED)
#include <Modloader/app/structs/GCHandle.h>
#if defined(IL2CPP_STRUCT_GCHandle_DEFINED)
#define IL2CPP_STRUCT_ISteamMatchmakingPlayersResponse__Fields_DEFINED
struct ISteamMatchmakingPlayersResponse_VTable;
struct ISteamMatchmakingPlayersResponse_AddPlayerToList;
struct ISteamMatchmakingPlayersResponse_PlayersFailedToRespond;
struct ISteamMatchmakingPlayersResponse_PlayersRefreshComplete;
struct __declspec(align(8)) ISteamMatchmakingPlayersResponse__Fields {
    struct ISteamMatchmakingPlayersResponse_VTable* m_VTable;
    void* m_pVTable;
    struct GCHandle m_pGCHandle;
    struct ISteamMatchmakingPlayersResponse_AddPlayerToList* m_AddPlayerToList;
    struct ISteamMatchmakingPlayersResponse_PlayersFailedToRespond* m_PlayersFailedToRespond;
    struct ISteamMatchmakingPlayersResponse_PlayersRefreshComplete* m_PlayersRefreshComplete;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ISteamMatchmakingPlayersResponse__Fields_FWDDECL)
#define IL2CPP_STRUCT_ISteamMatchmakingPlayersResponse__Fields_FWDDECL
#include <Modloader/app/structs/ISteamMatchmakingPlayersResponse_AddPlayerToList.h>
#include <Modloader/app/structs/ISteamMatchmakingPlayersResponse_PlayersFailedToRespond.h>
#include <Modloader/app/structs/ISteamMatchmakingPlayersResponse_PlayersRefreshComplete.h>
#include <Modloader/app/structs/ISteamMatchmakingPlayersResponse_VTable.h>
#endif
#undef IL2CPP_STRUCT_ISteamMatchmakingPlayersResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISteamMatchmakingPlayersResponse__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ISteamMatchmakingPlayersResponse__Fields_FWDDECL)
#include <Modloader/app/structs/ISteamMatchmakingPlayersResponse__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISteamMatchmakingPlayersResponse__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
