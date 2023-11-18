#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroupRoleDeletedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroupRoleDeletedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupRoleDeletedEventData_DEFINED)
#include <Modloader/app/structs/GroupRoleDeletedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_GroupRoleDeletedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_GroupRoleDeletedEventData_DEFINED
struct GroupRoleDeletedEventData__Class;
struct GroupRoleDeletedEventData {
    struct GroupRoleDeletedEventData__Class* klass;
    MonitorData* monitor;
    struct GroupRoleDeletedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroupRoleDeletedEventData_FWDDECL)
#define IL2CPP_STRUCT_GroupRoleDeletedEventData_FWDDECL
#include <Modloader/app/structs/GroupRoleDeletedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_GroupRoleDeletedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupRoleDeletedEventData_DEFINED) && !defined(IL2CPP_STRUCT_GroupRoleDeletedEventData_FWDDECL)
#include <Modloader/app/structs/GroupRoleDeletedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroupRoleDeletedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
