#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SchemaCollectionCompiler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SchemaCollectionCompiler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaCollectionCompiler__Fields_DEFINED)
#include <Modloader/app/structs/BaseProcessor__Fields.h>
#if defined(IL2CPP_STRUCT_BaseProcessor__Fields_DEFINED)
#define IL2CPP_STRUCT_SchemaCollectionCompiler__Fields_DEFINED
struct XmlSchemaObjectTable;
struct Stack;
struct XmlSchema;
struct SchemaCollectionCompiler__Fields {
    struct BaseProcessor__Fields _;
    bool compileContentModel;
    struct XmlSchemaObjectTable* examplars;
    struct Stack* complexTypeStack;
    struct XmlSchema* schema;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SchemaCollectionCompiler__Fields_FWDDECL)
#define IL2CPP_STRUCT_SchemaCollectionCompiler__Fields_FWDDECL
#include <Modloader/app/structs/Stack.h>
#include <Modloader/app/structs/XmlSchema.h>
#include <Modloader/app/structs/XmlSchemaObjectTable.h>
#endif
#undef IL2CPP_STRUCT_SchemaCollectionCompiler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaCollectionCompiler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SchemaCollectionCompiler__Fields_FWDDECL)
#include <Modloader/app/structs/SchemaCollectionCompiler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SchemaCollectionCompiler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
