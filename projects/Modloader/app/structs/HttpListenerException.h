#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpListenerException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpListenerException_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListenerException_DEFINED)
#include <Modloader/app/structs/HttpListenerException__Fields.h>
#if defined(IL2CPP_STRUCT_HttpListenerException__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpListenerException_DEFINED
struct HttpListenerException__Class;
struct HttpListenerException {
    struct HttpListenerException__Class* klass;
    MonitorData* monitor;
    struct HttpListenerException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HttpListenerException_FWDDECL)
#define IL2CPP_STRUCT_HttpListenerException_FWDDECL
#include <Modloader/app/structs/HttpListenerException__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpListenerException_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListenerException_DEFINED) && !defined(IL2CPP_STRUCT_HttpListenerException_FWDDECL)
#include <Modloader/app/structs/HttpListenerException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpListenerException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
