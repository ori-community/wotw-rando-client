#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateGroupRoleResponse__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateGroupRoleResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateGroupRoleResponse__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_PlayFab_GroupsModels_OperationTypes_.h>
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_GroupsModels_OperationTypes__DEFINED)
#define IL2CPP_STRUCT_UpdateGroupRoleResponse__Fields_DEFINED
struct String;
struct UpdateGroupRoleResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    struct String* OperationReason;
    int32_t ProfileVersion;
    struct Nullable_1_PlayFab_GroupsModels_OperationTypes_ SetResult;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpdateGroupRoleResponse__Fields_FWDDECL)
#define IL2CPP_STRUCT_UpdateGroupRoleResponse__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_UpdateGroupRoleResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateGroupRoleResponse__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UpdateGroupRoleResponse__Fields_FWDDECL)
#include <Modloader/app/structs/UpdateGroupRoleResponse__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateGroupRoleResponse__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
