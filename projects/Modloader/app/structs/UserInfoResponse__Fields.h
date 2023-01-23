#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserInfoResponse__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserInfoResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserInfoResponse__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_UserInfoResponse__Fields_DEFINED
struct List_1_PlayFab_MatchmakerModels_ItemInstance_;
struct String;
struct Dictionary_2_System_String_System_Int32_;
struct Dictionary_2_System_String_PlayFab_MatchmakerModels_VirtualCurrencyRechargeTime_;
struct UserInfoResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    struct List_1_PlayFab_MatchmakerModels_ItemInstance_* Inventory;
    bool IsDeveloper;
    struct String* PlayFabId;
    struct String* SteamId;
    struct String* TitleDisplayName;
    struct String* Username;
    struct Dictionary_2_System_String_System_Int32_* VirtualCurrency;
    struct Dictionary_2_System_String_PlayFab_MatchmakerModels_VirtualCurrencyRechargeTime_* VirtualCurrencyRechargeTimes;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserInfoResponse__Fields_FWDDECL)
#define IL2CPP_STRUCT_UserInfoResponse__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_PlayFab_MatchmakerModels_VirtualCurrencyRechargeTime_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Int32_.h>
#include <Modloader/app/structs/List_1_PlayFab_MatchmakerModels_ItemInstance_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_UserInfoResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserInfoResponse__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UserInfoResponse__Fields_FWDDECL)
#include <Modloader/app/structs/UserInfoResponse__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserInfoResponse__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
