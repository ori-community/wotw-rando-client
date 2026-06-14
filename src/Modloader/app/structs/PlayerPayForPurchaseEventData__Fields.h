#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerPayForPurchaseEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerPayForPurchaseEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerPayForPurchaseEventData__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_PlayFab_PlayStreamModels_TransactionStatus_.h>
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_PlayStreamModels_TransactionStatus__DEFINED)
#define IL2CPP_STRUCT_PlayerPayForPurchaseEventData__Fields_DEFINED
struct String;
struct Dictionary_2_System_String_System_Int32_;
struct PlayerPayForPurchaseEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String* OrderId;
    struct String* ProviderData;
    struct String* ProviderName;
    struct String* ProviderToken;
    struct String* PurchaseConfirmationPageURL;
    struct String* PurchaseCurrency;
    uint32_t PurchasePrice;
    struct Nullable_1_PlayFab_PlayStreamModels_TransactionStatus_ Status;
    struct String* TitleId;
    struct Dictionary_2_System_String_System_Int32_* VirtualCurrencyBalances;
    struct Dictionary_2_System_String_System_Int32_* VirtualCurrencyGrants;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerPayForPurchaseEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerPayForPurchaseEventData__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_Int32_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayerPayForPurchaseEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerPayForPurchaseEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerPayForPurchaseEventData__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerPayForPurchaseEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerPayForPurchaseEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
