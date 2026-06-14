#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroupRoleCreatedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroupRoleCreatedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupRoleCreatedEventData_DEFINED)
#include <Modloader/app/structs/GroupRoleCreatedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_GroupRoleCreatedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_GroupRoleCreatedEventData_DEFINED
struct GroupRoleCreatedEventData__Class;
struct GroupRoleCreatedEventData {
    struct GroupRoleCreatedEventData__Class* klass;
    MonitorData* monitor;
    struct GroupRoleCreatedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroupRoleCreatedEventData_FWDDECL)
#define IL2CPP_STRUCT_GroupRoleCreatedEventData_FWDDECL
#include <Modloader/app/structs/GroupRoleCreatedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_GroupRoleCreatedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupRoleCreatedEventData_DEFINED) && !defined(IL2CPP_STRUCT_GroupRoleCreatedEventData_FWDDECL)
#include <Modloader/app/structs/GroupRoleCreatedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroupRoleCreatedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
