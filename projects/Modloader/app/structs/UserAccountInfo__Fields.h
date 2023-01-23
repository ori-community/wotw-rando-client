#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserAccountInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserAccountInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserAccountInfo__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_UserAccountInfo__Fields_DEFINED
struct UserAndroidDeviceInfo;
struct UserCustomIdInfo;
struct UserFacebookInfo;
struct UserFacebookInstantGamesIdInfo;
struct UserGameCenterInfo;
struct UserGoogleInfo;
struct UserIosDeviceInfo;
struct UserKongregateInfo;
struct UserNintendoSwitchDeviceIdInfo;
struct List_1_PlayFab_ClientModels_UserOpenIdInfo_;
struct String;
struct UserPrivateAccountInfo;
struct UserPsnInfo;
struct UserSteamInfo;
struct UserTitleInfo;
struct UserTwitchInfo;
struct UserWindowsHelloInfo;
struct UserXboxInfo;
struct __declspec(align(8)) UserAccountInfo__Fields {
    struct UserAndroidDeviceInfo* AndroidDeviceInfo;
    struct DateTime Created;
    struct UserCustomIdInfo* CustomIdInfo;
    struct UserFacebookInfo* FacebookInfo;
    struct UserFacebookInstantGamesIdInfo* FacebookInstantGamesIdInfo;
    struct UserGameCenterInfo* GameCenterInfo;
    struct UserGoogleInfo* GoogleInfo;
    struct UserIosDeviceInfo* IosDeviceInfo;
    struct UserKongregateInfo* KongregateInfo;
    struct UserNintendoSwitchDeviceIdInfo* NintendoSwitchDeviceIdInfo;
    struct List_1_PlayFab_ClientModels_UserOpenIdInfo_* OpenIdInfo;
    struct String* PlayFabId;
    struct UserPrivateAccountInfo* PrivateInfo;
    struct UserPsnInfo* PsnInfo;
    struct UserSteamInfo* SteamInfo;
    struct UserTitleInfo* TitleInfo;
    struct UserTwitchInfo* TwitchInfo;
    struct String* Username;
    struct UserWindowsHelloInfo* WindowsHelloInfo;
    struct UserXboxInfo* XboxInfo;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserAccountInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_UserAccountInfo__Fields_FWDDECL
#include <Modloader/app/structs/List_1_PlayFab_ClientModels_UserOpenIdInfo_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UserAndroidDeviceInfo.h>
#include <Modloader/app/structs/UserCustomIdInfo.h>
#include <Modloader/app/structs/UserFacebookInfo.h>
#include <Modloader/app/structs/UserFacebookInstantGamesIdInfo.h>
#include <Modloader/app/structs/UserGameCenterInfo.h>
#include <Modloader/app/structs/UserGoogleInfo.h>
#include <Modloader/app/structs/UserIosDeviceInfo.h>
#include <Modloader/app/structs/UserKongregateInfo.h>
#include <Modloader/app/structs/UserNintendoSwitchDeviceIdInfo.h>
#include <Modloader/app/structs/UserPrivateAccountInfo.h>
#include <Modloader/app/structs/UserPsnInfo.h>
#include <Modloader/app/structs/UserSteamInfo.h>
#include <Modloader/app/structs/UserTitleInfo.h>
#include <Modloader/app/structs/UserTwitchInfo.h>
#include <Modloader/app/structs/UserWindowsHelloInfo.h>
#include <Modloader/app/structs/UserXboxInfo.h>
#endif
#undef IL2CPP_STRUCT_UserAccountInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserAccountInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UserAccountInfo__Fields_FWDDECL)
#include <Modloader/app/structs/UserAccountInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserAccountInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
