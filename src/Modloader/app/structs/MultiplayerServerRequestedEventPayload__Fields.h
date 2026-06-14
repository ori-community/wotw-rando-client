#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MultiplayerServerRequestedEventPayload__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MultiplayerServerRequestedEventPayload__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MultiplayerServerRequestedEventPayload__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#include <Modloader/app/structs/Nullable_1_PlayFab_PlayStreamModels_AzureRegion_.h>
#include <Modloader/app/structs/Nullable_1_PlayFab_PlayStreamModels_GenericErrorCodes_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_PlayFab_PlayStreamModels_AzureRegion__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Int32__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_PlayStreamModels_GenericErrorCodes__DEFINED)
#define IL2CPP_STRUCT_MultiplayerServerRequestedEventPayload__Fields_DEFINED
struct String;
struct List_1_PlayFab_PlayStreamModels_AzureRegion_;
struct __declspec(align(8)) MultiplayerServerRequestedEventPayload__Fields {
    struct Nullable_1_PlayFab_PlayStreamModels_AzureRegion_ AllocatedRegion;
    struct Nullable_1_Int32_ AllocatedRegionPreferenceRanking;
    struct String* BuildId;
    struct Nullable_1_PlayFab_PlayStreamModels_GenericErrorCodes_ ErrorCode;
    struct List_1_PlayFab_PlayStreamModels_AzureRegion_* PreferredRegions;
    struct String* ServerId;
    struct String* SessionId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MultiplayerServerRequestedEventPayload__Fields_FWDDECL)
#define IL2CPP_STRUCT_MultiplayerServerRequestedEventPayload__Fields_FWDDECL
#include <Modloader/app/structs/List_1_PlayFab_PlayStreamModels_AzureRegion_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MultiplayerServerRequestedEventPayload__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MultiplayerServerRequestedEventPayload__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MultiplayerServerRequestedEventPayload__Fields_FWDDECL)
#include <Modloader/app/structs/MultiplayerServerRequestedEventPayload__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MultiplayerServerRequestedEventPayload__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
