#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegexOptions__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegexOptions__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexOptions__Enum_DEFINED)
#define IL2CPP_STRUCT_RegexOptions__Enum_DEFINED
enum class RegexOptions__Enum : int32_t {
    None = 0x00000000,
    IgnoreCase = 0x00000001,
    Multiline = 0x00000002,
    ExplicitCapture = 0x00000004,
    Compiled = 0x00000008,
    Singleline = 0x00000010,
    IgnorePatternWhitespace = 0x00000020,
    RightToLeft = 0x00000040,
    ECMAScript = 0x00000100,
    CultureInvariant = 0x00000200,
};
#endif
#if !defined(IL2CPP_STRUCT_RegexOptions__Enum_FWDDECL)
#define IL2CPP_STRUCT_RegexOptions__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_RegexOptions__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexOptions__Enum_DEFINED) && !defined(IL2CPP_STRUCT_RegexOptions__Enum_FWDDECL)
#include <Modloader/app/structs/RegexOptions__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegexOptions__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
