#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InitiateFileUploadsResponse__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InitiateFileUploadsResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InitiateFileUploadsResponse__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_InitiateFileUploadsResponse__Fields_DEFINED
struct EntityKey_3;
struct List_1_PlayFab_DataModels_InitiateFileUploadMetadata_;
struct InitiateFileUploadsResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    struct EntityKey_3* Entity;
    int32_t ProfileVersion;
    struct List_1_PlayFab_DataModels_InitiateFileUploadMetadata_* UploadDetails;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InitiateFileUploadsResponse__Fields_FWDDECL)
#define IL2CPP_STRUCT_InitiateFileUploadsResponse__Fields_FWDDECL
#include <Modloader/app/structs/EntityKey_3.h>
#include <Modloader/app/structs/List_1_PlayFab_DataModels_InitiateFileUploadMetadata_.h>
#endif
#undef IL2CPP_STRUCT_InitiateFileUploadsResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InitiateFileUploadsResponse__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InitiateFileUploadsResponse__Fields_FWDDECL)
#include <Modloader/app/structs/InitiateFileUploadsResponse__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InitiateFileUploadsResponse__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
