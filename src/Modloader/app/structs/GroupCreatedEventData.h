#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroupCreatedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroupCreatedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupCreatedEventData_DEFINED)
#include <Modloader/app/structs/GroupCreatedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_GroupCreatedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_GroupCreatedEventData_DEFINED
struct GroupCreatedEventData__Class;
struct GroupCreatedEventData {
    struct GroupCreatedEventData__Class* klass;
    MonitorData* monitor;
    struct GroupCreatedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroupCreatedEventData_FWDDECL)
#define IL2CPP_STRUCT_GroupCreatedEventData_FWDDECL
#include <Modloader/app/structs/GroupCreatedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_GroupCreatedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupCreatedEventData_DEFINED) && !defined(IL2CPP_STRUCT_GroupCreatedEventData_FWDDECL)
#include <Modloader/app/structs/GroupCreatedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroupCreatedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
