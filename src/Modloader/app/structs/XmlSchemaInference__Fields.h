#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaInference__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaInference__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaInference__Fields_DEFINED)
#include <Modloader/app/structs/XmlSchemaInference_InferenceOption__Enum.h>
#if defined(IL2CPP_STRUCT_XmlSchemaInference_InferenceOption__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaInference__Fields_DEFINED
struct XmlSchema;
struct XmlSchemaSet;
struct XmlReader;
struct NameTable;
struct String;
struct XmlNamespaceManager;
struct ArrayList;
struct __declspec(align(8)) XmlSchemaInference__Fields {
    struct XmlSchema* rootSchema;
    struct XmlSchemaSet* schemaSet;
    struct XmlReader* xtr;
    struct NameTable* nametable;
    struct String* TargetNamespace;
    struct XmlNamespaceManager* NamespaceManager;
    struct ArrayList* schemaList;
    XmlSchemaInference_InferenceOption__Enum occurrence;

    XmlSchemaInference_InferenceOption__Enum typeInference;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaInference__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaInference__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/NameTable.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlNamespaceManager.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlSchema.h>
#include <Modloader/app/structs/XmlSchemaSet.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaInference__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaInference__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaInference__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSchemaInference__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaInference__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
