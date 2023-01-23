#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MultiplayerServerSummary__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MultiplayerServerSummary__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MultiplayerServerSummary__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#include <Modloader/app/structs/Nullable_1_PlayFab_MultiplayerModels_AzureRegion_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_DateTime__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_MultiplayerModels_AzureRegion__DEFINED)
#define IL2CPP_STRUCT_MultiplayerServerSummary__Fields_DEFINED
struct List_1_PlayFab_MultiplayerModels_ConnectedPlayer_;
struct String;
struct __declspec(align(8)) MultiplayerServerSummary__Fields {
    struct List_1_PlayFab_MultiplayerModels_ConnectedPlayer_* ConnectedPlayers;
    struct Nullable_1_DateTime_ LastStateTransitionTime;
    struct Nullable_1_PlayFab_MultiplayerModels_AzureRegion_ Region_1;
    struct String* ServerId;
    struct String* SessionId;
    struct String* State;
    struct String* VmId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MultiplayerServerSummary__Fields_FWDDECL)
#define IL2CPP_STRUCT_MultiplayerServerSummary__Fields_FWDDECL
#include <Modloader/app/structs/List_1_PlayFab_MultiplayerModels_ConnectedPlayer_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MultiplayerServerSummary__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MultiplayerServerSummary__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MultiplayerServerSummary__Fields_FWDDECL)
#include <Modloader/app/structs/MultiplayerServerSummary__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MultiplayerServerSummary__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
