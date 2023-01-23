#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateGroupRoleRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateGroupRoleRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateGroupRoleRequest_DEFINED)
#include <Modloader/app/structs/UpdateGroupRoleRequest__Fields.h>
#if defined(IL2CPP_STRUCT_UpdateGroupRoleRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_UpdateGroupRoleRequest_DEFINED
struct UpdateGroupRoleRequest__Class;
struct UpdateGroupRoleRequest {
    struct UpdateGroupRoleRequest__Class* klass;
    MonitorData* monitor;
    struct UpdateGroupRoleRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpdateGroupRoleRequest_FWDDECL)
#define IL2CPP_STRUCT_UpdateGroupRoleRequest_FWDDECL
#include <Modloader/app/structs/UpdateGroupRoleRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_UpdateGroupRoleRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateGroupRoleRequest_DEFINED) && !defined(IL2CPP_STRUCT_UpdateGroupRoleRequest_FWDDECL)
#include <Modloader/app/structs/UpdateGroupRoleRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateGroupRoleRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
