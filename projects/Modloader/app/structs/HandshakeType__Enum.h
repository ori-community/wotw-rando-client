#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HandshakeType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HandshakeType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_HandshakeType__Enum_DEFINED)
#define IL2CPP_STRUCT_HandshakeType__Enum_DEFINED
enum class HandshakeType__Enum : uint8_t {
    HelloRequest = 0x00,
    ClientHello = 0x01,
    ServerHello = 0x02,
    Certificate = 0x0b,
    ServerKeyExchange = 0x0c,
    CertificateRequest = 0x0d,
    ServerHelloDone = 0x0e,
    CertificateVerify = 0x0f,
    ClientKeyExchange = 0x10,
    Finished = 0x14,
    None = 0xff,
};
#endif
#if !defined(IL2CPP_STRUCT_HandshakeType__Enum_FWDDECL)
#define IL2CPP_STRUCT_HandshakeType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_HandshakeType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_HandshakeType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_HandshakeType__Enum_FWDDECL)
#include <Modloader/app/structs/HandshakeType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HandshakeType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
