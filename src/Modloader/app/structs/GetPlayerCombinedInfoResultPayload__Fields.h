#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetPlayerCombinedInfoResultPayload__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetPlayerCombinedInfoResultPayload__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerCombinedInfoResultPayload__Fields_DEFINED)
#define IL2CPP_STRUCT_GetPlayerCombinedInfoResultPayload__Fields_DEFINED
struct UserAccountInfo;
struct List_1_PlayFab_ClientModels_CharacterInventory_;
struct List_1_PlayFab_ClientModels_CharacterResult_;
struct PlayerProfileModel;
struct List_1_PlayFab_ClientModels_StatisticValue_;
struct Dictionary_2_System_String_System_String_;
struct Dictionary_2_System_String_PlayFab_ClientModels_UserDataRecord_;
struct List_1_PlayFab_ClientModels_ItemInstance_;
struct Dictionary_2_System_String_System_Int32_;
struct Dictionary_2_System_String_PlayFab_ClientModels_VirtualCurrencyRechargeTime_;
struct __declspec(align(8)) GetPlayerCombinedInfoResultPayload__Fields {
    struct UserAccountInfo* AccountInfo;
    struct List_1_PlayFab_ClientModels_CharacterInventory_* CharacterInventories;
    struct List_1_PlayFab_ClientModels_CharacterResult_* CharacterList;
    struct PlayerProfileModel* PlayerProfile;
    struct List_1_PlayFab_ClientModels_StatisticValue_* PlayerStatistics;
    struct Dictionary_2_System_String_System_String_* TitleData;
    struct Dictionary_2_System_String_PlayFab_ClientModels_UserDataRecord_* UserData;
    uint32_t UserDataVersion;
    struct List_1_PlayFab_ClientModels_ItemInstance_* UserInventory;
    struct Dictionary_2_System_String_PlayFab_ClientModels_UserDataRecord_* UserReadOnlyData;
    uint32_t UserReadOnlyDataVersion;
    struct Dictionary_2_System_String_System_Int32_* UserVirtualCurrency;
    struct Dictionary_2_System_String_PlayFab_ClientModels_VirtualCurrencyRechargeTime_* UserVirtualCurrencyRechargeTimes;
};
#endif
#if !defined(IL2CPP_STRUCT_GetPlayerCombinedInfoResultPayload__Fields_FWDDECL)
#define IL2CPP_STRUCT_GetPlayerCombinedInfoResultPayload__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_PlayFab_ClientModels_UserDataRecord_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_PlayFab_ClientModels_VirtualCurrencyRechargeTime_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Int32_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/List_1_PlayFab_ClientModels_CharacterInventory_.h>
#include <Modloader/app/structs/List_1_PlayFab_ClientModels_CharacterResult_.h>
#include <Modloader/app/structs/List_1_PlayFab_ClientModels_ItemInstance_.h>
#include <Modloader/app/structs/List_1_PlayFab_ClientModels_StatisticValue_.h>
#include <Modloader/app/structs/PlayerProfileModel.h>
#include <Modloader/app/structs/UserAccountInfo.h>
#endif
#undef IL2CPP_STRUCT_GetPlayerCombinedInfoResultPayload__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerCombinedInfoResultPayload__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GetPlayerCombinedInfoResultPayload__Fields_FWDDECL)
#include <Modloader/app/structs/GetPlayerCombinedInfoResultPayload__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetPlayerCombinedInfoResultPayload__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
