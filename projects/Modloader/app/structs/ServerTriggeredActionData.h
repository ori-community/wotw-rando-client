#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerTriggeredActionData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerTriggeredActionData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerTriggeredActionData_DEFINED)
#include <Modloader/app/structs/ServerTriggeredActionData__Fields.h>
#if defined(IL2CPP_STRUCT_ServerTriggeredActionData__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerTriggeredActionData_DEFINED
struct ServerTriggeredActionData__Class;
struct ServerTriggeredActionData {
    struct ServerTriggeredActionData__Class* klass;
    MonitorData* monitor;
    struct ServerTriggeredActionData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerTriggeredActionData_FWDDECL)
#define IL2CPP_STRUCT_ServerTriggeredActionData_FWDDECL
#include <Modloader/app/structs/ServerTriggeredActionData__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerTriggeredActionData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerTriggeredActionData_DEFINED) && !defined(IL2CPP_STRUCT_ServerTriggeredActionData_FWDDECL)
#include <Modloader/app/structs/ServerTriggeredActionData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerTriggeredActionData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
