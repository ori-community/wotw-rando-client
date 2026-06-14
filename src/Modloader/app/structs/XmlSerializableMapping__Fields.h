#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSerializableMapping__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSerializableMapping__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializableMapping__Fields_DEFINED)
#include <Modloader/app/structs/XmlTypeMapping__Fields.h>
#if defined(IL2CPP_STRUCT_XmlTypeMapping__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSerializableMapping__Fields_DEFINED
struct XmlSchema;
struct XmlSchemaComplexType;
struct XmlQualifiedName;
struct XmlSerializableMapping__Fields {
    struct XmlTypeMapping__Fields _;
    struct XmlSchema* _schema;
    struct XmlSchemaComplexType* _schemaType;
    struct XmlQualifiedName* _schemaTypeName;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSerializableMapping__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSerializableMapping__Fields_FWDDECL
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchema.h>
#include <Modloader/app/structs/XmlSchemaComplexType.h>
#endif
#undef IL2CPP_STRUCT_XmlSerializableMapping__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializableMapping__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSerializableMapping__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSerializableMapping__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSerializableMapping__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
