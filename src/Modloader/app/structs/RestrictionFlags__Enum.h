#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RestrictionFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RestrictionFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_RestrictionFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_RestrictionFlags__Enum_DEFINED
enum class RestrictionFlags__Enum : int32_t {
    Length = 0x00000001,
    MinLength = 0x00000002,
    MaxLength = 0x00000004,
    Pattern = 0x00000008,
    Enumeration = 0x00000010,
    WhiteSpace = 0x00000020,
    MaxInclusive = 0x00000040,
    MaxExclusive = 0x00000080,
    MinInclusive = 0x00000100,
    MinExclusive = 0x00000200,
    TotalDigits = 0x00000400,
    FractionDigits = 0x00000800,
};
#endif
#if !defined(IL2CPP_STRUCT_RestrictionFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_RestrictionFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_RestrictionFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_RestrictionFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_RestrictionFlags__Enum_FWDDECL)
#include <Modloader/app/structs/RestrictionFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RestrictionFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
