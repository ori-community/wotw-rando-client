#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProxyChain__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProxyChain__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProxyChain__Fields_DEFINED)
#define IL2CPP_STRUCT_ProxyChain__Fields_DEFINED
struct List_1_System_Uri_;
struct ProxyChain_ProxyEnumerator;
struct Uri;
struct HttpAbortDelegate;
struct __declspec(align(8)) ProxyChain__Fields {
    struct List_1_System_Uri_* m_Cache;
    bool m_CacheComplete;
    struct ProxyChain_ProxyEnumerator* m_MainEnumerator;
    struct Uri* m_Destination;
    struct HttpAbortDelegate* m_HttpAbortDelegate;
};
#endif
#if !defined(IL2CPP_STRUCT_ProxyChain__Fields_FWDDECL)
#define IL2CPP_STRUCT_ProxyChain__Fields_FWDDECL
#include <Modloader/app/structs/HttpAbortDelegate.h>
#include <Modloader/app/structs/List_1_System_Uri_.h>
#include <Modloader/app/structs/ProxyChain_ProxyEnumerator.h>
#include <Modloader/app/structs/Uri.h>
#endif
#undef IL2CPP_STRUCT_ProxyChain__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProxyChain__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ProxyChain__Fields_FWDDECL)
#include <Modloader/app/structs/ProxyChain__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProxyChain__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
