#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TierUpdateEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TierUpdateEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TierUpdateEventData__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Int32__DEFINED)
#define IL2CPP_STRUCT_TierUpdateEventData__Fields_DEFINED
struct String;
struct List_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier_;
struct IEnumerable_String;
struct TierUpdateEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String* ContactCompanyName;
    bool IsPayAsYouGo;
    bool IsReservedCapacity;
    bool IsReservedCapacityAnnual;
    double MonthlyMinimumUSD;
    struct List_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier_* OveragePricePerMauTiers;
    struct String* PaymentSystemAccountId;
    struct List_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier_* PricePerMauTiers;
    struct Nullable_1_Int32_ ReservedMAU;
    struct IEnumerable_String* StudioIds;
    struct String* TierDisplayName;
    struct String* TierId;
    struct String* TransactionId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TierUpdateEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_TierUpdateEventData__Fields_FWDDECL
#include <Modloader/app/structs/IEnumerable_String.h>
#include <Modloader/app/structs/List_1_PlayFab_PlayStreamModels_PaymentOptionPerMauPriceTier_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TierUpdateEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TierUpdateEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TierUpdateEventData__Fields_FWDDECL)
#include <Modloader/app/structs/TierUpdateEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TierUpdateEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
