#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509ChainStatusFlags__Enum_1_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509ChainStatusFlags__Enum_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509ChainStatusFlags__Enum_1_DEFINED)
#define IL2CPP_STRUCT_X509ChainStatusFlags__Enum_1_DEFINED
enum class X509ChainStatusFlags__Enum_1 : int32_t {
    InvalidBasicConstraints = 0x00000400,
    NoError = 0x00000000,
    NotSignatureValid = 0x00000008,
    NotTimeNested = 0x00000002,
    NotTimeValid = 0x00000001,
    PartialChain = 0x00010000,
    UntrustedRoot = 0x00000020,
};
#endif
#if !defined(IL2CPP_STRUCT_X509ChainStatusFlags__Enum_1_FWDDECL)
#define IL2CPP_STRUCT_X509ChainStatusFlags__Enum_1_FWDDECL
#endif
#undef IL2CPP_STRUCT_X509ChainStatusFlags__Enum_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509ChainStatusFlags__Enum_1_DEFINED) && !defined(IL2CPP_STRUCT_X509ChainStatusFlags__Enum_1_FWDDECL)
#include <Modloader/app/structs/X509ChainStatusFlags__Enum_1.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509ChainStatusFlags__Enum_1.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
