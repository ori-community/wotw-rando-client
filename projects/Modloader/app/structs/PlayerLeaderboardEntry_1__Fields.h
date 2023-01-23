#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerLeaderboardEntry_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerLeaderboardEntry_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLeaderboardEntry_1__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerLeaderboardEntry_1__Fields_DEFINED
struct String;
struct PlayerProfileModel_1;
struct __declspec(align(8)) PlayerLeaderboardEntry_1__Fields {
    struct String* DisplayName;
    struct String* PlayFabId;
    int32_t Position;
    struct PlayerProfileModel_1* Profile;
    int32_t StatValue;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayerLeaderboardEntry_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerLeaderboardEntry_1__Fields_FWDDECL
#include <Modloader/app/structs/PlayerProfileModel_1.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayerLeaderboardEntry_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLeaderboardEntry_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerLeaderboardEntry_1__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerLeaderboardEntry_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerLeaderboardEntry_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
