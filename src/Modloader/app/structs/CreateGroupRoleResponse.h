#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CreateGroupRoleResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CreateGroupRoleResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateGroupRoleResponse_DEFINED)
#include <Modloader/app/structs/CreateGroupRoleResponse__Fields.h>
#if defined(IL2CPP_STRUCT_CreateGroupRoleResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_CreateGroupRoleResponse_DEFINED
struct CreateGroupRoleResponse__Class;
struct CreateGroupRoleResponse {
    struct CreateGroupRoleResponse__Class* klass;
    MonitorData* monitor;
    struct CreateGroupRoleResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CreateGroupRoleResponse_FWDDECL)
#define IL2CPP_STRUCT_CreateGroupRoleResponse_FWDDECL
#include <Modloader/app/structs/CreateGroupRoleResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_CreateGroupRoleResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateGroupRoleResponse_DEFINED) && !defined(IL2CPP_STRUCT_CreateGroupRoleResponse_FWDDECL)
#include <Modloader/app/structs/CreateGroupRoleResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CreateGroupRoleResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
