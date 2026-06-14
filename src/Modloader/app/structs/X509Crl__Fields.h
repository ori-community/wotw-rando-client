#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509Crl__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509Crl__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Crl__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_X509Crl__Fields_DEFINED
struct String;
struct ArrayList;
struct Byte__Array;
struct X509ExtensionCollection_1;
struct __declspec(align(8)) X509Crl__Fields {
    struct String* issuer;
    uint8_t version;
    struct DateTime thisUpdate;
    struct DateTime nextUpdate;
    struct ArrayList* entries;
    struct String* signatureOID;
    struct Byte__Array* signature;
    struct X509ExtensionCollection_1* extensions;
    struct Byte__Array* encoded;
    struct Byte__Array* hash_value;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509Crl__Fields_FWDDECL)
#define IL2CPP_STRUCT_X509Crl__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/X509ExtensionCollection_1.h>
#endif
#undef IL2CPP_STRUCT_X509Crl__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Crl__Fields_DEFINED) && !defined(IL2CPP_STRUCT_X509Crl__Fields_FWDDECL)
#include <Modloader/app/structs/X509Crl__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509Crl__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
