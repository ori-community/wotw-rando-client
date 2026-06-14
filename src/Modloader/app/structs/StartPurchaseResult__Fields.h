#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StartPurchaseResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StartPurchaseResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StartPurchaseResult__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_StartPurchaseResult__Fields_DEFINED
struct List_1_PlayFab_ClientModels_CartItem_;
struct String;
struct List_1_PlayFab_ClientModels_PaymentOption_;
struct Dictionary_2_System_String_System_Int32_;
struct StartPurchaseResult__Fields {
    struct PlayFabResultCommon__Fields _;
    struct List_1_PlayFab_ClientModels_CartItem_* Contents;
    struct String* OrderId;
    struct List_1_PlayFab_ClientModels_PaymentOption_* PaymentOptions;
    struct Dictionary_2_System_String_System_Int32_* VirtualCurrencyBalances;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StartPurchaseResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_StartPurchaseResult__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_Int32_.h>
#include <Modloader/app/structs/List_1_PlayFab_ClientModels_CartItem_.h>
#include <Modloader/app/structs/List_1_PlayFab_ClientModels_PaymentOption_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_StartPurchaseResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StartPurchaseResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StartPurchaseResult__Fields_FWDDECL)
#include <Modloader/app/structs/StartPurchaseResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StartPurchaseResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
