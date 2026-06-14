#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetProfileLanguageResponse__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetProfileLanguageResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetProfileLanguageResponse__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#include <Modloader/app/structs/Nullable_1_PlayFab_ProfilesModels_OperationTypes_.h>
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_ProfilesModels_OperationTypes__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Int32__DEFINED)
#define IL2CPP_STRUCT_SetProfileLanguageResponse__Fields_DEFINED
struct SetProfileLanguageResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    struct Nullable_1_PlayFab_ProfilesModels_OperationTypes_ OperationResult;
    struct Nullable_1_Int32_ VersionNumber;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetProfileLanguageResponse__Fields_FWDDECL)
#define IL2CPP_STRUCT_SetProfileLanguageResponse__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SetProfileLanguageResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetProfileLanguageResponse__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SetProfileLanguageResponse__Fields_FWDDECL)
#include <Modloader/app/structs/SetProfileLanguageResponse__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetProfileLanguageResponse__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
