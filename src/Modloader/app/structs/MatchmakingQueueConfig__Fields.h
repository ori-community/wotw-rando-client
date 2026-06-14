#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MatchmakingQueueConfig__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MatchmakingQueueConfig__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingQueueConfig__Fields_DEFINED)
#define IL2CPP_STRUCT_MatchmakingQueueConfig__Fields_DEFINED
struct String;
struct List_1_PlayFab_MultiplayerModels_MatchmakingQueueRule_;
struct StatisticsVisibilityToPlayers;
struct List_1_PlayFab_MultiplayerModels_MatchmakingQueueTeam_;
struct __declspec(align(8)) MatchmakingQueueConfig__Fields {
    struct String* BuildId;
    uint32_t MaxMatchSize;
    uint32_t MinMatchSize;
    struct String* Name;
    struct List_1_PlayFab_MultiplayerModels_MatchmakingQueueRule_* Rules;
    bool ServerAllocationEnabled;
    struct StatisticsVisibilityToPlayers* StatisticsVisibilityToPlayers;
    struct List_1_PlayFab_MultiplayerModels_MatchmakingQueueTeam_* Teams;
};
#endif
#if !defined(IL2CPP_STRUCT_MatchmakingQueueConfig__Fields_FWDDECL)
#define IL2CPP_STRUCT_MatchmakingQueueConfig__Fields_FWDDECL
#include <Modloader/app/structs/List_1_PlayFab_MultiplayerModels_MatchmakingQueueRule_.h>
#include <Modloader/app/structs/List_1_PlayFab_MultiplayerModels_MatchmakingQueueTeam_.h>
#include <Modloader/app/structs/StatisticsVisibilityToPlayers.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MatchmakingQueueConfig__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingQueueConfig__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MatchmakingQueueConfig__Fields_FWDDECL)
#include <Modloader/app/structs/MatchmakingQueueConfig__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MatchmakingQueueConfig__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
