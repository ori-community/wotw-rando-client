#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FriendInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FriendInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FriendInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_FriendInfo__Fields_DEFINED
struct String;
struct UserFacebookInfo;
struct UserGameCenterInfo;
struct PlayerProfileModel;
struct UserPsnInfo;
struct UserSteamInfo;
struct List_1_System_String_;
struct UserXboxInfo;
struct __declspec(align(8)) FriendInfo__Fields {
    struct String* CurrentMatchmakerLobbyId;
    struct UserFacebookInfo* FacebookInfo;
    struct String* FriendPlayFabId;
    struct UserGameCenterInfo* GameCenterInfo;
    struct PlayerProfileModel* Profile;
    struct UserPsnInfo* PSNInfo;
    struct UserSteamInfo* SteamInfo;
    struct List_1_System_String_* Tags;
    struct String* TitleDisplayName;
    struct String* Username;
    struct UserXboxInfo* XboxInfo;
};
#endif
#if !defined(IL2CPP_STRUCT_FriendInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_FriendInfo__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/PlayerProfileModel.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UserFacebookInfo.h>
#include <Modloader/app/structs/UserGameCenterInfo.h>
#include <Modloader/app/structs/UserPsnInfo.h>
#include <Modloader/app/structs/UserSteamInfo.h>
#include <Modloader/app/structs/UserXboxInfo.h>
#endif
#undef IL2CPP_STRUCT_FriendInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FriendInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FriendInfo__Fields_FWDDECL)
#include <Modloader/app/structs/FriendInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FriendInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
