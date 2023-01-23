#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpListenerElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpListenerElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListenerElement_DEFINED)
#define IL2CPP_STRUCT_HttpListenerElement_DEFINED
struct HttpListenerElement__Class;
struct HttpListenerElement {
    struct HttpListenerElement__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_HttpListenerElement_FWDDECL)
#define IL2CPP_STRUCT_HttpListenerElement_FWDDECL
#include <Modloader/app/structs/HttpListenerElement__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpListenerElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListenerElement_DEFINED) && !defined(IL2CPP_STRUCT_HttpListenerElement_FWDDECL)
#include <Modloader/app/structs/HttpListenerElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpListenerElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
