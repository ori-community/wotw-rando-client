#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RSAPKCS1SignatureDeformatter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RSAPKCS1SignatureDeformatter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSAPKCS1SignatureDeformatter__Fields_DEFINED)
#define IL2CPP_STRUCT_RSAPKCS1SignatureDeformatter__Fields_DEFINED
struct RSA;
struct String;
struct __declspec(align(8)) RSAPKCS1SignatureDeformatter__Fields {
    struct RSA* rsa;
    struct String* hashName;
};
#endif
#if !defined(IL2CPP_STRUCT_RSAPKCS1SignatureDeformatter__Fields_FWDDECL)
#define IL2CPP_STRUCT_RSAPKCS1SignatureDeformatter__Fields_FWDDECL
#include <Modloader/app/structs/RSA.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RSAPKCS1SignatureDeformatter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSAPKCS1SignatureDeformatter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RSAPKCS1SignatureDeformatter__Fields_FWDDECL)
#include <Modloader/app/structs/RSAPKCS1SignatureDeformatter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RSAPKCS1SignatureDeformatter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
