#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompareOptions__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompareOptions__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompareOptions__Enum_DEFINED)
#define IL2CPP_STRUCT_CompareOptions__Enum_DEFINED
enum class CompareOptions__Enum : int32_t {
    None = 0x00000000,
    IgnoreCase = 0x00000001,
    IgnoreNonSpace = 0x00000002,
    IgnoreSymbols = 0x00000004,
    IgnoreKanaType = 0x00000008,
    IgnoreWidth = 0x00000010,
    OrdinalIgnoreCase = 0x10000000,
    StringSort = 0x20000000,
    Ordinal = 0x40000000,
};
#endif
#if !defined(IL2CPP_STRUCT_CompareOptions__Enum_FWDDECL)
#define IL2CPP_STRUCT_CompareOptions__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_CompareOptions__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompareOptions__Enum_DEFINED) && !defined(IL2CPP_STRUCT_CompareOptions__Enum_FWDDECL)
#include <Modloader/app/structs/CompareOptions__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompareOptions__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
