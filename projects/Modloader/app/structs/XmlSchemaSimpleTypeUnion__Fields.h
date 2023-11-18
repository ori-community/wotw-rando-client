#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaSimpleTypeUnion__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaSimpleTypeUnion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaSimpleTypeUnion__Fields_DEFINED)
#include <Modloader/app/structs/XmlSchemaSimpleTypeContent__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaSimpleTypeContent__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaSimpleTypeUnion__Fields_DEFINED
struct XmlSchemaObjectCollection;
struct XmlQualifiedName__Array;
struct XmlSchemaSimpleType__Array;
struct XmlSchemaSimpleTypeUnion__Fields {
    struct XmlSchemaSimpleTypeContent__Fields _;
    struct XmlSchemaObjectCollection* baseTypes;
    struct XmlQualifiedName__Array* memberTypes;
    struct XmlSchemaSimpleType__Array* baseMemberTypes;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaSimpleTypeUnion__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaSimpleTypeUnion__Fields_FWDDECL
#include <Modloader/app/structs/XmlQualifiedName__Array.h>
#include <Modloader/app/structs/XmlSchemaObjectCollection.h>
#include <Modloader/app/structs/XmlSchemaSimpleType__Array.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaSimpleTypeUnion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaSimpleTypeUnion__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaSimpleTypeUnion__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSchemaSimpleTypeUnion__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaSimpleTypeUnion__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
