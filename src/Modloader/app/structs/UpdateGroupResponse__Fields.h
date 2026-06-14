#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateGroupResponse__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateGroupResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateGroupResponse__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_PlayFab_GroupsModels_OperationTypes_.h>
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_GroupsModels_OperationTypes__DEFINED)
#define IL2CPP_STRUCT_UpdateGroupResponse__Fields_DEFINED
struct String;
struct UpdateGroupResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    struct String* OperationReason;
    int32_t ProfileVersion;
    struct Nullable_1_PlayFab_GroupsModels_OperationTypes_ SetResult;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpdateGroupResponse__Fields_FWDDECL)
#define IL2CPP_STRUCT_UpdateGroupResponse__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_UpdateGroupResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateGroupResponse__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UpdateGroupResponse__Fields_FWDDECL)
#include <Modloader/app/structs/UpdateGroupResponse__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateGroupResponse__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
