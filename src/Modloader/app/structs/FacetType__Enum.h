#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FacetType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FacetType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_FacetType__Enum_DEFINED)
#define IL2CPP_STRUCT_FacetType__Enum_DEFINED
enum class FacetType__Enum : int32_t {
    None = 0x00000000,
    Length = 0x00000001,
    MinLength = 0x00000002,
    MaxLength = 0x00000003,
    Pattern = 0x00000004,
    Whitespace = 0x00000005,
    Enumeration = 0x00000006,
    MinExclusive = 0x00000007,
    MinInclusive = 0x00000008,
    MaxExclusive = 0x00000009,
    MaxInclusive = 0x0000000a,
    TotalDigits = 0x0000000b,
    FractionDigits = 0x0000000c,
};
#endif
#if !defined(IL2CPP_STRUCT_FacetType__Enum_FWDDECL)
#define IL2CPP_STRUCT_FacetType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_FacetType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_FacetType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_FacetType__Enum_FWDDECL)
#include <Modloader/app/structs/FacetType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FacetType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
