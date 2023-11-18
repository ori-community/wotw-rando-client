#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CFNetwork_GetProxyData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CFNetwork_GetProxyData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFNetwork_GetProxyData__Fields_DEFINED)
#define IL2CPP_STRUCT_CFNetwork_GetProxyData__Fields_DEFINED
struct ManualResetEvent;
struct __declspec(align(8)) CFNetwork_GetProxyData__Fields {
    void* script;
    void* targetUri;
    void* error;
    void* result;
    struct ManualResetEvent* evt;
};
#endif
#if !defined(IL2CPP_STRUCT_CFNetwork_GetProxyData__Fields_FWDDECL)
#define IL2CPP_STRUCT_CFNetwork_GetProxyData__Fields_FWDDECL
#include <Modloader/app/structs/ManualResetEvent.h>
#endif
#undef IL2CPP_STRUCT_CFNetwork_GetProxyData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFNetwork_GetProxyData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CFNetwork_GetProxyData__Fields_FWDDECL)
#include <Modloader/app/structs/CFNetwork_GetProxyData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CFNetwork_GetProxyData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
