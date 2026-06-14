#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MultiplayerServerStateChangedEventPayload__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MultiplayerServerStateChangedEventPayload__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MultiplayerServerStateChangedEventPayload__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_PlayFab_PlayStreamModels_AzureRegion_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_PlayFab_PlayStreamModels_AzureRegion__DEFINED)
#define IL2CPP_STRUCT_MultiplayerServerStateChangedEventPayload__Fields_DEFINED
struct String;
struct __declspec(align(8)) MultiplayerServerStateChangedEventPayload__Fields {
    struct String* BuildId;
    struct String* NewState;
    struct String* OldState;
    struct Nullable_1_PlayFab_PlayStreamModels_AzureRegion_ Region_1;
    struct String* ServerId;
    struct String* SessionId;
    struct String* VmId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MultiplayerServerStateChangedEventPayload__Fields_FWDDECL)
#define IL2CPP_STRUCT_MultiplayerServerStateChangedEventPayload__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MultiplayerServerStateChangedEventPayload__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MultiplayerServerStateChangedEventPayload__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MultiplayerServerStateChangedEventPayload__Fields_FWDDECL)
#include <Modloader/app/structs/MultiplayerServerStateChangedEventPayload__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MultiplayerServerStateChangedEventPayload__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
