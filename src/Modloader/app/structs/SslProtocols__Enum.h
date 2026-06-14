#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SslProtocols__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SslProtocols__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SslProtocols__Enum_DEFINED)
#define IL2CPP_STRUCT_SslProtocols__Enum_DEFINED
enum class SslProtocols__Enum : int32_t {
    None = 0x00000000,
    Ssl2 = 0x0000000c,
    Ssl3 = 0x00000030,
    Tls = 0x000000c0,
    Tls11 = 0x00000300,
    Tls12 = 0x00000c00,
    Default = 0x000000f0,
};
#endif
#if !defined(IL2CPP_STRUCT_SslProtocols__Enum_FWDDECL)
#define IL2CPP_STRUCT_SslProtocols__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SslProtocols__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SslProtocols__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SslProtocols__Enum_FWDDECL)
#include <Modloader/app/structs/SslProtocols__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SslProtocols__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
