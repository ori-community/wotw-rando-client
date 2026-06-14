#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpListenerRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpListenerRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListenerRequest_DEFINED)
#include <Modloader/app/structs/HttpListenerRequest__Fields.h>
#if defined(IL2CPP_STRUCT_HttpListenerRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpListenerRequest_DEFINED
struct HttpListenerRequest__Class;
struct HttpListenerRequest {
    struct HttpListenerRequest__Class* klass;
    MonitorData* monitor;
    struct HttpListenerRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HttpListenerRequest_FWDDECL)
#define IL2CPP_STRUCT_HttpListenerRequest_FWDDECL
#include <Modloader/app/structs/HttpListenerRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpListenerRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListenerRequest_DEFINED) && !defined(IL2CPP_STRUCT_HttpListenerRequest_FWDDECL)
#include <Modloader/app/structs/HttpListenerRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpListenerRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
