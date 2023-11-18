#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClientFocusChangeEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClientFocusChangeEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientFocusChangeEventData_DEFINED)
#include <Modloader/app/structs/ClientFocusChangeEventData__Fields.h>
#if defined(IL2CPP_STRUCT_ClientFocusChangeEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_ClientFocusChangeEventData_DEFINED
struct ClientFocusChangeEventData__Class;
struct ClientFocusChangeEventData {
    struct ClientFocusChangeEventData__Class* klass;
    MonitorData* monitor;
    struct ClientFocusChangeEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClientFocusChangeEventData_FWDDECL)
#define IL2CPP_STRUCT_ClientFocusChangeEventData_FWDDECL
#include <Modloader/app/structs/ClientFocusChangeEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_ClientFocusChangeEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientFocusChangeEventData_DEFINED) && !defined(IL2CPP_STRUCT_ClientFocusChangeEventData_FWDDECL)
#include <Modloader/app/structs/ClientFocusChangeEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClientFocusChangeEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
