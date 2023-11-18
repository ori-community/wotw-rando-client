#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CreateGroupRoleRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CreateGroupRoleRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateGroupRoleRequest_DEFINED)
#include <Modloader/app/structs/CreateGroupRoleRequest__Fields.h>
#if defined(IL2CPP_STRUCT_CreateGroupRoleRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_CreateGroupRoleRequest_DEFINED
struct CreateGroupRoleRequest__Class;
struct CreateGroupRoleRequest {
    struct CreateGroupRoleRequest__Class* klass;
    MonitorData* monitor;
    struct CreateGroupRoleRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CreateGroupRoleRequest_FWDDECL)
#define IL2CPP_STRUCT_CreateGroupRoleRequest_FWDDECL
#include <Modloader/app/structs/CreateGroupRoleRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_CreateGroupRoleRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateGroupRoleRequest_DEFINED) && !defined(IL2CPP_STRUCT_CreateGroupRoleRequest_FWDDECL)
#include <Modloader/app/structs/CreateGroupRoleRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CreateGroupRoleRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
