#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerReceiptValidationEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerReceiptValidationEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerReceiptValidationEventData__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_PlayFab_PlayStreamModels_PaymentType_.h>
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_PlayStreamModels_PaymentType__DEFINED)
#define IL2CPP_STRUCT_PlayerReceiptValidationEventData__Fields_DEFINED
struct String;
struct PlayerReceiptValidationEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String* Error;
    struct String* PaymentProvider;
    struct Nullable_1_PlayFab_PlayStreamModels_PaymentType_ PaymentType;
    struct String* ReceiptContent;
    struct String* TitleId;
    bool Valid;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerReceiptValidationEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerReceiptValidationEventData__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayerReceiptValidationEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerReceiptValidationEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerReceiptValidationEventData__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerReceiptValidationEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerReceiptValidationEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
