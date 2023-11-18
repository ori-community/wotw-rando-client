#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PayForPurchaseResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PayForPurchaseResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PayForPurchaseResult__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_PlayFab_ClientModels_TransactionStatus_.h>
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_ClientModels_TransactionStatus__DEFINED)
#define IL2CPP_STRUCT_PayForPurchaseResult__Fields_DEFINED
struct String;
struct Dictionary_2_System_String_System_Int32_;
struct PayForPurchaseResult__Fields {
    struct PlayFabResultCommon__Fields _;
    uint32_t CreditApplied;
    struct String* OrderId;
    struct String* ProviderData;
    struct String* ProviderToken;
    struct String* PurchaseConfirmationPageURL;
    struct String* PurchaseCurrency;
    uint32_t PurchasePrice;
    struct Nullable_1_PlayFab_ClientModels_TransactionStatus_ Status;
    struct Dictionary_2_System_String_System_Int32_* VCAmount;
    struct Dictionary_2_System_String_System_Int32_* VirtualCurrency;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PayForPurchaseResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_PayForPurchaseResult__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_Int32_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PayForPurchaseResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PayForPurchaseResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PayForPurchaseResult__Fields_FWDDECL)
#include <Modloader/app/structs/PayForPurchaseResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PayForPurchaseResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
