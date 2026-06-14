#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaAny__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaAny__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaAny__Fields_DEFINED)
#include <Modloader/app/structs/XmlSchemaContentProcessing__Enum.h>
#include <Modloader/app/structs/XmlSchemaParticle__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaParticle__Fields_DEFINED) && defined(IL2CPP_STRUCT_XmlSchemaContentProcessing__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaAny__Fields_DEFINED
struct String;
struct NamespaceList;
struct XmlSchemaAny__Fields {
    struct XmlSchemaParticle__Fields _;
    struct String* ns;
    XmlSchemaContentProcessing__Enum processContents;

    struct NamespaceList* namespaceList;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaAny__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaAny__Fields_FWDDECL
#include <Modloader/app/structs/NamespaceList.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaAny__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaAny__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaAny__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSchemaAny__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaAny__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
