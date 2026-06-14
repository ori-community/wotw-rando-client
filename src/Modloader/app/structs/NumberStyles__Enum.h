#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NumberStyles__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NumberStyles__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_NumberStyles__Enum_DEFINED)
#define IL2CPP_STRUCT_NumberStyles__Enum_DEFINED
enum class NumberStyles__Enum : int32_t {
    None = 0x00000000,
    AllowLeadingWhite = 0x00000001,
    AllowTrailingWhite = 0x00000002,
    AllowLeadingSign = 0x00000004,
    AllowTrailingSign = 0x00000008,
    AllowParentheses = 0x00000010,
    AllowDecimalPoint = 0x00000020,
    AllowThousands = 0x00000040,
    AllowExponent = 0x00000080,
    AllowCurrencySymbol = 0x00000100,
    AllowHexSpecifier = 0x00000200,
    Integer = 0x00000007,
    HexNumber = 0x00000203,
    Number = 0x0000006f,
    Float = 0x000000a7,
    Currency = 0x0000017f,
    Any = 0x000001ff,
};
#endif
#if !defined(IL2CPP_STRUCT_NumberStyles__Enum_FWDDECL)
#define IL2CPP_STRUCT_NumberStyles__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_NumberStyles__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_NumberStyles__Enum_DEFINED) && !defined(IL2CPP_STRUCT_NumberStyles__Enum_FWDDECL)
#include <Modloader/app/structs/NumberStyles__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NumberStyles__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
