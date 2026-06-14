#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebProxyData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebProxyData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebProxyData__Fields_DEFINED)
#define IL2CPP_STRUCT_WebProxyData__Fields_DEFINED
struct Uri;
struct Hashtable;
struct ArrayList;
struct __declspec(align(8)) WebProxyData__Fields {
    bool bypassOnLocal;
    bool automaticallyDetectSettings;
    struct Uri* proxyAddress;
    struct Hashtable* proxyHostAddresses;
    struct Uri* scriptLocation;
    struct ArrayList* bypassList;
};
#endif
#if !defined(IL2CPP_STRUCT_WebProxyData__Fields_FWDDECL)
#define IL2CPP_STRUCT_WebProxyData__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/Uri.h>
#endif
#undef IL2CPP_STRUCT_WebProxyData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebProxyData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WebProxyData__Fields_FWDDECL)
#include <Modloader/app/structs/WebProxyData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebProxyData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
