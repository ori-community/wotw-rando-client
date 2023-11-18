#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebProxyData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebProxyData_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebProxyData_DEFINED)
#include <Modloader/app/structs/WebProxyData__Fields.h>
#if defined(IL2CPP_STRUCT_WebProxyData__Fields_DEFINED)
#define IL2CPP_STRUCT_WebProxyData_DEFINED
struct WebProxyData__Class;
struct WebProxyData {
    struct WebProxyData__Class* klass;
    MonitorData* monitor;
    struct WebProxyData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WebProxyData_FWDDECL)
#define IL2CPP_STRUCT_WebProxyData_FWDDECL
#include <Modloader/app/structs/WebProxyData__Class.h>
#endif
#undef IL2CPP_STRUCT_WebProxyData_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebProxyData_DEFINED) && !defined(IL2CPP_STRUCT_WebProxyData_FWDDECL)
#include <Modloader/app/structs/WebProxyData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebProxyData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
