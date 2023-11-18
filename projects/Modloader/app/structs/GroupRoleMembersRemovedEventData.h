#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroupRoleMembersRemovedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroupRoleMembersRemovedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupRoleMembersRemovedEventData_DEFINED)
#include <Modloader/app/structs/GroupRoleMembersRemovedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_GroupRoleMembersRemovedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_GroupRoleMembersRemovedEventData_DEFINED
struct GroupRoleMembersRemovedEventData__Class;
struct GroupRoleMembersRemovedEventData {
    struct GroupRoleMembersRemovedEventData__Class* klass;
    MonitorData* monitor;
    struct GroupRoleMembersRemovedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroupRoleMembersRemovedEventData_FWDDECL)
#define IL2CPP_STRUCT_GroupRoleMembersRemovedEventData_FWDDECL
#include <Modloader/app/structs/GroupRoleMembersRemovedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_GroupRoleMembersRemovedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupRoleMembersRemovedEventData_DEFINED) && !defined(IL2CPP_STRUCT_GroupRoleMembersRemovedEventData_FWDDECL)
#include <Modloader/app/structs/GroupRoleMembersRemovedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroupRoleMembersRemovedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
