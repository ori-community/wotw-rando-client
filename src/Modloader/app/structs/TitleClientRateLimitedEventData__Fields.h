#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleClientRateLimitedEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleClientRateLimitedEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleClientRateLimitedEventData__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_PlayFab_PlayStreamModels_AlertLevel_.h>
#include <Modloader/app/structs/Nullable_1_PlayFab_PlayStreamModels_AlertStates_.h>
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_PlayStreamModels_AlertStates__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_PlayStreamModels_AlertLevel__DEFINED)
#define IL2CPP_STRUCT_TitleClientRateLimitedEventData__Fields_DEFINED
struct String;
struct TitleClientRateLimitedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String* AlertEventId;
    struct Nullable_1_PlayFab_PlayStreamModels_AlertStates_ AlertState;
    struct String* API;
    struct String* ErrorCode;
    struct String* GraphUrl;
    struct Nullable_1_PlayFab_PlayStreamModels_AlertLevel_ Level;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TitleClientRateLimitedEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_TitleClientRateLimitedEventData__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TitleClientRateLimitedEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleClientRateLimitedEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TitleClientRateLimitedEventData__Fields_FWDDECL)
#include <Modloader/app/structs/TitleClientRateLimitedEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleClientRateLimitedEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
