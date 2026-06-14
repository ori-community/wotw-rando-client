#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetMatchmakingTicketResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetMatchmakingTicketResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetMatchmakingTicketResult__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Nullable_1_PlayFab_MultiplayerModels_CancellationReason_.h>
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_MultiplayerModels_CancellationReason__DEFINED) && defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_GetMatchmakingTicketResult__Fields_DEFINED
struct EntityKey_6;
struct String;
struct List_1_PlayFab_MultiplayerModels_MatchmakingPlayer_;
struct List_1_PlayFab_MultiplayerModels_EntityKey_;
struct GetMatchmakingTicketResult__Fields {
    struct PlayFabResultCommon__Fields _;
    struct Nullable_1_PlayFab_MultiplayerModels_CancellationReason_ CancellationReason;
    struct DateTime Created;
    struct EntityKey_6* Creator;
    int32_t GiveUpAfterSeconds;
    struct String* MatchId;
    struct List_1_PlayFab_MultiplayerModels_MatchmakingPlayer_* Members;
    struct List_1_PlayFab_MultiplayerModels_EntityKey_* MembersToMatchWith;
    struct String* QueueName;
    struct String* Status;
    struct String* TicketId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetMatchmakingTicketResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_GetMatchmakingTicketResult__Fields_FWDDECL
#include <Modloader/app/structs/EntityKey_6.h>
#include <Modloader/app/structs/List_1_PlayFab_MultiplayerModels_EntityKey_.h>
#include <Modloader/app/structs/List_1_PlayFab_MultiplayerModels_MatchmakingPlayer_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GetMatchmakingTicketResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetMatchmakingTicketResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GetMatchmakingTicketResult__Fields_FWDDECL)
#include <Modloader/app/structs/GetMatchmakingTicketResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetMatchmakingTicketResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
