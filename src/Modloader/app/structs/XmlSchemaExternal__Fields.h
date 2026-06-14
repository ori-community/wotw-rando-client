#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaExternal__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaExternal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaExternal__Fields_DEFINED)
#include <Modloader/app/structs/Compositor__Enum.h>
#include <Modloader/app/structs/XmlSchemaObject__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaObject__Fields_DEFINED) && defined(IL2CPP_STRUCT_Compositor__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaExternal__Fields_DEFINED
struct String;
struct Uri;
struct XmlSchema;
struct XmlAttribute__Array;
struct XmlSchemaExternal__Fields {
    struct XmlSchemaObject__Fields _;
    struct String* location;
    struct Uri* baseUri;
    struct XmlSchema* schema;
    struct String* id;
    struct XmlAttribute__Array* moreAttributes;
    Compositor__Enum compositor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaExternal__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaExternal__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/XmlAttribute__Array.h>
#include <Modloader/app/structs/XmlSchema.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaExternal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaExternal__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaExternal__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSchemaExternal__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaExternal__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
