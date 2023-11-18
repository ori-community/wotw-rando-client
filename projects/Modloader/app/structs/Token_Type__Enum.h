#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Token_Type__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Token_Type__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Token_Type__Enum_DEFINED)
#define IL2CPP_STRUCT_Token_Type__Enum_DEFINED
enum class Token_Type__Enum : int32_t {
    Error = 0x00000000,
    End = 0x00000001,
    Token = 0x00000002,
    QuotedString = 0x00000003,
    SeparatorEqual = 0x00000004,
    SeparatorSemicolon = 0x00000005,
    SeparatorSlash = 0x00000006,
    SeparatorDash = 0x00000007,
    SeparatorComma = 0x00000008,
    OpenParens = 0x00000009,
};
#endif
#if !defined(IL2CPP_STRUCT_Token_Type__Enum_FWDDECL)
#define IL2CPP_STRUCT_Token_Type__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_Token_Type__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Token_Type__Enum_DEFINED) && !defined(IL2CPP_STRUCT_Token_Type__Enum_FWDDECL)
#include <Modloader/app/structs/Token_Type__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Token_Type__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
