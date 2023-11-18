#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerProfile__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerProfile__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerProfile__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#include <Modloader/app/structs/Nullable_1_PlayFab_ServerModels_LoginIdentityProvider_.h>
#include <Modloader/app/structs/Nullable_1_UInt32_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_DateTime__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_ServerModels_LoginIdentityProvider__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_UInt32__DEFINED)
#define IL2CPP_STRUCT_PlayerProfile__Fields_DEFINED
struct List_1_PlayFab_ServerModels_AdCampaignAttribution_;
struct String;
struct List_1_PlayFab_ServerModels_ContactEmailInfo_;
struct List_1_PlayFab_ServerModels_PlayerLinkedAccount_;
struct Dictionary_2_System_String_PlayFab_ServerModels_PlayerLocation_;
struct List_1_PlayFab_ServerModels_PlayerStatistic_;
struct List_1_PlayFab_ServerModels_PushNotificationRegistration_;
struct Dictionary_2_System_String_System_Int32_;
struct List_1_System_String_;
struct Dictionary_2_System_String_System_UInt32_;
struct __declspec(align(8)) PlayerProfile__Fields {
    struct List_1_PlayFab_ServerModels_AdCampaignAttribution_* AdCampaignAttributions;
    struct String* AvatarUrl;
    struct Nullable_1_DateTime_ BannedUntil;
    struct List_1_PlayFab_ServerModels_ContactEmailInfo_* ContactEmailAddresses;
    struct Nullable_1_DateTime_ Created;
    struct String* DisplayName;
    struct Nullable_1_DateTime_ LastLogin;
    struct List_1_PlayFab_ServerModels_PlayerLinkedAccount_* LinkedAccounts;
    struct Dictionary_2_System_String_PlayFab_ServerModels_PlayerLocation_* Locations;
    struct Nullable_1_PlayFab_ServerModels_LoginIdentityProvider_ Origination;
    struct String* PlayerId;
    struct List_1_PlayFab_ServerModels_PlayerStatistic_* PlayerStatistics;
    struct String* PublisherId;
    struct List_1_PlayFab_ServerModels_PushNotificationRegistration_* PushNotificationRegistrations;
    struct Dictionary_2_System_String_System_Int32_* Statistics;
    struct List_1_System_String_* Tags;
    struct String* TitleId;
    struct Nullable_1_UInt32_ TotalValueToDateInUSD;
    struct Dictionary_2_System_String_System_UInt32_* ValuesToDate;
    struct Dictionary_2_System_String_System_Int32_* VirtualCurrencyBalances;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerProfile__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerProfile__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_PlayFab_ServerModels_PlayerLocation_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Int32_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_UInt32_.h>
#include <Modloader/app/structs/List_1_PlayFab_ServerModels_AdCampaignAttribution_.h>
#include <Modloader/app/structs/List_1_PlayFab_ServerModels_ContactEmailInfo_.h>
#include <Modloader/app/structs/List_1_PlayFab_ServerModels_PlayerLinkedAccount_.h>
#include <Modloader/app/structs/List_1_PlayFab_ServerModels_PlayerStatistic_.h>
#include <Modloader/app/structs/List_1_PlayFab_ServerModels_PushNotificationRegistration_.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayerProfile__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerProfile__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerProfile__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerProfile__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerProfile__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
