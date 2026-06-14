#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnlockContainerItemResult_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnlockContainerItemResult_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnlockContainerItemResult_1__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_UnlockContainerItemResult_1__Fields_DEFINED
struct List_1_PlayFab_ServerModels_ItemInstance_;
struct String;
struct Dictionary_2_System_String_System_UInt32_;
struct UnlockContainerItemResult_1__Fields {
    struct PlayFabResultCommon__Fields _;
    struct List_1_PlayFab_ServerModels_ItemInstance_* GrantedItems;
    struct String* UnlockedItemInstanceId;
    struct String* UnlockedWithItemInstanceId;
    struct Dictionary_2_System_String_System_UInt32_* VirtualCurrency;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnlockContainerItemResult_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_UnlockContainerItemResult_1__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_UInt32_.h>
#include <Modloader/app/structs/List_1_PlayFab_ServerModels_ItemInstance_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_UnlockContainerItemResult_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnlockContainerItemResult_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UnlockContainerItemResult_1__Fields_FWDDECL)
#include <Modloader/app/structs/UnlockContainerItemResult_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnlockContainerItemResult_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
