#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChangeMemberRoleRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChangeMemberRoleRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeMemberRoleRequest__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_ChangeMemberRoleRequest__Fields_DEFINED
struct String;
struct EntityKey_5;
struct List_1_PlayFab_GroupsModels_EntityKey_;
struct ChangeMemberRoleRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String* DestinationRoleId;
    struct EntityKey_5* Group;
    struct List_1_PlayFab_GroupsModels_EntityKey_* Members;
    struct String* OriginRoleId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChangeMemberRoleRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_ChangeMemberRoleRequest__Fields_FWDDECL
#include <Modloader/app/structs/EntityKey_5.h>
#include <Modloader/app/structs/List_1_PlayFab_GroupsModels_EntityKey_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ChangeMemberRoleRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeMemberRoleRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ChangeMemberRoleRequest__Fields_FWDDECL)
#include <Modloader/app/structs/ChangeMemberRoleRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChangeMemberRoleRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
