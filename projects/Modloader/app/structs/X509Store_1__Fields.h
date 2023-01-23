#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509Store_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509Store_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Store_1__Fields_DEFINED)
#define IL2CPP_STRUCT_X509Store_1__Fields_DEFINED
struct String;
struct X509CertificateCollection_2;
struct ArrayList;
struct __declspec(align(8)) X509Store_1__Fields {
    struct String* _storePath;
    struct X509CertificateCollection_2* _certificates;
    struct ArrayList* _crls;
    bool _crl;
    bool _newFormat;
    struct String* _name;
};
#endif
#if !defined(IL2CPP_STRUCT_X509Store_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_X509Store_1__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/X509CertificateCollection_2.h>
#endif
#undef IL2CPP_STRUCT_X509Store_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Store_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_X509Store_1__Fields_FWDDECL)
#include <Modloader/app/structs/X509Store_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509Store_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
