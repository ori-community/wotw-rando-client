#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProxyChain_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProxyChain_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProxyChain_DEFINED)
#include <Modloader/app/structs/ProxyChain__Fields.h>
#if defined(IL2CPP_STRUCT_ProxyChain__Fields_DEFINED)
#define IL2CPP_STRUCT_ProxyChain_DEFINED
struct ProxyChain__Class;
struct ProxyChain {
    struct ProxyChain__Class* klass;
    MonitorData* monitor;
    struct ProxyChain__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ProxyChain_FWDDECL)
#define IL2CPP_STRUCT_ProxyChain_FWDDECL
#include <Modloader/app/structs/ProxyChain__Class.h>
#endif
#undef IL2CPP_STRUCT_ProxyChain_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProxyChain_DEFINED) && !defined(IL2CPP_STRUCT_ProxyChain_FWDDECL)
#include <Modloader/app/structs/ProxyChain.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProxyChain.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
