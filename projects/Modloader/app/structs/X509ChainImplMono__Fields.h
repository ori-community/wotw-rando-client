#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509ChainImplMono__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509ChainImplMono__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509ChainImplMono__Fields_DEFINED)
#include <Modloader/app/structs/StoreLocation__Enum.h>
#if defined(IL2CPP_STRUCT_StoreLocation__Enum_DEFINED)
#define IL2CPP_STRUCT_X509ChainImplMono__Fields_DEFINED
struct X509ChainElementCollection;
struct X509ChainPolicy;
struct X509ChainStatus__Array;
struct X500DistinguishedName;
struct AsymmetricAlgorithm;
struct X509ChainElement;
struct X509Certificate2Collection;
struct X509Store;
struct __declspec(align(8)) X509ChainImplMono__Fields {
    StoreLocation__Enum location;

    struct X509ChainElementCollection* elements;
    struct X509ChainPolicy* policy;
    struct X509ChainStatus__Array* status;
    int32_t max_path_length;
    struct X500DistinguishedName* working_issuer_name;
    struct AsymmetricAlgorithm* working_public_key;
    struct X509ChainElement* bce_restriction;
    struct X509Certificate2Collection* roots;
    struct X509Certificate2Collection* cas;
    struct X509Store* root_store;
    struct X509Store* ca_store;
    struct X509Store* user_root_store;
    struct X509Store* user_ca_store;
    struct X509Certificate2Collection* collection;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509ChainImplMono__Fields_FWDDECL)
#define IL2CPP_STRUCT_X509ChainImplMono__Fields_FWDDECL
#include <Modloader/app/structs/AsymmetricAlgorithm.h>
#include <Modloader/app/structs/X500DistinguishedName.h>
#include <Modloader/app/structs/X509Certificate2Collection.h>
#include <Modloader/app/structs/X509ChainElement.h>
#include <Modloader/app/structs/X509ChainElementCollection.h>
#include <Modloader/app/structs/X509ChainPolicy.h>
#include <Modloader/app/structs/X509ChainStatus__Array.h>
#include <Modloader/app/structs/X509Store.h>
#endif
#undef IL2CPP_STRUCT_X509ChainImplMono__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509ChainImplMono__Fields_DEFINED) && !defined(IL2CPP_STRUCT_X509ChainImplMono__Fields_FWDDECL)
#include <Modloader/app/structs/X509ChainImplMono__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509ChainImplMono__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
