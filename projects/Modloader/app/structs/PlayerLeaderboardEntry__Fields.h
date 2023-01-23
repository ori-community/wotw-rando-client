#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerLeaderboardEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerLeaderboardEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLeaderboardEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerLeaderboardEntry__Fields_DEFINED
struct String;
struct PlayerProfileModel;
struct __declspec(align(8)) PlayerLeaderboardEntry__Fields {
    struct String* DisplayName;
    struct String* PlayFabId;
    int32_t Position;
    struct PlayerProfileModel* Profile;
    int32_t StatValue;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayerLeaderboardEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerLeaderboardEntry__Fields_FWDDECL
#include <Modloader/app/structs/PlayerProfileModel.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayerLeaderboardEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLeaderboardEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerLeaderboardEntry__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerLeaderboardEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerLeaderboardEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
