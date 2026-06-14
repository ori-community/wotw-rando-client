#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaObject__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaObject__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaObject__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaObject__Fields_DEFINED
struct String;
struct XmlSerializerNamespaces;
struct XmlSchemaObject;
struct __declspec(align(8)) XmlSchemaObject__Fields {
    int32_t lineNum;
    int32_t linePos;
    struct String* sourceUri;
    struct XmlSerializerNamespaces* namespaces;
    struct XmlSchemaObject* parent;
    bool isProcessing;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaObject__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaObject__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlSchemaObject.h>
#include <Modloader/app/structs/XmlSerializerNamespaces.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaObject__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaObject__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaObject__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSchemaObject__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaObject__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
