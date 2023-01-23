#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaSimpleTypeList__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaSimpleTypeList__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaSimpleTypeList__Fields_DEFINED)
#include <Modloader/app/structs/XmlSchemaSimpleTypeContent__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaSimpleTypeContent__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaSimpleTypeList__Fields_DEFINED
struct XmlQualifiedName;
struct XmlSchemaSimpleType;
struct XmlSchemaSimpleTypeList__Fields {
    struct XmlSchemaSimpleTypeContent__Fields _;
    struct XmlQualifiedName* itemTypeName;
    struct XmlSchemaSimpleType* itemType;
    struct XmlSchemaSimpleType* baseItemType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaSimpleTypeList__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaSimpleTypeList__Fields_FWDDECL
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaSimpleType.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaSimpleTypeList__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaSimpleTypeList__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaSimpleTypeList__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSchemaSimpleTypeList__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaSimpleTypeList__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
