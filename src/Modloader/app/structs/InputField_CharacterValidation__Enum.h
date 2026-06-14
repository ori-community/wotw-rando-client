#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InputField_CharacterValidation__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InputField_CharacterValidation__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputField_CharacterValidation__Enum_DEFINED)
#define IL2CPP_STRUCT_InputField_CharacterValidation__Enum_DEFINED
enum class InputField_CharacterValidation__Enum : int32_t {
    None = 0x00000000,
    Integer = 0x00000001,
    Decimal = 0x00000002,
    Alphanumeric = 0x00000003,
    Name = 0x00000004,
    EmailAddress = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_InputField_CharacterValidation__Enum_FWDDECL)
#define IL2CPP_STRUCT_InputField_CharacterValidation__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_InputField_CharacterValidation__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputField_CharacterValidation__Enum_DEFINED) && !defined(IL2CPP_STRUCT_InputField_CharacterValidation__Enum_FWDDECL)
#include <Modloader/app/structs/InputField_CharacterValidation__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InputField_CharacterValidation__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
