#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TlsProtocols__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TlsProtocols__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsProtocols__Enum_DEFINED)
#define IL2CPP_STRUCT_TlsProtocols__Enum_DEFINED
enum class TlsProtocols__Enum : int32_t {
    Zero = 0x00000000,
    Tls10Client = 0x00000080,
    Tls10Server = 0x00000040,
    Tls10 = 0x000000c0,
    Tls11Client = 0x00000200,
    Tls11Server = 0x00000100,
    Tls11 = 0x00000300,
    Tls12Client = 0x00000800,
    Tls12Server = 0x00000400,
    Tls12 = 0x00000c00,
    ClientMask = 0x00000a80,
    ServerMask = 0x00000540,
};
#endif
#if !defined(IL2CPP_STRUCT_TlsProtocols__Enum_FWDDECL)
#define IL2CPP_STRUCT_TlsProtocols__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_TlsProtocols__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsProtocols__Enum_DEFINED) && !defined(IL2CPP_STRUCT_TlsProtocols__Enum_FWDDECL)
#include <Modloader/app/structs/TlsProtocols__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TlsProtocols__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
