#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaAttribute__Fields_DEFINED)
#include <Modloader/app/structs/XmlSchemaAnnotated__Fields.h>
#include <Modloader/app/structs/XmlSchemaForm__Enum.h>
#include <Modloader/app/structs/XmlSchemaUse__Enum.h>
#if defined(IL2CPP_STRUCT_XmlSchemaAnnotated__Fields_DEFINED) && defined(IL2CPP_STRUCT_XmlSchemaForm__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlSchemaUse__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaAttribute__Fields_DEFINED
struct String;
struct XmlQualifiedName;
struct XmlSchemaSimpleType;
struct SchemaAttDef;
struct XmlSchemaAttribute__Fields {
    struct XmlSchemaAnnotated__Fields _;
    struct String* defaultValue;
    struct String* fixedValue;
    struct String* name;
    XmlSchemaForm__Enum form;

    XmlSchemaUse__Enum use;

    struct XmlQualifiedName* refName;
    struct XmlQualifiedName* typeName;
    struct XmlQualifiedName* qualifiedName;
    struct XmlSchemaSimpleType* type;
    struct XmlSchemaSimpleType* attributeType;
    struct SchemaAttDef* attDef;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaAttribute__Fields_FWDDECL
#include <Modloader/app/structs/SchemaAttDef.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaSimpleType.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSchemaAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
