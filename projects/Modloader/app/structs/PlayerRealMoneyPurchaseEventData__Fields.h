#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerRealMoneyPurchaseEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerRealMoneyPurchaseEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerRealMoneyPurchaseEventData__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_PlayFab_PlayStreamModels_Currency_.h>
#include <Modloader/app/structs/Nullable_1_PlayFab_PlayStreamModels_PaymentType_.h>
#include <Modloader/app/structs/Nullable_1_UInt32_.h>
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_PlayStreamModels_PaymentType__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_PlayStreamModels_Currency__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_UInt32__DEFINED)
#define IL2CPP_STRUCT_PlayerRealMoneyPurchaseEventData__Fields_DEFINED
struct String;
struct List_1_System_String_;
struct PlayerRealMoneyPurchaseEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String* OrderId;
    uint32_t OrderTotal;
    struct String* PaymentProvider;
    struct Nullable_1_PlayFab_PlayStreamModels_PaymentType_ PaymentType;
    struct List_1_System_String_* PurchasedProduct;
    struct String* TitleId;
    struct Nullable_1_PlayFab_PlayStreamModels_Currency_ TransactionCurrency;
    struct String* TransactionId;
    struct Nullable_1_UInt32_ TransactionTotal;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerRealMoneyPurchaseEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerRealMoneyPurchaseEventData__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayerRealMoneyPurchaseEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerRealMoneyPurchaseEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerRealMoneyPurchaseEventData__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerRealMoneyPurchaseEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerRealMoneyPurchaseEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
