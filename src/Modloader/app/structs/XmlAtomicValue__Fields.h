#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlAtomicValue__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlAtomicValue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAtomicValue__Fields_DEFINED)
#include <Modloader/app/structs/TypeCode__Enum.h>
#include <Modloader/app/structs/XmlAtomicValue_Union.h>
#if defined(IL2CPP_STRUCT_TypeCode__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlAtomicValue_Union_DEFINED)
#define IL2CPP_STRUCT_XmlAtomicValue__Fields_DEFINED
struct XmlSchemaType;
struct Object;
struct XmlAtomicValue_NamespacePrefixForQName;
struct __declspec(align(8)) XmlAtomicValue__Fields {
    struct XmlSchemaType* xmlType;
    struct Object* objVal;
    TypeCode__Enum clrType;

    struct XmlAtomicValue_Union unionVal;
    struct XmlAtomicValue_NamespacePrefixForQName* nsPrefix;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlAtomicValue__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlAtomicValue__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XmlAtomicValue_NamespacePrefixForQName.h>
#include <Modloader/app/structs/XmlSchemaType.h>
#endif
#undef IL2CPP_STRUCT_XmlAtomicValue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAtomicValue__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlAtomicValue__Fields_FWDDECL)
#include <Modloader/app/structs/XmlAtomicValue__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlAtomicValue__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
