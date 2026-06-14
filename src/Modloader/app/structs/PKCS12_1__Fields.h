#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PKCS12_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PKCS12_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS12_1__Fields_DEFINED)
#define IL2CPP_STRUCT_PKCS12_1__Fields_DEFINED
struct Byte__Array;
struct ArrayList;
struct X509CertificateCollection_2;
struct RandomNumberGenerator;
struct __declspec(align(8)) PKCS12_1__Fields {
    struct Byte__Array* _password;
    struct ArrayList* _keyBags;
    struct ArrayList* _secretBags;
    struct X509CertificateCollection_2* _certs;
    bool _keyBagsChanged;
    bool _secretBagsChanged;
    bool _certsChanged;
    int32_t _iterations;
    struct ArrayList* _safeBags;
    struct RandomNumberGenerator* _rng;
};
#endif
#if !defined(IL2CPP_STRUCT_PKCS12_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_PKCS12_1__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/RandomNumberGenerator.h>
#include <Modloader/app/structs/X509CertificateCollection_2.h>
#endif
#undef IL2CPP_STRUCT_PKCS12_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS12_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PKCS12_1__Fields_FWDDECL)
#include <Modloader/app/structs/PKCS12_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PKCS12_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
