#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleLimitChangedEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleLimitChangedEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleLimitChangedEventData__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Double_.h>
#include <Modloader/app/structs/Nullable_1_PlayFab_PlayStreamModels_MetricUnit_.h>
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Double__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_PlayStreamModels_MetricUnit__DEFINED)
#define IL2CPP_STRUCT_TitleLimitChangedEventData__Fields_DEFINED
struct String;
struct TitleLimitChangedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String* LimitDisplayName;
    struct String* LimitId;
    struct Nullable_1_Double_ PreviousPriceUSD;
    struct Nullable_1_Double_ PreviousValue;
    struct Nullable_1_Double_ PriceUSD;
    struct String* TransactionId;
    struct Nullable_1_PlayFab_PlayStreamModels_MetricUnit_ Unit;
    struct Nullable_1_Double_ Value;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TitleLimitChangedEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_TitleLimitChangedEventData__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TitleLimitChangedEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleLimitChangedEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TitleLimitChangedEventData__Fields_FWDDECL)
#include <Modloader/app/structs/TitleLimitChangedEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleLimitChangedEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
