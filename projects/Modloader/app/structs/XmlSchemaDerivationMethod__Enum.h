#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaDerivationMethod__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaDerivationMethod__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaDerivationMethod__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaDerivationMethod__Enum_DEFINED
enum class XmlSchemaDerivationMethod__Enum : int32_t {
    Empty = 0x00000000,
    Substitution = 0x00000001,
    Extension = 0x00000002,
    Restriction = 0x00000004,
    List = 0x00000008,
    Union = 0x00000010,
    All = 0x000000ff,
    None = 0x00000100,
};
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaDerivationMethod__Enum_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaDerivationMethod__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_XmlSchemaDerivationMethod__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaDerivationMethod__Enum_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaDerivationMethod__Enum_FWDDECL)
#include <Modloader/app/structs/XmlSchemaDerivationMethod__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaDerivationMethod__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
