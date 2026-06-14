#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpListenerResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpListenerResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListenerResponse_DEFINED)
#include <Modloader/app/structs/HttpListenerResponse__Fields.h>
#if defined(IL2CPP_STRUCT_HttpListenerResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpListenerResponse_DEFINED
struct HttpListenerResponse__Class;
struct HttpListenerResponse {
    struct HttpListenerResponse__Class* klass;
    MonitorData* monitor;
    struct HttpListenerResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HttpListenerResponse_FWDDECL)
#define IL2CPP_STRUCT_HttpListenerResponse_FWDDECL
#include <Modloader/app/structs/HttpListenerResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpListenerResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListenerResponse_DEFINED) && !defined(IL2CPP_STRUCT_HttpListenerResponse_FWDDECL)
#include <Modloader/app/structs/HttpListenerResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpListenerResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
