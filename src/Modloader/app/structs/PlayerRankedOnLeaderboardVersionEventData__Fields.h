#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerRankedOnLeaderboardVersionEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerRankedOnLeaderboardVersionEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerRankedOnLeaderboardVersionEventData__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_PlayFab_PlayStreamModels_LeaderboardVersionChangeBehavior_.h>
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_PlayStreamModels_LeaderboardVersionChangeBehavior__DEFINED)
#define IL2CPP_STRUCT_PlayerRankedOnLeaderboardVersionEventData__Fields_DEFINED
struct LeaderboardSource;
struct String;
struct PlayerRankedOnLeaderboardVersionEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct LeaderboardSource* LeaderboardSource;
    uint32_t Rank;
    struct String* TitleId;
    int32_t Value;
    uint32_t Version;
    struct Nullable_1_PlayFab_PlayStreamModels_LeaderboardVersionChangeBehavior_ VersionChangeBehavior;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerRankedOnLeaderboardVersionEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerRankedOnLeaderboardVersionEventData__Fields_FWDDECL
#include <Modloader/app/structs/LeaderboardSource.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayerRankedOnLeaderboardVersionEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerRankedOnLeaderboardVersionEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerRankedOnLeaderboardVersionEventData__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerRankedOnLeaderboardVersionEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerRankedOnLeaderboardVersionEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
