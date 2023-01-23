#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChangeMemberRoleRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChangeMemberRoleRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeMemberRoleRequest_DEFINED)
#include <Modloader/app/structs/ChangeMemberRoleRequest__Fields.h>
#if defined(IL2CPP_STRUCT_ChangeMemberRoleRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_ChangeMemberRoleRequest_DEFINED
struct ChangeMemberRoleRequest__Class;
struct ChangeMemberRoleRequest {
    struct ChangeMemberRoleRequest__Class* klass;
    MonitorData* monitor;
    struct ChangeMemberRoleRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChangeMemberRoleRequest_FWDDECL)
#define IL2CPP_STRUCT_ChangeMemberRoleRequest_FWDDECL
#include <Modloader/app/structs/ChangeMemberRoleRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_ChangeMemberRoleRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeMemberRoleRequest_DEFINED) && !defined(IL2CPP_STRUCT_ChangeMemberRoleRequest_FWDDECL)
#include <Modloader/app/structs/ChangeMemberRoleRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChangeMemberRoleRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
