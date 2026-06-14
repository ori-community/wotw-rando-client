#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509CertificateBuilder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509CertificateBuilder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509CertificateBuilder__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/X509Builder__Fields.h>
#if defined(IL2CPP_STRUCT_X509Builder__Fields_DEFINED) && defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_X509CertificateBuilder__Fields_DEFINED
struct Byte__Array;
struct String;
struct AsymmetricAlgorithm;
struct X509ExtensionCollection_1;
struct X509CertificateBuilder__Fields {
    struct X509Builder__Fields _;
    uint8_t version;
    struct Byte__Array* sn;
    struct String* issuer;
    struct DateTime notBefore;
    struct DateTime notAfter;
    struct String* subject;
    struct AsymmetricAlgorithm* aa;
    struct Byte__Array* issuerUniqueID;
    struct Byte__Array* subjectUniqueID;
    struct X509ExtensionCollection_1* extensions;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509CertificateBuilder__Fields_FWDDECL)
#define IL2CPP_STRUCT_X509CertificateBuilder__Fields_FWDDECL
#include <Modloader/app/structs/AsymmetricAlgorithm.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/X509ExtensionCollection_1.h>
#endif
#undef IL2CPP_STRUCT_X509CertificateBuilder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509CertificateBuilder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_X509CertificateBuilder__Fields_FWDDECL)
#include <Modloader/app/structs/X509CertificateBuilder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509CertificateBuilder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
