#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroupDeletedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroupDeletedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupDeletedEventData_DEFINED)
#include <Modloader/app/structs/GroupDeletedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_GroupDeletedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_GroupDeletedEventData_DEFINED
struct GroupDeletedEventData__Class;
struct GroupDeletedEventData {
    struct GroupDeletedEventData__Class* klass;
    MonitorData* monitor;
    struct GroupDeletedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroupDeletedEventData_FWDDECL)
#define IL2CPP_STRUCT_GroupDeletedEventData_FWDDECL
#include <Modloader/app/structs/GroupDeletedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_GroupDeletedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupDeletedEventData_DEFINED) && !defined(IL2CPP_STRUCT_GroupDeletedEventData_FWDDECL)
#include <Modloader/app/structs/GroupDeletedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroupDeletedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
