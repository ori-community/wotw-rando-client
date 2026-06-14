#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NetscapeCertTypeExtension_CertTypes__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NetscapeCertTypeExtension_CertTypes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_NetscapeCertTypeExtension_CertTypes__Enum_DEFINED)
#define IL2CPP_STRUCT_NetscapeCertTypeExtension_CertTypes__Enum_DEFINED
enum class NetscapeCertTypeExtension_CertTypes__Enum : int32_t {
    SslClient = 0x00000080,
    SslServer = 0x00000040,
    Smime = 0x00000020,
    ObjectSigning = 0x00000010,
    SslCA = 0x00000004,
    SmimeCA = 0x00000002,
    ObjectSigningCA = 0x00000001,
};
#endif
#if !defined(IL2CPP_STRUCT_NetscapeCertTypeExtension_CertTypes__Enum_FWDDECL)
#define IL2CPP_STRUCT_NetscapeCertTypeExtension_CertTypes__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_NetscapeCertTypeExtension_CertTypes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_NetscapeCertTypeExtension_CertTypes__Enum_DEFINED) && !defined(IL2CPP_STRUCT_NetscapeCertTypeExtension_CertTypes__Enum_FWDDECL)
#include <Modloader/app/structs/NetscapeCertTypeExtension_CertTypes__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NetscapeCertTypeExtension_CertTypes__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
