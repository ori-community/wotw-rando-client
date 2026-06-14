#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CFNetwork_GetProxyData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CFNetwork_GetProxyData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFNetwork_GetProxyData_DEFINED)
#include <Modloader/app/structs/CFNetwork_GetProxyData__Fields.h>
#if defined(IL2CPP_STRUCT_CFNetwork_GetProxyData__Fields_DEFINED)
#define IL2CPP_STRUCT_CFNetwork_GetProxyData_DEFINED
struct CFNetwork_GetProxyData__Class;
struct CFNetwork_GetProxyData {
    struct CFNetwork_GetProxyData__Class* klass;
    MonitorData* monitor;
    struct CFNetwork_GetProxyData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CFNetwork_GetProxyData_FWDDECL)
#define IL2CPP_STRUCT_CFNetwork_GetProxyData_FWDDECL
#include <Modloader/app/structs/CFNetwork_GetProxyData__Class.h>
#endif
#undef IL2CPP_STRUCT_CFNetwork_GetProxyData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFNetwork_GetProxyData_DEFINED) && !defined(IL2CPP_STRUCT_CFNetwork_GetProxyData_FWDDECL)
#include <Modloader/app/structs/CFNetwork_GetProxyData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CFNetwork_GetProxyData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
