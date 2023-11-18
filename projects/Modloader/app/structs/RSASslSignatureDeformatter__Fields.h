#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RSASslSignatureDeformatter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RSASslSignatureDeformatter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSASslSignatureDeformatter__Fields_DEFINED)
#define IL2CPP_STRUCT_RSASslSignatureDeformatter__Fields_DEFINED
struct RSA;
struct HashAlgorithm;
struct __declspec(align(8)) RSASslSignatureDeformatter__Fields {
    struct RSA* key;
    struct HashAlgorithm* hash;
};
#endif
#if !defined(IL2CPP_STRUCT_RSASslSignatureDeformatter__Fields_FWDDECL)
#define IL2CPP_STRUCT_RSASslSignatureDeformatter__Fields_FWDDECL
#include <Modloader/app/structs/HashAlgorithm.h>
#include <Modloader/app/structs/RSA.h>
#endif
#undef IL2CPP_STRUCT_RSASslSignatureDeformatter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSASslSignatureDeformatter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RSASslSignatureDeformatter__Fields_FWDDECL)
#include <Modloader/app/structs/RSASslSignatureDeformatter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RSASslSignatureDeformatter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
