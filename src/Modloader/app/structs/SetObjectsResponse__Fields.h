#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetObjectsResponse__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetObjectsResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetObjectsResponse__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_SetObjectsResponse__Fields_DEFINED
struct List_1_PlayFab_DataModels_SetObjectInfo_;
struct SetObjectsResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    int32_t ProfileVersion;
    struct List_1_PlayFab_DataModels_SetObjectInfo_* SetResults;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetObjectsResponse__Fields_FWDDECL)
#define IL2CPP_STRUCT_SetObjectsResponse__Fields_FWDDECL
#include <Modloader/app/structs/List_1_PlayFab_DataModels_SetObjectInfo_.h>
#endif
#undef IL2CPP_STRUCT_SetObjectsResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetObjectsResponse__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SetObjectsResponse__Fields_FWDDECL)
#include <Modloader/app/structs/SetObjectsResponse__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetObjectsResponse__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
