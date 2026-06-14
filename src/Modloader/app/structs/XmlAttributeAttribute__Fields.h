#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlAttributeAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlAttributeAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAttributeAttribute__Fields_DEFINED)
#include <Modloader/app/structs/XmlSchemaForm__Enum.h>
#if defined(IL2CPP_STRUCT_XmlSchemaForm__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlAttributeAttribute__Fields_DEFINED
struct String;
struct Type;
struct __declspec(align(8)) XmlAttributeAttribute__Fields {
    struct String* attributeName;
    struct String* dataType;
    struct Type* type;
    XmlSchemaForm__Enum form;

    struct String* ns;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlAttributeAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlAttributeAttribute__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_XmlAttributeAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAttributeAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlAttributeAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/XmlAttributeAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlAttributeAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
