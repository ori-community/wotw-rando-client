#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValidatorState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValidatorState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidatorState__Enum_DEFINED)
#define IL2CPP_STRUCT_ValidatorState__Enum_DEFINED
enum class ValidatorState__Enum : int32_t {
    None = 0x00000000,
    Start = 0x00000001,
    TopLevelAttribute = 0x00000002,
    TopLevelTextOrWS = 0x00000003,
    Element = 0x00000004,
    Attribute = 0x00000005,
    EndOfAttributes = 0x00000006,
    Text = 0x00000007,
    Whitespace = 0x00000008,
    EndElement = 0x00000009,
    SkipToEndElement = 0x0000000a,
    Finish = 0x0000000b,
};
#endif
#if !defined(IL2CPP_STRUCT_ValidatorState__Enum_FWDDECL)
#define IL2CPP_STRUCT_ValidatorState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ValidatorState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidatorState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ValidatorState__Enum_FWDDECL)
#include <Modloader/app/structs/ValidatorState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValidatorState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
