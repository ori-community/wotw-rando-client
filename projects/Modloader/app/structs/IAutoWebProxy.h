#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IAutoWebProxy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IAutoWebProxy_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAutoWebProxy_DEFINED)
#define IL2CPP_STRUCT_IAutoWebProxy_DEFINED
struct IAutoWebProxy__Class;
struct IAutoWebProxy {
    struct IAutoWebProxy__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IAutoWebProxy_FWDDECL)
#define IL2CPP_STRUCT_IAutoWebProxy_FWDDECL
#include <Modloader/app/structs/IAutoWebProxy__Class.h>
#endif
#undef IL2CPP_STRUCT_IAutoWebProxy_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAutoWebProxy_DEFINED) && !defined(IL2CPP_STRUCT_IAutoWebProxy_FWDDECL)
#include <Modloader/app/structs/IAutoWebProxy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IAutoWebProxy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
