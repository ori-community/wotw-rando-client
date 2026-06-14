#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaImport__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaImport__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaImport__Fields_DEFINED)
#include <Modloader/app/structs/XmlSchemaExternal__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaExternal__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaImport__Fields_DEFINED
struct String;
struct XmlSchemaAnnotation;
struct XmlSchemaImport__Fields {
    struct XmlSchemaExternal__Fields _;
    struct String* ns;
    struct XmlSchemaAnnotation* annotation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaImport__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaImport__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlSchemaAnnotation.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaImport__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaImport__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaImport__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSchemaImport__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaImport__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
