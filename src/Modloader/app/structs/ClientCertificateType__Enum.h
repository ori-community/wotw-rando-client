#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClientCertificateType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClientCertificateType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientCertificateType__Enum_DEFINED)
#define IL2CPP_STRUCT_ClientCertificateType__Enum_DEFINED
enum class ClientCertificateType__Enum : int32_t {
    RSA = 0x00000001,
    DSS = 0x00000002,
    RSAFixed = 0x00000003,
    DSSFixed = 0x00000004,
    Unknown = 0x000000ff,
};
#endif
#if !defined(IL2CPP_STRUCT_ClientCertificateType__Enum_FWDDECL)
#define IL2CPP_STRUCT_ClientCertificateType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ClientCertificateType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientCertificateType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ClientCertificateType__Enum_FWDDECL)
#include <Modloader/app/structs/ClientCertificateType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClientCertificateType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
