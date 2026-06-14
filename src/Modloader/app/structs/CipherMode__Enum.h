#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CipherMode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CipherMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CipherMode__Enum_DEFINED)
#define IL2CPP_STRUCT_CipherMode__Enum_DEFINED
enum class CipherMode__Enum : int32_t {
    CBC = 0x00000001,
    ECB = 0x00000002,
    OFB = 0x00000003,
    CFB = 0x00000004,
    CTS = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_CipherMode__Enum_FWDDECL)
#define IL2CPP_STRUCT_CipherMode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_CipherMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CipherMode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_CipherMode__Enum_FWDDECL)
#include <Modloader/app/structs/CipherMode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CipherMode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
