#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExchangeAlgorithmType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExchangeAlgorithmType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExchangeAlgorithmType__Enum_DEFINED)
#define IL2CPP_STRUCT_ExchangeAlgorithmType__Enum_DEFINED
enum class ExchangeAlgorithmType__Enum : int32_t {
    DiffieHellman = 0x00000000,
    Fortezza = 0x00000001,
    None = 0x00000002,
    RsaKeyX = 0x00000003,
    RsaSign = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_ExchangeAlgorithmType__Enum_FWDDECL)
#define IL2CPP_STRUCT_ExchangeAlgorithmType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ExchangeAlgorithmType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExchangeAlgorithmType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ExchangeAlgorithmType__Enum_FWDDECL)
#include <Modloader/app/structs/ExchangeAlgorithmType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExchangeAlgorithmType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
