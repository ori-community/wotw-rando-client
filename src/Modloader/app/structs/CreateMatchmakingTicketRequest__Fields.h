#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CreateMatchmakingTicketRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CreateMatchmakingTicketRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateMatchmakingTicketRequest__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_CreateMatchmakingTicketRequest__Fields_DEFINED
struct MatchmakingPlayer;
struct List_1_PlayFab_MultiplayerModels_EntityKey_;
struct String;
struct CreateMatchmakingTicketRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct MatchmakingPlayer* Creator;
    int32_t GiveUpAfterSeconds;
    struct List_1_PlayFab_MultiplayerModels_EntityKey_* MembersToMatchWith;
    struct String* QueueName;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CreateMatchmakingTicketRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_CreateMatchmakingTicketRequest__Fields_FWDDECL
#include <Modloader/app/structs/List_1_PlayFab_MultiplayerModels_EntityKey_.h>
#include <Modloader/app/structs/MatchmakingPlayer.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CreateMatchmakingTicketRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateMatchmakingTicketRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CreateMatchmakingTicketRequest__Fields_FWDDECL)
#include <Modloader/app/structs/CreateMatchmakingTicketRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CreateMatchmakingTicketRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
