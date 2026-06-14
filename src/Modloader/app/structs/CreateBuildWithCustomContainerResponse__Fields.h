#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CreateBuildWithCustomContainerResponse__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CreateBuildWithCustomContainerResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateBuildWithCustomContainerResponse__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#include <Modloader/app/structs/Nullable_1_PlayFab_MultiplayerModels_AzureVmSize_.h>
#include <Modloader/app/structs/Nullable_1_PlayFab_MultiplayerModels_ContainerFlavor_.h>
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_MultiplayerModels_ContainerFlavor__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_DateTime__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_MultiplayerModels_AzureVmSize__DEFINED)
#define IL2CPP_STRUCT_CreateBuildWithCustomContainerResponse__Fields_DEFINED
struct String;
struct ContainerImageReference;
struct List_1_PlayFab_MultiplayerModels_AssetReference_;
struct List_1_PlayFab_MultiplayerModels_GameCertificateReference_;
struct Dictionary_2_System_String_System_String_;
struct List_1_PlayFab_MultiplayerModels_Port_;
struct List_1_PlayFab_MultiplayerModels_BuildRegion_;
struct CreateBuildWithCustomContainerResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    struct String* BuildId;
    struct String* BuildName;
    struct Nullable_1_PlayFab_MultiplayerModels_ContainerFlavor_ ContainerFlavor;
    struct String* ContainerRunCommand;
    struct Nullable_1_DateTime_ CreationTime;
    struct ContainerImageReference* CustomGameContainerImage;
    struct List_1_PlayFab_MultiplayerModels_AssetReference_* GameAssetReferences;
    struct List_1_PlayFab_MultiplayerModels_GameCertificateReference_* GameCertificateReferences;
    struct Dictionary_2_System_String_System_String_* Metadata;
    int32_t MultiplayerServerCountPerVm;
    struct List_1_PlayFab_MultiplayerModels_Port_* Ports;
    struct List_1_PlayFab_MultiplayerModels_BuildRegion_* RegionConfigurations;
    struct Nullable_1_PlayFab_MultiplayerModels_AzureVmSize_ VmSize;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CreateBuildWithCustomContainerResponse__Fields_FWDDECL)
#define IL2CPP_STRUCT_CreateBuildWithCustomContainerResponse__Fields_FWDDECL
#include <Modloader/app/structs/ContainerImageReference.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/List_1_PlayFab_MultiplayerModels_AssetReference_.h>
#include <Modloader/app/structs/List_1_PlayFab_MultiplayerModels_BuildRegion_.h>
#include <Modloader/app/structs/List_1_PlayFab_MultiplayerModels_GameCertificateReference_.h>
#include <Modloader/app/structs/List_1_PlayFab_MultiplayerModels_Port_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CreateBuildWithCustomContainerResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateBuildWithCustomContainerResponse__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CreateBuildWithCustomContainerResponse__Fields_FWDDECL)
#include <Modloader/app/structs/CreateBuildWithCustomContainerResponse__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CreateBuildWithCustomContainerResponse__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
