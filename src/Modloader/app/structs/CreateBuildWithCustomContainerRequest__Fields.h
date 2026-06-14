#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CreateBuildWithCustomContainerRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CreateBuildWithCustomContainerRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateBuildWithCustomContainerRequest__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_PlayFab_MultiplayerModels_AzureVmSize_.h>
#include <Modloader/app/structs/Nullable_1_PlayFab_MultiplayerModels_ContainerFlavor_.h>
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_MultiplayerModels_ContainerFlavor__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_MultiplayerModels_AzureVmSize__DEFINED)
#define IL2CPP_STRUCT_CreateBuildWithCustomContainerRequest__Fields_DEFINED
struct String;
struct List_1_PlayFab_MultiplayerModels_AssetReferenceParams_;
struct List_1_PlayFab_MultiplayerModels_GameCertificateReferenceParams_;
struct Dictionary_2_System_String_System_String_;
struct List_1_PlayFab_MultiplayerModels_Port_;
struct List_1_PlayFab_MultiplayerModels_BuildRegionParams_;
struct CreateBuildWithCustomContainerRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String* BuildName;
    struct Nullable_1_PlayFab_MultiplayerModels_ContainerFlavor_ ContainerFlavor;
    struct String* ContainerRepositoryName;
    struct String* ContainerRunCommand;
    struct String* ContainerTag;
    struct List_1_PlayFab_MultiplayerModels_AssetReferenceParams_* GameAssetReferences;
    struct List_1_PlayFab_MultiplayerModels_GameCertificateReferenceParams_* GameCertificateReferences;
    struct Dictionary_2_System_String_System_String_* Metadata;
    int32_t MultiplayerServerCountPerVm;
    struct List_1_PlayFab_MultiplayerModels_Port_* Ports;
    struct List_1_PlayFab_MultiplayerModels_BuildRegionParams_* RegionConfigurations;
    struct Nullable_1_PlayFab_MultiplayerModels_AzureVmSize_ VmSize;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CreateBuildWithCustomContainerRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_CreateBuildWithCustomContainerRequest__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/List_1_PlayFab_MultiplayerModels_AssetReferenceParams_.h>
#include <Modloader/app/structs/List_1_PlayFab_MultiplayerModels_BuildRegionParams_.h>
#include <Modloader/app/structs/List_1_PlayFab_MultiplayerModels_GameCertificateReferenceParams_.h>
#include <Modloader/app/structs/List_1_PlayFab_MultiplayerModels_Port_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CreateBuildWithCustomContainerRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateBuildWithCustomContainerRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CreateBuildWithCustomContainerRequest__Fields_FWDDECL)
#include <Modloader/app/structs/CreateBuildWithCustomContainerRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CreateBuildWithCustomContainerRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
