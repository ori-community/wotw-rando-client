#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PaddingMode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PaddingMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_PaddingMode__Enum_DEFINED)
#define IL2CPP_STRUCT_PaddingMode__Enum_DEFINED
enum class PaddingMode__Enum : int32_t {
    None = 0x00000001,
    PKCS7 = 0x00000002,
    Zeros = 0x00000003,
    ANSIX923 = 0x00000004,
    ISO10126 = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_PaddingMode__Enum_FWDDECL)
#define IL2CPP_STRUCT_PaddingMode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_PaddingMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_PaddingMode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_PaddingMode__Enum_FWDDECL)
#include <Modloader/app/structs/PaddingMode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PaddingMode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
