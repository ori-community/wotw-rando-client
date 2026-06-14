#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpListenerWebSocketContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpListenerWebSocketContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListenerWebSocketContext_DEFINED)
#define IL2CPP_STRUCT_HttpListenerWebSocketContext_DEFINED
struct HttpListenerWebSocketContext__Class;
struct HttpListenerWebSocketContext {
    struct HttpListenerWebSocketContext__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_HttpListenerWebSocketContext_FWDDECL)
#define IL2CPP_STRUCT_HttpListenerWebSocketContext_FWDDECL
#include <Modloader/app/structs/HttpListenerWebSocketContext__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpListenerWebSocketContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListenerWebSocketContext_DEFINED) && !defined(IL2CPP_STRUCT_HttpListenerWebSocketContext_FWDDECL)
#include <Modloader/app/structs/HttpListenerWebSocketContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpListenerWebSocketContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
