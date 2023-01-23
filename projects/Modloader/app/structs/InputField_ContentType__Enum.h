#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InputField_ContentType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InputField_ContentType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputField_ContentType__Enum_DEFINED)
#define IL2CPP_STRUCT_InputField_ContentType__Enum_DEFINED
enum class InputField_ContentType__Enum : int32_t {
    Standard = 0x00000000,
    Autocorrected = 0x00000001,
    IntegerNumber = 0x00000002,
    DecimalNumber = 0x00000003,
    Alphanumeric = 0x00000004,
    Name = 0x00000005,
    EmailAddress = 0x00000006,
    Password = 0x00000007,
    Pin = 0x00000008,
    Custom = 0x00000009,
};
#endif
#if !defined(IL2CPP_STRUCT_InputField_ContentType__Enum_FWDDECL)
#define IL2CPP_STRUCT_InputField_ContentType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_InputField_ContentType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputField_ContentType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_InputField_ContentType__Enum_FWDDECL)
#include <Modloader/app/structs/InputField_ContentType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InputField_ContentType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
