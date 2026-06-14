#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProxyChain_ProxyEnumerator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProxyChain_ProxyEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProxyChain_ProxyEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_ProxyChain_ProxyEnumerator__Fields_DEFINED
struct ProxyChain;
struct __declspec(align(8)) ProxyChain_ProxyEnumerator__Fields {
    struct ProxyChain* m_Chain;
    bool m_Finished;
    int32_t m_CurrentIndex;
    bool m_TriedDirect;
};
#endif
#if !defined(IL2CPP_STRUCT_ProxyChain_ProxyEnumerator__Fields_FWDDECL)
#define IL2CPP_STRUCT_ProxyChain_ProxyEnumerator__Fields_FWDDECL
#include <Modloader/app/structs/ProxyChain.h>
#endif
#undef IL2CPP_STRUCT_ProxyChain_ProxyEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProxyChain_ProxyEnumerator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ProxyChain_ProxyEnumerator__Fields_FWDDECL)
#include <Modloader/app/structs/ProxyChain_ProxyEnumerator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProxyChain_ProxyEnumerator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
