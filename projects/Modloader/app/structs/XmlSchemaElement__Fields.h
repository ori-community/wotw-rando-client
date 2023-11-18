#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaElement__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaElement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaElement__Fields_DEFINED)
#include <Modloader/app/structs/XmlSchemaDerivationMethod__Enum.h>
#include <Modloader/app/structs/XmlSchemaForm__Enum.h>
#include <Modloader/app/structs/XmlSchemaParticle__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaParticle__Fields_DEFINED) && defined(IL2CPP_STRUCT_XmlSchemaDerivationMethod__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlSchemaForm__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaElement__Fields_DEFINED
struct String;
struct XmlQualifiedName;
struct XmlSchemaType;
struct XmlSchemaObjectCollection;
struct SchemaElementDecl;
struct XmlSchemaElement__Fields {
    struct XmlSchemaParticle__Fields _;
    bool isAbstract;
    bool hasAbstractAttribute;
    bool isNillable;
    bool hasNillableAttribute;
    bool isLocalTypeDerivationChecked;
    XmlSchemaDerivationMethod__Enum block;

    XmlSchemaDerivationMethod__Enum final_1;

    XmlSchemaForm__Enum form;

    struct String* defaultValue;
    struct String* fixedValue;
    struct String* name;
    struct XmlQualifiedName* refName;
    struct XmlQualifiedName* substitutionGroup;
    struct XmlQualifiedName* typeName;
    struct XmlSchemaType* type;
    struct XmlQualifiedName* qualifiedName;
    struct XmlSchemaType* elementType;
    XmlSchemaDerivationMethod__Enum blockResolved;

    XmlSchemaDerivationMethod__Enum finalResolved;

    struct XmlSchemaObjectCollection* constraints;
    struct SchemaElementDecl* elementDecl;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaElement__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaElement__Fields_FWDDECL
#include <Modloader/app/structs/SchemaElementDecl.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaObjectCollection.h>
#include <Modloader/app/structs/XmlSchemaType.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaElement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaElement__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaElement__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSchemaElement__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaElement__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
