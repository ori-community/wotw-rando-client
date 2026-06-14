#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoTlsStream__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoTlsStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoTlsStream__Fields_DEFINED)
#include <Modloader/app/structs/WebExceptionStatus__Enum.h>
#if defined(IL2CPP_STRUCT_WebExceptionStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_MonoTlsStream__Fields_DEFINED
struct MonoTlsProvider;
struct NetworkStream;
struct HttpWebRequest;
struct MonoTlsSettings;
struct IMonoSslStream;
struct __declspec(align(8)) MonoTlsStream__Fields {
    struct MonoTlsProvider* provider;
    struct NetworkStream* networkStream;
    struct HttpWebRequest* request;
    struct MonoTlsSettings* settings;
    struct IMonoSslStream* sslStream;
    WebExceptionStatus__Enum status;

    bool _CertificateValidationFailed_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoTlsStream__Fields_FWDDECL)
#define IL2CPP_STRUCT_MonoTlsStream__Fields_FWDDECL
#include <Modloader/app/structs/HttpWebRequest.h>
#include <Modloader/app/structs/IMonoSslStream.h>
#include <Modloader/app/structs/MonoTlsProvider.h>
#include <Modloader/app/structs/MonoTlsSettings.h>
#include <Modloader/app/structs/NetworkStream.h>
#endif
#undef IL2CPP_STRUCT_MonoTlsStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoTlsStream__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MonoTlsStream__Fields_FWDDECL)
#include <Modloader/app/structs/MonoTlsStream__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoTlsStream__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
