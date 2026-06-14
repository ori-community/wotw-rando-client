#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabRaceServiceProvider_GetRaceData_d_10_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabRaceServiceProvider_GetRaceData_d_10_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabRaceServiceProvider_GetRaceData_d_10_DEFINED)
#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult_.h>
#include <Modloader/app/structs/LeaderboardFilter__Enum.h>
#include <Modloader/app/structs/RaceDataLeaderBoardType__Enum.h>
#include <Modloader/app/structs/TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult_.h>
#if defined(IL2CPP_STRUCT_AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult__DEFINED) && defined(IL2CPP_STRUCT_RaceDataLeaderBoardType__Enum_DEFINED) && defined(IL2CPP_STRUCT_LeaderboardFilter__Enum_DEFINED) && defined(IL2CPP_STRUCT_TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult__DEFINED)
#define IL2CPP_STRUCT_PlayFabRaceServiceProvider_GetRaceData_d_10_DEFINED
struct PlayFabRaceServiceProvider;
struct String;
struct PlayFabRaceServiceProvider_c_DisplayClass10_0;
struct TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult_;
struct PlayFabRaceServiceProvider_GetRaceData_d_10 {
    int32_t __1__state;
    struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult_ __t__builder;
    struct PlayFabRaceServiceProvider* __4__this;
    struct String* raceId;
    RaceDataLeaderBoardType__Enum type;

    LeaderboardFilter__Enum filter;

    struct PlayFabRaceServiceProvider_c_DisplayClass10_0* __8__1;
    struct TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult_* __7__wrap1;
    struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult_ __u__1;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabRaceServiceProvider_GetRaceData_d_10_FWDDECL)
#define IL2CPP_STRUCT_PlayFabRaceServiceProvider_GetRaceData_d_10_FWDDECL
#include <Modloader/app/structs/PlayFabRaceServiceProvider.h>
#include <Modloader/app/structs/PlayFabRaceServiceProvider_c_DisplayClass10_0.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult_.h>
#endif
#undef IL2CPP_STRUCT_PlayFabRaceServiceProvider_GetRaceData_d_10_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabRaceServiceProvider_GetRaceData_d_10_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabRaceServiceProvider_GetRaceData_d_10_FWDDECL)
#include <Modloader/app/structs/PlayFabRaceServiceProvider_GetRaceData_d_10.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabRaceServiceProvider_GetRaceData_d_10.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
