#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaAnnotation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaAnnotation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaAnnotation__Fields_DEFINED)
#include <Modloader/app/structs/XmlSchemaObject__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaObject__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaAnnotation__Fields_DEFINED
struct String;
struct XmlSchemaObjectCollection;
struct XmlAttribute__Array;
struct XmlSchemaAnnotation__Fields {
    struct XmlSchemaObject__Fields _;
    struct String* id;
    struct XmlSchemaObjectCollection* items;
    struct XmlAttribute__Array* moreAttributes;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaAnnotation__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaAnnotation__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlAttribute__Array.h>
#include <Modloader/app/structs/XmlSchemaObjectCollection.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaAnnotation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaAnnotation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaAnnotation__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSchemaAnnotation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaAnnotation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
