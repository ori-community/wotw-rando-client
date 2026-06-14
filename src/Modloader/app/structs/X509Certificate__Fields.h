#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509Certificate__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509Certificate__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Certificate__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_X509Certificate__Fields_DEFINED
struct ASN1;
struct Byte__Array;
struct String;
struct RSA;
struct DSA;
struct X509ExtensionCollection;
struct __declspec(align(8)) X509Certificate__Fields {
    struct ASN1* decoder;
    struct Byte__Array* m_encodedcert;
    struct DateTime m_from;
    struct DateTime m_until;
    struct ASN1* issuer;
    struct String* m_issuername;
    struct String* m_keyalgo;
    struct Byte__Array* m_keyalgoparams;
    struct ASN1* subject;
    struct String* m_subject;
    struct Byte__Array* m_publickey;
    struct Byte__Array* signature;
    struct String* m_signaturealgo;
    struct Byte__Array* m_signaturealgoparams;
    struct RSA* _rsa;
    struct DSA* _dsa;
    int32_t version;
    struct Byte__Array* serialnumber;
    struct Byte__Array* issuerUniqueID;
    struct Byte__Array* subjectUniqueID;
    struct X509ExtensionCollection* extensions;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509Certificate__Fields_FWDDECL)
#define IL2CPP_STRUCT_X509Certificate__Fields_FWDDECL
#include <Modloader/app/structs/ASN1.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DSA.h>
#include <Modloader/app/structs/RSA.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/X509ExtensionCollection.h>
#endif
#undef IL2CPP_STRUCT_X509Certificate__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Certificate__Fields_DEFINED) && !defined(IL2CPP_STRUCT_X509Certificate__Fields_FWDDECL)
#include <Modloader/app/structs/X509Certificate__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509Certificate__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
