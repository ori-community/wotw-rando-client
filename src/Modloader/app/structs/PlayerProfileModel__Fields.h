#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerProfileModel__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerProfileModel__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerProfileModel__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#include <Modloader/app/structs/Nullable_1_PlayFab_ClientModels_LoginIdentityProvider_.h>
#include <Modloader/app/structs/Nullable_1_UInt32_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_DateTime__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_ClientModels_LoginIdentityProvider__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_UInt32__DEFINED)
#define IL2CPP_STRUCT_PlayerProfileModel__Fields_DEFINED
struct List_1_PlayFab_ClientModels_AdCampaignAttributionModel_;
struct String;
struct List_1_PlayFab_ClientModels_ContactEmailInfoModel_;
struct List_1_PlayFab_ClientModels_LinkedPlatformAccountModel_;
struct List_1_PlayFab_ClientModels_LocationModel_;
struct List_1_PlayFab_ClientModels_MembershipModel_;
struct List_1_PlayFab_ClientModels_PushNotificationRegistrationModel_;
struct List_1_PlayFab_ClientModels_StatisticModel_;
struct List_1_PlayFab_ClientModels_TagModel_;
struct List_1_PlayFab_ClientModels_ValueToDateModel_;
struct __declspec(align(8)) PlayerProfileModel__Fields {
    struct List_1_PlayFab_ClientModels_AdCampaignAttributionModel_* AdCampaignAttributions;
    struct String* AvatarUrl;
    struct Nullable_1_DateTime_ BannedUntil;
    struct List_1_PlayFab_ClientModels_ContactEmailInfoModel_* ContactEmailAddresses;
    struct Nullable_1_DateTime_ Created;
    struct String* DisplayName;
    struct Nullable_1_DateTime_ LastLogin;
    struct List_1_PlayFab_ClientModels_LinkedPlatformAccountModel_* LinkedAccounts;
    struct List_1_PlayFab_ClientModels_LocationModel_* Locations;
    struct List_1_PlayFab_ClientModels_MembershipModel_* Memberships;
    struct Nullable_1_PlayFab_ClientModels_LoginIdentityProvider_ Origination;
    struct String* PlayerId;
    struct String* PublisherId;
    struct List_1_PlayFab_ClientModels_PushNotificationRegistrationModel_* PushNotificationRegistrations;
    struct List_1_PlayFab_ClientModels_StatisticModel_* Statistics;
    struct List_1_PlayFab_ClientModels_TagModel_* Tags;
    struct String* TitleId;
    struct Nullable_1_UInt32_ TotalValueToDateInUSD;
    struct List_1_PlayFab_ClientModels_ValueToDateModel_* ValuesToDate;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerProfileModel__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerProfileModel__Fields_FWDDECL
#include <Modloader/app/structs/List_1_PlayFab_ClientModels_AdCampaignAttributionModel_.h>
#include <Modloader/app/structs/List_1_PlayFab_ClientModels_ContactEmailInfoModel_.h>
#include <Modloader/app/structs/List_1_PlayFab_ClientModels_LinkedPlatformAccountModel_.h>
#include <Modloader/app/structs/List_1_PlayFab_ClientModels_LocationModel_.h>
#include <Modloader/app/structs/List_1_PlayFab_ClientModels_MembershipModel_.h>
#include <Modloader/app/structs/List_1_PlayFab_ClientModels_PushNotificationRegistrationModel_.h>
#include <Modloader/app/structs/List_1_PlayFab_ClientModels_StatisticModel_.h>
#include <Modloader/app/structs/List_1_PlayFab_ClientModels_TagModel_.h>
#include <Modloader/app/structs/List_1_PlayFab_ClientModels_ValueToDateModel_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayerProfileModel__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerProfileModel__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerProfileModel__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerProfileModel__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerProfileModel__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
