#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProxyScriptChain_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProxyScriptChain_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProxyScriptChain_DEFINED)
#include <Modloader/app/structs/ProxyScriptChain__Fields.h>
#if defined(IL2CPP_STRUCT_ProxyScriptChain__Fields_DEFINED)
#define IL2CPP_STRUCT_ProxyScriptChain_DEFINED
struct ProxyScriptChain__Class;
struct ProxyScriptChain {
    struct ProxyScriptChain__Class* klass;
    MonitorData* monitor;
    struct ProxyScriptChain__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ProxyScriptChain_FWDDECL)
#define IL2CPP_STRUCT_ProxyScriptChain_FWDDECL
#include <Modloader/app/structs/ProxyScriptChain__Class.h>
#endif
#undef IL2CPP_STRUCT_ProxyScriptChain_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProxyScriptChain_DEFINED) && !defined(IL2CPP_STRUCT_ProxyScriptChain_FWDDECL)
#include <Modloader/app/structs/ProxyScriptChain.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProxyScriptChain.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
