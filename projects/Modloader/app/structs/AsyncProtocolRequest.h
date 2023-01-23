#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncProtocolRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncProtocolRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncProtocolRequest_DEFINED)
#include <Modloader/app/structs/AsyncProtocolRequest__Fields.h>
#if defined(IL2CPP_STRUCT_AsyncProtocolRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_AsyncProtocolRequest_DEFINED
struct AsyncProtocolRequest__Class;
struct AsyncProtocolRequest {
    struct AsyncProtocolRequest__Class* klass;
    MonitorData* monitor;
    struct AsyncProtocolRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AsyncProtocolRequest_FWDDECL)
#define IL2CPP_STRUCT_AsyncProtocolRequest_FWDDECL
#include <Modloader/app/structs/AsyncProtocolRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_AsyncProtocolRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncProtocolRequest_DEFINED) && !defined(IL2CPP_STRUCT_AsyncProtocolRequest_FWDDECL)
#include <Modloader/app/structs/AsyncProtocolRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncProtocolRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
