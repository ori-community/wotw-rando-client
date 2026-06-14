#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaType__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaType__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaType__Fields_DEFINED)
#include <Modloader/app/structs/XmlSchemaAnnotated__Fields.h>
#include <Modloader/app/structs/XmlSchemaContentType__Enum.h>
#include <Modloader/app/structs/XmlSchemaDerivationMethod__Enum.h>
#if defined(IL2CPP_STRUCT_XmlSchemaAnnotated__Fields_DEFINED) && defined(IL2CPP_STRUCT_XmlSchemaDerivationMethod__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlSchemaContentType__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaType__Fields_DEFINED
struct String;
struct XmlSchemaType;
struct XmlSchemaDatatype;
struct SchemaElementDecl;
struct XmlQualifiedName;
struct XmlSchemaType__Fields {
    struct XmlSchemaAnnotated__Fields _;
    struct String* name;
    XmlSchemaDerivationMethod__Enum final_1;

    XmlSchemaDerivationMethod__Enum derivedBy;

    struct XmlSchemaType* baseSchemaType;
    struct XmlSchemaDatatype* datatype;
    XmlSchemaDerivationMethod__Enum finalResolved;

    struct SchemaElementDecl* elementDecl;
    struct XmlQualifiedName* qname;
    struct XmlSchemaType* redefined;
    XmlSchemaContentType__Enum contentType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaType__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaType__Fields_FWDDECL
#include <Modloader/app/structs/SchemaElementDecl.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaDatatype.h>
#include <Modloader/app/structs/XmlSchemaType.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaType__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaType__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaType__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSchemaType__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaType__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
