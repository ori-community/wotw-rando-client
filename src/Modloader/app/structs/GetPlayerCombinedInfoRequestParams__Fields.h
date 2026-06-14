#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetPlayerCombinedInfoRequestParams__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetPlayerCombinedInfoRequestParams__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerCombinedInfoRequestParams__Fields_DEFINED)
#define IL2CPP_STRUCT_GetPlayerCombinedInfoRequestParams__Fields_DEFINED
struct List_1_System_String_;
struct PlayerProfileViewConstraints;
struct __declspec(align(8)) GetPlayerCombinedInfoRequestParams__Fields {
    bool GetCharacterInventories;
    bool GetCharacterList;
    bool GetPlayerProfile;
    bool GetPlayerStatistics;
    bool GetTitleData;
    bool GetUserAccountInfo;
    bool GetUserData;
    bool GetUserInventory;
    bool GetUserReadOnlyData;
    bool GetUserVirtualCurrency;
    struct List_1_System_String_* PlayerStatisticNames;
    struct PlayerProfileViewConstraints* ProfileConstraints;
    struct List_1_System_String_* TitleDataKeys;
    struct List_1_System_String_* UserDataKeys;
    struct List_1_System_String_* UserReadOnlyDataKeys;
};
#endif
#if !defined(IL2CPP_STRUCT_GetPlayerCombinedInfoRequestParams__Fields_FWDDECL)
#define IL2CPP_STRUCT_GetPlayerCombinedInfoRequestParams__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/PlayerProfileViewConstraints.h>
#endif
#undef IL2CPP_STRUCT_GetPlayerCombinedInfoRequestParams__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerCombinedInfoRequestParams__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GetPlayerCombinedInfoRequestParams__Fields_FWDDECL)
#include <Modloader/app/structs/GetPlayerCombinedInfoRequestParams__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetPlayerCombinedInfoRequestParams__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
