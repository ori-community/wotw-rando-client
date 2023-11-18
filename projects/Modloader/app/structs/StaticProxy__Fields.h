#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StaticProxy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StaticProxy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaticProxy__Fields_DEFINED)
#include <Modloader/app/structs/ProxyChain__Fields.h>
#if defined(IL2CPP_STRUCT_ProxyChain__Fields_DEFINED)
#define IL2CPP_STRUCT_StaticProxy__Fields_DEFINED
struct Uri;
struct StaticProxy__Fields {
    struct ProxyChain__Fields _;
    struct Uri* m_Proxy;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StaticProxy__Fields_FWDDECL)
#define IL2CPP_STRUCT_StaticProxy__Fields_FWDDECL
#include <Modloader/app/structs/Uri.h>
#endif
#undef IL2CPP_STRUCT_StaticProxy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaticProxy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StaticProxy__Fields_FWDDECL)
#include <Modloader/app/structs/StaticProxy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StaticProxy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
