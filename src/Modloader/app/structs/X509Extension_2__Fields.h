#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509Extension_2__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509Extension_2__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Extension_2__Fields_DEFINED)
#define IL2CPP_STRUCT_X509Extension_2__Fields_DEFINED
struct String;
struct ASN1_1;
struct __declspec(align(8)) X509Extension_2__Fields {
    struct String* extnOid;
    bool extnCritical;
    struct ASN1_1* extnValue;
};
#endif
#if !defined(IL2CPP_STRUCT_X509Extension_2__Fields_FWDDECL)
#define IL2CPP_STRUCT_X509Extension_2__Fields_FWDDECL
#include <Modloader/app/structs/ASN1_1.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_X509Extension_2__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Extension_2__Fields_DEFINED) && !defined(IL2CPP_STRUCT_X509Extension_2__Fields_FWDDECL)
#include <Modloader/app/structs/X509Extension_2__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509Extension_2__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
