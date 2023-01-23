#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SessionStartedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SessionStartedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_SessionStartedEventData_DEFINED)
#include <Modloader/app/structs/SessionStartedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_SessionStartedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_SessionStartedEventData_DEFINED
struct SessionStartedEventData__Class;
struct SessionStartedEventData {
    struct SessionStartedEventData__Class* klass;
    MonitorData* monitor;
    struct SessionStartedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SessionStartedEventData_FWDDECL)
#define IL2CPP_STRUCT_SessionStartedEventData_FWDDECL
#include <Modloader/app/structs/SessionStartedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_SessionStartedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_SessionStartedEventData_DEFINED) && !defined(IL2CPP_STRUCT_SessionStartedEventData_FWDDECL)
#include <Modloader/app/structs/SessionStartedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SessionStartedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
