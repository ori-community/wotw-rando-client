#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpListenerContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpListenerContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListenerContext_DEFINED)
#include <Modloader/app/structs/HttpListenerContext__Fields.h>
#if defined(IL2CPP_STRUCT_HttpListenerContext__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpListenerContext_DEFINED
struct HttpListenerContext__Class;
struct HttpListenerContext {
    struct HttpListenerContext__Class* klass;
    MonitorData* monitor;
    struct HttpListenerContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HttpListenerContext_FWDDECL)
#define IL2CPP_STRUCT_HttpListenerContext_FWDDECL
#include <Modloader/app/structs/HttpListenerContext__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpListenerContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListenerContext_DEFINED) && !defined(IL2CPP_STRUCT_HttpListenerContext_FWDDECL)
#include <Modloader/app/structs/HttpListenerContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpListenerContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
