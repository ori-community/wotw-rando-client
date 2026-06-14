#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PaymentOptionPerMauPriceTier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PaymentOptionPerMauPriceTier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PaymentOptionPerMauPriceTier__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Double_.h>
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#include <Modloader/app/structs/Nullable_1_PlayFab_PlayStreamModels_MetricUnit_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_Int32__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_PlayStreamModels_MetricUnit__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Double__DEFINED)
#define IL2CPP_STRUCT_PaymentOptionPerMauPriceTier__Fields_DEFINED
struct String;
struct __declspec(align(8)) PaymentOptionPerMauPriceTier__Fields {
    struct Nullable_1_Int32_ LowerBoundInclusive;
    struct String* Name;
    struct Nullable_1_PlayFab_PlayStreamModels_MetricUnit_ PriceUnit;
    struct Nullable_1_Double_ PriceUnitSize;
    struct Nullable_1_Double_ PriceUSD;
    struct String* PriceUSDFormatted;
    struct Nullable_1_Int32_ UpperBoundInclusive;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PaymentOptionPerMauPriceTier__Fields_FWDDECL)
#define IL2CPP_STRUCT_PaymentOptionPerMauPriceTier__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PaymentOptionPerMauPriceTier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PaymentOptionPerMauPriceTier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PaymentOptionPerMauPriceTier__Fields_FWDDECL)
#include <Modloader/app/structs/PaymentOptionPerMauPriceTier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PaymentOptionPerMauPriceTier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
