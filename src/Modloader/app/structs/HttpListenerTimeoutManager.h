#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpListenerTimeoutManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpListenerTimeoutManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListenerTimeoutManager_DEFINED)
#define IL2CPP_STRUCT_HttpListenerTimeoutManager_DEFINED
struct HttpListenerTimeoutManager__Class;
struct HttpListenerTimeoutManager {
    struct HttpListenerTimeoutManager__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_HttpListenerTimeoutManager_FWDDECL)
#define IL2CPP_STRUCT_HttpListenerTimeoutManager_FWDDECL
#include <Modloader/app/structs/HttpListenerTimeoutManager__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpListenerTimeoutManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListenerTimeoutManager_DEFINED) && !defined(IL2CPP_STRUCT_HttpListenerTimeoutManager_FWDDECL)
#include <Modloader/app/structs/HttpListenerTimeoutManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpListenerTimeoutManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
