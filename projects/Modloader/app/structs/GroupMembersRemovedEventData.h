#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroupMembersRemovedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroupMembersRemovedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupMembersRemovedEventData_DEFINED)
#include <Modloader/app/structs/GroupMembersRemovedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_GroupMembersRemovedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_GroupMembersRemovedEventData_DEFINED
struct GroupMembersRemovedEventData__Class;
struct GroupMembersRemovedEventData {
    struct GroupMembersRemovedEventData__Class* klass;
    MonitorData* monitor;
    struct GroupMembersRemovedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroupMembersRemovedEventData_FWDDECL)
#define IL2CPP_STRUCT_GroupMembersRemovedEventData_FWDDECL
#include <Modloader/app/structs/GroupMembersRemovedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_GroupMembersRemovedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupMembersRemovedEventData_DEFINED) && !defined(IL2CPP_STRUCT_GroupMembersRemovedEventData_FWDDECL)
#include <Modloader/app/structs/GroupMembersRemovedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroupMembersRemovedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
