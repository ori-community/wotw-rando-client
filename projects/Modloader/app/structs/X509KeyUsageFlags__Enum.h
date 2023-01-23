#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509KeyUsageFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509KeyUsageFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509KeyUsageFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_X509KeyUsageFlags__Enum_DEFINED
enum class X509KeyUsageFlags__Enum : int32_t {
    None = 0x00000000,
    EncipherOnly = 0x00000001,
    CrlSign = 0x00000002,
    KeyCertSign = 0x00000004,
    KeyAgreement = 0x00000008,
    DataEncipherment = 0x00000010,
    KeyEncipherment = 0x00000020,
    NonRepudiation = 0x00000040,
    DigitalSignature = 0x00000080,
    DecipherOnly = 0x00008000,
};
#endif
#if !defined(IL2CPP_STRUCT_X509KeyUsageFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_X509KeyUsageFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_X509KeyUsageFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509KeyUsageFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_X509KeyUsageFlags__Enum_FWDDECL)
#include <Modloader/app/structs/X509KeyUsageFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509KeyUsageFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
