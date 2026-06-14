#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClientFocusChangePayload_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClientFocusChangePayload_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientFocusChangePayload_DEFINED)
#include <Modloader/app/structs/ClientFocusChangePayload__Fields.h>
#if defined(IL2CPP_STRUCT_ClientFocusChangePayload__Fields_DEFINED)
#define IL2CPP_STRUCT_ClientFocusChangePayload_DEFINED
struct ClientFocusChangePayload__Class;
struct ClientFocusChangePayload {
    struct ClientFocusChangePayload__Class* klass;
    MonitorData* monitor;
    struct ClientFocusChangePayload__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClientFocusChangePayload_FWDDECL)
#define IL2CPP_STRUCT_ClientFocusChangePayload_FWDDECL
#include <Modloader/app/structs/ClientFocusChangePayload__Class.h>
#endif
#undef IL2CPP_STRUCT_ClientFocusChangePayload_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientFocusChangePayload_DEFINED) && !defined(IL2CPP_STRUCT_ClientFocusChangePayload_FWDDECL)
#include <Modloader/app/structs/ClientFocusChangePayload.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClientFocusChangePayload.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
