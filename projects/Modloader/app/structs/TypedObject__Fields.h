#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypedObject__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypedObject__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypedObject__Fields_DEFINED)
#define IL2CPP_STRUCT_TypedObject__Fields_DEFINED
struct TypedObject_DecimalStruct;
struct Object;
struct String;
struct XmlSchemaDatatype;
struct __declspec(align(8)) TypedObject__Fields {
    struct TypedObject_DecimalStruct* dstruct;
    struct Object* ovalue;
    struct String* svalue;
    struct XmlSchemaDatatype* xsdtype;
    int32_t dim;
    bool isList;
};
#endif
#if !defined(IL2CPP_STRUCT_TypedObject__Fields_FWDDECL)
#define IL2CPP_STRUCT_TypedObject__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TypedObject_DecimalStruct.h>
#include <Modloader/app/structs/XmlSchemaDatatype.h>
#endif
#undef IL2CPP_STRUCT_TypedObject__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypedObject__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TypedObject__Fields_FWDDECL)
#include <Modloader/app/structs/TypedObject__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypedObject__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
