#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetFriendsListRequest_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetFriendsListRequest_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetFriendsListRequest_1__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED)
#define IL2CPP_STRUCT_GetFriendsListRequest_1__Fields_DEFINED
struct String;
struct PlayerProfileViewConstraints_1;
struct GetFriendsListRequest_1__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct Nullable_1_Boolean_ IncludeFacebookFriends;
    struct Nullable_1_Boolean_ IncludeSteamFriends;
    struct String* PlayFabId;
    struct PlayerProfileViewConstraints_1* ProfileConstraints;
    struct String* XboxToken;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetFriendsListRequest_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_GetFriendsListRequest_1__Fields_FWDDECL
#include <Modloader/app/structs/PlayerProfileViewConstraints_1.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GetFriendsListRequest_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetFriendsListRequest_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GetFriendsListRequest_1__Fields_FWDDECL)
#include <Modloader/app/structs/GetFriendsListRequest_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetFriendsListRequest_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
