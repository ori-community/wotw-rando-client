#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlElementAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlElementAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlElementAttribute__Fields_DEFINED)
#include <Modloader/app/structs/XmlSchemaForm__Enum.h>
#if defined(IL2CPP_STRUCT_XmlSchemaForm__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlElementAttribute__Fields_DEFINED
struct String;
struct Type;
struct __declspec(align(8)) XmlElementAttribute__Fields {
    struct String* dataType;
    struct String* elementName;
    XmlSchemaForm__Enum form;

    struct String* ns;
    bool isNullable;
    struct Type* type;
    int32_t order;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlElementAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlElementAttribute__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_XmlElementAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlElementAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlElementAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/XmlElementAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlElementAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
