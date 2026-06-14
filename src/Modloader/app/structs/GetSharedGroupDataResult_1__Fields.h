#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetSharedGroupDataResult_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetSharedGroupDataResult_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetSharedGroupDataResult_1__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_GetSharedGroupDataResult_1__Fields_DEFINED
struct Dictionary_2_System_String_PlayFab_ServerModels_SharedGroupDataRecord_;
struct List_1_System_String_;
struct GetSharedGroupDataResult_1__Fields {
    struct PlayFabResultCommon__Fields _;
    struct Dictionary_2_System_String_PlayFab_ServerModels_SharedGroupDataRecord_* Data;
    struct List_1_System_String_* Members;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetSharedGroupDataResult_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_GetSharedGroupDataResult_1__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_PlayFab_ServerModels_SharedGroupDataRecord_.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#endif
#undef IL2CPP_STRUCT_GetSharedGroupDataResult_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetSharedGroupDataResult_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GetSharedGroupDataResult_1__Fields_FWDDECL)
#include <Modloader/app/structs/GetSharedGroupDataResult_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetSharedGroupDataResult_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
