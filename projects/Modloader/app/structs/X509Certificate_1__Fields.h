#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509Certificate_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509Certificate_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Certificate_1__Fields_DEFINED)
#define IL2CPP_STRUCT_X509Certificate_1__Fields_DEFINED
struct X509CertificateImpl;
struct String;
struct __declspec(align(8)) X509Certificate_1__Fields {
    struct X509CertificateImpl* impl;
    bool hideDates;
    struct String* issuer_name;
    struct String* subject_name;
};
#endif
#if !defined(IL2CPP_STRUCT_X509Certificate_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_X509Certificate_1__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/X509CertificateImpl.h>
#endif
#undef IL2CPP_STRUCT_X509Certificate_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Certificate_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_X509Certificate_1__Fields_FWDDECL)
#include <Modloader/app/structs/X509Certificate_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509Certificate_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
