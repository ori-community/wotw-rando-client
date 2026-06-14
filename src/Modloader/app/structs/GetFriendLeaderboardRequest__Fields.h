#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetFriendLeaderboardRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetFriendLeaderboardRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetFriendLeaderboardRequest__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Int32__DEFINED)
#define IL2CPP_STRUCT_GetFriendLeaderboardRequest__Fields_DEFINED
struct PlayerProfileViewConstraints;
struct String;
struct GetFriendLeaderboardRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct Nullable_1_Boolean_ IncludeFacebookFriends;
    struct Nullable_1_Boolean_ IncludeSteamFriends;
    struct Nullable_1_Int32_ MaxResultsCount;
    struct PlayerProfileViewConstraints* ProfileConstraints;
    int32_t StartPosition;
    struct String* StatisticName;
    struct Nullable_1_Int32_ Version;
    struct String* XboxToken;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetFriendLeaderboardRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_GetFriendLeaderboardRequest__Fields_FWDDECL
#include <Modloader/app/structs/PlayerProfileViewConstraints.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GetFriendLeaderboardRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetFriendLeaderboardRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GetFriendLeaderboardRequest__Fields_FWDDECL)
#include <Modloader/app/structs/GetFriendLeaderboardRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetFriendLeaderboardRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
