#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeleteRoleRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeleteRoleRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeleteRoleRequest_DEFINED)
#include <Modloader/app/structs/DeleteRoleRequest__Fields.h>
#if defined(IL2CPP_STRUCT_DeleteRoleRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_DeleteRoleRequest_DEFINED
struct DeleteRoleRequest__Class;
struct DeleteRoleRequest {
    struct DeleteRoleRequest__Class* klass;
    MonitorData* monitor;
    struct DeleteRoleRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeleteRoleRequest_FWDDECL)
#define IL2CPP_STRUCT_DeleteRoleRequest_FWDDECL
#include <Modloader/app/structs/DeleteRoleRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_DeleteRoleRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeleteRoleRequest_DEFINED) && !defined(IL2CPP_STRUCT_DeleteRoleRequest_FWDDECL)
#include <Modloader/app/structs/DeleteRoleRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeleteRoleRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
