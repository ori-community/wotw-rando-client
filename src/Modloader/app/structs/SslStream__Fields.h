#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SslStream__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SslStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SslStream__Fields_DEFINED)
#include <Modloader/app/structs/AuthenticatedStream__Fields.h>
#if defined(IL2CPP_STRUCT_AuthenticatedStream__Fields_DEFINED)
#define IL2CPP_STRUCT_SslStream__Fields_DEFINED
struct MonoTlsProvider;
struct IMonoSslStream;
struct SslStream__Fields {
    struct AuthenticatedStream__Fields _;
    struct MonoTlsProvider* provider;
    struct IMonoSslStream* impl;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SslStream__Fields_FWDDECL)
#define IL2CPP_STRUCT_SslStream__Fields_FWDDECL
#include <Modloader/app/structs/IMonoSslStream.h>
#include <Modloader/app/structs/MonoTlsProvider.h>
#endif
#undef IL2CPP_STRUCT_SslStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SslStream__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SslStream__Fields_FWDDECL)
#include <Modloader/app/structs/SslStream__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SslStream__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
