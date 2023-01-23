#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SchemaDeclBase__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SchemaDeclBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaDeclBase__Fields_DEFINED)
#include <Modloader/app/structs/SchemaDeclBase_Use__Enum.h>
#if defined(IL2CPP_STRUCT_SchemaDeclBase_Use__Enum_DEFINED)
#define IL2CPP_STRUCT_SchemaDeclBase__Fields_DEFINED
struct XmlQualifiedName;
struct String;
struct XmlSchemaType;
struct XmlSchemaDatatype;
struct Object;
struct List_1_System_String_;
struct __declspec(align(8)) SchemaDeclBase__Fields {
    struct XmlQualifiedName* name;
    struct String* prefix;
    bool isDeclaredInExternal;
    SchemaDeclBase_Use__Enum presence;

    struct XmlSchemaType* schemaType;
    struct XmlSchemaDatatype* datatype;
    struct String* defaultValueRaw;
    struct Object* defaultValueTyped;
    int64_t maxLength;
    int64_t minLength;
    struct List_1_System_String_* values;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SchemaDeclBase__Fields_FWDDECL)
#define IL2CPP_STRUCT_SchemaDeclBase__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaDatatype.h>
#include <Modloader/app/structs/XmlSchemaType.h>
#endif
#undef IL2CPP_STRUCT_SchemaDeclBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaDeclBase__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SchemaDeclBase__Fields_FWDDECL)
#include <Modloader/app/structs/SchemaDeclBase__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SchemaDeclBase__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
