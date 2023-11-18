#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserAccountInfo_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserAccountInfo_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserAccountInfo_1__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_UserAccountInfo_1__Fields_DEFINED
struct UserAndroidDeviceInfo_1;
struct UserCustomIdInfo_1;
struct UserFacebookInfo_1;
struct UserFacebookInstantGamesIdInfo_1;
struct UserGameCenterInfo_1;
struct UserGoogleInfo_1;
struct UserIosDeviceInfo_1;
struct UserKongregateInfo_1;
struct UserNintendoSwitchDeviceIdInfo_1;
struct List_1_PlayFab_ServerModels_UserOpenIdInfo_;
struct String;
struct UserPrivateAccountInfo_1;
struct UserPsnInfo_1;
struct UserSteamInfo_1;
struct UserTitleInfo_1;
struct UserTwitchInfo_1;
struct UserWindowsHelloInfo_1;
struct UserXboxInfo_1;
struct __declspec(align(8)) UserAccountInfo_1__Fields {
    struct UserAndroidDeviceInfo_1* AndroidDeviceInfo;
    struct DateTime Created;
    struct UserCustomIdInfo_1* CustomIdInfo;
    struct UserFacebookInfo_1* FacebookInfo;
    struct UserFacebookInstantGamesIdInfo_1* FacebookInstantGamesIdInfo;
    struct UserGameCenterInfo_1* GameCenterInfo;
    struct UserGoogleInfo_1* GoogleInfo;
    struct UserIosDeviceInfo_1* IosDeviceInfo;
    struct UserKongregateInfo_1* KongregateInfo;
    struct UserNintendoSwitchDeviceIdInfo_1* NintendoSwitchDeviceIdInfo;
    struct List_1_PlayFab_ServerModels_UserOpenIdInfo_* OpenIdInfo;
    struct String* PlayFabId;
    struct UserPrivateAccountInfo_1* PrivateInfo;
    struct UserPsnInfo_1* PsnInfo;
    struct UserSteamInfo_1* SteamInfo;
    struct UserTitleInfo_1* TitleInfo;
    struct UserTwitchInfo_1* TwitchInfo;
    struct String* Username;
    struct UserWindowsHelloInfo_1* WindowsHelloInfo;
    struct UserXboxInfo_1* XboxInfo;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserAccountInfo_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_UserAccountInfo_1__Fields_FWDDECL
#include <Modloader/app/structs/List_1_PlayFab_ServerModels_UserOpenIdInfo_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UserAndroidDeviceInfo_1.h>
#include <Modloader/app/structs/UserCustomIdInfo_1.h>
#include <Modloader/app/structs/UserFacebookInfo_1.h>
#include <Modloader/app/structs/UserFacebookInstantGamesIdInfo_1.h>
#include <Modloader/app/structs/UserGameCenterInfo_1.h>
#include <Modloader/app/structs/UserGoogleInfo_1.h>
#include <Modloader/app/structs/UserIosDeviceInfo_1.h>
#include <Modloader/app/structs/UserKongregateInfo_1.h>
#include <Modloader/app/structs/UserNintendoSwitchDeviceIdInfo_1.h>
#include <Modloader/app/structs/UserPrivateAccountInfo_1.h>
#include <Modloader/app/structs/UserPsnInfo_1.h>
#include <Modloader/app/structs/UserSteamInfo_1.h>
#include <Modloader/app/structs/UserTitleInfo_1.h>
#include <Modloader/app/structs/UserTwitchInfo_1.h>
#include <Modloader/app/structs/UserWindowsHelloInfo_1.h>
#include <Modloader/app/structs/UserXboxInfo_1.h>
#endif
#undef IL2CPP_STRUCT_UserAccountInfo_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserAccountInfo_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UserAccountInfo_1__Fields_FWDDECL)
#include <Modloader/app/structs/UserAccountInfo_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserAccountInfo_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
