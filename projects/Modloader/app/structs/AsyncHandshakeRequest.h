#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncHandshakeRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncHandshakeRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncHandshakeRequest_DEFINED)
#include <Modloader/app/structs/AsyncHandshakeRequest__Fields.h>
#if defined(IL2CPP_STRUCT_AsyncHandshakeRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_AsyncHandshakeRequest_DEFINED
struct AsyncHandshakeRequest__Class;
struct AsyncHandshakeRequest {
    struct AsyncHandshakeRequest__Class* klass;
    MonitorData* monitor;
    struct AsyncHandshakeRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AsyncHandshakeRequest_FWDDECL)
#define IL2CPP_STRUCT_AsyncHandshakeRequest_FWDDECL
#include <Modloader/app/structs/AsyncHandshakeRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_AsyncHandshakeRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncHandshakeRequest_DEFINED) && !defined(IL2CPP_STRUCT_AsyncHandshakeRequest_FWDDECL)
#include <Modloader/app/structs/AsyncHandshakeRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncHandshakeRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
