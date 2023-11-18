#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValidateGooglePlayPurchaseRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValidateGooglePlayPurchaseRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidateGooglePlayPurchaseRequest__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_UInt32_.h>
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_UInt32__DEFINED)
#define IL2CPP_STRUCT_ValidateGooglePlayPurchaseRequest__Fields_DEFINED
struct String;
struct ValidateGooglePlayPurchaseRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String* CurrencyCode;
    struct Nullable_1_UInt32_ PurchasePrice;
    struct String* ReceiptJson;
    struct String* Signature;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ValidateGooglePlayPurchaseRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_ValidateGooglePlayPurchaseRequest__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ValidateGooglePlayPurchaseRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidateGooglePlayPurchaseRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ValidateGooglePlayPurchaseRequest__Fields_FWDDECL)
#include <Modloader/app/structs/ValidateGooglePlayPurchaseRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValidateGooglePlayPurchaseRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
