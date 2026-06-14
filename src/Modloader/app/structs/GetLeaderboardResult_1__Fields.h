#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetLeaderboardResult_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetLeaderboardResult_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetLeaderboardResult_1__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_DateTime__DEFINED)
#define IL2CPP_STRUCT_GetLeaderboardResult_1__Fields_DEFINED
struct List_1_PlayFab_ServerModels_PlayerLeaderboardEntry_;
struct GetLeaderboardResult_1__Fields {
    struct PlayFabResultCommon__Fields _;
    struct List_1_PlayFab_ServerModels_PlayerLeaderboardEntry_* Leaderboard;
    struct Nullable_1_DateTime_ NextReset;
    int32_t Version;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetLeaderboardResult_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_GetLeaderboardResult_1__Fields_FWDDECL
#include <Modloader/app/structs/List_1_PlayFab_ServerModels_PlayerLeaderboardEntry_.h>
#endif
#undef IL2CPP_STRUCT_GetLeaderboardResult_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetLeaderboardResult_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GetLeaderboardResult_1__Fields_FWDDECL)
#include <Modloader/app/structs/GetLeaderboardResult_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetLeaderboardResult_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
