#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroupRoleMembersAddedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroupRoleMembersAddedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupRoleMembersAddedEventData_DEFINED)
#include <Modloader/app/structs/GroupRoleMembersAddedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_GroupRoleMembersAddedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_GroupRoleMembersAddedEventData_DEFINED
struct GroupRoleMembersAddedEventData__Class;
struct GroupRoleMembersAddedEventData {
    struct GroupRoleMembersAddedEventData__Class* klass;
    MonitorData* monitor;
    struct GroupRoleMembersAddedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroupRoleMembersAddedEventData_FWDDECL)
#define IL2CPP_STRUCT_GroupRoleMembersAddedEventData_FWDDECL
#include <Modloader/app/structs/GroupRoleMembersAddedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_GroupRoleMembersAddedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupRoleMembersAddedEventData_DEFINED) && !defined(IL2CPP_STRUCT_GroupRoleMembersAddedEventData_FWDDECL)
#include <Modloader/app/structs/GroupRoleMembersAddedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroupRoleMembersAddedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
