#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SslServerStream__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SslServerStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SslServerStream__Fields_DEFINED)
#include <Modloader/app/structs/SslStreamBase__Fields.h>
#if defined(IL2CPP_STRUCT_SslStreamBase__Fields_DEFINED)
#define IL2CPP_STRUCT_SslServerStream__Fields_DEFINED
struct CertificateValidationCallback;
struct PrivateKeySelectionCallback;
struct CertificateValidationCallback2;
struct SslServerStream__Fields {
    struct SslStreamBase__Fields _;
    struct CertificateValidationCallback* ClientCertValidation;
    struct PrivateKeySelectionCallback* PrivateKeySelection;
    struct CertificateValidationCallback2* ClientCertValidation2;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SslServerStream__Fields_FWDDECL)
#define IL2CPP_STRUCT_SslServerStream__Fields_FWDDECL
#include <Modloader/app/structs/CertificateValidationCallback.h>
#include <Modloader/app/structs/CertificateValidationCallback2.h>
#include <Modloader/app/structs/PrivateKeySelectionCallback.h>
#endif
#undef IL2CPP_STRUCT_SslServerStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SslServerStream__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SslServerStream__Fields_FWDDECL)
#include <Modloader/app/structs/SslServerStream__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SslServerStream__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
