#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IWebProxy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IWebProxy_INITIALIZING
#if !defined(IL2CPP_STRUCT_IWebProxy_DEFINED)
#define IL2CPP_STRUCT_IWebProxy_DEFINED
struct IWebProxy__Class;
struct IWebProxy {
    struct IWebProxy__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IWebProxy_FWDDECL)
#define IL2CPP_STRUCT_IWebProxy_FWDDECL
#include <Modloader/app/structs/IWebProxy__Class.h>
#endif
#undef IL2CPP_STRUCT_IWebProxy_INITIALIZING
#if !defined(IL2CPP_STRUCT_IWebProxy_DEFINED) && !defined(IL2CPP_STRUCT_IWebProxy_FWDDECL)
#include <Modloader/app/structs/IWebProxy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IWebProxy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
