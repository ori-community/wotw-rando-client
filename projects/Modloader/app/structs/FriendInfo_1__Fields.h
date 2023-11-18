#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FriendInfo_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FriendInfo_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FriendInfo_1__Fields_DEFINED)
#define IL2CPP_STRUCT_FriendInfo_1__Fields_DEFINED
struct String;
struct UserFacebookInfo_1;
struct UserGameCenterInfo_1;
struct PlayerProfileModel_1;
struct UserPsnInfo_1;
struct UserSteamInfo_1;
struct List_1_System_String_;
struct UserXboxInfo_1;
struct __declspec(align(8)) FriendInfo_1__Fields {
    struct String* CurrentMatchmakerLobbyId;
    struct UserFacebookInfo_1* FacebookInfo;
    struct String* FriendPlayFabId;
    struct UserGameCenterInfo_1* GameCenterInfo;
    struct PlayerProfileModel_1* Profile;
    struct UserPsnInfo_1* PSNInfo;
    struct UserSteamInfo_1* SteamInfo;
    struct List_1_System_String_* Tags;
    struct String* TitleDisplayName;
    struct String* Username;
    struct UserXboxInfo_1* XboxInfo;
};
#endif
#if !defined(IL2CPP_STRUCT_FriendInfo_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_FriendInfo_1__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/PlayerProfileModel_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UserFacebookInfo_1.h>
#include <Modloader/app/structs/UserGameCenterInfo_1.h>
#include <Modloader/app/structs/UserPsnInfo_1.h>
#include <Modloader/app/structs/UserSteamInfo_1.h>
#include <Modloader/app/structs/UserXboxInfo_1.h>
#endif
#undef IL2CPP_STRUCT_FriendInfo_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FriendInfo_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FriendInfo_1__Fields_FWDDECL)
#include <Modloader/app/structs/FriendInfo_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FriendInfo_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
