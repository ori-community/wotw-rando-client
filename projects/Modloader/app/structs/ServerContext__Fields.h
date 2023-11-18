#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerContext__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerContext__Fields_DEFINED)
#include <Modloader/app/structs/Context_1__Fields.h>
#if defined(IL2CPP_STRUCT_Context_1__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerContext__Fields_DEFINED
struct SslServerStream;
struct ServerContext__Fields {
    struct Context_1__Fields _;
    struct SslServerStream* sslStream;
    bool request_client_certificate;
    bool clientCertificateRequired;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerContext__Fields_FWDDECL)
#define IL2CPP_STRUCT_ServerContext__Fields_FWDDECL
#include <Modloader/app/structs/SslServerStream.h>
#endif
#undef IL2CPP_STRUCT_ServerContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerContext__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ServerContext__Fields_FWDDECL)
#include <Modloader/app/structs/ServerContext__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerContext__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
