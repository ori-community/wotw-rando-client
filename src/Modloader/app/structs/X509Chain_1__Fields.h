#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509Chain_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509Chain_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Chain_1__Fields_DEFINED)
#include <Modloader/app/structs/X509ChainStatusFlags__Enum_1.h>
#if defined(IL2CPP_STRUCT_X509ChainStatusFlags__Enum_1_DEFINED)
#define IL2CPP_STRUCT_X509Chain_1__Fields_DEFINED
struct X509CertificateCollection_2;
struct X509Certificate_2;
struct __declspec(align(8)) X509Chain_1__Fields {
    struct X509CertificateCollection_2* roots;
    struct X509CertificateCollection_2* certs;
    struct X509Certificate_2* _root;
    struct X509CertificateCollection_2* _chain;
    X509ChainStatusFlags__Enum_1 _status;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509Chain_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_X509Chain_1__Fields_FWDDECL
#include <Modloader/app/structs/X509CertificateCollection_2.h>
#include <Modloader/app/structs/X509Certificate_2.h>
#endif
#undef IL2CPP_STRUCT_X509Chain_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Chain_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_X509Chain_1__Fields_FWDDECL)
#include <Modloader/app/structs/X509Chain_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509Chain_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
