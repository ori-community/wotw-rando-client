#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaAnyAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaAnyAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaAnyAttribute__Fields_DEFINED)
#include <Modloader/app/structs/XmlSchemaAnnotated__Fields.h>
#include <Modloader/app/structs/XmlSchemaContentProcessing__Enum.h>
#if defined(IL2CPP_STRUCT_XmlSchemaAnnotated__Fields_DEFINED) && defined(IL2CPP_STRUCT_XmlSchemaContentProcessing__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaAnyAttribute__Fields_DEFINED
struct String;
struct NamespaceList;
struct XmlSchemaAnyAttribute__Fields {
    struct XmlSchemaAnnotated__Fields _;
    struct String* ns;
    XmlSchemaContentProcessing__Enum processContents;

    struct NamespaceList* namespaceList;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaAnyAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaAnyAttribute__Fields_FWDDECL
#include <Modloader/app/structs/NamespaceList.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaAnyAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaAnyAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaAnyAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSchemaAnyAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaAnyAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
