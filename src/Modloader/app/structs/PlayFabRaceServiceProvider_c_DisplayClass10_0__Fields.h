#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabRaceServiceProvider_c_DisplayClass10_0__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabRaceServiceProvider_c_DisplayClass10_0__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabRaceServiceProvider_c_DisplayClass10_0__Fields_DEFINED)
#include <Modloader/app/structs/LeaderboardFilter__Enum.h>
#include <Modloader/app/structs/RaceDataLeaderBoardType__Enum.h>
#if defined(IL2CPP_STRUCT_RaceDataLeaderBoardType__Enum_DEFINED) && defined(IL2CPP_STRUCT_LeaderboardFilter__Enum_DEFINED)
#define IL2CPP_STRUCT_PlayFabRaceServiceProvider_c_DisplayClass10_0__Fields_DEFINED
struct PlayFabRaceServiceProvider;
struct String;
struct RaceDataCache;
struct TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult_;
struct __declspec(align(8)) PlayFabRaceServiceProvider_c_DisplayClass10_0__Fields {
    struct PlayFabRaceServiceProvider* __4__this;
    struct String* raceId;
    RaceDataLeaderBoardType__Enum type;

    LeaderboardFilter__Enum filter;

    struct RaceDataCache* dataCache;
    struct TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult_* tcs;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabRaceServiceProvider_c_DisplayClass10_0__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayFabRaceServiceProvider_c_DisplayClass10_0__Fields_FWDDECL
#include <Modloader/app/structs/PlayFabRaceServiceProvider.h>
#include <Modloader/app/structs/RaceDataCache.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult_.h>
#endif
#undef IL2CPP_STRUCT_PlayFabRaceServiceProvider_c_DisplayClass10_0__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabRaceServiceProvider_c_DisplayClass10_0__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabRaceServiceProvider_c_DisplayClass10_0__Fields_FWDDECL)
#include <Modloader/app/structs/PlayFabRaceServiceProvider_c_DisplayClass10_0__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabRaceServiceProvider_c_DisplayClass10_0__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
