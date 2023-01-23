#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProxyScriptChain__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProxyScriptChain__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProxyScriptChain__Fields_DEFINED)
#include <Modloader/app/structs/ProxyChain__Fields.h>
#if defined(IL2CPP_STRUCT_ProxyChain__Fields_DEFINED)
#define IL2CPP_STRUCT_ProxyScriptChain__Fields_DEFINED
struct WebProxy;
struct Uri__Array;
struct ProxyScriptChain__Fields {
    struct ProxyChain__Fields _;
    struct WebProxy* m_Proxy;
    struct Uri__Array* m_ScriptProxies;
    int32_t m_CurrentIndex;
    int32_t m_SyncStatus;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ProxyScriptChain__Fields_FWDDECL)
#define IL2CPP_STRUCT_ProxyScriptChain__Fields_FWDDECL
#include <Modloader/app/structs/Uri__Array.h>
#include <Modloader/app/structs/WebProxy.h>
#endif
#undef IL2CPP_STRUCT_ProxyScriptChain__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProxyScriptChain__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ProxyScriptChain__Fields_FWDDECL)
#include <Modloader/app/structs/ProxyScriptChain__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProxyScriptChain__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
