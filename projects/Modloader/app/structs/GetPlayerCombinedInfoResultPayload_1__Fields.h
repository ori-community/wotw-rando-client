#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetPlayerCombinedInfoResultPayload_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetPlayerCombinedInfoResultPayload_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerCombinedInfoResultPayload_1__Fields_DEFINED)
#define IL2CPP_STRUCT_GetPlayerCombinedInfoResultPayload_1__Fields_DEFINED
struct UserAccountInfo_1;
struct List_1_PlayFab_ServerModels_CharacterInventory_;
struct List_1_PlayFab_ServerModels_CharacterResult_;
struct PlayerProfileModel_1;
struct List_1_PlayFab_ServerModels_StatisticValue_;
struct Dictionary_2_System_String_System_String_;
struct Dictionary_2_System_String_PlayFab_ServerModels_UserDataRecord_;
struct List_1_PlayFab_ServerModels_ItemInstance_;
struct Dictionary_2_System_String_System_Int32_;
struct Dictionary_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime_;
struct __declspec(align(8)) GetPlayerCombinedInfoResultPayload_1__Fields {
    struct UserAccountInfo_1* AccountInfo;
    struct List_1_PlayFab_ServerModels_CharacterInventory_* CharacterInventories;
    struct List_1_PlayFab_ServerModels_CharacterResult_* CharacterList;
    struct PlayerProfileModel_1* PlayerProfile;
    struct List_1_PlayFab_ServerModels_StatisticValue_* PlayerStatistics;
    struct Dictionary_2_System_String_System_String_* TitleData;
    struct Dictionary_2_System_String_PlayFab_ServerModels_UserDataRecord_* UserData;
    uint32_t UserDataVersion;
    struct List_1_PlayFab_ServerModels_ItemInstance_* UserInventory;
    struct Dictionary_2_System_String_PlayFab_ServerModels_UserDataRecord_* UserReadOnlyData;
    uint32_t UserReadOnlyDataVersion;
    struct Dictionary_2_System_String_System_Int32_* UserVirtualCurrency;
    struct Dictionary_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime_* UserVirtualCurrencyRechargeTimes;
};
#endif
#if !defined(IL2CPP_STRUCT_GetPlayerCombinedInfoResultPayload_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_GetPlayerCombinedInfoResultPayload_1__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_PlayFab_ServerModels_UserDataRecord_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Int32_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/List_1_PlayFab_ServerModels_CharacterInventory_.h>
#include <Modloader/app/structs/List_1_PlayFab_ServerModels_CharacterResult_.h>
#include <Modloader/app/structs/List_1_PlayFab_ServerModels_ItemInstance_.h>
#include <Modloader/app/structs/List_1_PlayFab_ServerModels_StatisticValue_.h>
#include <Modloader/app/structs/PlayerProfileModel_1.h>
#include <Modloader/app/structs/UserAccountInfo_1.h>
#endif
#undef IL2CPP_STRUCT_GetPlayerCombinedInfoResultPayload_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerCombinedInfoResultPayload_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GetPlayerCombinedInfoResultPayload_1__Fields_FWDDECL)
#include <Modloader/app/structs/GetPlayerCombinedInfoResultPayload_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetPlayerCombinedInfoResultPayload_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
