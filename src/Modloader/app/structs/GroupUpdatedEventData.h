#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroupUpdatedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroupUpdatedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupUpdatedEventData_DEFINED)
#include <Modloader/app/structs/GroupUpdatedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_GroupUpdatedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_GroupUpdatedEventData_DEFINED
struct GroupUpdatedEventData__Class;
struct GroupUpdatedEventData {
    struct GroupUpdatedEventData__Class* klass;
    MonitorData* monitor;
    struct GroupUpdatedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroupUpdatedEventData_FWDDECL)
#define IL2CPP_STRUCT_GroupUpdatedEventData_FWDDECL
#include <Modloader/app/structs/GroupUpdatedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_GroupUpdatedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupUpdatedEventData_DEFINED) && !defined(IL2CPP_STRUCT_GroupUpdatedEventData_FWDDECL)
#include <Modloader/app/structs/GroupUpdatedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroupUpdatedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
