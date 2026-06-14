#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerCompletedPasswordResetEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerCompletedPasswordResetEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerCompletedPasswordResetEventData__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Nullable_1_PlayFab_PlayStreamModels_PasswordResetInitiationSource_.h>
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_DateTime_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_PlayStreamModels_PasswordResetInitiationSource__DEFINED)
#define IL2CPP_STRUCT_PlayerCompletedPasswordResetEventData__Fields_DEFINED
struct String;
struct PlayerCompletedPasswordResetEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String* CompletedFromIPAddress;
    struct DateTime CompletionTimestamp;
    struct Nullable_1_PlayFab_PlayStreamModels_PasswordResetInitiationSource_ InitiatedBy;
    struct String* InitiatedFromIPAddress;
    struct DateTime InitiationTimestamp;
    struct DateTime LinkExpiration;
    struct String* PasswordResetId;
    struct String* RecoveryEmailAddress;
    struct String* TitleId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerCompletedPasswordResetEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerCompletedPasswordResetEventData__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayerCompletedPasswordResetEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerCompletedPasswordResetEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerCompletedPasswordResetEventData__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerCompletedPasswordResetEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerCompletedPasswordResetEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
