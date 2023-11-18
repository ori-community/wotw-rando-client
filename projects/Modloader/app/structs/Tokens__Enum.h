#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Tokens__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Tokens__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tokens__Enum_DEFINED)
#define IL2CPP_STRUCT_Tokens__Enum_DEFINED
enum class Tokens__Enum : int32_t {
    None = 0x00000000,
    Name = 0x00000001,
    Numeric = 0x00000002,
    Decimal = 0x00000003,
    Float = 0x00000004,
    BinaryConst = 0x00000005,
    StringConst = 0x00000006,
    Date = 0x00000007,
    ListSeparator = 0x00000008,
    LeftParen = 0x00000009,
    RightParen = 0x0000000a,
    ZeroOp = 0x0000000b,
    UnaryOp = 0x0000000c,
    BinaryOp = 0x0000000d,
    Child = 0x0000000e,
    Parent = 0x0000000f,
    Dot = 0x00000010,
    Unknown = 0x00000011,
    EOS = 0x00000012,
};
#endif
#if !defined(IL2CPP_STRUCT_Tokens__Enum_FWDDECL)
#define IL2CPP_STRUCT_Tokens__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_Tokens__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tokens__Enum_DEFINED) && !defined(IL2CPP_STRUCT_Tokens__Enum_FWDDECL)
#include <Modloader/app/structs/Tokens__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Tokens__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
