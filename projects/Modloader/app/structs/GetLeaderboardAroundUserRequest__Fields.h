#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetLeaderboardAroundUserRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetLeaderboardAroundUserRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetLeaderboardAroundUserRequest__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Int32__DEFINED)
#define IL2CPP_STRUCT_GetLeaderboardAroundUserRequest__Fields_DEFINED
struct String;
struct PlayerProfileViewConstraints_1;
struct GetLeaderboardAroundUserRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    int32_t MaxResultsCount;
    struct String* PlayFabId;
    struct PlayerProfileViewConstraints_1* ProfileConstraints;
    struct String* StatisticName;
    struct Nullable_1_Int32_ Version;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetLeaderboardAroundUserRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_GetLeaderboardAroundUserRequest__Fields_FWDDECL
#include <Modloader/app/structs/PlayerProfileViewConstraints_1.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GetLeaderboardAroundUserRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetLeaderboardAroundUserRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GetLeaderboardAroundUserRequest__Fields_FWDDECL)
#include <Modloader/app/structs/GetLeaderboardAroundUserRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetLeaderboardAroundUserRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
