#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SafeBag_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SafeBag_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeBag_1__Fields_DEFINED)
#define IL2CPP_STRUCT_SafeBag_1__Fields_DEFINED
struct String;
struct ASN1_1;
struct __declspec(align(8)) SafeBag_1__Fields {
    struct String* _bagOID;
    struct ASN1_1* _asn1;
};
#endif
#if !defined(IL2CPP_STRUCT_SafeBag_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_SafeBag_1__Fields_FWDDECL
#include <Modloader/app/structs/ASN1_1.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SafeBag_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeBag_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SafeBag_1__Fields_FWDDECL)
#include <Modloader/app/structs/SafeBag_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SafeBag_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
