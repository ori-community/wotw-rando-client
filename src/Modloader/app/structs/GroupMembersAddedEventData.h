#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroupMembersAddedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroupMembersAddedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupMembersAddedEventData_DEFINED)
#include <Modloader/app/structs/GroupMembersAddedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_GroupMembersAddedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_GroupMembersAddedEventData_DEFINED
struct GroupMembersAddedEventData__Class;
struct GroupMembersAddedEventData {
    struct GroupMembersAddedEventData__Class* klass;
    MonitorData* monitor;
    struct GroupMembersAddedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroupMembersAddedEventData_FWDDECL)
#define IL2CPP_STRUCT_GroupMembersAddedEventData_FWDDECL
#include <Modloader/app/structs/GroupMembersAddedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_GroupMembersAddedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupMembersAddedEventData_DEFINED) && !defined(IL2CPP_STRUCT_GroupMembersAddedEventData_FWDDECL)
#include <Modloader/app/structs/GroupMembersAddedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroupMembersAddedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
