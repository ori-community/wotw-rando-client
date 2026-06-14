#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CreateServerMatchmakingTicketRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CreateServerMatchmakingTicketRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateServerMatchmakingTicketRequest__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_CreateServerMatchmakingTicketRequest__Fields_DEFINED
struct List_1_PlayFab_MultiplayerModels_MatchmakingPlayer_;
struct String;
struct CreateServerMatchmakingTicketRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    int32_t GiveUpAfterSeconds;
    struct List_1_PlayFab_MultiplayerModels_MatchmakingPlayer_* Members;
    struct String* QueueName;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CreateServerMatchmakingTicketRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_CreateServerMatchmakingTicketRequest__Fields_FWDDECL
#include <Modloader/app/structs/List_1_PlayFab_MultiplayerModels_MatchmakingPlayer_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CreateServerMatchmakingTicketRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateServerMatchmakingTicketRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CreateServerMatchmakingTicketRequest__Fields_FWDDECL)
#include <Modloader/app/structs/CreateServerMatchmakingTicketRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CreateServerMatchmakingTicketRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
