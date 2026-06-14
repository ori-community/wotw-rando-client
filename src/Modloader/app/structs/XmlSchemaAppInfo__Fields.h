#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaAppInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaAppInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaAppInfo__Fields_DEFINED)
#include <Modloader/app/structs/XmlSchemaObject__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaObject__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaAppInfo__Fields_DEFINED
struct String;
struct XmlNode__Array;
struct XmlSchemaAppInfo__Fields {
    struct XmlSchemaObject__Fields _;
    struct String* source;
    struct XmlNode__Array* markup;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaAppInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaAppInfo__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlNode__Array.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaAppInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaAppInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaAppInfo__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSchemaAppInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaAppInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
