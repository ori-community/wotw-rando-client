#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerProfileModel_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerProfileModel_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerProfileModel_1__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#include <Modloader/app/structs/Nullable_1_PlayFab_ServerModels_LoginIdentityProvider_.h>
#include <Modloader/app/structs/Nullable_1_UInt32_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_DateTime__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_ServerModels_LoginIdentityProvider__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_UInt32__DEFINED)
#define IL2CPP_STRUCT_PlayerProfileModel_1__Fields_DEFINED
struct List_1_PlayFab_ServerModels_AdCampaignAttributionModel_;
struct String;
struct List_1_PlayFab_ServerModels_ContactEmailInfoModel_;
struct List_1_PlayFab_ServerModels_LinkedPlatformAccountModel_;
struct List_1_PlayFab_ServerModels_LocationModel_;
struct List_1_PlayFab_ServerModels_MembershipModel_;
struct List_1_PlayFab_ServerModels_PushNotificationRegistrationModel_;
struct List_1_PlayFab_ServerModels_StatisticModel_;
struct List_1_PlayFab_ServerModels_TagModel_;
struct List_1_PlayFab_ServerModels_ValueToDateModel_;
struct __declspec(align(8)) PlayerProfileModel_1__Fields {
    struct List_1_PlayFab_ServerModels_AdCampaignAttributionModel_* AdCampaignAttributions;
    struct String* AvatarUrl;
    struct Nullable_1_DateTime_ BannedUntil;
    struct List_1_PlayFab_ServerModels_ContactEmailInfoModel_* ContactEmailAddresses;
    struct Nullable_1_DateTime_ Created;
    struct String* DisplayName;
    struct Nullable_1_DateTime_ LastLogin;
    struct List_1_PlayFab_ServerModels_LinkedPlatformAccountModel_* LinkedAccounts;
    struct List_1_PlayFab_ServerModels_LocationModel_* Locations;
    struct List_1_PlayFab_ServerModels_MembershipModel_* Memberships;
    struct Nullable_1_PlayFab_ServerModels_LoginIdentityProvider_ Origination;
    struct String* PlayerId;
    struct String* PublisherId;
    struct List_1_PlayFab_ServerModels_PushNotificationRegistrationModel_* PushNotificationRegistrations;
    struct List_1_PlayFab_ServerModels_StatisticModel_* Statistics;
    struct List_1_PlayFab_ServerModels_TagModel_* Tags;
    struct String* TitleId;
    struct Nullable_1_UInt32_ TotalValueToDateInUSD;
    struct List_1_PlayFab_ServerModels_ValueToDateModel_* ValuesToDate;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerProfileModel_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerProfileModel_1__Fields_FWDDECL
#include <Modloader/app/structs/List_1_PlayFab_ServerModels_AdCampaignAttributionModel_.h>
#include <Modloader/app/structs/List_1_PlayFab_ServerModels_ContactEmailInfoModel_.h>
#include <Modloader/app/structs/List_1_PlayFab_ServerModels_LinkedPlatformAccountModel_.h>
#include <Modloader/app/structs/List_1_PlayFab_ServerModels_LocationModel_.h>
#include <Modloader/app/structs/List_1_PlayFab_ServerModels_MembershipModel_.h>
#include <Modloader/app/structs/List_1_PlayFab_ServerModels_PushNotificationRegistrationModel_.h>
#include <Modloader/app/structs/List_1_PlayFab_ServerModels_StatisticModel_.h>
#include <Modloader/app/structs/List_1_PlayFab_ServerModels_TagModel_.h>
#include <Modloader/app/structs/List_1_PlayFab_ServerModels_ValueToDateModel_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayerProfileModel_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerProfileModel_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerProfileModel_1__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerProfileModel_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerProfileModel_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
