#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TouchScreenKeyboardType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TouchScreenKeyboardType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TouchScreenKeyboardType__Enum_DEFINED)
#define IL2CPP_STRUCT_TouchScreenKeyboardType__Enum_DEFINED
enum class TouchScreenKeyboardType__Enum : int32_t {
    Default = 0x00000000,
    ASCIICapable = 0x00000001,
    NumbersAndPunctuation = 0x00000002,
    URL = 0x00000003,
    NumberPad = 0x00000004,
    PhonePad = 0x00000005,
    NamePhonePad = 0x00000006,
    EmailAddress = 0x00000007,
    NintendoNetworkAccount = 0x00000008,
    Social = 0x00000009,
    Search = 0x0000000a,
    DecimalPad = 0x0000000b,
};
#endif
#if !defined(IL2CPP_STRUCT_TouchScreenKeyboardType__Enum_FWDDECL)
#define IL2CPP_STRUCT_TouchScreenKeyboardType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_TouchScreenKeyboardType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TouchScreenKeyboardType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_TouchScreenKeyboardType__Enum_FWDDECL)
#include <Modloader/app/structs/TouchScreenKeyboardType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TouchScreenKeyboardType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
