#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlBaseConverter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlBaseConverter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlBaseConverter__Fields_DEFINED)
#include <Modloader/app/structs/XmlTypeCode__Enum.h>
#if defined(IL2CPP_STRUCT_XmlTypeCode__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlBaseConverter__Fields_DEFINED
struct XmlSchemaType;
struct Type;
struct __declspec(align(8)) XmlBaseConverter__Fields {
    struct XmlSchemaType* schemaType;
    XmlTypeCode__Enum typeCode;

    struct Type* clrTypeDefault;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlBaseConverter__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlBaseConverter__Fields_FWDDECL
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XmlSchemaType.h>
#endif
#undef IL2CPP_STRUCT_XmlBaseConverter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlBaseConverter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlBaseConverter__Fields_FWDDECL)
#include <Modloader/app/structs/XmlBaseConverter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlBaseConverter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
