#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SchemaInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SchemaInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaInfo__Fields_DEFINED)
#include <Modloader/app/structs/SchemaType__Enum.h>
#if defined(IL2CPP_STRUCT_SchemaType__Enum_DEFINED)
#define IL2CPP_STRUCT_SchemaInfo__Fields_DEFINED
struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_;
struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_;
struct XmlQualifiedName;
struct String;
struct Dictionary_2_System_String_System_Boolean_;
struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_;
struct Dictionary_2_System_String_System_Xml_Schema_SchemaNotation_;
struct __declspec(align(8)) SchemaInfo__Fields {
    struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_* elementDecls;
    struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_* undeclaredElementDecls;
    struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_* generalEntities;
    struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_* parameterEntities;
    struct XmlQualifiedName* docTypeName;
    struct String* internalDtdSubset;
    bool hasNonCDataAttributes;
    bool hasDefaultAttributes;
    struct Dictionary_2_System_String_System_Boolean_* targetNamespaces;
    struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_* attributeDecls;
    int32_t errorCount;
    SchemaType__Enum schemaType;

    struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_* elementDeclsByType;
    struct Dictionary_2_System_String_System_Xml_Schema_SchemaNotation_* notations;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SchemaInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_SchemaInfo__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_Boolean_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Xml_Schema_SchemaNotation_.h>
#include <Modloader/app/structs/Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_.h>
#include <Modloader/app/structs/Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_.h>
#include <Modloader/app/structs/Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#endif
#undef IL2CPP_STRUCT_SchemaInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SchemaInfo__Fields_FWDDECL)
#include <Modloader/app/structs/SchemaInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SchemaInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
