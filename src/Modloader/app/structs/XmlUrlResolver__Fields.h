#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlUrlResolver__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlUrlResolver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlUrlResolver__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlUrlResolver__Fields_DEFINED
struct ICredentials;
struct IWebProxy;
struct RequestCachePolicy;
struct __declspec(align(8)) XmlUrlResolver__Fields {
    struct ICredentials* _credentials;
    struct IWebProxy* _proxy;
    struct RequestCachePolicy* _cachePolicy;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlUrlResolver__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlUrlResolver__Fields_FWDDECL
#include <Modloader/app/structs/ICredentials.h>
#include <Modloader/app/structs/IWebProxy.h>
#include <Modloader/app/structs/RequestCachePolicy.h>
#endif
#undef IL2CPP_STRUCT_XmlUrlResolver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlUrlResolver__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlUrlResolver__Fields_FWDDECL)
#include <Modloader/app/structs/XmlUrlResolver__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlUrlResolver__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
