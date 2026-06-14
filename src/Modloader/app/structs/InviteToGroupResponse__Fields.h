#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InviteToGroupResponse__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InviteToGroupResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InviteToGroupResponse__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_InviteToGroupResponse__Fields_DEFINED
struct EntityKey_5;
struct EntityWithLineage;
struct String;
struct InviteToGroupResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    struct DateTime Expires;
    struct EntityKey_5* Group;
    struct EntityWithLineage* InvitedByEntity;
    struct EntityWithLineage* InvitedEntity;
    struct String* RoleId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InviteToGroupResponse__Fields_FWDDECL)
#define IL2CPP_STRUCT_InviteToGroupResponse__Fields_FWDDECL
#include <Modloader/app/structs/EntityKey_5.h>
#include <Modloader/app/structs/EntityWithLineage.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_InviteToGroupResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InviteToGroupResponse__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InviteToGroupResponse__Fields_FWDDECL)
#include <Modloader/app/structs/InviteToGroupResponse__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InviteToGroupResponse__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
