#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CipherAlgorithmType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CipherAlgorithmType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CipherAlgorithmType__Enum_DEFINED)
#define IL2CPP_STRUCT_CipherAlgorithmType__Enum_DEFINED
enum class CipherAlgorithmType__Enum : int32_t {
    Des = 0x00000000,
    None = 0x00000001,
    Rc2 = 0x00000002,
    Rc4 = 0x00000003,
    Rijndael = 0x00000004,
    SkipJack = 0x00000005,
    TripleDes = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_CipherAlgorithmType__Enum_FWDDECL)
#define IL2CPP_STRUCT_CipherAlgorithmType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_CipherAlgorithmType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CipherAlgorithmType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_CipherAlgorithmType__Enum_FWDDECL)
#include <Modloader/app/structs/CipherAlgorithmType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CipherAlgorithmType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
