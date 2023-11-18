#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaInfo__Fields_DEFINED)
#include <Modloader/app/structs/XmlSchemaContentType__Enum.h>
#include <Modloader/app/structs/XmlSchemaValidity__Enum.h>
#if defined(IL2CPP_STRUCT_XmlSchemaValidity__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlSchemaContentType__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaInfo__Fields_DEFINED
struct XmlSchemaElement;
struct XmlSchemaAttribute;
struct XmlSchemaType;
struct XmlSchemaSimpleType;
struct __declspec(align(8)) XmlSchemaInfo__Fields {
    bool isDefault;
    bool isNil;
    struct XmlSchemaElement* schemaElement;
    struct XmlSchemaAttribute* schemaAttribute;
    struct XmlSchemaType* schemaType;
    struct XmlSchemaSimpleType* memberType;
    XmlSchemaValidity__Enum validity;

    XmlSchemaContentType__Enum contentType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaInfo__Fields_FWDDECL
#include <Modloader/app/structs/XmlSchemaAttribute.h>
#include <Modloader/app/structs/XmlSchemaElement.h>
#include <Modloader/app/structs/XmlSchemaSimpleType.h>
#include <Modloader/app/structs/XmlSchemaType.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaInfo__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSchemaInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
