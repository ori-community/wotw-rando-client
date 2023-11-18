#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateGroupRoleResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateGroupRoleResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateGroupRoleResponse_DEFINED)
#include <Modloader/app/structs/UpdateGroupRoleResponse__Fields.h>
#if defined(IL2CPP_STRUCT_UpdateGroupRoleResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_UpdateGroupRoleResponse_DEFINED
struct UpdateGroupRoleResponse__Class;
struct UpdateGroupRoleResponse {
    struct UpdateGroupRoleResponse__Class* klass;
    MonitorData* monitor;
    struct UpdateGroupRoleResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpdateGroupRoleResponse_FWDDECL)
#define IL2CPP_STRUCT_UpdateGroupRoleResponse_FWDDECL
#include <Modloader/app/structs/UpdateGroupRoleResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_UpdateGroupRoleResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateGroupRoleResponse_DEFINED) && !defined(IL2CPP_STRUCT_UpdateGroupRoleResponse_FWDDECL)
#include <Modloader/app/structs/UpdateGroupRoleResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateGroupRoleResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
