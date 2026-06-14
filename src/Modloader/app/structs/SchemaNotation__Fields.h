#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SchemaNotation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SchemaNotation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaNotation__Fields_DEFINED)
#define IL2CPP_STRUCT_SchemaNotation__Fields_DEFINED
struct XmlQualifiedName;
struct String;
struct __declspec(align(8)) SchemaNotation__Fields {
    struct XmlQualifiedName* name;
    struct String* systemLiteral;
    struct String* pubid;
};
#endif
#if !defined(IL2CPP_STRUCT_SchemaNotation__Fields_FWDDECL)
#define IL2CPP_STRUCT_SchemaNotation__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#endif
#undef IL2CPP_STRUCT_SchemaNotation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaNotation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SchemaNotation__Fields_FWDDECL)
#include <Modloader/app/structs/SchemaNotation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SchemaNotation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
