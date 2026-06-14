#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProxyElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProxyElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProxyElement_DEFINED)
#define IL2CPP_STRUCT_ProxyElement_DEFINED
struct ProxyElement__Class;
struct ProxyElement {
    struct ProxyElement__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ProxyElement_FWDDECL)
#define IL2CPP_STRUCT_ProxyElement_FWDDECL
#include <Modloader/app/structs/ProxyElement__Class.h>
#endif
#undef IL2CPP_STRUCT_ProxyElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProxyElement_DEFINED) && !defined(IL2CPP_STRUCT_ProxyElement_FWDDECL)
#include <Modloader/app/structs/ProxyElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProxyElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
