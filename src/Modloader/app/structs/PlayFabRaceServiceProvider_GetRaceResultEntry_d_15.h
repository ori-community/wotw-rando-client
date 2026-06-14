#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabRaceServiceProvider_GetRaceResultEntry_d_15_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabRaceServiceProvider_GetRaceResultEntry_d_15_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabRaceServiceProvider_GetRaceResultEntry_d_15_DEFINED)
#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResultEntry_.h>
#include <Modloader/app/structs/LeaderboardFilter__Enum.h>
#include <Modloader/app/structs/RaceDataLeaderBoardType__Enum.h>
#include <Modloader/app/structs/TaskAwaiter_1_System_Byte_.h>
#if defined(IL2CPP_STRUCT_AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResultEntry__DEFINED) && defined(IL2CPP_STRUCT_RaceDataLeaderBoardType__Enum_DEFINED) && defined(IL2CPP_STRUCT_LeaderboardFilter__Enum_DEFINED) && defined(IL2CPP_STRUCT_TaskAwaiter_1_System_Byte__DEFINED)
#define IL2CPP_STRUCT_PlayFabRaceServiceProvider_GetRaceResultEntry_d_15_DEFINED
struct PlayFabRaceServiceProvider;
struct String;
struct PlayerProfileModel;
struct RaceDataCache;
struct PlayFabRaceServiceProvider_GetRaceResultEntry_d_15 {
    int32_t __1__state;
    struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResultEntry_ __t__builder;
    struct PlayFabRaceServiceProvider* __4__this;
    struct String* raceId;
    RaceDataLeaderBoardType__Enum type;

    LeaderboardFilter__Enum filter;

    struct String* displayName;
    struct PlayerProfileModel* profile;
    struct String* userId;
    int32_t score;
    int32_t position;
    struct RaceDataCache* _dataCache_5__2;
    struct TaskAwaiter_1_System_Byte_ __u__1;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabRaceServiceProvider_GetRaceResultEntry_d_15_FWDDECL)
#define IL2CPP_STRUCT_PlayFabRaceServiceProvider_GetRaceResultEntry_d_15_FWDDECL
#include <Modloader/app/structs/PlayFabRaceServiceProvider.h>
#include <Modloader/app/structs/PlayerProfileModel.h>
#include <Modloader/app/structs/RaceDataCache.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayFabRaceServiceProvider_GetRaceResultEntry_d_15_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabRaceServiceProvider_GetRaceResultEntry_d_15_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabRaceServiceProvider_GetRaceResultEntry_d_15_FWDDECL)
#include <Modloader/app/structs/PlayFabRaceServiceProvider_GetRaceResultEntry_d_15.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabRaceServiceProvider_GetRaceResultEntry_d_15.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
