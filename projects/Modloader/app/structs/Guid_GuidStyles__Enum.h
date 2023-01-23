#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Guid_GuidStyles__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Guid_GuidStyles__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Guid_GuidStyles__Enum_DEFINED)
#define IL2CPP_STRUCT_Guid_GuidStyles__Enum_DEFINED
enum class Guid_GuidStyles__Enum : int32_t {
    None = 0x00000000,
    AllowParenthesis = 0x00000001,
    AllowBraces = 0x00000002,
    AllowDashes = 0x00000004,
    AllowHexPrefix = 0x00000008,
    RequireParenthesis = 0x00000010,
    RequireBraces = 0x00000020,
    RequireDashes = 0x00000040,
    RequireHexPrefix = 0x00000080,
    HexFormat = 0x000000a0,
    NumberFormat = 0x00000000,
    DigitFormat = 0x00000040,
    BraceFormat = 0x00000060,
    ParenthesisFormat = 0x00000050,
    Any = 0x0000000f,
};
#endif
#if !defined(IL2CPP_STRUCT_Guid_GuidStyles__Enum_FWDDECL)
#define IL2CPP_STRUCT_Guid_GuidStyles__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_Guid_GuidStyles__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Guid_GuidStyles__Enum_DEFINED) && !defined(IL2CPP_STRUCT_Guid_GuidStyles__Enum_FWDDECL)
#include <Modloader/app/structs/Guid_GuidStyles__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Guid_GuidStyles__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
