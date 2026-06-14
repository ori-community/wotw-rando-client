#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebRequest__Fields_DEFINED)
#include <Modloader/app/structs/AuthenticationLevel__Enum.h>
#include <Modloader/app/structs/MarshalByRefObject__Fields.h>
#include <Modloader/app/structs/TokenImpersonationLevel__Enum.h>
#if defined(IL2CPP_STRUCT_MarshalByRefObject__Fields_DEFINED) && defined(IL2CPP_STRUCT_AuthenticationLevel__Enum_DEFINED) && defined(IL2CPP_STRUCT_TokenImpersonationLevel__Enum_DEFINED)
#define IL2CPP_STRUCT_WebRequest__Fields_DEFINED
struct RequestCachePolicy;
struct RequestCacheProtocol;
struct RequestCacheBinding;
struct WebRequest__Fields {
    struct MarshalByRefObject__Fields _;
    AuthenticationLevel__Enum m_AuthenticationLevel;

    TokenImpersonationLevel__Enum m_ImpersonationLevel;

    struct RequestCachePolicy* m_CachePolicy;
    struct RequestCacheProtocol* m_CacheProtocol;
    struct RequestCacheBinding* m_CacheBinding;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WebRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_WebRequest__Fields_FWDDECL
#include <Modloader/app/structs/RequestCacheBinding.h>
#include <Modloader/app/structs/RequestCachePolicy.h>
#include <Modloader/app/structs/RequestCacheProtocol.h>
#endif
#undef IL2CPP_STRUCT_WebRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WebRequest__Fields_FWDDECL)
#include <Modloader/app/structs/WebRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
