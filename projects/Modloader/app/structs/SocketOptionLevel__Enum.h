#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SocketOptionLevel__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SocketOptionLevel__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketOptionLevel__Enum_DEFINED)
#define IL2CPP_STRUCT_SocketOptionLevel__Enum_DEFINED
enum class SocketOptionLevel__Enum : int32_t {
    Socket = 0x0000ffff,
    IP = 0x00000000,
    IPv6 = 0x00000029,
    Tcp = 0x00000006,
    Udp = 0x00000011,
};
#endif
#if !defined(IL2CPP_STRUCT_SocketOptionLevel__Enum_FWDDECL)
#define IL2CPP_STRUCT_SocketOptionLevel__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SocketOptionLevel__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketOptionLevel__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SocketOptionLevel__Enum_FWDDECL)
#include <Modloader/app/structs/SocketOptionLevel__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SocketOptionLevel__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
