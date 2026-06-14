#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Compiler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Compiler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Compiler__Fields_DEFINED)
#include <Modloader/app/structs/BaseProcessor__Fields.h>
#if defined(IL2CPP_STRUCT_BaseProcessor__Fields_DEFINED)
#define IL2CPP_STRUCT_Compiler__Fields_DEFINED
struct String;
struct XmlSchemaObjectTable;
struct Stack;
struct Hashtable;
struct XmlSchema;
struct Compiler__Fields {
    struct BaseProcessor__Fields _;
    struct String* restrictionErrorMsg;
    struct XmlSchemaObjectTable* attributes;
    struct XmlSchemaObjectTable* attributeGroups;
    struct XmlSchemaObjectTable* elements;
    struct XmlSchemaObjectTable* schemaTypes;
    struct XmlSchemaObjectTable* groups;
    struct XmlSchemaObjectTable* notations;
    struct XmlSchemaObjectTable* examplars;
    struct XmlSchemaObjectTable* identityConstraints;
    struct Stack* complexTypeStack;
    struct Hashtable* schemasToCompile;
    struct Hashtable* importedSchemas;
    struct XmlSchema* schemaForSchema;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Compiler__Fields_FWDDECL)
#define IL2CPP_STRUCT_Compiler__Fields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/Stack.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlSchema.h>
#include <Modloader/app/structs/XmlSchemaObjectTable.h>
#endif
#undef IL2CPP_STRUCT_Compiler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Compiler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Compiler__Fields_FWDDECL)
#include <Modloader/app/structs/Compiler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Compiler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
