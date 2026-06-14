#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SchemaElementDecl__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SchemaElementDecl__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaElementDecl__Fields_DEFINED)
#include <Modloader/app/structs/SchemaDeclBase__Fields.h>
#include <Modloader/app/structs/XmlSchemaDerivationMethod__Enum.h>
#if defined(IL2CPP_STRUCT_SchemaDeclBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_XmlSchemaDerivationMethod__Enum_DEFINED)
#define IL2CPP_STRUCT_SchemaElementDecl__Fields_DEFINED
struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_;
struct List_1_System_Xml_IDtdDefaultAttributeInfo_;
struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_;
struct ContentValidator;
struct XmlSchemaAnyAttribute;
struct CompiledIdentityConstraint__Array;
struct XmlSchemaElement;
struct SchemaElementDecl__Fields {
    struct SchemaDeclBase__Fields _;
    struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_* attdefs;
    struct List_1_System_Xml_IDtdDefaultAttributeInfo_* defaultAttdefs;
    bool isIdDeclared;
    bool hasNonCDataAttribute;
    bool isAbstract;
    bool isNillable;
    bool hasRequiredAttribute;
    bool isNotationDeclared;
    struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_* prohibitedAttributes;
    struct ContentValidator* contentValidator;
    struct XmlSchemaAnyAttribute* anyAttribute;
    XmlSchemaDerivationMethod__Enum block;

    struct CompiledIdentityConstraint__Array* constraints;
    struct XmlSchemaElement* schemaElement;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SchemaElementDecl__Fields_FWDDECL)
#define IL2CPP_STRUCT_SchemaElementDecl__Fields_FWDDECL
#include <Modloader/app/structs/CompiledIdentityConstraint__Array.h>
#include <Modloader/app/structs/ContentValidator.h>
#include <Modloader/app/structs/Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_.h>
#include <Modloader/app/structs/Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_.h>
#include <Modloader/app/structs/List_1_System_Xml_IDtdDefaultAttributeInfo_.h>
#include <Modloader/app/structs/XmlSchemaAnyAttribute.h>
#include <Modloader/app/structs/XmlSchemaElement.h>
#endif
#undef IL2CPP_STRUCT_SchemaElementDecl__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaElementDecl__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SchemaElementDecl__Fields_FWDDECL)
#include <Modloader/app/structs/SchemaElementDecl__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SchemaElementDecl__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
