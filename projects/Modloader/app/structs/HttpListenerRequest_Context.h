#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpListenerRequest_Context_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpListenerRequest_Context_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListenerRequest_Context_DEFINED)
#define IL2CPP_STRUCT_HttpListenerRequest_Context_DEFINED
struct HttpListenerRequest_Context__Class;
struct HttpListenerRequest_Context {
    struct HttpListenerRequest_Context__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_HttpListenerRequest_Context_FWDDECL)
#define IL2CPP_STRUCT_HttpListenerRequest_Context_FWDDECL
#include <Modloader/app/structs/HttpListenerRequest_Context__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpListenerRequest_Context_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListenerRequest_Context_DEFINED) && !defined(IL2CPP_STRUCT_HttpListenerRequest_Context_FWDDECL)
#include <Modloader/app/structs/HttpListenerRequest_Context.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpListenerRequest_Context.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
