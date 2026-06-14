#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SchemaAttDef__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SchemaAttDef__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaAttDef__Fields_DEFINED)
#include <Modloader/app/structs/SchemaAttDef_Reserve__Enum.h>
#include <Modloader/app/structs/SchemaDeclBase__Fields.h>
#if defined(IL2CPP_STRUCT_SchemaDeclBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_SchemaAttDef_Reserve__Enum_DEFINED)
#define IL2CPP_STRUCT_SchemaAttDef__Fields_DEFINED
struct String;
struct XmlSchemaAttribute;
struct SchemaAttDef__Fields {
    struct SchemaDeclBase__Fields _;
    struct String* defExpanded;
    int32_t lineNum;
    int32_t linePos;
    int32_t valueLineNum;
    int32_t valueLinePos;
    SchemaAttDef_Reserve__Enum reserved;

    bool defaultValueChecked;
    struct XmlSchemaAttribute* schemaAttribute;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SchemaAttDef__Fields_FWDDECL)
#define IL2CPP_STRUCT_SchemaAttDef__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlSchemaAttribute.h>
#endif
#undef IL2CPP_STRUCT_SchemaAttDef__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaAttDef__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SchemaAttDef__Fields_FWDDECL)
#include <Modloader/app/structs/SchemaAttDef__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SchemaAttDef__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
