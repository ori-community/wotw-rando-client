#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroupWithRoles__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroupWithRoles__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupWithRoles__Fields_DEFINED)
#define IL2CPP_STRUCT_GroupWithRoles__Fields_DEFINED
struct EntityKey_5;
struct String;
struct List_1_PlayFab_GroupsModels_GroupRole_;
struct __declspec(align(8)) GroupWithRoles__Fields {
    struct EntityKey_5* Group;
    struct String* GroupName;
    int32_t ProfileVersion;
    struct List_1_PlayFab_GroupsModels_GroupRole_* Roles;
};
#endif
#if !defined(IL2CPP_STRUCT_GroupWithRoles__Fields_FWDDECL)
#define IL2CPP_STRUCT_GroupWithRoles__Fields_FWDDECL
#include <Modloader/app/structs/EntityKey_5.h>
#include <Modloader/app/structs/List_1_PlayFab_GroupsModels_GroupRole_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GroupWithRoles__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupWithRoles__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GroupWithRoles__Fields_FWDDECL)
#include <Modloader/app/structs/GroupWithRoles__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroupWithRoles__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
