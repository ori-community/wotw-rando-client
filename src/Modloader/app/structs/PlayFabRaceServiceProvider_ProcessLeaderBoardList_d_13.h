#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13_DEFINED)
#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult_.h>
#include <Modloader/app/structs/LeaderboardFilter__Enum.h>
#include <Modloader/app/structs/RaceDataLeaderBoardType__Enum.h>
#include <Modloader/app/structs/TaskAwaiter_1_SystemIntegration_Races_RaceRequestResultEntry_.h>
#if defined(IL2CPP_STRUCT_AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult__DEFINED) && defined(IL2CPP_STRUCT_RaceDataLeaderBoardType__Enum_DEFINED) && defined(IL2CPP_STRUCT_LeaderboardFilter__Enum_DEFINED) && defined(IL2CPP_STRUCT_TaskAwaiter_1_SystemIntegration_Races_RaceRequestResultEntry__DEFINED)
#define IL2CPP_STRUCT_PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13_DEFINED
struct RaceDataCache;
struct List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_;
struct PlayFabRaceServiceProvider;
struct String;
struct RaceRequestResult;
struct PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13 {
    int32_t __1__state;
    struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult_ __t__builder;
    struct RaceDataCache* dataCache;
    struct List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_* list;
    struct PlayFabRaceServiceProvider* __4__this;
    struct String* raceId;
    RaceDataLeaderBoardType__Enum type;

    LeaderboardFilter__Enum filter;

    struct RaceRequestResult* _resultantData_5__2;
    struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResultEntry_ __u__1;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13_FWDDECL)
#define IL2CPP_STRUCT_PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13_FWDDECL
#include <Modloader/app/structs/List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_.h>
#include <Modloader/app/structs/PlayFabRaceServiceProvider.h>
#include <Modloader/app/structs/RaceDataCache.h>
#include <Modloader/app/structs/RaceRequestResult.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13_FWDDECL)
#include <Modloader/app/structs/PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
