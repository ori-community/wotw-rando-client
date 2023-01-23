#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebRequest_WebProxyWrapperOpaque__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebRequest_WebProxyWrapperOpaque__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebRequest_WebProxyWrapperOpaque__Fields_DEFINED)
#define IL2CPP_STRUCT_WebRequest_WebProxyWrapperOpaque__Fields_DEFINED
struct WebProxy;
struct __declspec(align(8)) WebRequest_WebProxyWrapperOpaque__Fields {
    struct WebProxy* webProxy;
};
#endif
#if !defined(IL2CPP_STRUCT_WebRequest_WebProxyWrapperOpaque__Fields_FWDDECL)
#define IL2CPP_STRUCT_WebRequest_WebProxyWrapperOpaque__Fields_FWDDECL
#include <Modloader/app/structs/WebProxy.h>
#endif
#undef IL2CPP_STRUCT_WebRequest_WebProxyWrapperOpaque__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebRequest_WebProxyWrapperOpaque__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WebRequest_WebProxyWrapperOpaque__Fields_FWDDECL)
#include <Modloader/app/structs/WebRequest_WebProxyWrapperOpaque__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebRequest_WebProxyWrapperOpaque__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
