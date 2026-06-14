#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetFilesResponse__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetFilesResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetFilesResponse__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_GetFilesResponse__Fields_DEFINED
struct EntityKey_3;
struct Dictionary_2_System_String_PlayFab_DataModels_GetFileMetadata_;
struct GetFilesResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    struct EntityKey_3* Entity;
    struct Dictionary_2_System_String_PlayFab_DataModels_GetFileMetadata_* Metadata;
    int32_t ProfileVersion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetFilesResponse__Fields_FWDDECL)
#define IL2CPP_STRUCT_GetFilesResponse__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_PlayFab_DataModels_GetFileMetadata_.h>
#include <Modloader/app/structs/EntityKey_3.h>
#endif
#undef IL2CPP_STRUCT_GetFilesResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetFilesResponse__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GetFilesResponse__Fields_FWDDECL)
#include <Modloader/app/structs/GetFilesResponse__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetFilesResponse__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
