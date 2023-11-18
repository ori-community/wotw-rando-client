#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClientSessionStartEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClientSessionStartEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientSessionStartEventData_DEFINED)
#include <Modloader/app/structs/ClientSessionStartEventData__Fields.h>
#if defined(IL2CPP_STRUCT_ClientSessionStartEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_ClientSessionStartEventData_DEFINED
struct ClientSessionStartEventData__Class;
struct ClientSessionStartEventData {
    struct ClientSessionStartEventData__Class* klass;
    MonitorData* monitor;
    struct ClientSessionStartEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClientSessionStartEventData_FWDDECL)
#define IL2CPP_STRUCT_ClientSessionStartEventData_FWDDECL
#include <Modloader/app/structs/ClientSessionStartEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_ClientSessionStartEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientSessionStartEventData_DEFINED) && !defined(IL2CPP_STRUCT_ClientSessionStartEventData_FWDDECL)
#include <Modloader/app/structs/ClientSessionStartEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClientSessionStartEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
