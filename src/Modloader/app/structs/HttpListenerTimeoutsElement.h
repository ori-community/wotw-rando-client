#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpListenerTimeoutsElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpListenerTimeoutsElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListenerTimeoutsElement_DEFINED)
#define IL2CPP_STRUCT_HttpListenerTimeoutsElement_DEFINED
struct HttpListenerTimeoutsElement__Class;
struct HttpListenerTimeoutsElement {
    struct HttpListenerTimeoutsElement__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_HttpListenerTimeoutsElement_FWDDECL)
#define IL2CPP_STRUCT_HttpListenerTimeoutsElement_FWDDECL
#include <Modloader/app/structs/HttpListenerTimeoutsElement__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpListenerTimeoutsElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListenerTimeoutsElement_DEFINED) && !defined(IL2CPP_STRUCT_HttpListenerTimeoutsElement_FWDDECL)
#include <Modloader/app/structs/HttpListenerTimeoutsElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpListenerTimeoutsElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
