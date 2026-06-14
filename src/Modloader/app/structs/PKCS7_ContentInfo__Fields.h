#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PKCS7_ContentInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PKCS7_ContentInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS7_ContentInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_PKCS7_ContentInfo__Fields_DEFINED
struct String;
struct ASN1;
struct __declspec(align(8)) PKCS7_ContentInfo__Fields {
    struct String* contentType;
    struct ASN1* content;
};
#endif
#if !defined(IL2CPP_STRUCT_PKCS7_ContentInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_PKCS7_ContentInfo__Fields_FWDDECL
#include <Modloader/app/structs/ASN1.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PKCS7_ContentInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS7_ContentInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PKCS7_ContentInfo__Fields_FWDDECL)
#include <Modloader/app/structs/PKCS7_ContentInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PKCS7_ContentInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
