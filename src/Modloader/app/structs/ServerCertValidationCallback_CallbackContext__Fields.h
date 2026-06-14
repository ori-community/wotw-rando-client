#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerCertValidationCallback_CallbackContext__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerCertValidationCallback_CallbackContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerCertValidationCallback_CallbackContext__Fields_DEFINED)
#include <Modloader/app/structs/SslPolicyErrors__Enum.h>
#if defined(IL2CPP_STRUCT_SslPolicyErrors__Enum_DEFINED)
#define IL2CPP_STRUCT_ServerCertValidationCallback_CallbackContext__Fields_DEFINED
struct Object;
struct X509Certificate_1;
struct X509Chain;
struct __declspec(align(8)) ServerCertValidationCallback_CallbackContext__Fields {
    struct Object* request;
    struct X509Certificate_1* certificate;
    struct X509Chain* chain;
    SslPolicyErrors__Enum sslPolicyErrors;

    bool result;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerCertValidationCallback_CallbackContext__Fields_FWDDECL)
#define IL2CPP_STRUCT_ServerCertValidationCallback_CallbackContext__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/X509Certificate_1.h>
#include <Modloader/app/structs/X509Chain.h>
#endif
#undef IL2CPP_STRUCT_ServerCertValidationCallback_CallbackContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerCertValidationCallback_CallbackContext__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ServerCertValidationCallback_CallbackContext__Fields_FWDDECL)
#include <Modloader/app/structs/ServerCertValidationCallback_CallbackContext__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerCertValidationCallback_CallbackContext__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
