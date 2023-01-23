#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroupRoleUpdatedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroupRoleUpdatedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupRoleUpdatedEventData_DEFINED)
#include <Modloader/app/structs/GroupRoleUpdatedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_GroupRoleUpdatedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_GroupRoleUpdatedEventData_DEFINED
struct GroupRoleUpdatedEventData__Class;
struct GroupRoleUpdatedEventData {
    struct GroupRoleUpdatedEventData__Class* klass;
    MonitorData* monitor;
    struct GroupRoleUpdatedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroupRoleUpdatedEventData_FWDDECL)
#define IL2CPP_STRUCT_GroupRoleUpdatedEventData_FWDDECL
#include <Modloader/app/structs/GroupRoleUpdatedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_GroupRoleUpdatedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupRoleUpdatedEventData_DEFINED) && !defined(IL2CPP_STRUCT_GroupRoleUpdatedEventData_FWDDECL)
#include <Modloader/app/structs/GroupRoleUpdatedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroupRoleUpdatedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
