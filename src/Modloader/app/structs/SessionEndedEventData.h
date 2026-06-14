#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SessionEndedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SessionEndedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_SessionEndedEventData_DEFINED)
#include <Modloader/app/structs/SessionEndedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_SessionEndedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_SessionEndedEventData_DEFINED
struct SessionEndedEventData__Class;
struct SessionEndedEventData {
    struct SessionEndedEventData__Class* klass;
    MonitorData* monitor;
    struct SessionEndedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SessionEndedEventData_FWDDECL)
#define IL2CPP_STRUCT_SessionEndedEventData_FWDDECL
#include <Modloader/app/structs/SessionEndedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_SessionEndedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_SessionEndedEventData_DEFINED) && !defined(IL2CPP_STRUCT_SessionEndedEventData_FWDDECL)
#include <Modloader/app/structs/SessionEndedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SessionEndedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
