#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509SubjectKeyIdentifierExtension__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509SubjectKeyIdentifierExtension__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509SubjectKeyIdentifierExtension__Fields_DEFINED)
#include <Modloader/app/structs/AsnDecodeStatus__Enum.h>
#include <Modloader/app/structs/X509Extension_1__Fields.h>
#if defined(IL2CPP_STRUCT_X509Extension_1__Fields_DEFINED) && defined(IL2CPP_STRUCT_AsnDecodeStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_X509SubjectKeyIdentifierExtension__Fields_DEFINED
struct Byte__Array;
struct String;
struct X509SubjectKeyIdentifierExtension__Fields {
    struct X509Extension_1__Fields _;
    struct Byte__Array* _subjectKeyIdentifier;
    struct String* _ski;
    AsnDecodeStatus__Enum _status;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509SubjectKeyIdentifierExtension__Fields_FWDDECL)
#define IL2CPP_STRUCT_X509SubjectKeyIdentifierExtension__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_X509SubjectKeyIdentifierExtension__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509SubjectKeyIdentifierExtension__Fields_DEFINED) && !defined(IL2CPP_STRUCT_X509SubjectKeyIdentifierExtension__Fields_FWDDECL)
#include <Modloader/app/structs/X509SubjectKeyIdentifierExtension__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509SubjectKeyIdentifierExtension__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
