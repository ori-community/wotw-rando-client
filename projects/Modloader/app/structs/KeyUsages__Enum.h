#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeyUsages__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeyUsages__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyUsages__Enum_DEFINED)
#define IL2CPP_STRUCT_KeyUsages__Enum_DEFINED
enum class KeyUsages__Enum : int32_t {
    digitalSignature = 0x00000080,
    nonRepudiation = 0x00000040,
    keyEncipherment = 0x00000020,
    dataEncipherment = 0x00000010,
    keyAgreement = 0x00000008,
    keyCertSign = 0x00000004,
    cRLSign = 0x00000002,
    encipherOnly = 0x00000001,
    decipherOnly = 0x00000800,
    none = 0x00000000,
};
#endif
#if !defined(IL2CPP_STRUCT_KeyUsages__Enum_FWDDECL)
#define IL2CPP_STRUCT_KeyUsages__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_KeyUsages__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyUsages__Enum_DEFINED) && !defined(IL2CPP_STRUCT_KeyUsages__Enum_FWDDECL)
#include <Modloader/app/structs/KeyUsages__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeyUsages__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
